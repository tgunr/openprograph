/* A VPL Section File */
/*

MyCaseGraphics.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_Set_20_Selected_20_Colors_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Set_20_Selected_20_Colors_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 60909 6168 7710 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

RGBForeColor( GETCONSTPOINTER(RGBColor,*,TERMINAL(2)));
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

RGBBackColor( GETCONSTPOINTER(RGBColor,*,TERMINAL(4)));
result = kSuccess;

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Set_20_Selected_20_Colors_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Set_20_Selected_20_Colors_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 6168 8738 52685 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

RGBForeColor( GETCONSTPOINTER(RGBColor,*,TERMINAL(2)));
result = kSuccess;

RGBBackColor( GETCONSTPOINTER(RGBColor,*,TERMINAL(4)));
result = kSuccess;

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Set_20_Selected_20_Colors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Set_20_Selected_20_Colors_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Set_20_Selected_20_Colors_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Set_20_Standard_20_Colors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"( 0 0 0 )",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(2),ROOT(3));

RGBForeColor( GETCONSTPOINTER(RGBColor,*,TERMINAL(3)));
result = kSuccess;

RGBBackColor( GETCONSTPOINTER(RGBColor,*,TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Set_20_Selected_20_BackColor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(0));

result = vpx_persistent(PARAMETERS,kVPXValue_Selected_20_Colors,0,1,ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(0),ROOT(3));

RGBForeColor( GETCONSTPOINTER(RGBColor,*,TERMINAL(3)));
result = kSuccess;

RGBBackColor( GETCONSTPOINTER(RGBColor,*,TERMINAL(2)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Set_20_Selected_20_ForeColor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(0),ROOT(1));

result = vpx_persistent(PARAMETERS,kVPXValue_Selected_20_Colors,0,1,ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(2),ROOT(3));

RGBForeColor( GETCONSTPOINTER(RGBColor,*,TERMINAL(3)));
result = kSuccess;

RGBBackColor( GETCONSTPOINTER(RGBColor,*,TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}




	Nat4 tempAttribute_Continue_20_Failure_20_Graphic_2F_Oval_20_Width[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Continue_20_Failure_20_Graphic_2F_Oval_20_Height[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Fail_20_Failure_20_Graphic_2F_Oval_20_Width[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Fail_20_Failure_20_Graphic_2F_Oval_20_Height[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Fail_20_Success_20_Graphic_2F_Oval_20_Width[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Fail_20_Success_20_Graphic_2F_Oval_20_Height[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Finish_20_Failure_20_Graphic_2F_Oval_20_Width[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Finish_20_Failure_20_Graphic_2F_Oval_20_Height[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Finish_20_Success_20_Graphic_2F_Oval_20_Width[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Finish_20_Success_20_Graphic_2F_Oval_20_Height[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Local_20_Graphic_2F_Oval_20_Width[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X069D0004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Local_20_Graphic_2F_Oval_20_Height[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Local_20_Graphic_2F_Inset[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X06110004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000005
	};
	Nat4 tempAttribute_Next_20_Case_20_Failure_20_Graphic_2F_Oval_20_Width[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Next_20_Case_20_Failure_20_Graphic_2F_Oval_20_Height[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Next_20_Case_20_Success_20_Graphic_2F_Oval_20_Width[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Next_20_Case_20_Success_20_Graphic_2F_Oval_20_Height[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Persistent_20_Graphic_2F_Oval_20_Width[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X069D0004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000008
	};
	Nat4 tempAttribute_Persistent_20_Graphic_2F_Oval_20_Height[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X069C0004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000008
	};
	Nat4 tempAttribute_Primitive_20_Graphic_2F_Oval_20_Width[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X06020004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Primitive_20_Graphic_2F_Oval_20_Height[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Primitive_20_Graphic_2F_Inset[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000003
	};
	Nat4 tempAttribute_Procedure_20_Graphic_2F_Oval_20_Width[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X069D0004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Procedure_20_Graphic_2F_Oval_20_Height[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Procedure_20_Graphic_2F_Inset[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X06B00004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000003
	};
	Nat4 tempAttribute_Repeat_20_Graphic_2F_Oval_20_Width[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X06ED0004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000004
	};
	Nat4 tempAttribute_Repeat_20_Graphic_2F_Oval_20_Height[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000004
	};
	Nat4 tempAttribute_Terminate_20_Failure_20_Graphic_2F_Oval_20_Width[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Terminate_20_Failure_20_Graphic_2F_Oval_20_Height[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Terminate_20_Success_20_Graphic_2F_Oval_20_Width[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Terminate_20_Success_20_Graphic_2F_Oval_20_Height[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Universal_20_Graphic_2F_Oval_20_Width[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Universal_20_Graphic_2F_Oval_20_Height[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Evaluate_20_Graphic_2F_Oval_20_Width[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X06190004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000001
	};
	Nat4 tempAttribute_Evaluate_20_Graphic_2F_Oval_20_Height[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X56500004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000001
	};
	Nat4 tempAttribute_Evaluate_20_Graphic_2F_Inset[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X02DC0004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000003
	};


Nat4 VPLC_Basic_20_IO_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Basic_20_IO_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLOval");
	return kNOERROR;
}

/* Start Universals: { 179 276 }{ 52 349 } */
enum opTrigger vpx_method_Basic_20_IO_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Basic_20_IO_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(7),ROOT(8));

result = vpx_method_Set_20_Selected_20_Colors(PARAMETERS,TERMINAL(5));

EraseOval( GETCONSTPOINTER(Rect,*,TERMINAL(8)));
result = kSuccess;

FrameOval( GETCONSTPOINTER(Rect,*,TERMINAL(8)));
result = kSuccess;

result = vpx_method_Set_20_Standard_20_Colors(PARAMETERS);

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Basic_20_IO_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Basic_20_IO_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(7),ROOT(8));

result = vpx_method_Set_20_Selected_20_Colors(PARAMETERS,TERMINAL(5));

PaintOval( GETCONSTPOINTER(Rect,*,TERMINAL(8)));
result = kSuccess;

result = vpx_method_Set_20_Standard_20_Colors(PARAMETERS);

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Basic_20_IO_20_Graphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Basic_20_IO_20_Graphic_2F_Draw_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Basic_20_IO_20_Graphic_2F_Draw_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Basic_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Basic_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"io fill",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Oval,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Basic_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Basic_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"io stroke",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Oval,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Basic_20_IO_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_method_Basic_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_6(PARAMETERS,TERMINAL(1),TERMINAL(8),TERMINAL(5));

result = vpx_method_Basic_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_7(PARAMETERS,TERMINAL(1),TERMINAL(8),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(9)
}

/* Stop Universals */



Nat4 VPLC_Continue_20_Failure_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Continue_20_Failure_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 237 322 }{ 87 325 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Oval Width",tempClass,tempAttribute_Continue_20_Failure_20_Graphic_2F_Oval_20_Width,environment);
	tempAttribute = attribute_add("Oval Height",tempClass,tempAttribute_Continue_20_Failure_20_Graphic_2F_Oval_20_Height,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLRoundRectangle");
	return kNOERROR;
}

/* Start Universals: { 374 415 }{ 50 331 } */
enum opTrigger vpx_method_Continue_20_Failure_20_Graphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(27)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(9),ROOT(10));

FrameRoundRect( GETCONSTPOINTER(Rect,*,TERMINAL(10)),GETINTEGER(TERMINAL(5)),GETINTEGER(TERMINAL(3)));
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(11));

InsetRect( GETPOINTER(8,Rect,*,ROOT(12),TERMINAL(10)),GETINTEGER(TERMINAL(11)),GETINTEGER(TERMINAL(11)));
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_Rect_2D_to_2D_list,1,1,TERMINAL(12),ROOT(13));

result = vpx_constant(PARAMETERS,"2",ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(9),ROOT(15),ROOT(16),ROOT(17),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(16),TERMINAL(14),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(15),TERMINAL(14),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(18),TERMINAL(14),ROOT(21));

MoveTo( GETINTEGER(TERMINAL(19)),GETINTEGER(TERMINAL(20)));
result = kSuccess;

LineTo( GETINTEGER(TERMINAL(21)),GETINTEGER(TERMINAL(20)));
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(17),TERMINAL(14),ROOT(22));

MoveTo( GETINTEGER(TERMINAL(19)),GETINTEGER(TERMINAL(22)));
result = kSuccess;

LineTo( GETINTEGER(TERMINAL(21)),GETINTEGER(TERMINAL(22)));
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(13),ROOT(23),ROOT(24),ROOT(25),ROOT(26));

MoveTo( GETINTEGER(TERMINAL(24)),GETINTEGER(TERMINAL(23)));
result = kSuccess;

LineTo( GETINTEGER(TERMINAL(26)),GETINTEGER(TERMINAL(25)));
result = kSuccess;

MoveTo( GETINTEGER(TERMINAL(26)),GETINTEGER(TERMINAL(23)));
result = kSuccess;

LineTo( GETINTEGER(TERMINAL(24)),GETINTEGER(TERMINAL(25)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(27)
}

enum opTrigger vpx_method_Continue_20_Failure_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"failure",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Control_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Control_20_Cnt_20_CG,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Failure_20_CG,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Default_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Default_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLRectangle");
	return kNOERROR;
}

/* Start Universals: { 256 289 }{ 50 337 } */
enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(7),ROOT(8));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(8));
NEXTCASEONFAILURE

GetPenState( GETPOINTER(24,PenState,*,ROOT(9),NONE));
result = kSuccess;

result = vpx_method_Set_20_Selected_20_Colors(PARAMETERS,TERMINAL(8));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_stripe,0,0);

PaintRect( GETCONSTPOINTER(Rect,*,TERMINAL(6)));
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_normal,0,0);

FrameRect( GETCONSTPOINTER(Rect,*,TERMINAL(6)));
result = kSuccess;

result = vpx_method_Set_20_Standard_20_Colors(PARAMETERS);

SetPenState( GETCONSTPOINTER(PenState,*,TERMINAL(9)));
result = kSuccess;

result = kSuccess;

FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 60909 6168 7710 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 60909 6168 7710 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"( 0 0 0 )",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(7),ROOT(8));

GetPenState( GETPOINTER(24,PenState,*,ROOT(9),NONE));
result = kSuccess;

result = vpx_method_Default_20_Graphic_2F_Draw_case_2_local_7(PARAMETERS,TERMINAL(8));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_stripe,0,0);

PaintRect( GETCONSTPOINTER(Rect,*,TERMINAL(6)));
result = kSuccess;

result = vpx_method_Default_20_Graphic_2F_Draw_case_2_local_10(PARAMETERS,TERMINAL(8));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_normal,0,0);

FrameRect( GETCONSTPOINTER(Rect,*,TERMINAL(6)));
result = kSuccess;

result = vpx_method_Default_20_Graphic_2F_Draw_case_2_local_13(PARAMETERS);

SetPenState( GETCONSTPOINTER(PenState,*,TERMINAL(9)));
result = kSuccess;

result = kSuccess;

FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_Default_20_Graphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Default_20_Graphic_2F_Draw_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Default_20_Graphic_2F_Draw_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_20_CG_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_20_CG_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_method_Inset_20_Rectangle(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(3),ROOT(4));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_20_CG_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_20_CG_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"operation fill",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Rect,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_20_CG_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_20_CG_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_20_CG_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_20_CG_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Default_20_Graphic_2F_Draw_20_CG_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Default_20_Graphic_2F_Draw_20_CG_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"operation stroke",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_constant(PARAMETERS,"1.2",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Line_20_Width,2,0,TERMINAL(0),TERMINAL(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Rect,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_constant(PARAMETERS,"1.0",ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Line_20_Width,2,0,TERMINAL(0),TERMINAL(10));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_20_CG_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_20_CG_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Default_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Default_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Default_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_method_Default_20_Graphic_2F_Draw_20_CG_case_1_local_5(PARAMETERS,TERMINAL(3),ROOT(7));

result = vpx_method_Default_20_Graphic_2F_Draw_20_CG_case_1_local_6(PARAMETERS,TERMINAL(1),TERMINAL(7),TERMINAL(6));

result = vpx_method_Default_20_Graphic_2F_Draw_20_CG_case_1_local_7(PARAMETERS,TERMINAL(1),TERMINAL(7),TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(8)
}

/* Stop Universals */



Nat4 VPLC_Default_20_Oval_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Default_20_Oval_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLOval");
	return kNOERROR;
}

/* Start Universals: { 340 366 }{ 50 349 } */
enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 60909 6168 7710 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 6168 8738 52685 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"( 0 0 0 )",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(7),ROOT(8));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(8));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_pen_2D_state,0,1,ROOT(9));

result = vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_1_local_8(PARAMETERS,TERMINAL(8));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_stripe,0,0);

result = vpx_call_primitive(PARAMETERS,VPLP_paint_2D_oval,1,0,TERMINAL(6));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_normal,0,0);

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_oval,1,0,TERMINAL(6));

result = vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_1_local_13(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_pen_2D_state,1,0,TERMINAL(9));

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 60909 6168 7710 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 60909 6168 7710 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"( 0 0 0 )",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_pen_2D_state,0,1,ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(8),ROOT(9));

result = vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_2_local_7(PARAMETERS,TERMINAL(9));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_stripe,0,0);

result = vpx_call_primitive(PARAMETERS,VPLP_paint_2D_oval,1,0,TERMINAL(6));

result = vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_2_local_10(PARAMETERS,TERMINAL(9));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_normal,0,0);

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_oval,1,0,TERMINAL(6));

result = vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_2_local_13(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_pen_2D_state,1,0,TERMINAL(7));

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Default_20_Oval_20_Graphic_2F_Draw_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_20_CG_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_20_CG_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_method_Inset_20_Rectangle(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(3),ROOT(4));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_20_CG_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_20_CG_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"operation fill",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Oval,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_20_CG_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_20_CG_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"operation stroke",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Oval,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Default_20_Oval_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_method_Default_20_Oval_20_Graphic_2F_Draw_20_CG_case_1_local_5(PARAMETERS,TERMINAL(3),ROOT(7));

result = vpx_method_Default_20_Oval_20_Graphic_2F_Draw_20_CG_case_1_local_6(PARAMETERS,TERMINAL(1),TERMINAL(7),TERMINAL(6));

result = vpx_method_Default_20_Oval_20_Graphic_2F_Draw_20_CG_case_1_local_7(PARAMETERS,TERMINAL(1),TERMINAL(7),TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(8)
}

/* Stop Universals */



Nat4 VPLC_External_20_Get_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_External_20_Get_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Region",tempClass,NULL,environment);
	tempAttribute = attribute_add("Path",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLFramedRegion");
	return kNOERROR;
}

/* Start Universals: { 248 352 }{ 64 308 } */
enum opTrigger vpx_method_External_20_Get_20_Graphic_2F_Frame_20_To_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_External_20_Get_20_Graphic_2F_Frame_20_To_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(25)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(6),ROOT(7),ROOT(8),ROOT(9));

result = vpx_constant(PARAMETERS,"2",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(8),TERMINAL(6),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(11),TERMINAL(10),ROOT(12));

result = vpx_method_Int(PARAMETERS,TERMINAL(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(6),TERMINAL(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(7),TERMINAL(13),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(14),TERMINAL(15),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(9),TERMINAL(13),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(17),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(7),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(7),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(6),TERMINAL(13),ROOT(21));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(21),TERMINAL(9),ROOT(22));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(17),ROOT(23));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,6,1,TERMINAL(16),TERMINAL(19),TERMINAL(18),TERMINAL(22),TERMINAL(23),TERMINAL(20),ROOT(24));

result = kSuccess;

OUTPUT(0,TERMINAL(24))
FOOTER(25)
}

enum opTrigger vpx_method_External_20_Get_20_Graphic_2F_Frame_20_To_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_External_20_Get_20_Graphic_2F_Frame_20_To_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_External_20_Get_20_Graphic_2F_Frame_20_To_20_Corners(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_External_20_Get_20_Graphic_2F_Frame_20_To_20_Corners_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_External_20_Get_20_Graphic_2F_Frame_20_To_20_Corners_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_External_20_Get_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_External_20_Get_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(28)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(6),ROOT(7),ROOT(8),ROOT(9));

result = vpx_constant(PARAMETERS,"2",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(8),TERMINAL(6),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(11),TERMINAL(10),ROOT(12));

result = vpx_method_Int(PARAMETERS,TERMINAL(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(6),TERMINAL(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(7),TERMINAL(13),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(14),TERMINAL(15),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(9),TERMINAL(13),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(17),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(7),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(7),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(6),TERMINAL(13),ROOT(21));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(21),TERMINAL(9),ROOT(22));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(17),ROOT(23));

result = vpx_constant(PARAMETERS,"3",ROOT(24));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(7),TERMINAL(24),ROOT(25));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(25),ROOT(26));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,6,1,TERMINAL(26),TERMINAL(19),TERMINAL(16),TERMINAL(20),TERMINAL(23),TERMINAL(22),ROOT(27));

result = kSuccess;

OUTPUT(0,TERMINAL(27))
FOOTER(28)
}

enum opTrigger vpx_method_External_20_Get_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_External_20_Get_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_External_20_Get_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_External_20_Get_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_External_20_Get_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_External_20_Set_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_External_20_Set_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Region",tempClass,NULL,environment);
	tempAttribute = attribute_add("Path",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLFramedRegion");
	return kNOERROR;
}

/* Start Universals: { 248 352 }{ 64 308 } */
enum opTrigger vpx_method_External_20_Set_20_Graphic_2F_Frame_20_To_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_External_20_Set_20_Graphic_2F_Frame_20_To_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(25)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(6),ROOT(7),ROOT(8),ROOT(9));

result = vpx_constant(PARAMETERS,"2",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(8),TERMINAL(6),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(11),TERMINAL(10),ROOT(12));

result = vpx_method_Int(PARAMETERS,TERMINAL(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(6),TERMINAL(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(7),TERMINAL(13),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(14),TERMINAL(7),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(9),TERMINAL(13),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(9),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(15),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(15),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(6),TERMINAL(13),ROOT(21));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(21),TERMINAL(17),ROOT(22));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(9),ROOT(23));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,6,1,TERMINAL(16),TERMINAL(19),TERMINAL(18),TERMINAL(22),TERMINAL(23),TERMINAL(20),ROOT(24));

result = kSuccess;

OUTPUT(0,TERMINAL(24))
FOOTER(25)
}

enum opTrigger vpx_method_External_20_Set_20_Graphic_2F_Frame_20_To_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_External_20_Set_20_Graphic_2F_Frame_20_To_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_External_20_Set_20_Graphic_2F_Frame_20_To_20_Corners(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_External_20_Set_20_Graphic_2F_Frame_20_To_20_Corners_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_External_20_Set_20_Graphic_2F_Frame_20_To_20_Corners_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_External_20_Set_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_External_20_Set_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(27)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(6),ROOT(7),ROOT(8),ROOT(9));

result = vpx_constant(PARAMETERS,"2",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(8),TERMINAL(6),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(11),TERMINAL(10),ROOT(12));

result = vpx_method_Int(PARAMETERS,TERMINAL(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(6),TERMINAL(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(7),TERMINAL(13),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(14),TERMINAL(7),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(9),TERMINAL(13),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(9),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(15),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(15),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(6),TERMINAL(13),ROOT(21));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(21),TERMINAL(17),ROOT(22));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(9),ROOT(23));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(6),TERMINAL(10),ROOT(24));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(24),TERMINAL(9),ROOT(25));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,5,1,TERMINAL(19),TERMINAL(16),TERMINAL(20),TERMINAL(23),TERMINAL(25),ROOT(26));

result = kSuccess;

OUTPUT(0,TERMINAL(26))
FOOTER(27)
}

enum opTrigger vpx_method_External_20_Set_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_External_20_Set_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_External_20_Set_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_External_20_Set_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_External_20_Set_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Fail_20_Failure_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Fail_20_Failure_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 237 322 }{ 87 325 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Oval Width",tempClass,tempAttribute_Fail_20_Failure_20_Graphic_2F_Oval_20_Width,environment);
	tempAttribute = attribute_add("Oval Height",tempClass,tempAttribute_Fail_20_Failure_20_Graphic_2F_Oval_20_Height,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLRoundRectangle");
	return kNOERROR;
}

/* Start Universals: { 374 415 }{ 50 331 } */
enum opTrigger vpx_method_Fail_20_Failure_20_Graphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_oval,1,0,TERMINAL(6));

result = vpx_constant(PARAMETERS,"4",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_inset_2D_rect,3,1,TERMINAL(6),TERMINAL(7),TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_Rect_2D_to_2D_list,1,1,TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(9),ROOT(10),ROOT(11),ROOT(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_move_2D_to,2,0,TERMINAL(11),TERMINAL(10));

result = vpx_call_primitive(PARAMETERS,VPLP_line_2D_to,2,0,TERMINAL(13),TERMINAL(12));

result = vpx_call_primitive(PARAMETERS,VPLP_move_2D_to,2,0,TERMINAL(13),TERMINAL(10));

result = vpx_call_primitive(PARAMETERS,VPLP_line_2D_to,2,0,TERMINAL(11),TERMINAL(12));

result = kSuccess;

FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_Fail_20_Failure_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"failure",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Control_20_Fail_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Failure_20_CG,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Fail_20_Success_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Fail_20_Success_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 237 322 }{ 87 325 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Oval Width",tempClass,tempAttribute_Fail_20_Success_20_Graphic_2F_Oval_20_Width,environment);
	tempAttribute = attribute_add("Oval Height",tempClass,tempAttribute_Fail_20_Success_20_Graphic_2F_Oval_20_Height,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLRoundRectangle");
	return kNOERROR;
}

/* Start Universals: { 374 415 }{ 50 331 } */
enum opTrigger vpx_method_Fail_20_Success_20_Graphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_oval,1,0,TERMINAL(6));

result = vpx_constant(PARAMETERS,"4",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_inset_2D_rect,3,1,TERMINAL(6),TERMINAL(7),TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_oval,1,0,TERMINAL(8));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Fail_20_Success_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"success",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Control_20_Fail_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Success_20_CG,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Finish_20_Failure_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Finish_20_Failure_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 237 322 }{ 87 325 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Oval Width",tempClass,tempAttribute_Finish_20_Failure_20_Graphic_2F_Oval_20_Width,environment);
	tempAttribute = attribute_add("Oval Height",tempClass,tempAttribute_Finish_20_Failure_20_Graphic_2F_Oval_20_Height,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLRoundRectangle");
	return kNOERROR;
}

/* Start Universals: { 374 415 }{ 50 331 } */
enum opTrigger vpx_method_Finish_20_Failure_20_Graphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(26)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_round_2D_rect,3,0,TERMINAL(10),TERMINAL(5),TERMINAL(3));

result = vpx_constant(PARAMETERS,"4",ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_inset_2D_rect,3,1,TERMINAL(10),TERMINAL(11),TERMINAL(11),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_Rect_2D_to_2D_list,1,1,TERMINAL(12),ROOT(13));

result = vpx_constant(PARAMETERS,"2",ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(9),ROOT(15),ROOT(16),ROOT(17),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(16),TERMINAL(14),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(17),TERMINAL(14),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_move_2D_to,2,0,TERMINAL(19),TERMINAL(20));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(18),TERMINAL(14),ROOT(21));

result = vpx_call_primitive(PARAMETERS,VPLP_line_2D_to,2,0,TERMINAL(21),TERMINAL(20));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(13),ROOT(22),ROOT(23),ROOT(24),ROOT(25));

result = vpx_call_primitive(PARAMETERS,VPLP_move_2D_to,2,0,TERMINAL(23),TERMINAL(22));

result = vpx_call_primitive(PARAMETERS,VPLP_line_2D_to,2,0,TERMINAL(25),TERMINAL(24));

result = vpx_call_primitive(PARAMETERS,VPLP_move_2D_to,2,0,TERMINAL(25),TERMINAL(22));

result = vpx_call_primitive(PARAMETERS,VPLP_line_2D_to,2,0,TERMINAL(23),TERMINAL(24));

result = kSuccess;

FOOTERSINGLECASE(26)
}

enum opTrigger vpx_method_Finish_20_Failure_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"failure",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Control_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Control_20_Fin_20_CG,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Failure_20_CG,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Finish_20_Success_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Finish_20_Success_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 237 322 }{ 87 325 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Oval Width",tempClass,tempAttribute_Finish_20_Success_20_Graphic_2F_Oval_20_Width,environment);
	tempAttribute = attribute_add("Oval Height",tempClass,tempAttribute_Finish_20_Success_20_Graphic_2F_Oval_20_Height,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLRoundRectangle");
	return kNOERROR;
}

/* Start Universals: { 374 415 }{ 50 331 } */
enum opTrigger vpx_method_Finish_20_Success_20_Graphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(21)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_round_2D_rect,3,0,TERMINAL(10),TERMINAL(5),TERMINAL(3));

result = vpx_constant(PARAMETERS,"4",ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_inset_2D_rect,3,1,TERMINAL(10),TERMINAL(11),TERMINAL(11),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_oval,1,0,TERMINAL(12));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(9),ROOT(13),ROOT(14),ROOT(15),ROOT(16));

result = vpx_constant(PARAMETERS,"2",ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(14),TERMINAL(17),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(16),TERMINAL(17),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(15),TERMINAL(17),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_move_2D_to,2,0,TERMINAL(18),TERMINAL(20));

result = vpx_call_primitive(PARAMETERS,VPLP_line_2D_to,2,0,TERMINAL(19),TERMINAL(20));

result = kSuccess;

FOOTERSINGLECASE(21)
}

enum opTrigger vpx_method_Finish_20_Success_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"success",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Control_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Control_20_Fin_20_CG,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Success_20_CG,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Get_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Get_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Region",tempClass,NULL,environment);
	tempAttribute = attribute_add("Path",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLFramedRegion");
	return kNOERROR;
}

/* Start Universals: { 437 613 }{ 128 382 } */
enum opTrigger vpx_method_Get_20_Graphic_2F_Frame_20_To_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Graphic_2F_Frame_20_To_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(22)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(6),ROOT(7),ROOT(8),ROOT(9));

result = vpx_constant(PARAMETERS,"2",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(8),TERMINAL(6),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(11),TERMINAL(10),ROOT(12));

result = vpx_method_Int(PARAMETERS,TERMINAL(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(6),TERMINAL(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(7),TERMINAL(13),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(14),TERMINAL(15),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(9),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(7),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(7),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(9),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,5,1,TERMINAL(16),TERMINAL(18),TERMINAL(17),TERMINAL(20),TERMINAL(19),ROOT(21));

result = kSuccess;

OUTPUT(0,TERMINAL(21))
FOOTER(22)
}

enum opTrigger vpx_method_Get_20_Graphic_2F_Frame_20_To_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Graphic_2F_Frame_20_To_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Graphic_2F_Frame_20_To_20_Corners(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Graphic_2F_Frame_20_To_20_Corners_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Get_20_Graphic_2F_Frame_20_To_20_Corners_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(27)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(6),ROOT(7),ROOT(8),ROOT(9));

result = vpx_constant(PARAMETERS,"2",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(8),TERMINAL(6),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(11),TERMINAL(10),ROOT(12));

result = vpx_method_Int(PARAMETERS,TERMINAL(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(6),TERMINAL(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(7),TERMINAL(13),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(14),TERMINAL(15),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(9),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(7),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(7),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(9),ROOT(20));

result = vpx_constant(PARAMETERS,"3",ROOT(21));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(7),TERMINAL(21),ROOT(22));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(22),ROOT(23));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(6),TERMINAL(10),ROOT(24));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(24),TERMINAL(9),ROOT(25));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,6,1,TERMINAL(23),TERMINAL(18),TERMINAL(16),TERMINAL(19),TERMINAL(20),TERMINAL(25),ROOT(26));

result = kSuccess;

OUTPUT(0,TERMINAL(26))
FOOTER(27)
}

enum opTrigger vpx_method_Get_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Get_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_InputBar_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_InputBar_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Region",tempClass,NULL,environment);
	tempAttribute = attribute_add("Path",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLFramedRegion");
	return kNOERROR;
}

/* Start Universals: { 328 324 }{ 50 410 } */
enum opTrigger vpx_method_InputBar_20_Graphic_2F_Frame_20_To_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_InputBar_20_Graphic_2F_Frame_20_To_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(18)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(6),ROOT(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(8),TERMINAL(6),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(9),TERMINAL(11),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(7),TERMINAL(11),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(14),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(7),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(16),TERMINAL(15),TERMINAL(13),TERMINAL(10),ROOT(17));

result = kSuccess;

OUTPUT(0,TERMINAL(17))
FOOTER(18)
}

enum opTrigger vpx_method_InputBar_20_Graphic_2F_Frame_20_To_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_InputBar_20_Graphic_2F_Frame_20_To_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_InputBar_20_Graphic_2F_Frame_20_To_20_Corners(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_InputBar_20_Graphic_2F_Frame_20_To_20_Corners_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_InputBar_20_Graphic_2F_Frame_20_To_20_Corners_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Instance_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Instance_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Region",tempClass,NULL,environment);
	tempAttribute = attribute_add("Path",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLFramedRegion");
	return kNOERROR;
}

/* Start Universals: { 248 352 }{ 64 308 } */
enum opTrigger vpx_method_Instance_20_Graphic_2F_Frame_20_To_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Instance_20_Graphic_2F_Frame_20_To_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(26)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(6),ROOT(7),ROOT(8),ROOT(9));

result = vpx_constant(PARAMETERS,"2",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(8),TERMINAL(6),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(11),TERMINAL(10),ROOT(12));

result = vpx_method_Int(PARAMETERS,TERMINAL(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(6),TERMINAL(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(7),TERMINAL(13),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(14),TERMINAL(7),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(9),TERMINAL(13),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(17),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(7),TERMINAL(13),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(19),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(15),ROOT(21));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(6),TERMINAL(13),ROOT(22));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(22),TERMINAL(9),ROOT(23));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(17),ROOT(24));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,6,1,TERMINAL(16),TERMINAL(20),TERMINAL(18),TERMINAL(23),TERMINAL(24),TERMINAL(21),ROOT(25));

result = kSuccess;

OUTPUT(0,TERMINAL(25))
FOOTER(26)
}

enum opTrigger vpx_method_Instance_20_Graphic_2F_Frame_20_To_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Instance_20_Graphic_2F_Frame_20_To_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Instance_20_Graphic_2F_Frame_20_To_20_Corners(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Instance_20_Graphic_2F_Frame_20_To_20_Corners_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Instance_20_Graphic_2F_Frame_20_To_20_Corners_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Instance_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Instance_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(26)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(6),ROOT(7),ROOT(8),ROOT(9));

result = vpx_constant(PARAMETERS,"2",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(8),TERMINAL(6),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(11),TERMINAL(10),ROOT(12));

result = vpx_method_Int(PARAMETERS,TERMINAL(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(6),TERMINAL(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(7),TERMINAL(13),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(14),TERMINAL(7),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(9),TERMINAL(13),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(17),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(7),TERMINAL(13),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(19),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(15),ROOT(21));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(6),TERMINAL(13),ROOT(22));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(22),TERMINAL(9),ROOT(23));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(17),ROOT(24));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,5,1,TERMINAL(20),TERMINAL(16),TERMINAL(21),TERMINAL(24),TERMINAL(23),ROOT(25));

result = kSuccess;

OUTPUT(0,TERMINAL(25))
FOOTER(26)
}

enum opTrigger vpx_method_Instance_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Instance_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Instance_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Instance_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Instance_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_List_20_IO_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_List_20_IO_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLGraphic");
	return kNOERROR;
}

/* Start Universals: { 340 368 }{ 50 349 } */
enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 60909 6168 7710 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 6168 8738 52685 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_IO_20_Graphic_2F_Draw_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_List_20_IO_20_Graphic_2F_Draw_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"( 0 0 0 )",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(7),ROOT(8));

result = vpx_method_List_20_IO_20_Graphic_2F_Draw_case_1_local_7(PARAMETERS,TERMINAL(5));

result = vpx_call_primitive(PARAMETERS,VPLP_erase_2D_rect,1,0,TERMINAL(8));

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_rect,1,0,TERMINAL(8));

result = vpx_method_List_20_IO_20_Graphic_2F_Draw_case_1_local_10(PARAMETERS);

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 60909 6168 7710 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 6168 8738 52685 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_IO_20_Graphic_2F_Draw_case_2_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_List_20_IO_20_Graphic_2F_Draw_case_2_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"( 0 0 0 )",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(7),ROOT(8));

result = vpx_method_List_20_IO_20_Graphic_2F_Draw_case_2_local_6(PARAMETERS,TERMINAL(5));

result = vpx_call_primitive(PARAMETERS,VPLP_paint_2D_rect,1,0,TERMINAL(8));

result = vpx_method_List_20_IO_20_Graphic_2F_Draw_case_2_local_8(PARAMETERS);

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_IO_20_Graphic_2F_Draw_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_List_20_IO_20_Graphic_2F_Draw_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_14_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_14_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"io fill",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Oval,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_14_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_14_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"io stroke",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Oval,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_14_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_14_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_14_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_14_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"io fill",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Rect,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_14_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_14_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"io stroke",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Rect,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_14_case_2_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_14_case_2_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_14_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_14_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(17)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_constant(PARAMETERS,"-3",ROOT(9));

result = vpx_constant(PARAMETERS,"1",ROOT(10));

result = vpx_constant(PARAMETERS,"0",ROOT(11));

PUTSTRUCTURE(16,CGRect,CGRectOffset( GETSTRUCTURE(16,CGRect,TERMINAL(8)),GETREAL(TERMINAL(9)),GETREAL(TERMINAL(11))),12);
result = kSuccess;

result = vpx_constant(PARAMETERS,"3",ROOT(13));

result = vpx_constant(PARAMETERS,"-1",ROOT(14));

PUTSTRUCTURE(16,CGRect,CGRectOffset( GETSTRUCTURE(16,CGRect,TERMINAL(8)),GETREAL(TERMINAL(13)),GETREAL(TERMINAL(11))),15);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(15),TERMINAL(12),TERMINAL(8),ROOT(16));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(16))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_1_local_14(PARAMETERS,TERMINAL(1),LIST(16),TERMINAL(5));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(17)
}

enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"io fill",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Rect,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"io stroke",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Rect,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_2_local_6(PARAMETERS,TERMINAL(1),TERMINAL(8),TERMINAL(5));

result = vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_2_local_7(PARAMETERS,TERMINAL(1),TERMINAL(8),TERMINAL(5));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Local_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Local_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Oval Width",tempClass,tempAttribute_Local_20_Graphic_2F_Oval_20_Width,environment);
	tempAttribute = attribute_add("Oval Height",tempClass,tempAttribute_Local_20_Graphic_2F_Oval_20_Height,environment);
	tempAttribute = attribute_add("Inset",tempClass,tempAttribute_Local_20_Graphic_2F_Inset,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLRoundRectangle");
	return kNOERROR;
}

/* Start Universals: { 274 425 }{ 50 348 } */
enum opTrigger vpx_method_Local_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Local_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(18)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(9),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(7),ROOT(11),ROOT(12));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(12));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_pen_2D_state,0,1,ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Selected_20_Colors,1,0,TERMINAL(11));

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_round_2D_rect,3,0,TERMINAL(10),TERMINAL(5),TERMINAL(3));

result = vpx_get(PARAMETERS,kVPXValue_Inset,TERMINAL(6),ROOT(14),ROOT(15));

result = vpx_constant(PARAMETERS,"0",ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_inset_2D_rect,3,1,TERMINAL(10),TERMINAL(15),TERMINAL(16),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_stripe,0,0);

result = vpx_call_primitive(PARAMETERS,VPLP_paint_2D_rect,1,0,TERMINAL(17));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_normal,0,0);

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_rect,1,0,TERMINAL(17));

result = vpx_method_Set_20_Standard_20_Colors(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_pen_2D_state,1,0,TERMINAL(13));

result = kSuccess;

FOOTER(18)
}

enum opTrigger vpx_method_Local_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Local_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(16)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_pen_2D_state,0,1,ROOT(11));

result = vpx_method_Set_20_Selected_20_ForeColor(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_round_2D_rect,3,0,TERMINAL(10),TERMINAL(5),TERMINAL(3));

result = vpx_get(PARAMETERS,kVPXValue_Inset,TERMINAL(6),ROOT(12),ROOT(13));

result = vpx_constant(PARAMETERS,"0",ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_inset_2D_rect,3,1,TERMINAL(10),TERMINAL(13),TERMINAL(14),ROOT(15));

result = vpx_method_Set_20_Selected_20_BackColor(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_stripe,0,0);

result = vpx_call_primitive(PARAMETERS,VPLP_paint_2D_rect,1,0,TERMINAL(15));

result = vpx_method_Set_20_Selected_20_ForeColor(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_normal,0,0);

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_rect,1,0,TERMINAL(15));

result = vpx_method_Set_20_Standard_20_Colors(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_pen_2D_state,1,0,TERMINAL(11));

result = kSuccess;

FOOTER(16)
}

enum opTrigger vpx_method_Local_20_Graphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Local_20_Graphic_2F_Draw_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Local_20_Graphic_2F_Draw_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Local_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Oper_20_Erase_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Oper_20_Frame_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(6));

result = vpx_get(PARAMETERS,kVPXValue_Inset,TERMINAL(0),ROOT(7),ROOT(8));

result = vpx_constant(PARAMETERS,"0",ROOT(9));

result = vpx_method_Inset_20_Rectangle(PARAMETERS,TERMINAL(5),TERMINAL(8),TERMINAL(9),ROOT(10));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(10),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Oper_20_Fill_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Oper_20_Frame_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(11));

result = kSuccess;

FOOTERSINGLECASE(12)
}

/* Stop Universals */



Nat4 VPLC_Loop_20_IO_20_Root_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Loop_20_IO_20_Root_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLGraphic");
	return kNOERROR;
}

/* Start Universals: { 258 333 }{ 58 369 } */
enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 60909 6168 7710 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 6168 8738 52685 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"( 0 0 0 )",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(7),ROOT(8));

result = vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_1_local_7(PARAMETERS,TERMINAL(5));

result = vpx_constant(PARAMETERS,"270",ROOT(9));

result = vpx_constant(PARAMETERS,"90",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_arc,3,0,TERMINAL(8),TERMINAL(10),TERMINAL(9));

result = vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_1_local_11(PARAMETERS);

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 60909 6168 7710 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 6168 8738 52685 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_2_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_2_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"( 0 0 0 )",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(7),ROOT(8));

result = vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_2_local_6(PARAMETERS,TERMINAL(5));

result = vpx_constant(PARAMETERS,"270",ROOT(9));

result = vpx_constant(PARAMETERS,"90",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_paint_2D_arc,3,0,TERMINAL(8),TERMINAL(10),TERMINAL(9));

result = vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_2_local_10(PARAMETERS);

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_20_CG_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_20_CG_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"io fill",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Oval,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_20_CG_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_20_CG_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"io stroke",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_constant(PARAMETERS,"90",ROOT(9));

result = vpx_constant(PARAMETERS,"270",ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Arc,4,0,TERMINAL(0),TERMINAL(1),TERMINAL(9),TERMINAL(10));

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_20_CG_case_1_local_6(PARAMETERS,TERMINAL(1),TERMINAL(8),TERMINAL(5));

result = vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_20_CG_case_1_local_7(PARAMETERS,TERMINAL(1),TERMINAL(8),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(9)
}

/* Stop Universals */



Nat4 VPLC_Loop_20_IO_20_Terminal_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Loop_20_IO_20_Terminal_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLGraphic");
	return kNOERROR;
}

/* Start Universals: { 316 40 }{ 65 339 } */
enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 60909 6168 7710 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 6168 8738 52685 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"( 0 0 0 )",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(7),ROOT(8));

result = vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_1_local_7(PARAMETERS,TERMINAL(5));

result = vpx_constant(PARAMETERS,"90",ROOT(9));

result = vpx_constant(PARAMETERS,"270",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_arc,3,0,TERMINAL(8),TERMINAL(10),TERMINAL(9));

result = vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_1_local_11(PARAMETERS);

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 60909 6168 7710 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 6168 8738 52685 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_2_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_2_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"( 0 0 0 )",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(7),ROOT(8));

result = vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_2_local_6(PARAMETERS,TERMINAL(5));

result = vpx_constant(PARAMETERS,"90",ROOT(9));

result = vpx_constant(PARAMETERS,"270",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_paint_2D_arc,3,0,TERMINAL(8),TERMINAL(10),TERMINAL(9));

result = vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_2_local_10(PARAMETERS);

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_20_CG_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_20_CG_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"io fill",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Oval,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_20_CG_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_20_CG_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"io stroke",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_constant(PARAMETERS,"180",ROOT(9));

result = vpx_constant(PARAMETERS,"270",ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Arc,4,0,TERMINAL(0),TERMINAL(1),TERMINAL(10),TERMINAL(10));

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_20_CG_case_1_local_6(PARAMETERS,TERMINAL(1),TERMINAL(8),TERMINAL(5));

result = vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_20_CG_case_1_local_7(PARAMETERS,TERMINAL(1),TERMINAL(8),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(9)
}

/* Stop Universals */



Nat4 VPLC_Next_20_Case_20_Failure_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Next_20_Case_20_Failure_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 237 322 }{ 87 325 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Oval Width",tempClass,tempAttribute_Next_20_Case_20_Failure_20_Graphic_2F_Oval_20_Width,environment);
	tempAttribute = attribute_add("Oval Height",tempClass,tempAttribute_Next_20_Case_20_Failure_20_Graphic_2F_Oval_20_Height,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLRoundRectangle");
	return kNOERROR;
}

/* Start Universals: { 374 415 }{ 50 331 } */
enum opTrigger vpx_method_Next_20_Case_20_Failure_20_Graphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(18)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_round_2D_rect,3,0,TERMINAL(10),TERMINAL(5),TERMINAL(3));

result = vpx_constant(PARAMETERS,"4",ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_inset_2D_rect,3,1,TERMINAL(10),TERMINAL(11),TERMINAL(11),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_Rect_2D_to_2D_list,1,1,TERMINAL(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(13),ROOT(14),ROOT(15),ROOT(16),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_move_2D_to,2,0,TERMINAL(15),TERMINAL(14));

result = vpx_call_primitive(PARAMETERS,VPLP_line_2D_to,2,0,TERMINAL(17),TERMINAL(16));

result = vpx_call_primitive(PARAMETERS,VPLP_move_2D_to,2,0,TERMINAL(17),TERMINAL(14));

result = vpx_call_primitive(PARAMETERS,VPLP_line_2D_to,2,0,TERMINAL(15),TERMINAL(16));

result = kSuccess;

FOOTERSINGLECASE(18)
}

enum opTrigger vpx_method_Next_20_Case_20_Failure_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"failure",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Control_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Failure_20_CG,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Next_20_Case_20_Success_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Next_20_Case_20_Success_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 237 322 }{ 87 325 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Oval Width",tempClass,tempAttribute_Next_20_Case_20_Success_20_Graphic_2F_Oval_20_Width,environment);
	tempAttribute = attribute_add("Oval Height",tempClass,tempAttribute_Next_20_Case_20_Success_20_Graphic_2F_Oval_20_Height,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLRoundRectangle");
	return kNOERROR;
}

/* Start Universals: { 374 415 }{ 61 334 } */
enum opTrigger vpx_method_Next_20_Case_20_Success_20_Graphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_round_2D_rect,3,0,TERMINAL(10),TERMINAL(5),TERMINAL(3));

result = vpx_constant(PARAMETERS,"4",ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_inset_2D_rect,3,1,TERMINAL(10),TERMINAL(11),TERMINAL(11),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_oval,1,0,TERMINAL(12));

result = kSuccess;

FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Next_20_Case_20_Success_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"success",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Control_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Success_20_CG,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_OutputBar_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_OutputBar_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Region",tempClass,NULL,environment);
	tempAttribute = attribute_add("Path",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLFramedRegion");
	return kNOERROR;
}

/* Start Universals: { 328 324 }{ 50 410 } */
enum opTrigger vpx_method_OutputBar_20_Graphic_2F_Frame_20_To_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_OutputBar_20_Graphic_2F_Frame_20_To_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(18)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(6),ROOT(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(8),TERMINAL(6),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(9),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(11),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(9),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(7),TERMINAL(10),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(7),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(14),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(16),TERMINAL(15),TERMINAL(13),TERMINAL(12),ROOT(17));

result = kSuccess;

OUTPUT(0,TERMINAL(17))
FOOTER(18)
}

enum opTrigger vpx_method_OutputBar_20_Graphic_2F_Frame_20_To_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_OutputBar_20_Graphic_2F_Frame_20_To_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_OutputBar_20_Graphic_2F_Frame_20_To_20_Corners(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_OutputBar_20_Graphic_2F_Frame_20_To_20_Corners_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_OutputBar_20_Graphic_2F_Frame_20_To_20_Corners_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Persistent_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Persistent_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Oval Width",tempClass,tempAttribute_Persistent_20_Graphic_2F_Oval_20_Width,environment);
	tempAttribute = attribute_add("Oval Height",tempClass,tempAttribute_Persistent_20_Graphic_2F_Oval_20_Height,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLRoundRectangle");
	return kNOERROR;
}

/* Start Universals: { 374 415 }{ 50 331 } */
enum opTrigger vpx_method_Persistent_20_Graphic_2F_Draw_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Persistent_20_Graphic_2F_Draw_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 60909 6168 7710 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Persistent_20_Graphic_2F_Draw_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Persistent_20_Graphic_2F_Draw_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 6168 8738 52685 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Persistent_20_Graphic_2F_Draw_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Persistent_20_Graphic_2F_Draw_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Persistent_20_Graphic_2F_Draw_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Persistent_20_Graphic_2F_Draw_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Persistent_20_Graphic_2F_Draw_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Persistent_20_Graphic_2F_Draw_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"( 0 0 0 )",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Persistent_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Persistent_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(9),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(7),ROOT(11),ROOT(12));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(12));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_pen_2D_state,0,1,ROOT(13));

result = vpx_method_Persistent_20_Graphic_2F_Draw_case_1_local_10(PARAMETERS,TERMINAL(12));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_stripe,0,0);

result = vpx_call_primitive(PARAMETERS,VPLP_paint_2D_round_2D_rect,3,0,TERMINAL(10),TERMINAL(5),TERMINAL(3));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_normal,0,0);

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_round_2D_rect,3,0,TERMINAL(10),TERMINAL(5),TERMINAL(3));

result = vpx_method_Persistent_20_Graphic_2F_Draw_case_1_local_15(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_pen_2D_state,1,0,TERMINAL(13));

result = kSuccess;

FOOTER(14)
}

enum opTrigger vpx_method_Persistent_20_Graphic_2F_Draw_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Persistent_20_Graphic_2F_Draw_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 60909 6168 7710 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Persistent_20_Graphic_2F_Draw_case_2_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Persistent_20_Graphic_2F_Draw_case_2_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 60909 6168 7710 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Persistent_20_Graphic_2F_Draw_case_2_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Persistent_20_Graphic_2F_Draw_case_2_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"( 0 0 0 )",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Persistent_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Persistent_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(9),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(7),ROOT(11),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_pen_2D_state,0,1,ROOT(13));

result = vpx_method_Persistent_20_Graphic_2F_Draw_case_2_local_9(PARAMETERS,TERMINAL(12));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_stripe,0,0);

result = vpx_call_primitive(PARAMETERS,VPLP_paint_2D_round_2D_rect,3,0,TERMINAL(10),TERMINAL(5),TERMINAL(3));

result = vpx_method_Persistent_20_Graphic_2F_Draw_case_2_local_12(PARAMETERS,TERMINAL(12));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_normal,0,0);

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_round_2D_rect,3,0,TERMINAL(10),TERMINAL(5),TERMINAL(3));

result = vpx_method_Persistent_20_Graphic_2F_Draw_case_2_local_15(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_pen_2D_state,1,0,TERMINAL(13));

result = kSuccess;

FOOTER(14)
}

enum opTrigger vpx_method_Persistent_20_Graphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Persistent_20_Graphic_2F_Draw_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Persistent_20_Graphic_2F_Draw_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Persistent_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Oper_20_Erase_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Oper_20_Fill_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Oper_20_Frame_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

/* Stop Universals */



Nat4 VPLC_Primitive_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Primitive_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Oval Width",tempClass,tempAttribute_Primitive_20_Graphic_2F_Oval_20_Width,environment);
	tempAttribute = attribute_add("Oval Height",tempClass,tempAttribute_Primitive_20_Graphic_2F_Oval_20_Height,environment);
	tempAttribute = attribute_add("Inset",tempClass,tempAttribute_Primitive_20_Graphic_2F_Inset,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLRoundRectangle");
	return kNOERROR;
}

/* Start Universals: { 180 781 }{ 50 328 } */
enum opTrigger vpx_method_Primitive_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Primitive_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(18)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(9),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(7),ROOT(11),ROOT(12));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(12));
NEXTCASEONFAILURE

GetPenState( GETPOINTER(24,PenState,*,ROOT(13),NONE));
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Selected_20_Colors,1,0,TERMINAL(11));

FrameRoundRect( GETCONSTPOINTER(Rect,*,TERMINAL(10)),GETINTEGER(TERMINAL(5)),GETINTEGER(TERMINAL(3)));
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Inset,TERMINAL(6),ROOT(14),ROOT(15));

result = vpx_constant(PARAMETERS,"0",ROOT(16));

InsetRect( GETPOINTER(8,Rect,*,ROOT(17),TERMINAL(10)),GETINTEGER(TERMINAL(16)),GETINTEGER(TERMINAL(15)));
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_stripe,0,0);

PaintRect( GETCONSTPOINTER(Rect,*,TERMINAL(17)));
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_normal,0,0);

FrameRect( GETCONSTPOINTER(Rect,*,TERMINAL(17)));
result = kSuccess;

result = vpx_method_Set_20_Standard_20_Colors(PARAMETERS);

SetPenState( GETCONSTPOINTER(PenState,*,TERMINAL(13)));
result = kSuccess;

result = kSuccess;

FOOTERWITHNONE(18)
}

enum opTrigger vpx_method_Primitive_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Primitive_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(16)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_pen_2D_state,0,1,ROOT(11));

result = vpx_method_Set_20_Selected_20_ForeColor(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_round_2D_rect,3,0,TERMINAL(10),TERMINAL(5),TERMINAL(3));

result = vpx_get(PARAMETERS,kVPXValue_Inset,TERMINAL(6),ROOT(12),ROOT(13));

result = vpx_constant(PARAMETERS,"0",ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_inset_2D_rect,3,1,TERMINAL(10),TERMINAL(14),TERMINAL(13),ROOT(15));

result = vpx_method_Set_20_Selected_20_BackColor(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_stripe,0,0);

result = vpx_call_primitive(PARAMETERS,VPLP_paint_2D_rect,1,0,TERMINAL(15));

result = vpx_method_Set_20_Selected_20_ForeColor(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_normal,0,0);

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_rect,1,0,TERMINAL(15));

result = vpx_method_Set_20_Standard_20_Colors(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_pen_2D_state,1,0,TERMINAL(11));

result = kSuccess;

FOOTER(16)
}

enum opTrigger vpx_method_Primitive_20_Graphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Primitive_20_Graphic_2F_Draw_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Primitive_20_Graphic_2F_Draw_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Primitive_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Oper_20_Erase_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Oper_20_Frame_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(6));

result = vpx_get(PARAMETERS,kVPXValue_Inset,TERMINAL(0),ROOT(7),ROOT(8));

result = vpx_constant(PARAMETERS,"0",ROOT(9));

result = vpx_method_Inset_20_Rectangle(PARAMETERS,TERMINAL(5),TERMINAL(9),TERMINAL(8),ROOT(10));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(10),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Oper_20_Fill_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Oper_20_Inset_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(11));

result = kSuccess;

FOOTERSINGLECASE(12)
}

/* Stop Universals */



Nat4 VPLC_Procedure_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Procedure_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Oval Width",tempClass,tempAttribute_Procedure_20_Graphic_2F_Oval_20_Width,environment);
	tempAttribute = attribute_add("Oval Height",tempClass,tempAttribute_Procedure_20_Graphic_2F_Oval_20_Height,environment);
	tempAttribute = attribute_add("Inset",tempClass,tempAttribute_Procedure_20_Graphic_2F_Inset,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLRoundRectangle");
	return kNOERROR;
}

/* Start Universals: { 351 460 }{ 50 328 } */
enum opTrigger vpx_method_Procedure_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Procedure_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(17)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(9),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(7),ROOT(11),ROOT(12));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(12));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_pen_2D_state,0,1,ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Selected_20_Colors,1,0,TERMINAL(11));

FrameRoundRect( GETCONSTPOINTER(Rect,*,TERMINAL(10)),GETINTEGER(TERMINAL(5)),GETINTEGER(TERMINAL(3)));
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Inset,TERMINAL(6),ROOT(14),ROOT(15));

InsetRect( GETPOINTER(8,Rect,*,ROOT(16),TERMINAL(10)),GETINTEGER(TERMINAL(15)),GETINTEGER(TERMINAL(15)));
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_stripe,0,0);

PaintRect( GETCONSTPOINTER(Rect,*,TERMINAL(16)));
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_normal,0,0);

FrameRect( GETCONSTPOINTER(Rect,*,TERMINAL(16)));
result = kSuccess;

result = vpx_method_Set_20_Standard_20_Colors(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_pen_2D_state,1,0,TERMINAL(13));

result = kSuccess;

FOOTER(17)
}

enum opTrigger vpx_method_Procedure_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Procedure_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_pen_2D_state,0,1,ROOT(11));

result = vpx_method_Set_20_Selected_20_ForeColor(PARAMETERS);

FrameRoundRect( GETCONSTPOINTER(Rect,*,TERMINAL(10)),GETINTEGER(TERMINAL(5)),GETINTEGER(TERMINAL(3)));
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Inset,TERMINAL(6),ROOT(12),ROOT(13));

InsetRect( GETPOINTER(8,Rect,*,ROOT(14),TERMINAL(10)),GETINTEGER(TERMINAL(13)),GETINTEGER(TERMINAL(13)));
result = kSuccess;

result = vpx_method_Set_20_Selected_20_BackColor(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_stripe,0,0);

PaintRect( GETCONSTPOINTER(Rect,*,TERMINAL(14)));
result = kSuccess;

result = vpx_method_Set_20_Selected_20_ForeColor(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_normal,0,0);

FrameRect( GETCONSTPOINTER(Rect,*,TERMINAL(14)));
result = kSuccess;

result = vpx_method_Set_20_Standard_20_Colors(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_pen_2D_state,1,0,TERMINAL(11));

result = kSuccess;

FOOTER(15)
}

enum opTrigger vpx_method_Procedure_20_Graphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Procedure_20_Graphic_2F_Draw_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Procedure_20_Graphic_2F_Draw_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Procedure_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Oper_20_Erase_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Oper_20_Frame_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(6));

result = vpx_get(PARAMETERS,kVPXValue_Inset,TERMINAL(0),ROOT(7),ROOT(8));

result = vpx_method_Inset_20_Rectangle(PARAMETERS,TERMINAL(5),TERMINAL(8),TERMINAL(8),ROOT(9));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Oper_20_Fill_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Oper_20_Inset_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(10));

result = kSuccess;

FOOTERSINGLECASE(11)
}

/* Stop Universals */



Nat4 VPLC_Repeat_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Repeat_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Oval Width",tempClass,tempAttribute_Repeat_20_Graphic_2F_Oval_20_Width,environment);
	tempAttribute = attribute_add("Oval Height",tempClass,tempAttribute_Repeat_20_Graphic_2F_Oval_20_Height,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLRoundRectangle");
	return kNOERROR;
}

/* Start Universals: { 614 1184 }{ 128 334 } */
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_round_2D_rect,3,0,TERMINAL(10),TERMINAL(5),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(17)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Operation,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_constant(PARAMETERS,"-0.5",ROOT(9));

result = vpx_constant(PARAMETERS,"-2.2",ROOT(10));

result = vpx_constant(PARAMETERS,"-1.5",ROOT(11));

PUTSTRUCTURE(16,CGRect,CGRectOffset( GETSTRUCTURE(16,CGRect,TERMINAL(8)),GETREAL(TERMINAL(10)),GETREAL(TERMINAL(10))),12);
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(13));

PUTSTRUCTURE(16,CGRect,CGRectInset( GETSTRUCTURE(16,CGRect,TERMINAL(12)),GETREAL(TERMINAL(13)),GETREAL(TERMINAL(13))),14);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Repeat_20_Erase_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(14));

result = vpx_constant(PARAMETERS,"-2.5",ROOT(15));

PUTSTRUCTURE(16,CGRect,CGRectOffset( GETSTRUCTURE(16,CGRect,TERMINAL(14)),GETREAL(TERMINAL(10)),GETREAL(TERMINAL(10))),16);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Repeat_20_Erase_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(16));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Repeat_20_Frame_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(14));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Repeat_20_Frame_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(16));

result = kSuccess;

FOOTER(17)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Oper_20_Erase_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Oper_20_Frame_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Repeat_20_Graphic_2F_Draw_20_CG_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Repeat_20_Graphic_2F_Draw_20_CG_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"VPLOval",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"VPLRoundRectangle",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_4_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_4_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_4_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_4_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_4_case_1_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Graphic",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Item_20_Name,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Graphic,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_4_case_1_local_5(PARAMETERS,TERMINAL(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(3))
FOOTER(6)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(3))
FOOTER(6)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_14_case_1_local_3_case_1_local_11_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_14_case_1_local_3_case_1_local_11_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
INPUT(5,5)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_14_case_1_local_3_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_14_case_1_local_3_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Half(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_method_Half(PARAMETERS,TERMINAL(2),ROOT(4));

result = vpx_constant(PARAMETERS,"2",ROOT(5));

result = vpx_constant(PARAMETERS,"1",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Move_20_To_20_Point,3,0,TERMINAL(0),TERMINAL(6),TERMINAL(2));

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_14_case_1_local_3_case_1_local_11_case_1_local_7(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(2),TERMINAL(6));

result = vpx_constant(PARAMETERS,"0",ROOT(7));

result = vpx_constant(PARAMETERS,"1",ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Arc_20_To_20_Point,6,0,TERMINAL(0),TERMINAL(7),TERMINAL(2),TERMINAL(7),TERMINAL(8),TERMINAL(6));

result = vpx_constant(PARAMETERS,"0",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Arc_20_To_20_Point,6,0,TERMINAL(0),TERMINAL(9),TERMINAL(9),TERMINAL(8),TERMINAL(9),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Arc_20_To_20_Point,6,0,TERMINAL(0),TERMINAL(1),TERMINAL(7),TERMINAL(1),TERMINAL(6),TERMINAL(6));

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_14_case_1_local_3_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_14_case_1_local_3_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Half(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_method_Half(PARAMETERS,TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Move_20_To_20_Point,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(4));

result = vpx_constant(PARAMETERS,"1",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Arc_20_To_20_Point,6,0,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(2),TERMINAL(5));

result = vpx_constant(PARAMETERS,"0",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Arc_20_To_20_Point,6,0,TERMINAL(0),TERMINAL(6),TERMINAL(2),TERMINAL(6),TERMINAL(4),TERMINAL(5));

result = vpx_constant(PARAMETERS,"0",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Arc_20_To_20_Point,6,0,TERMINAL(0),TERMINAL(7),TERMINAL(7),TERMINAL(3),TERMINAL(7),TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Arc_20_To_20_Point,6,0,TERMINAL(0),TERMINAL(1),TERMINAL(6),TERMINAL(1),TERMINAL(4),TERMINAL(5));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_14_case_1_local_3_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_14_case_1_local_3_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_14_case_1_local_3_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_14_case_1_local_3_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_14_case_1_local_3_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_14_case_1_local_3_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_14_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_14_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Save_20_GState,1,0,TERMINAL(0));

PUTREAL(CGRectGetMinX( GETSTRUCTURE(16,CGRect,TERMINAL(1))),4);
result = kSuccess;

PUTREAL(CGRectGetMinY( GETSTRUCTURE(16,CGRect,TERMINAL(1))),5);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Translate_20_CTM,3,0,TERMINAL(0),TERMINAL(4),TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Scale_20_CTM,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));

PUTREAL(CGRectGetHeight( GETSTRUCTURE(16,CGRect,TERMINAL(1))),6);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(6),TERMINAL(3),ROOT(7));

PUTREAL(CGRectGetWidth( GETSTRUCTURE(16,CGRect,TERMINAL(1))),8);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(8),TERMINAL(2),ROOT(9));

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_14_case_1_local_3_case_1_local_11(PARAMETERS,TERMINAL(0),TERMINAL(9),TERMINAL(7));

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_14_case_1_local_3_case_1_local_12(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Restore_20_GState,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Begin_20_Path,1,0,TERMINAL(0));

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_14_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Path,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(22)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Operation,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_4(PARAMETERS,TERMINAL(6),ROOT(7));
NEXTCASEONFAILURE

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_5(PARAMETERS,TERMINAL(7),TERMINAL(0),ROOT(8),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(6),ROOT(10),ROOT(11));

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(11),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Color_20_Names,1,2,TERMINAL(4),ROOT(13),ROOT(14));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(14),TERMINAL(12),ROOT(15));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(15),ROOT(16),ROOT(17),ROOT(18),ROOT(19));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(1),TERMINAL(16),TERMINAL(17),TERMINAL(18),TERMINAL(19));

result = vpx_constant(PARAMETERS,"1.0",ROOT(20));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Line_20_Width,2,0,TERMINAL(1),TERMINAL(20));

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1_local_14(PARAMETERS,TERMINAL(1),TERMINAL(2),TERMINAL(8),TERMINAL(9));

result = vpx_constant(PARAMETERS,"1.0",ROOT(21));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Line_20_Width,2,0,TERMINAL(1),TERMINAL(21));

result = kSuccess;

FOOTER(22)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"VPLFramedRegion",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2_local_4_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2_local_4_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Graphic",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Item_20_Name,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Graphic,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2_local_4_case_1_local_5(PARAMETERS,TERMINAL(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_method_From_20_CGRect(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(1),TERMINAL(3),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(2),TERMINAL(1),TERMINAL(5),TERMINAL(6),ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Int(PARAMETERS,LIST(7),ROOT(8));
LISTROOT(8,0)
REPEATFINISH
LISTROOTFINISH(8,0)
LISTROOTEND
} else {
ROOTEMPTY(8)
}

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2_local_13_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2_local_13_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Move_20_To_20_Point,3,0,TERMINAL(0),TERMINAL(3),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2_local_13_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2_local_13_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Line_20_To_20_Point,3,0,TERMINAL(0),TERMINAL(3),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Mutable,1,0,TERMINAL(0));

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2_local_13_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2_local_13_case_1_local_5(PARAMETERS,TERMINAL(0),LIST(3));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(23)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Operation,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2_local_4(PARAMETERS,TERMINAL(6),ROOT(7));
NEXTCASEONFAILURE

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2_local_5(PARAMETERS,TERMINAL(2),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Frame_20_To_20_Repeat_20_Corners,2,1,TERMINAL(7),TERMINAL(8),ROOT(9));

result = vpx_match(PARAMETERS,"( )",TERMINAL(9));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Color_20_Names,1,2,TERMINAL(4),ROOT(10),ROOT(11));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(6),ROOT(12),ROOT(13));

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(13),ROOT(14));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(11),TERMINAL(14),ROOT(15));
TERMINATEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_CG_20_Path,1,1,NONE,ROOT(16));

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2_local_13(PARAMETERS,TERMINAL(16),TERMINAL(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Path,2,0,TERMINAL(1),TERMINAL(16));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release_20_Path,1,0,TERMINAL(16));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(15),ROOT(17),ROOT(18),ROOT(19),ROOT(20));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(1),TERMINAL(17),TERMINAL(18),TERMINAL(19),TERMINAL(20));

result = vpx_constant(PARAMETERS,"1.0",ROOT(21));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Line_20_Width,2,0,TERMINAL(1),TERMINAL(21));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Path,1,0,TERMINAL(1));

result = vpx_constant(PARAMETERS,"1.0",ROOT(22));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Line_20_Width,2,0,TERMINAL(1),TERMINAL(22));

result = kSuccess;

FOOTERWITHNONE(23)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"VPLRectangle",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_4_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_4_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Graphic",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Item_20_Name,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Graphic,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_4_case_1_local_5(PARAMETERS,TERMINAL(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(11)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Operation,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_constant(PARAMETERS,"-1",ROOT(9));

result = vpx_constant(PARAMETERS,"0",ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
OUTPUT(1,TERMINAL(9))
FOOTER(11)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extget(PARAMETERS,"size",1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"1.5",ROOT(4));

result = vpx_extset(PARAMETERS,"height",2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_extset(PARAMETERS,"size",2,1,TERMINAL(2),TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"operation stroke",ROOT(5));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(4),TERMINAL(2),ROOT(6));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(6),ROOT(7),ROOT(8),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(7),TERMINAL(8),TERMINAL(9),TERMINAL(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Rect,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"operation fill",ROOT(5));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(6));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(6),ROOT(7),ROOT(8),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(7),TERMINAL(8),TERMINAL(9),TERMINAL(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Rect,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4))
vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4);
return outcome;
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(16)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Operation,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_4(PARAMETERS,TERMINAL(6),ROOT(7));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(6),ROOT(8),ROOT(9));

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_6(PARAMETERS,TERMINAL(4),ROOT(10),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Color_20_Names,1,2,TERMINAL(4),ROOT(12),ROOT(13));

PUTSTRUCTURE(16,CGRect,CGRectOffset( GETSTRUCTURE(16,CGRect,TERMINAL(2)),GETREAL(TERMINAL(10)),GETREAL(TERMINAL(11))),14);
result = kSuccess;

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_9(PARAMETERS,TERMINAL(4),TERMINAL(14),ROOT(15));

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3_local_10(PARAMETERS,TERMINAL(1),TERMINAL(15),TERMINAL(9),TERMINAL(12),TERMINAL(13));

result = kSuccess;

FOOTER(16)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"VPLOval",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"VPLRoundRectangle",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_4_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_4_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_4_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_4_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_4_case_1_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Graphic",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Item_20_Name,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Graphic,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_4_case_1_local_5(PARAMETERS,TERMINAL(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(3))
FOOTER(6)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(3))
FOOTER(6)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(0),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(1),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Rounded_20_Rect,4,0,TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Operation,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_4(PARAMETERS,TERMINAL(6),ROOT(7));
NEXTCASEONFAILURE

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_5(PARAMETERS,TERMINAL(7),TERMINAL(0),ROOT(8),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Erase_20_Color,1,1,TERMINAL(0),ROOT(10));

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1_local_7(PARAMETERS,TERMINAL(10),TERMINAL(1),TERMINAL(2),TERMINAL(8),TERMINAL(9));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"VPLFramedRegion",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_4_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_4_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Graphic",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Item_20_Name,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Graphic,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_4_case_1_local_5(PARAMETERS,TERMINAL(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_method_From_20_CGRect(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(1),TERMINAL(3),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(2),TERMINAL(1),TERMINAL(5),TERMINAL(6),ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Int(PARAMETERS,LIST(7),ROOT(8));
LISTROOT(8,0)
REPEATFINISH
LISTROOTFINISH(8,0)
LISTROOTEND
} else {
ROOTEMPTY(8)
}

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_8_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_8_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Move_20_To_20_Point,3,0,TERMINAL(0),TERMINAL(3),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_8_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_8_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Line_20_To_20_Point,3,0,TERMINAL(0),TERMINAL(3),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Mutable,1,0,TERMINAL(0));

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_8_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_8_case_1_local_5(PARAMETERS,TERMINAL(0),LIST(3));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(0),ROOT(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Path,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Operation,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_4(PARAMETERS,TERMINAL(6),ROOT(7));
NEXTCASEONFAILURE

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_5(PARAMETERS,TERMINAL(2),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Frame_20_To_20_Repeat_20_Corners,2,1,TERMINAL(7),TERMINAL(8),ROOT(9));

result = vpx_instantiate(PARAMETERS,kVPXClass_CG_20_Path,1,1,NONE,ROOT(10));

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_8(PARAMETERS,TERMINAL(10),TERMINAL(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Path,2,0,TERMINAL(1),TERMINAL(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release_20_Path,1,0,TERMINAL(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Erase_20_Color,1,1,TERMINAL(0),ROOT(11));

result = vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2_local_12(PARAMETERS,TERMINAL(11),TERMINAL(1));

result = kSuccess;

FOOTERWITHNONE(12)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Set_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Set_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Region",tempClass,NULL,environment);
	tempAttribute = attribute_add("Path",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLFramedRegion");
	return kNOERROR;
}

/* Start Universals: { 312 361 }{ 62 321 } */
enum opTrigger vpx_method_Set_20_Graphic_2F_Frame_20_To_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Set_20_Graphic_2F_Frame_20_To_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(23)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(6),ROOT(7),ROOT(8),ROOT(9));

result = vpx_constant(PARAMETERS,"2",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(8),TERMINAL(6),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(11),TERMINAL(10),ROOT(12));

result = vpx_method_Int(PARAMETERS,TERMINAL(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(6),TERMINAL(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(7),TERMINAL(13),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(14),TERMINAL(7),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(9),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(7),TERMINAL(13),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(18),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(15),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(9),ROOT(21));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,5,1,TERMINAL(16),TERMINAL(19),TERMINAL(17),TERMINAL(21),TERMINAL(20),ROOT(22));

result = kSuccess;

OUTPUT(0,TERMINAL(22))
FOOTER(23)
}

enum opTrigger vpx_method_Set_20_Graphic_2F_Frame_20_To_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Set_20_Graphic_2F_Frame_20_To_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Set_20_Graphic_2F_Frame_20_To_20_Corners(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Set_20_Graphic_2F_Frame_20_To_20_Corners_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Set_20_Graphic_2F_Frame_20_To_20_Corners_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Set_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Set_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(25)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(6),ROOT(7),ROOT(8),ROOT(9));

result = vpx_constant(PARAMETERS,"2",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(8),TERMINAL(6),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(11),TERMINAL(10),ROOT(12));

result = vpx_method_Int(PARAMETERS,TERMINAL(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(6),TERMINAL(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(7),TERMINAL(13),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(14),TERMINAL(7),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(9),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(7),TERMINAL(13),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(18),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(15),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(9),ROOT(21));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(6),TERMINAL(10),ROOT(22));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(22),TERMINAL(9),ROOT(23));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,5,1,TERMINAL(19),TERMINAL(16),TERMINAL(20),TERMINAL(21),TERMINAL(23),ROOT(24));

result = kSuccess;

OUTPUT(0,TERMINAL(24))
FOOTER(25)
}

enum opTrigger vpx_method_Set_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Set_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Set_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Set_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Set_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Terminate_20_Failure_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Terminate_20_Failure_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 237 322 }{ 87 325 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Oval Width",tempClass,tempAttribute_Terminate_20_Failure_20_Graphic_2F_Oval_20_Width,environment);
	tempAttribute = attribute_add("Oval Height",tempClass,tempAttribute_Terminate_20_Failure_20_Graphic_2F_Oval_20_Height,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLRoundRectangle");
	return kNOERROR;
}

/* Start Universals: { 374 415 }{ 50 331 } */
enum opTrigger vpx_method_Terminate_20_Failure_20_Graphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(26)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_round_2D_rect,3,0,TERMINAL(10),TERMINAL(5),TERMINAL(3));

result = vpx_constant(PARAMETERS,"4",ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_inset_2D_rect,3,1,TERMINAL(10),TERMINAL(11),TERMINAL(11),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_Rect_2D_to_2D_list,1,1,TERMINAL(12),ROOT(13));

result = vpx_constant(PARAMETERS,"2",ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(9),ROOT(15),ROOT(16),ROOT(17),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(16),TERMINAL(14),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(15),TERMINAL(14),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_move_2D_to,2,0,TERMINAL(19),TERMINAL(20));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(18),TERMINAL(14),ROOT(21));

result = vpx_call_primitive(PARAMETERS,VPLP_line_2D_to,2,0,TERMINAL(21),TERMINAL(20));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(13),ROOT(22),ROOT(23),ROOT(24),ROOT(25));

result = vpx_call_primitive(PARAMETERS,VPLP_move_2D_to,2,0,TERMINAL(23),TERMINAL(22));

result = vpx_call_primitive(PARAMETERS,VPLP_line_2D_to,2,0,TERMINAL(25),TERMINAL(24));

result = vpx_call_primitive(PARAMETERS,VPLP_move_2D_to,2,0,TERMINAL(25),TERMINAL(22));

result = vpx_call_primitive(PARAMETERS,VPLP_line_2D_to,2,0,TERMINAL(23),TERMINAL(24));

result = kSuccess;

FOOTERSINGLECASE(26)
}

enum opTrigger vpx_method_Terminate_20_Failure_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"failure",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Control_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Control_20_Term_20_CG,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Failure_20_CG,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Terminate_20_Success_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Terminate_20_Success_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 237 322 }{ 87 325 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Oval Width",tempClass,tempAttribute_Terminate_20_Success_20_Graphic_2F_Oval_20_Width,environment);
	tempAttribute = attribute_add("Oval Height",tempClass,tempAttribute_Terminate_20_Success_20_Graphic_2F_Oval_20_Height,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLRoundRectangle");
	return kNOERROR;
}

/* Start Universals: { 374 415 }{ 50 331 } */
enum opTrigger vpx_method_Terminate_20_Success_20_Graphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(21)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_round_2D_rect,3,0,TERMINAL(10),TERMINAL(5),TERMINAL(3));

result = vpx_constant(PARAMETERS,"4",ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_inset_2D_rect,3,1,TERMINAL(10),TERMINAL(11),TERMINAL(11),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_oval,1,0,TERMINAL(12));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(9),ROOT(13),ROOT(14),ROOT(15),ROOT(16));

result = vpx_constant(PARAMETERS,"2",ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(13),TERMINAL(17),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(14),TERMINAL(17),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(16),TERMINAL(17),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_move_2D_to,2,0,TERMINAL(19),TERMINAL(18));

result = vpx_call_primitive(PARAMETERS,VPLP_line_2D_to,2,0,TERMINAL(20),TERMINAL(18));

result = kSuccess;

FOOTERSINGLECASE(21)
}

enum opTrigger vpx_method_Terminate_20_Success_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"success",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Control_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Control_20_Term_20_CG,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Success_20_CG,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Universal_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Universal_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Oval Width",tempClass,tempAttribute_Universal_20_Graphic_2F_Oval_20_Width,environment);
	tempAttribute = attribute_add("Oval Height",tempClass,tempAttribute_Universal_20_Graphic_2F_Oval_20_Height,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLRoundRectangle");
	return kNOERROR;
}

/* Start Universals: { 374 415 }{ 50 331 } */
enum opTrigger vpx_method_Universal_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(9),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(7),ROOT(11),ROOT(12));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(12));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_pen_2D_state,0,1,ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Selected_20_Colors,1,0,TERMINAL(11));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_stripe,0,0);

result = vpx_call_primitive(PARAMETERS,VPLP_paint_2D_round_2D_rect,3,0,TERMINAL(10),TERMINAL(5),TERMINAL(3));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_normal,0,0);

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_round_2D_rect,3,0,TERMINAL(10),TERMINAL(5),TERMINAL(3));

result = vpx_method_Set_20_Standard_20_Colors(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_pen_2D_state,1,0,TERMINAL(13));

result = kSuccess;

FOOTER(14)
}

enum opTrigger vpx_method_Universal_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_pen_2D_state,0,1,ROOT(10));

result = vpx_method_Set_20_Selected_20_BackColor(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(9),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_stripe,0,0);

result = vpx_call_primitive(PARAMETERS,VPLP_paint_2D_round_2D_rect,3,0,TERMINAL(11),TERMINAL(5),TERMINAL(3));

result = vpx_method_Set_20_Selected_20_ForeColor(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_normal,0,0);

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_round_2D_rect,3,0,TERMINAL(11),TERMINAL(5),TERMINAL(3));

result = vpx_method_Set_20_Standard_20_Colors(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_pen_2D_state,1,0,TERMINAL(10));

result = kSuccess;

FOOTER(12)
}

enum opTrigger vpx_method_Universal_20_Graphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Graphic_2F_Draw_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Universal_20_Graphic_2F_Draw_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Graphic_2F_Draw_20_CG_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Universal_20_Graphic_2F_Draw_20_CG_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"white",ROOT(4));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(4),TERMINAL(2),ROOT(5));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(5),ROOT(6),ROOT(7),ROOT(8),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(6),TERMINAL(7),TERMINAL(8),TERMINAL(9));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(3),ROOT(10),ROOT(11));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(10),ROOT(12),ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Rounded_20_Rect,4,0,TERMINAL(0),TERMINAL(1),TERMINAL(13),TERMINAL(11));

result = kSuccess;

FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_Universal_20_Graphic_2F_Draw_20_CG_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Universal_20_Graphic_2F_Draw_20_CG_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"operation fill",ROOT(5));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(4),TERMINAL(2),ROOT(6));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(6),ROOT(7),ROOT(8),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(7),TERMINAL(8),TERMINAL(9),TERMINAL(10));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(3),ROOT(11),ROOT(12));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(11),ROOT(13),ROOT(14));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Rounded_20_Rect,4,0,TERMINAL(0),TERMINAL(1),TERMINAL(14),TERMINAL(12));

result = kSuccess;

FOOTERSINGLECASE(15)
}

enum opTrigger vpx_method_Universal_20_Graphic_2F_Draw_20_CG_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Universal_20_Graphic_2F_Draw_20_CG_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(17)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"operation stroke",ROOT(5));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(4),TERMINAL(2),ROOT(6));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(6),ROOT(7),ROOT(8),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(7),TERMINAL(8),TERMINAL(9),TERMINAL(10));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(3),ROOT(11),ROOT(12));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(11),ROOT(13),ROOT(14));

result = vpx_constant(PARAMETERS,"1.2",ROOT(15));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Line_20_Width,2,0,TERMINAL(0),TERMINAL(15));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Rounded_20_Rect,4,0,TERMINAL(0),TERMINAL(1),TERMINAL(14),TERMINAL(12));

result = vpx_constant(PARAMETERS,"1.0",ROOT(16));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Line_20_Width,2,0,TERMINAL(0),TERMINAL(16));

result = kSuccess;

FOOTERSINGLECASE(17)
}

enum opTrigger vpx_method_Universal_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_method_Universal_20_Graphic_2F_Draw_20_CG_case_1_local_6(PARAMETERS,TERMINAL(1),TERMINAL(8),TERMINAL(5),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Color_20_Names,1,2,TERMINAL(3),ROOT(9),ROOT(10));

result = vpx_method_Universal_20_Graphic_2F_Draw_20_CG_case_1_local_8(PARAMETERS,TERMINAL(1),TERMINAL(8),TERMINAL(5),TERMINAL(0),TERMINAL(9));

result = vpx_method_Universal_20_Graphic_2F_Draw_20_CG_case_1_local_9(PARAMETERS,TERMINAL(1),TERMINAL(8),TERMINAL(5),TERMINAL(0),TERMINAL(10));

result = kSuccess;

FOOTERSINGLECASE(11)
}

/* Stop Universals */



Nat4 VPLC_Constant_20_Match_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Constant_20_Match_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLRectangle");
	return kNOERROR;
}

/* Start Universals: { 217 128 }{ 50 337 } */
enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(7),ROOT(8));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(8));
NEXTCASEONFAILURE

GetPenState( GETPOINTER(24,PenState,*,ROOT(9),NONE));
result = kSuccess;

result = vpx_method_Set_20_Selected_20_Colors(PARAMETERS,TERMINAL(8));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_stripe,0,0);

PaintRect( GETCONSTPOINTER(Rect,*,TERMINAL(6)));
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_normal,0,0);

FrameRect( GETCONSTPOINTER(Rect,*,TERMINAL(6)));
result = kSuccess;

result = vpx_method_Set_20_Standard_20_Colors(PARAMETERS);

SetPenState( GETCONSTPOINTER(PenState,*,TERMINAL(9)));
result = kSuccess;

result = kSuccess;

FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 60909 6168 7710 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 60909 6168 7710 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"( 0 0 0 )",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(7),ROOT(8));

GetPenState( GETPOINTER(24,PenState,*,ROOT(9),NONE));
result = kSuccess;

result = vpx_method_Constant_20_Match_20_Graphic_2F_Draw_case_2_local_7(PARAMETERS,TERMINAL(8));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_stripe,0,0);

PaintRect( GETCONSTPOINTER(Rect,*,TERMINAL(6)));
result = kSuccess;

result = vpx_method_Constant_20_Match_20_Graphic_2F_Draw_case_2_local_10(PARAMETERS,TERMINAL(8));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_normal,0,0);

FrameRect( GETCONSTPOINTER(Rect,*,TERMINAL(6)));
result = kSuccess;

result = vpx_method_Constant_20_Match_20_Graphic_2F_Draw_case_2_local_13(PARAMETERS);

SetPenState( GETCONSTPOINTER(PenState,*,TERMINAL(9)));
result = kSuccess;

result = kSuccess;

FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Constant_20_Match_20_Graphic_2F_Draw_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Constant_20_Match_20_Graphic_2F_Draw_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw_20_CG_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw_20_CG_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( -1 0 )",ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_match(PARAMETERS,"match",TERMINAL(9));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(10)
}

enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw_20_CG_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw_20_CG_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 1 0 )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw_20_CG_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw_20_CG_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Constant_20_Match_20_Graphic_2F_Draw_20_CG_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Constant_20_Match_20_Graphic_2F_Draw_20_CG_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw_20_CG_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw_20_CG_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"operation stroke",ROOT(5));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(4),TERMINAL(2),ROOT(6));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(6),ROOT(7),ROOT(8),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(7),TERMINAL(8),TERMINAL(9),TERMINAL(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Rect,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw_20_CG_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw_20_CG_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"operation fill",ROOT(5));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(6));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(6),ROOT(7),ROOT(8),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(7),TERMINAL(8),TERMINAL(9),TERMINAL(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Rect,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw_20_CG_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw_20_CG_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Constant_20_Match_20_Graphic_2F_Draw_20_CG_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4))
vpx_method_Constant_20_Match_20_Graphic_2F_Draw_20_CG_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4);
return outcome;
}

enum opTrigger vpx_method_Constant_20_Match_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_method_Constant_20_Match_20_Graphic_2F_Draw_20_CG_case_1_local_5(PARAMETERS,TERMINAL(3),ROOT(8));

result = vpx_method_Offset_20_Rectangle(PARAMETERS,TERMINAL(7),TERMINAL(8),ROOT(9));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Color_20_Names,1,2,TERMINAL(3),ROOT(11),ROOT(12));

result = vpx_method_Constant_20_Match_20_Graphic_2F_Draw_20_CG_case_1_local_9(PARAMETERS,TERMINAL(1),TERMINAL(10),TERMINAL(5),TERMINAL(11),TERMINAL(12));

result = kSuccess;

FOOTERSINGLECASE(13)
}

/* Stop Universals */



Nat4 VPLC_External_20_CM_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_External_20_CM_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLRectangle");
	return kNOERROR;
}

/* Start Universals: { 256 289 }{ 50 337 } */
enum opTrigger vpx_method_External_20_CM_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_External_20_CM_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(7),ROOT(8));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(8));
NEXTCASEONFAILURE

GetPenState( GETPOINTER(24,PenState,*,ROOT(9),NONE));
result = kSuccess;

result = vpx_method_Set_20_Selected_20_Colors(PARAMETERS,TERMINAL(8));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_stripe,0,0);

PaintRect( GETCONSTPOINTER(Rect,*,TERMINAL(6)));
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_normal,0,0);

FrameRect( GETCONSTPOINTER(Rect,*,TERMINAL(6)));
result = kSuccess;

result = vpx_method_Set_20_Standard_20_Colors(PARAMETERS);

SetPenState( GETCONSTPOINTER(PenState,*,TERMINAL(9)));
result = kSuccess;

result = kSuccess;

FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_External_20_CM_20_Graphic_2F_Draw_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_External_20_CM_20_Graphic_2F_Draw_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 60909 6168 7710 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_External_20_CM_20_Graphic_2F_Draw_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_External_20_CM_20_Graphic_2F_Draw_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 60909 6168 7710 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_External_20_CM_20_Graphic_2F_Draw_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_External_20_CM_20_Graphic_2F_Draw_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"( 0 0 0 )",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_External_20_CM_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_External_20_CM_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(7),ROOT(8));

GetPenState( GETPOINTER(24,PenState,*,ROOT(9),NONE));
result = kSuccess;

result = vpx_method_External_20_CM_20_Graphic_2F_Draw_case_2_local_7(PARAMETERS,TERMINAL(8));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_stripe,0,0);

PaintRect( GETCONSTPOINTER(Rect,*,TERMINAL(6)));
result = kSuccess;

result = vpx_method_External_20_CM_20_Graphic_2F_Draw_case_2_local_10(PARAMETERS,TERMINAL(8));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_normal,0,0);

FrameRect( GETCONSTPOINTER(Rect,*,TERMINAL(6)));
result = kSuccess;

result = vpx_method_External_20_CM_20_Graphic_2F_Draw_case_2_local_13(PARAMETERS);

SetPenState( GETCONSTPOINTER(PenState,*,TERMINAL(9)));
result = kSuccess;

result = kSuccess;

FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_External_20_CM_20_Graphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_External_20_CM_20_Graphic_2F_Draw_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_External_20_CM_20_Graphic_2F_Draw_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_External_20_CM_20_Graphic_2F_Draw_20_CG_case_1_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_External_20_CM_20_Graphic_2F_Draw_20_CG_case_1_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"operation stroke",ROOT(5));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(4),TERMINAL(2),ROOT(6));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(6),ROOT(7),ROOT(8),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(7),TERMINAL(8),TERMINAL(9),TERMINAL(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Rect,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_External_20_CM_20_Graphic_2F_Draw_20_CG_case_1_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_External_20_CM_20_Graphic_2F_Draw_20_CG_case_1_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"operation fill",ROOT(5));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(6));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(6),ROOT(7),ROOT(8),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(7),TERMINAL(8),TERMINAL(9),TERMINAL(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Rect,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_External_20_CM_20_Graphic_2F_Draw_20_CG_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_External_20_CM_20_Graphic_2F_Draw_20_CG_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_External_20_CM_20_Graphic_2F_Draw_20_CG_case_1_local_13_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4))
vpx_method_External_20_CM_20_Graphic_2F_Draw_20_CG_case_1_local_13_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4);
return outcome;
}

enum opTrigger vpx_method_External_20_CM_20_Graphic_2F_Draw_20_CG_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_External_20_CM_20_Graphic_2F_Draw_20_CG_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"white",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(1),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Rect,2,0,TERMINAL(0),TERMINAL(9));

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_External_20_CM_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(17)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"0",ROOT(8));

result = vpx_constant(PARAMETERS,"2",ROOT(9));

result = vpx_constant(PARAMETERS,"-1",ROOT(10));

result = vpx_constant(PARAMETERS,"0",ROOT(11));

result = vpx_method_Inset_20_Rectangle(PARAMETERS,TERMINAL(7),TERMINAL(11),TERMINAL(10),ROOT(12));

result = vpx_method_Inset_20_Rectangle(PARAMETERS,TERMINAL(12),TERMINAL(8),TERMINAL(9),ROOT(13));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(12),ROOT(14));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Color_20_Names,1,2,TERMINAL(3),ROOT(15),ROOT(16));

result = vpx_method_External_20_CM_20_Graphic_2F_Draw_20_CG_case_1_local_13(PARAMETERS,TERMINAL(1),TERMINAL(14),TERMINAL(5),TERMINAL(15),TERMINAL(16));

result = vpx_method_External_20_CM_20_Graphic_2F_Draw_20_CG_case_1_local_14(PARAMETERS,TERMINAL(1),TERMINAL(13),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(17)
}

/* Stop Universals */



Nat4 VPLC_Super_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Super_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Region",tempClass,NULL,environment);
	tempAttribute = attribute_add("Path",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Default Triangle Graphic");
	return kNOERROR;
}

/* Start Universals: { 312 774 }{ 200 300 } */
enum opTrigger vpx_method_Super_20_Graphic_2F_Draw_20_CG_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Super_20_Graphic_2F_Draw_20_CG_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"super fill",ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(2),TERMINAL(7),ROOT(8));
CONTINUEONFAILURE

result = vpx_constant(PARAMETERS,"super stroke",ROOT(9));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(9),TERMINAL(7),ROOT(10));
CONTINUEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_And_20_Stroke_20_Path,3,0,TERMINAL(1),TERMINAL(8),TERMINAL(10));

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Super_20_Graphic_2F_Draw_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Super_20_Graphic_2F_Draw_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Frame_20_To_20_Path,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_Super_20_Graphic_2F_Draw_20_CG_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Super_20_Graphic_2F_Draw_20_CG_case_2_local_3_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Super_20_Graphic_2F_Draw_20_CG_case_2_local_3_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(3),ROOT(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(2),TERMINAL(4),TERMINAL(5),TERMINAL(6),TERMINAL(7));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Should_20_Antialias,2,0,TERMINAL(2),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Path,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Should_20_Antialias,2,0,TERMINAL(2),TERMINAL(9));

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Super_20_Graphic_2F_Draw_20_CG_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Super_20_Graphic_2F_Draw_20_CG_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"super fill",ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_method_Super_20_Graphic_2F_Draw_20_CG_case_2_local_3_case_1_local_6(PARAMETERS,TERMINAL(2),TERMINAL(7),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Super_20_Graphic_2F_Draw_20_CG_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Super_20_Graphic_2F_Draw_20_CG_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"super stroke",ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(2),TERMINAL(7),ROOT(8));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(8),ROOT(9),ROOT(10),ROOT(11),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(1),TERMINAL(9),TERMINAL(10),TERMINAL(11),TERMINAL(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Path,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Super_20_Graphic_2F_Draw_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Super_20_Graphic_2F_Draw_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Frame_20_To_20_Path,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_Super_20_Graphic_2F_Draw_20_CG_case_2_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Frame_20_To_20_Path,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_Super_20_Graphic_2F_Draw_20_CG_case_2_local_5(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Super_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Super_20_Graphic_2F_Draw_20_CG_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Super_20_Graphic_2F_Draw_20_CG_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Super_20_Graphic_2F_Frame_20_To_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Super_20_Graphic_2F_Frame_20_To_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(19)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(6),ROOT(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(9),TERMINAL(7),ROOT(10));

result = vpx_constant(PARAMETERS,"2",ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(10),TERMINAL(11),ROOT(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(7),TERMINAL(12),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(14),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(9),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(7),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(15),TERMINAL(16),TERMINAL(17),ROOT(18));

result = kSuccess;

OUTPUT(0,TERMINAL(18))
FOOTER(19)
}

enum opTrigger vpx_method_Super_20_Graphic_2F_Frame_20_To_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Super_20_Graphic_2F_Frame_20_To_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Super_20_Graphic_2F_Frame_20_To_20_Corners(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Super_20_Graphic_2F_Frame_20_To_20_Corners_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Super_20_Graphic_2F_Frame_20_To_20_Corners_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Breakpoint_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Breakpoint_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Default Oval Graphic");
	return kNOERROR;
}

/* Start Universals: { 269 537 }{ 200 300 } */
enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"5",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Star,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Path,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_1_local_6_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_1_local_6_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(21)
INPUT(0,0)
result = kSuccess;

result = vpx_method_From_20_CGRect(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2),ROOT(3),ROOT(4));

result = vpx_method_Half(PARAMETERS,TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(5),ROOT(6));

result = vpx_method_Half(PARAMETERS,TERMINAL(4),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(7),ROOT(8));

result = vpx_method_New_20_CGRect(PARAMETERS,TERMINAL(1),TERMINAL(2),TERMINAL(6),TERMINAL(4),ROOT(9));

result = vpx_constant(PARAMETERS,"0",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(5),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(1),TERMINAL(11),ROOT(12));

result = vpx_method_New_20_CGRect(PARAMETERS,TERMINAL(12),TERMINAL(2),TERMINAL(6),TERMINAL(4),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(7),TERMINAL(10),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(2),TERMINAL(14),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(13),TERMINAL(9),ROOT(16));

result = vpx_constant(PARAMETERS,"1",ROOT(17));

result = vpx_constant(PARAMETERS,"2",ROOT(18));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(16))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
PUTSTRUCTURE(16,CGRect,CGRectInset( GETSTRUCTURE(16,CGRect,LIST(16)),GETREAL(TERMINAL(17)),GETREAL(TERMINAL(18))),19);
result = kSuccess;
LISTROOT(19,0)
REPEATFINISH
LISTROOTFINISH(19,0)
LISTROOTEND
} else {
ROOTEMPTY(19)
}

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(0),ROOT(20));

result = kSuccess;

OUTPUT(0,TERMINAL(19))
FOOTER(21)
}

enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_1_local_6_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_1_local_6_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(1));

PUTSTRUCTURE(16,CGRect,CGRectInset( GETSTRUCTURE(16,CGRect,TERMINAL(0)),GETREAL(TERMINAL(1)),GETREAL(TERMINAL(1))),2);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_1_local_6_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_1_local_6_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_1_local_6_case_2_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_1_local_6_case_2_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_1_local_6_case_2_local_2(PARAMETERS,TERMINAL(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Rect,2,0,TERMINAL(0),LIST(2));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Path,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"breakpoint fill",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"breakpoint fill",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Oval,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"5",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Star,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Path,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8_case_1_local_6_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8_case_1_local_6_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(20)
INPUT(0,0)
result = kSuccess;

result = vpx_method_From_20_CGRect(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2),ROOT(3),ROOT(4));

result = vpx_method_Half(PARAMETERS,TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(5),ROOT(6));

result = vpx_method_Half(PARAMETERS,TERMINAL(4),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(7),ROOT(8));

result = vpx_method_New_20_CGRect(PARAMETERS,TERMINAL(1),TERMINAL(2),TERMINAL(6),TERMINAL(4),ROOT(9));

result = vpx_constant(PARAMETERS,"0",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(5),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(1),TERMINAL(11),ROOT(12));

result = vpx_method_New_20_CGRect(PARAMETERS,TERMINAL(12),TERMINAL(2),TERMINAL(6),TERMINAL(4),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(7),TERMINAL(10),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(2),TERMINAL(14),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(13),TERMINAL(9),ROOT(16));

result = vpx_constant(PARAMETERS,"1",ROOT(17));

result = vpx_constant(PARAMETERS,"2",ROOT(18));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(16))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
PUTSTRUCTURE(16,CGRect,CGRectInset( GETSTRUCTURE(16,CGRect,LIST(16)),GETREAL(TERMINAL(17)),GETREAL(TERMINAL(18))),19);
result = kSuccess;
LISTROOT(19,0)
REPEATFINISH
LISTROOTFINISH(19,0)
LISTROOTEND
} else {
ROOTEMPTY(19)
}

result = kSuccess;

OUTPUT(0,TERMINAL(19))
FOOTER(20)
}

enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8_case_1_local_6_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8_case_1_local_6_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(1));

PUTSTRUCTURE(16,CGRect,CGRectInset( GETSTRUCTURE(16,CGRect,TERMINAL(0)),GETREAL(TERMINAL(1)),GETREAL(TERMINAL(1))),2);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8_case_1_local_6_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8_case_1_local_6_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8_case_1_local_6_case_2_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8_case_1_local_6_case_2_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8_case_1_local_6_case_2_local_2(PARAMETERS,TERMINAL(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Rect,2,0,TERMINAL(0),LIST(2));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Path,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"breakpoint stroke",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"breakpoint stroke",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Oval,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(5),ROOT(9));

result = vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_7(PARAMETERS,TERMINAL(1),TERMINAL(8),TERMINAL(9));

result = vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG_case_1_local_8(PARAMETERS,TERMINAL(1),TERMINAL(8),TERMINAL(9));

result = kSuccess;

FOOTERSINGLECASE(10)
}

/* Stop Universals */



Nat4 VPLC_Inject_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Inject_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Default Oval Graphic");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Inject_20_Graphic_2F_Draw_20_CG_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Inject_20_Graphic_2F_Draw_20_CG_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"inject fill",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Oval,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Inject_20_Graphic_2F_Draw_20_CG_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Inject_20_Graphic_2F_Draw_20_CG_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"inject stroke",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Oval,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Inject_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(5),ROOT(9));

result = vpx_method_Inject_20_Graphic_2F_Draw_20_CG_case_1_local_7(PARAMETERS,TERMINAL(1),TERMINAL(8),TERMINAL(9));

result = vpx_method_Inject_20_Graphic_2F_Draw_20_CG_case_1_local_8(PARAMETERS,TERMINAL(1),TERMINAL(8),TERMINAL(9));

result = kSuccess;

FOOTERSINGLECASE(10)
}

/* Stop Universals */



Nat4 VPLC_Evaluate_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Evaluate_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Oval Width",tempClass,tempAttribute_Evaluate_20_Graphic_2F_Oval_20_Width,environment);
	tempAttribute = attribute_add("Oval Height",tempClass,tempAttribute_Evaluate_20_Graphic_2F_Oval_20_Height,environment);
	tempAttribute = attribute_add("Inset",tempClass,tempAttribute_Evaluate_20_Graphic_2F_Inset,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLRoundRectangle");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Evaluate_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Evaluate_20_Graphic_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(18)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(9),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(7),ROOT(11),ROOT(12));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(12));
NEXTCASEONFAILURE

GetPenState( GETPOINTER(24,PenState,*,ROOT(13),NONE));
result = kSuccess;

result = vpx_method_Set_20_Selected_20_Colors(PARAMETERS,TERMINAL(12));

FrameRoundRect( GETCONSTPOINTER(Rect,*,TERMINAL(10)),GETINTEGER(TERMINAL(5)),GETINTEGER(TERMINAL(3)));
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Inset,TERMINAL(6),ROOT(14),ROOT(15));

result = vpx_constant(PARAMETERS,"0",ROOT(16));

InsetRect( GETPOINTER(8,Rect,*,ROOT(17),TERMINAL(10)),GETINTEGER(TERMINAL(16)),GETINTEGER(TERMINAL(15)));
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_stripe,0,0);

PaintRect( GETCONSTPOINTER(Rect,*,TERMINAL(17)));
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_normal,0,0);

FrameRect( GETCONSTPOINTER(Rect,*,TERMINAL(17)));
result = kSuccess;

result = vpx_method_Set_20_Standard_20_Colors(PARAMETERS);

SetPenState( GETCONSTPOINTER(PenState,*,TERMINAL(13)));
result = kSuccess;

result = kSuccess;

FOOTERWITHNONE(18)
}

enum opTrigger vpx_method_Evaluate_20_Graphic_2F_Draw_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Evaluate_20_Graphic_2F_Draw_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 60909 6168 7710 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Evaluate_20_Graphic_2F_Draw_case_2_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Evaluate_20_Graphic_2F_Draw_case_2_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 60909 6168 7710 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Evaluate_20_Graphic_2F_Draw_case_2_local_17(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Evaluate_20_Graphic_2F_Draw_case_2_local_17(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 60909 6168 7710 )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Evaluate_20_Graphic_2F_Draw_case_2_local_20(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Evaluate_20_Graphic_2F_Draw_case_2_local_20(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"( 0 0 0 )",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_fore_2D_color,1,0,TERMINAL(3));

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_back_2D_color,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Evaluate_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Evaluate_20_Graphic_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(18)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(9),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(7),ROOT(11),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_pen_2D_state,0,1,ROOT(13));

result = vpx_method_Evaluate_20_Graphic_2F_Draw_case_2_local_9(PARAMETERS,TERMINAL(12));

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_round_2D_rect,3,0,TERMINAL(10),TERMINAL(5),TERMINAL(3));

result = vpx_get(PARAMETERS,kVPXValue_Inset,TERMINAL(6),ROOT(14),ROOT(15));

result = vpx_constant(PARAMETERS,"0",ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_inset_2D_rect,3,1,TERMINAL(10),TERMINAL(16),TERMINAL(15),ROOT(17));

result = vpx_method_Evaluate_20_Graphic_2F_Draw_case_2_local_14(PARAMETERS,TERMINAL(12));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_stripe,0,0);

result = vpx_call_primitive(PARAMETERS,VPLP_paint_2D_rect,1,0,TERMINAL(17));

result = vpx_method_Evaluate_20_Graphic_2F_Draw_case_2_local_17(PARAMETERS,TERMINAL(12));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_normal,0,0);

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_rect,1,0,TERMINAL(17));

result = vpx_method_Evaluate_20_Graphic_2F_Draw_case_2_local_20(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_pen_2D_state,1,0,TERMINAL(13));

result = kSuccess;

FOOTER(18)
}

enum opTrigger vpx_method_Evaluate_20_Graphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Evaluate_20_Graphic_2F_Draw_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Evaluate_20_Graphic_2F_Draw_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Evaluate_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Oper_20_Erase_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Oper_20_Frame_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(6));

result = vpx_constant(PARAMETERS,"0",ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Inset,TERMINAL(0),ROOT(8),ROOT(9));

result = vpx_method_Inset_20_Rectangle(PARAMETERS,TERMINAL(5),TERMINAL(9),TERMINAL(7),ROOT(10));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(10),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Oper_20_Fill_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Oper_20_Inset_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(11));

result = vpx_method_Inset_20_Rectangle(PARAMETERS,TERMINAL(10),TERMINAL(9),TERMINAL(7),ROOT(12));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(12),ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Oper_20_Inset_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(13));

result = kSuccess;

FOOTERSINGLECASE(14)
}

/* Stop Universals */



Nat4 VPLC_Default_20_Triangle_20_Graphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Default_20_Triangle_20_Graphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Region",tempClass,NULL,environment);
	tempAttribute = attribute_add("Path",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLFramedRegion");
	return kNOERROR;
}

/* Start Universals: { 427 674 }{ 200 300 } */
enum opTrigger vpx_method_Default_20_Triangle_20_Graphic_2F_Frame_20_To_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Default_20_Triangle_20_Graphic_2F_Frame_20_To_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(21)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"1",ROOT(6));

result = vpx_method_Inset_20_Rectangle(PARAMETERS,TERMINAL(1),TERMINAL(6),TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(7),ROOT(8),ROOT(9),ROOT(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(11),TERMINAL(9),ROOT(12));

result = vpx_constant(PARAMETERS,"2",ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(12),TERMINAL(13),ROOT(14),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(9),TERMINAL(14),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(16),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(10),TERMINAL(11),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(10),TERMINAL(9),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(17),TERMINAL(18),TERMINAL(19),ROOT(20));

result = kSuccess;

OUTPUT(0,TERMINAL(20))
FOOTER(21)
}

enum opTrigger vpx_method_Default_20_Triangle_20_Graphic_2F_Frame_20_To_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Default_20_Triangle_20_Graphic_2F_Frame_20_To_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Default_20_Triangle_20_Graphic_2F_Frame_20_To_20_Corners(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Default_20_Triangle_20_Graphic_2F_Frame_20_To_20_Corners_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Default_20_Triangle_20_Graphic_2F_Frame_20_To_20_Corners_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Default_20_Triangle_20_Graphic_2F_Draw_20_CG_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Default_20_Triangle_20_Graphic_2F_Draw_20_CG_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"operation stroke",ROOT(7));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(7),TERMINAL(6),ROOT(8));
CONTINUEONFAILURE

result = vpx_constant(PARAMETERS,"1.2",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Line_20_Width,2,0,TERMINAL(1),TERMINAL(9));

result = vpx_constant(PARAMETERS,"operation fill",ROOT(10));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(10),TERMINAL(6),ROOT(11));
CONTINUEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_And_20_Stroke_20_Path,3,0,TERMINAL(1),TERMINAL(11),TERMINAL(8));

result = vpx_constant(PARAMETERS,"1.0",ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Line_20_Width,2,0,TERMINAL(1),TERMINAL(12));

result = kSuccess;

FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Default_20_Triangle_20_Graphic_2F_Draw_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Default_20_Triangle_20_Graphic_2F_Draw_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Frame_20_To_20_Path,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_Default_20_Triangle_20_Graphic_2F_Draw_20_CG_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Default_20_Triangle_20_Graphic_2F_Draw_20_CG_case_2_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Default_20_Triangle_20_Graphic_2F_Draw_20_CG_case_2_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(3),ROOT(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(2),TERMINAL(4),TERMINAL(5),TERMINAL(6),TERMINAL(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Path,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Default_20_Triangle_20_Graphic_2F_Draw_20_CG_case_2_local_3_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Default_20_Triangle_20_Graphic_2F_Draw_20_CG_case_2_local_3_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(3),ROOT(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(2),TERMINAL(4),TERMINAL(5),TERMINAL(6),TERMINAL(7));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Should_20_Antialias,2,0,TERMINAL(2),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Path,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Should_20_Antialias,2,0,TERMINAL(2),TERMINAL(9));

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Default_20_Triangle_20_Graphic_2F_Draw_20_CG_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Default_20_Triangle_20_Graphic_2F_Draw_20_CG_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"operation fill",ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"white",ROOT(7));

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(6),ROOT(8));

result = vpx_method_Default_20_Triangle_20_Graphic_2F_Draw_20_CG_case_2_local_3_case_1_local_7(PARAMETERS,TERMINAL(7),TERMINAL(8),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Frame_20_To_20_Path,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_Default_20_Triangle_20_Graphic_2F_Draw_20_CG_case_2_local_3_case_1_local_9(PARAMETERS,TERMINAL(2),TERMINAL(8),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Default_20_Triangle_20_Graphic_2F_Draw_20_CG_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Default_20_Triangle_20_Graphic_2F_Draw_20_CG_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"operation stroke",ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(2),TERMINAL(7),ROOT(8));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(8),ROOT(9),ROOT(10),ROOT(11),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(1),TERMINAL(9),TERMINAL(10),TERMINAL(11),TERMINAL(12));

result = vpx_constant(PARAMETERS,"1.2",ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Line_20_Width,2,0,TERMINAL(1),TERMINAL(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Path,1,0,TERMINAL(1));

result = vpx_constant(PARAMETERS,"1.0",ROOT(14));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Line_20_Width,2,0,TERMINAL(1),TERMINAL(14));

result = kSuccess;

FOOTERSINGLECASE(15)
}

enum opTrigger vpx_method_Default_20_Triangle_20_Graphic_2F_Draw_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Default_20_Triangle_20_Graphic_2F_Draw_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Frame_20_To_20_Path,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_Default_20_Triangle_20_Graphic_2F_Draw_20_CG_case_2_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Frame_20_To_20_Path,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_Default_20_Triangle_20_Graphic_2F_Draw_20_CG_case_2_local_5(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Default_20_Triangle_20_Graphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Default_20_Triangle_20_Graphic_2F_Draw_20_CG_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Default_20_Triangle_20_Graphic_2F_Draw_20_CG_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

/* Stop Universals */






Nat4	loadClasses_MyCaseGraphics(V_Environment environment);
Nat4	loadClasses_MyCaseGraphics(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Basic IO Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Basic_20_IO_20_Graphic_class_load(result,environment);
	result = class_new("Continue Failure Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Continue_20_Failure_20_Graphic_class_load(result,environment);
	result = class_new("Default Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Default_20_Graphic_class_load(result,environment);
	result = class_new("Default Oval Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Default_20_Oval_20_Graphic_class_load(result,environment);
	result = class_new("External Get Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_External_20_Get_20_Graphic_class_load(result,environment);
	result = class_new("External Set Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_External_20_Set_20_Graphic_class_load(result,environment);
	result = class_new("Fail Failure Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Fail_20_Failure_20_Graphic_class_load(result,environment);
	result = class_new("Fail Success Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Fail_20_Success_20_Graphic_class_load(result,environment);
	result = class_new("Finish Failure Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Finish_20_Failure_20_Graphic_class_load(result,environment);
	result = class_new("Finish Success Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Finish_20_Success_20_Graphic_class_load(result,environment);
	result = class_new("Get Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Get_20_Graphic_class_load(result,environment);
	result = class_new("InputBar Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_InputBar_20_Graphic_class_load(result,environment);
	result = class_new("Instance Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Instance_20_Graphic_class_load(result,environment);
	result = class_new("List IO Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_List_20_IO_20_Graphic_class_load(result,environment);
	result = class_new("Local Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Local_20_Graphic_class_load(result,environment);
	result = class_new("Loop IO Root Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Loop_20_IO_20_Root_20_Graphic_class_load(result,environment);
	result = class_new("Loop IO Terminal Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Loop_20_IO_20_Terminal_20_Graphic_class_load(result,environment);
	result = class_new("Next Case Failure Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Next_20_Case_20_Failure_20_Graphic_class_load(result,environment);
	result = class_new("Next Case Success Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Next_20_Case_20_Success_20_Graphic_class_load(result,environment);
	result = class_new("OutputBar Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_OutputBar_20_Graphic_class_load(result,environment);
	result = class_new("Persistent Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Persistent_20_Graphic_class_load(result,environment);
	result = class_new("Primitive Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Primitive_20_Graphic_class_load(result,environment);
	result = class_new("Procedure Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Procedure_20_Graphic_class_load(result,environment);
	result = class_new("Repeat Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Repeat_20_Graphic_class_load(result,environment);
	result = class_new("Set Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Set_20_Graphic_class_load(result,environment);
	result = class_new("Terminate Failure Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Terminate_20_Failure_20_Graphic_class_load(result,environment);
	result = class_new("Terminate Success Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Terminate_20_Success_20_Graphic_class_load(result,environment);
	result = class_new("Universal Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Universal_20_Graphic_class_load(result,environment);
	result = class_new("Constant Match Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Constant_20_Match_20_Graphic_class_load(result,environment);
	result = class_new("External CM Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_External_20_CM_20_Graphic_class_load(result,environment);
	result = class_new("Super Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Super_20_Graphic_class_load(result,environment);
	result = class_new("Breakpoint Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Breakpoint_20_Graphic_class_load(result,environment);
	result = class_new("Inject Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Inject_20_Graphic_class_load(result,environment);
	result = class_new("Evaluate Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Evaluate_20_Graphic_class_load(result,environment);
	result = class_new("Default Triangle Graphic",environment);
	if(result == NULL) return kERROR;
	VPLC_Default_20_Triangle_20_Graphic_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_MyCaseGraphics(V_Environment environment);
Nat4	loadUniversals_MyCaseGraphics(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Set Selected Colors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Set_20_Selected_20_Colors,NULL);

	result = method_new("Set Standard Colors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Set_20_Standard_20_Colors,NULL);

	result = method_new("Set Selected BackColor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Set_20_Selected_20_BackColor,NULL);

	result = method_new("Set Selected ForeColor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Set_20_Selected_20_ForeColor,NULL);

	result = method_new("Basic IO Graphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Basic_20_IO_20_Graphic_2F_Draw,NULL);

	result = method_new("Basic IO Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Basic_20_IO_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("Continue Failure Graphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Continue_20_Failure_20_Graphic_2F_Draw,NULL);

	result = method_new("Continue Failure Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Continue_20_Failure_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("Default Graphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Default_20_Graphic_2F_Draw,NULL);

	result = method_new("Default Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Default_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("Default Oval Graphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Default_20_Oval_20_Graphic_2F_Draw,NULL);

	result = method_new("Default Oval Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Default_20_Oval_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("External Get Graphic/Frame To Corners",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_External_20_Get_20_Graphic_2F_Frame_20_To_20_Corners,NULL);

	result = method_new("External Get Graphic/Frame To Repeat Corners",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_External_20_Get_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners,NULL);

	result = method_new("External Set Graphic/Frame To Corners",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_External_20_Set_20_Graphic_2F_Frame_20_To_20_Corners,NULL);

	result = method_new("External Set Graphic/Frame To Repeat Corners",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_External_20_Set_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners,NULL);

	result = method_new("Fail Failure Graphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Fail_20_Failure_20_Graphic_2F_Draw,NULL);

	result = method_new("Fail Failure Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Fail_20_Failure_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("Fail Success Graphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Fail_20_Success_20_Graphic_2F_Draw,NULL);

	result = method_new("Fail Success Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Fail_20_Success_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("Finish Failure Graphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Finish_20_Failure_20_Graphic_2F_Draw,NULL);

	result = method_new("Finish Failure Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Finish_20_Failure_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("Finish Success Graphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Finish_20_Success_20_Graphic_2F_Draw,NULL);

	result = method_new("Finish Success Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Finish_20_Success_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("Get Graphic/Frame To Corners",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Graphic_2F_Frame_20_To_20_Corners,NULL);

	result = method_new("Get Graphic/Frame To Repeat Corners",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners,NULL);

	result = method_new("InputBar Graphic/Frame To Corners",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_InputBar_20_Graphic_2F_Frame_20_To_20_Corners,NULL);

	result = method_new("Instance Graphic/Frame To Corners",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Instance_20_Graphic_2F_Frame_20_To_20_Corners,NULL);

	result = method_new("Instance Graphic/Frame To Repeat Corners",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Instance_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners,NULL);

	result = method_new("List IO Graphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_IO_20_Graphic_2F_Draw,NULL);

	result = method_new("List IO Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_IO_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("Local Graphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Local_20_Graphic_2F_Draw,NULL);

	result = method_new("Local Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Local_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("Loop IO Root Graphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw,NULL);

	result = method_new("Loop IO Root Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Loop_20_IO_20_Root_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("Loop IO Terminal Graphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw,NULL);

	result = method_new("Loop IO Terminal Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Loop_20_IO_20_Terminal_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("Next Case Failure Graphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Next_20_Case_20_Failure_20_Graphic_2F_Draw,NULL);

	result = method_new("Next Case Failure Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Next_20_Case_20_Failure_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("Next Case Success Graphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Next_20_Case_20_Success_20_Graphic_2F_Draw,NULL);

	result = method_new("Next Case Success Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Next_20_Case_20_Success_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("OutputBar Graphic/Frame To Corners",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_OutputBar_20_Graphic_2F_Frame_20_To_20_Corners,NULL);

	result = method_new("Persistent Graphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Persistent_20_Graphic_2F_Draw,NULL);

	result = method_new("Persistent Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Persistent_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("Primitive Graphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitive_20_Graphic_2F_Draw,NULL);

	result = method_new("Primitive Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitive_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("Procedure Graphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Procedure_20_Graphic_2F_Draw,NULL);

	result = method_new("Procedure Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Procedure_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("Repeat Graphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Repeat_20_Graphic_2F_Draw,NULL);

	result = method_new("Repeat Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Repeat_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("Repeat Graphic/Draw Repeat Frame CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Frame_20_CG,NULL);

	result = method_new("Repeat Graphic/Draw Repeat Erase CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Repeat_20_Graphic_2F_Draw_20_Repeat_20_Erase_20_CG,NULL);

	result = method_new("Set Graphic/Frame To Corners",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Set_20_Graphic_2F_Frame_20_To_20_Corners,NULL);

	result = method_new("Set Graphic/Frame To Repeat Corners",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Set_20_Graphic_2F_Frame_20_To_20_Repeat_20_Corners,NULL);

	result = method_new("Terminate Failure Graphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Terminate_20_Failure_20_Graphic_2F_Draw,NULL);

	result = method_new("Terminate Failure Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Terminate_20_Failure_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("Terminate Success Graphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Terminate_20_Success_20_Graphic_2F_Draw,NULL);

	result = method_new("Terminate Success Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Terminate_20_Success_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("Universal Graphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Graphic_2F_Draw,NULL);

	result = method_new("Universal Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("Constant Match Graphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Constant_20_Match_20_Graphic_2F_Draw,NULL);

	result = method_new("Constant Match Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Constant_20_Match_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("External CM Graphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_External_20_CM_20_Graphic_2F_Draw,NULL);

	result = method_new("External CM Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_External_20_CM_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("Super Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Super_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("Super Graphic/Frame To Corners",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Super_20_Graphic_2F_Frame_20_To_20_Corners,NULL);

	result = method_new("Breakpoint Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Breakpoint_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("Inject Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Inject_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("Evaluate Graphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Evaluate_20_Graphic_2F_Draw,NULL);

	result = method_new("Evaluate Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Evaluate_20_Graphic_2F_Draw_20_CG,NULL);

	result = method_new("Default Triangle Graphic/Frame To Corners",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Default_20_Triangle_20_Graphic_2F_Frame_20_To_20_Corners,NULL);

	result = method_new("Default Triangle Graphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Default_20_Triangle_20_Graphic_2F_Draw_20_CG,NULL);

	return kNOERROR;

}


	Nat4 tempPersistent_Normal_20_Colors[] = {
0000000000, 0X00000070, 0X00000024, 0X00000004, 0X00000014, 0X00000048, 0X00000044, 0X00000040,
0X00000038, 0X023F0007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000040, 0X00000003,
0X0000004C, 0X00000064, 0X0000007C, 0X02360004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00001818, 0X023F0004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002222, 0X02390004,
0000000000, 0000000000, 0000000000, 0000000000, 0X0000CDCD
	};
	Nat4 tempPersistent_Debug_20_Colors[] = {
0000000000, 0X00000070, 0X00000024, 0X00000004, 0X00000014, 0X00000048, 0X00000044, 0X00000040,
0X00000038, 0X023F0007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000040, 0X00000003,
0X0000004C, 0X00000064, 0X0000007C, 0X02360004, 0000000000, 0000000000, 0000000000, 0000000000,
0X0000CDCD, 0X02360004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001818, 0X02370004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00002222
	};
	Nat4 tempPersistent_Skip_20_Colors[] = {
0000000000, 0X00000070, 0X00000024, 0X00000004, 0X00000014, 0X00000048, 0X00000044, 0X00000040,
0X00000038, 0X023F0007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000040, 0X00000003,
0X0000004C, 0X00000064, 0X0000007C, 0X02360004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00002222, 0X023F0004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000CDCD, 0X023D0004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00001818
	};
	Nat4 tempPersistent_Selected_20_Colors[] = {
0000000000, 0X00000070, 0X00000024, 0X00000004, 0X00000014, 0X00000048, 0X00000044, 0X00000040,
0X00000038, 0X023B0007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000040, 0X00000003,
0X0000004C, 0X00000064, 0X0000007C, 0X023C0004, 0000000000, 0000000000, 0000000000, 0000000000,
0X0000EDED, 0X023C0004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001818, 0X06920004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00001E1E
	};
	Nat4 tempPersistent_Comment_20_Colors[] = {
0000000000, 0X00000070, 0X00000024, 0X00000004, 0X00000014, 0X00000048, 0X00000044, 0X00000040,
0X00000038, 0X02F90007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000040, 0X00000003,
0X0000004C, 0X00000064, 0X0000007C, 0X02F50004, 0000000000, 0000000000, 0000000000, 0000000000,
0X0000FFFF, 0X06B80004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000FFFF, 0X023D0004,
0000000000, 0000000000, 0000000000, 0000000000, 0X0000FFFF
	};
	Nat4 tempPersistent_Current_20_Colors[] = {
0000000000, 0X00000070, 0X00000024, 0X00000004, 0X00000014, 0X00000048, 0X00000044, 0X00000040,
0X00000038, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000040, 0X00000003,
0X0000004C, 0X00000064, 0X0000007C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X0000C350, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00007530, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00001770
	};

Nat4	loadPersistents_MyCaseGraphics(V_Environment environment);
Nat4	loadPersistents_MyCaseGraphics(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	tempPersistent = create_persistentNode("Normal Colors",tempPersistent_Normal_20_Colors,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Debug Colors",tempPersistent_Debug_20_Colors,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Skip Colors",tempPersistent_Skip_20_Colors,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Selected Colors",tempPersistent_Selected_20_Colors,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Comment Colors",tempPersistent_Comment_20_Colors,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Current Colors",tempPersistent_Current_20_Colors,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	return kNOERROR;

}

Nat4	load_MyCaseGraphics(V_Environment environment);
Nat4	load_MyCaseGraphics(V_Environment environment)
{

	loadClasses_MyCaseGraphics(environment);
	loadUniversals_MyCaseGraphics(environment);
	loadPersistents_MyCaseGraphics(environment);
	return kNOERROR;

}

