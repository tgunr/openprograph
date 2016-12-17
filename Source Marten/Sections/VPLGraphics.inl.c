/* A VPL Section File */
/*

VPLGraphics.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_Add_20_Point(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(2),TERMINAL(4),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(3),TERMINAL(5),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Debug(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"\"\n\"",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Ints_20_To_20_Rect(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Point_20_In_20_Rect_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Point_20_In_20_Rect_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_lte,2,0,TERMINAL(5),TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_lt,2,0,TERMINAL(3),TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_lte,2,0,TERMINAL(4),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_lt,2,0,TERMINAL(2),TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Point_20_In_20_Rect_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Point_20_In_20_Rect_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Point_20_In_20_Rect(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Point_20_In_20_Rect_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Point_20_In_20_Rect_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Rect_20_To_20_Ints(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(0),ROOT(1),ROOT(2),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
OUTPUT(2,TERMINAL(3))
OUTPUT(3,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Subtract_20_Point(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(2),TERMINAL(4),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(3),TERMINAL(5),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Rectangle_20_Center(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(0),ROOT(1),ROOT(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(1),TERMINAL(3),ROOT(5));

result = vpx_constant(PARAMETERS,"2",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(5),TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(2),TERMINAL(4),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(9),TERMINAL(6),ROOT(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(7),TERMINAL(10),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Offset_20_Rectangle(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(0),ROOT(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(2),TERMINAL(6),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(3),TERMINAL(7),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(4),TERMINAL(6),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(5),TERMINAL(7),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(8),TERMINAL(9),TERMINAL(10),TERMINAL(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"operation fill",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.93 0.09 0.12 0.75 )",ROOT(2));

result = vpx_constant(PARAMETERS,"( 0.09 0.14 0.8 0.3 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"operation stroke",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.09 0.14 0.8 1.0 )",ROOT(2));

result = vpx_constant(PARAMETERS,"( 0.53 0.0 0.07 1.0 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(3),TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"operation text background",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.93 0.09 0.12 0.35 )",ROOT(2));

result = vpx_constant(PARAMETERS,"( 1.0 1.0 1.0 1.0 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_4_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_4_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"65535",ROOT(2));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_constant(PARAMETERS,"32",ROOT(4));

PUTINTEGER(GetThemeBrushAsColor( GETINTEGER(TERMINAL(0)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(3)),GETPOINTER(8,RGBColor,*,ROOT(6),NONE)),5);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_to_2D_list,1,1,TERMINAL(6),ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,LIST(7),TERMINAL(2),ROOT(8));
LISTROOT(8,0)
REPEATFINISH
LISTROOTFINISH(8,0)
LISTROOTEND
} else {
ROOTEMPTY(8)
}

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(8),TERMINAL(1),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASEWITHNONE(10)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"list item background",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kThemeBrushAlternatePrimaryHighlightColor,ROOT(2));

result = vpx_extconstant(PARAMETERS,kThemeBrushPrimaryHighlightColor,ROOT(3));

result = vpx_constant(PARAMETERS,"1.0",ROOT(4));

result = vpx_method_Get_20_Theme_20_Brush_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_method_Get_20_Item_20_RGBA_case_4_local_7(PARAMETERS,TERMINAL(2),TERMINAL(4),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(6),TERMINAL(5),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"io fill",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.93 0.09 0.12 1.0 )",ROOT(2));

result = vpx_constant(PARAMETERS,"( 1.0 1.0 1.0 1.0 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"io stroke",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.93 0.09 0.12 1.0 )",ROOT(2));

result = vpx_constant(PARAMETERS,"( 0.09 0.14 0.8 1.0 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"control stroke",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.93 0.09 0.12 1.0 )",ROOT(2));

result = vpx_constant(PARAMETERS,"( 0.0 0.0 0.0 1.0 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"control fill",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.93 0.09 0.12 0.35 )",ROOT(2));

result = vpx_constant(PARAMETERS,"( 1.0 1.0 1.0 1.0 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"success fill",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.1 0.78 0.1 1.0 )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"success stroke",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.0 0.4 0.0 1.0 )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_11(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_11(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"failure stroke",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.93 0.09 0.12 1.0 )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_12(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_12(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"failure fill",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.93 0.09 0.12 1.0 )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_13(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_13(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"dataflow stroke",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.0 0.0 0.0 1.0 )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_14(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_14(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"synchro stroke",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.0 0.0 0.0 0.77 )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_15(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_15(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"breakpoint fill",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.949 0.831 0.537 1.0 )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_16(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_16(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"breakpoint stroke",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.0 0.0 0.0 0.7 )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_17(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_17(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"super fill",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.0 0.0 0.0 1.0 )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_18(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_18(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"super stroke",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.0 0.0 0.0 1.0 )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_19(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_19(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"inject fill",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 1.0 1.0 1.0 1.0 )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_20(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_20(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"inject stroke",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.09 0.14 0.8 1.0 )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_21(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_21(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"synchro tracking",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.93 0.09 0.12 0.4 )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_22(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_22(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"dataflow tracking",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.93 0.09 0.12 0.4 )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_23(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_23(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"black",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.0 0.0 0.0 1.0 )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_24(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_24(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"white",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 1.0 1.0 1.0 1.0 )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_25(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_25(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"operation debug fill",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.009 0.518 0.173 0.75 )",ROOT(2));

result = vpx_constant(PARAMETERS,"( 0.93 0.09 0.12 0.75 )",ROOT(3));

result = vpx_constant(PARAMETERS,"( 0.129 0.658 0.392 0.75 )",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_26(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_26(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"operation debug stroke",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.129 0.658 0.392 1.0 )",ROOT(2));

result = vpx_constant(PARAMETERS,"( 0.93 0.09 0.12 0.75 )",ROOT(3));

result = vpx_constant(PARAMETERS,"( 0.145 0.518 0.173 0.95 )",ROOT(4));

result = vpx_constant(PARAMETERS,"( 0.009 0.518 0.173 1.0 )",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(3),TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_27(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_27(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"operation skip fill",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.7 0.7 0.7 0.75 )",ROOT(2));

result = vpx_constant(PARAMETERS,"( 0.93 0.09 0.12 0.75 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(3),TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_28(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_28(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"operation skip stroke",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.4 0.4 0.4 1.0 )",ROOT(2));

result = vpx_constant(PARAMETERS,"( 0.93 0.09 0.12 0.75 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(3),TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_29(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_29(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"operation debug text background",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"(0.129 0.658 0.392 0.35 )",ROOT(2));

result = vpx_constant(PARAMETERS,"( 1.0 1.0 1.0 1.0 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_30(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_30(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"operation skip text background",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.7 0.7 0.7 0.35 )",ROOT(2));

result = vpx_constant(PARAMETERS,"( 1.0 1.0 1.0 1.0 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_31(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_31(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"operation current fill",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.93 0.09 0.12 0.75 )",ROOT(2));

result = vpx_constant(PARAMETERS,"( 0.902 0.894 0.502 0.75 )",ROOT(3));

result = vpx_extconstant(PARAMETERS,kThemeBrushPrimaryHighlightColor,ROOT(4));

result = vpx_constant(PARAMETERS,"0.75",ROOT(5));

result = vpx_method_Get_20_Theme_20_Brush_20_RGBA(PARAMETERS,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_32(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_32(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"operation current stroke",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 0.93 0.09 0.12 0.75 )",ROOT(2));

result = vpx_constant(PARAMETERS,"( 1.0 0.957 0.49 1.0 )",ROOT(3));

result = vpx_constant(PARAMETERS,"1.0",ROOT(4));

result = vpx_extconstant(PARAMETERS,kThemeBrushAlternatePrimaryHighlightColor,ROOT(5));

result = vpx_method_Get_20_Theme_20_Brush_20_RGBA(PARAMETERS,TERMINAL(5),TERMINAL(4),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_33(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_RGBA_case_33(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Get_20_Item_20_RGBA(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Item_20_RGBA_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_8(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_9(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_10(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_11(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_12(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_13(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_14(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_15(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_16(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_17(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_18(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_19(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_20(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_21(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_22(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_23(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_24(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_25(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_26(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_27(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_28(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_29(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_30(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_31(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Item_20_RGBA_case_32(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Get_20_Item_20_RGBA_case_33(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Inset_20_Rectangle(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(0),ROOT(3));

InsetRect( GETPOINTER(8,Rect,*,ROOT(4),TERMINAL(3)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)));
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_Rect_2D_to_2D_list,1,1,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Rectangle_20_Size(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(0),ROOT(1),ROOT(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(3),TERMINAL(1),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(4),TERMINAL(2),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(5),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Get_20_Theme_20_Brush_20_RGBA(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"65535",ROOT(2));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_constant(PARAMETERS,"32",ROOT(4));

PUTINTEGER(GetThemeBrushAsColor( GETINTEGER(TERMINAL(0)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(3)),GETPOINTER(8,RGBColor,*,ROOT(6),NONE)),5);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_RGB_2D_to_2D_list,1,1,TERMINAL(6),ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,LIST(7),TERMINAL(2),ROOT(8));
LISTROOT(8,0)
REPEATFINISH
LISTROOTFINISH(8,0)
LISTROOTEND
} else {
ROOTEMPTY(8)
}

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(8),TERMINAL(1),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASEWITHNONE(10)
}

enum opTrigger vpx_method_Grow_20_Rectangle(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(0),ROOT(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(4),TERMINAL(6),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(5),TERMINAL(7),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(2),TERMINAL(3),TERMINAL(8),TERMINAL(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Rectangle_20_Global_20_To_20_Local(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_split_2D_nth,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Point,1,1,TERMINAL(2),ROOT(4));

GlobalToLocal( GETPOINTER(4,Point,*,ROOT(5),TERMINAL(4)));
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_Point_2D_to_2D_list,1,1,TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Point,1,1,TERMINAL(3),ROOT(7));

GlobalToLocal( GETPOINTER(4,Point,*,ROOT(8),TERMINAL(7)));
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_Point_2D_to_2D_list,1,1,TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(6),TERMINAL(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Rectangle_20_Local_20_To_20_Global(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_split_2D_nth,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Point,1,1,TERMINAL(2),ROOT(4));

LocalToGlobal( GETPOINTER(4,Point,*,ROOT(5),TERMINAL(4)));
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_Point_2D_to_2D_list,1,1,TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Point,1,1,TERMINAL(3),ROOT(7));

LocalToGlobal( GETPOINTER(4,Point,*,ROOT(8),TERMINAL(7)));
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_Point_2D_to_2D_list,1,1,TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(6),TERMINAL(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(11)
}




	Nat4 tempAttribute_VPLRoundRectangle_2F_Oval_20_Width[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000004
	};
	Nat4 tempAttribute_VPLRoundRectangle_2F_Oval_20_Height[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000004
	};


Nat4 VPLC_VPLFramedRegion_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLFramedRegion_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 258 320 }{ 82 381 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Region",tempClass,NULL,environment);
	tempAttribute = attribute_add("Path",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLGraphic");
	return kNOERROR;
}

/* Start Universals: { 551 638 }{ 187 414 } */
enum opTrigger vpx_method_VPLFramedRegion_2F_Close_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLFramedRegion_2F_Close_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Path,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release_20_Path,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Path,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Close_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLFramedRegion_2F_Close_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Region,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_dispose_2D_rgn,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_VPLFramedRegion_2F_Close_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_VPLFramedRegion_2F_Close_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Region,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLFramedRegion_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Region,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_pen_2D_state,0,1,ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Selected_20_Colors,1,0,TERMINAL(6));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_stripe,0,0);

result = vpx_call_primitive(PARAMETERS,VPLP_paint_2D_rgn,1,0,TERMINAL(3));

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_normal,0,0);

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_rgn,1,0,TERMINAL(3));

result = vpx_method_Set_20_Standard_20_Colors(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_pen_2D_state,1,0,TERMINAL(8));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLFramedRegion_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Region,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_pen_2D_state,0,1,ROOT(4));

result = vpx_method_Set_20_Selected_20_BackColor(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_stripe,0,0);

result = vpx_call_primitive(PARAMETERS,VPLP_paint_2D_rgn,1,0,TERMINAL(3));

result = vpx_method_Set_20_Selected_20_ForeColor(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_pen_2D_normal,0,0);

result = vpx_call_primitive(PARAMETERS,VPLP_frame_2D_rgn,1,0,TERMINAL(3));

result = vpx_method_Set_20_Standard_20_Colors(PARAMETERS);

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_pen_2D_state,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLFramedRegion_2F_Draw_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLFramedRegion_2F_Draw_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Frame_20_To_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLFramedRegion_2F_Frame_20_To_20_Corners_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_QDFrame,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(5),TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(7),TERMINAL(8),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(7),TERMINAL(6),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(5),TERMINAL(6),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(12),TERMINAL(11),TERMINAL(10),TERMINAL(9),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
FOOTER(14)
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Frame_20_To_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLFramedRegion_2F_Frame_20_To_20_Corners_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_VPLFramedRegion_2F_Frame_20_To_20_Corners(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLFramedRegion_2F_Frame_20_To_20_Corners_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_VPLFramedRegion_2F_Frame_20_To_20_Corners_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Open_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLFramedRegion_2F_Open_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Open_case_1_local_3_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLFramedRegion_2F_Open_case_1_local_3_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_line_2D_to,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Open_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLFramedRegion_2F_Open_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Frame_20_To_20_Corners,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_new_2D_rgn,0,1,ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_open_2D_rgn,0,0);

result = vpx_match(PARAMETERS,"( )",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_move_2D_to,2,0,TERMINAL(6),TERMINAL(5));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(4),TERMINAL(3),ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_VPLFramedRegion_2F_Open_case_1_local_3_case_2_local_10(PARAMETERS,LIST(7));
REPEATFINISH
} else {
}

result = vpx_call_primitive(PARAMETERS,VPLP_close_2D_rgn,1,0,TERMINAL(2));

result = vpx_set(PARAMETERS,kVPXValue_Region,TERMINAL(0),TERMINAL(2),ROOT(8));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLFramedRegion_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLFramedRegion_2F_Open_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_VPLFramedRegion_2F_Open_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Open_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLFramedRegion_2F_Open_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parent_20_Frame,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Frame_20_To_20_Corners,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_instantiate(PARAMETERS,kVPXClass_CG_20_Path,1,1,NONE,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Corners,2,0,TERMINAL(3),TERMINAL(2));

result = vpx_set(PARAMETERS,kVPXValue_Path,TERMINAL(0),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLFramedRegion_2F_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_VPLFramedRegion_2F_Open_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_method_VPLFramedRegion_2F_Open_case_1_local_4(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLFramedRegion_2F_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLFramedRegion_2F_Open_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLFramedRegion_2F_Open_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Add_20_Frame_20_To_20_Path_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLFramedRegion_2F_Add_20_Frame_20_To_20_Path_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Path,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Path,2,0,TERMINAL(1),TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Add_20_Frame_20_To_20_Path_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLFramedRegion_2F_Add_20_Frame_20_To_20_Path_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

enum opTrigger vpx_method_VPLFramedRegion_2F_Add_20_Frame_20_To_20_Path_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLFramedRegion_2F_Add_20_Frame_20_To_20_Path_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

enum opTrigger vpx_method_VPLFramedRegion_2F_Add_20_Frame_20_To_20_Path_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLFramedRegion_2F_Add_20_Frame_20_To_20_Path_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parent_20_Frame,1,1,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Frame_20_To_20_Corners,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"( )",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Begin_20_Path,1,0,TERMINAL(1));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_VPLFramedRegion_2F_Add_20_Frame_20_To_20_Path_case_2_local_7(PARAMETERS,TERMINAL(1),TERMINAL(4));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(5),TERMINAL(4),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_VPLFramedRegion_2F_Add_20_Frame_20_To_20_Path_case_2_local_9(PARAMETERS,TERMINAL(1),LIST(6));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Path,1,0,TERMINAL(1));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(3),ROOT(7));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(7));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Add_20_Frame_20_To_20_Path_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLFramedRegion_2F_Add_20_Frame_20_To_20_Path_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Add_20_Frame_20_To_20_Path(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLFramedRegion_2F_Add_20_Frame_20_To_20_Path_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_VPLFramedRegion_2F_Add_20_Frame_20_To_20_Path_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLFramedRegion_2F_Add_20_Frame_20_To_20_Path_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

enum opTrigger vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Erase_20_Color,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_1_local_3_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Color_20_Names,1,2,TERMINAL(3),ROOT(7),ROOT(8));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(7),TERMINAL(6),ROOT(9));
CONTINUEONFAILURE

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(8),TERMINAL(6),ROOT(10));
CONTINUEONFAILURE

result = vpx_constant(PARAMETERS,"1.2",ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Line_20_Width,2,0,TERMINAL(1),TERMINAL(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_And_20_Stroke_20_Path,3,0,TERMINAL(1),TERMINAL(9),TERMINAL(10));

result = vpx_constant(PARAMETERS,"1.0",ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Line_20_Width,2,0,TERMINAL(1),TERMINAL(12));

result = kSuccess;

FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Frame_20_To_20_Path,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Frame_20_To_20_Path,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_2_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_2_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
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

enum opTrigger vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_2_local_3_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_2_local_3_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
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

enum opTrigger vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

result = vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_2_local_3_case_1_local_7(PARAMETERS,TERMINAL(7),TERMINAL(8),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Frame_20_To_20_Path,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_2_local_3_case_1_local_9(PARAMETERS,TERMINAL(2),TERMINAL(8),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

enum opTrigger vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Frame_20_To_20_Path,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_2_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Frame_20_To_20_Path,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_2_local_5(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLFramedRegion_2F_Draw_20_CG_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLFramedRegion_2F_Frame_20_To_20_Repeat_20_Corners(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Frame_20_To_20_Corners,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_VPLGraphic_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLGraphic_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 453 337 }{ 104 429 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 414 336 }{ 205 424 } */
enum opTrigger vpx_method_VPLGraphic_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLGraphic_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLGraphic_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLGraphic_2F_Get_20_Application(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPLGraphic_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLGraphic_2F_Set_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLGraphic_2F_Get_20_Erase_20_Color_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLGraphic_2F_Get_20_Erase_20_Color_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Erase_20_Color,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_VPLGraphic_2F_Get_20_Erase_20_Color_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLGraphic_2F_Get_20_Erase_20_Color_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPLGraphic_2F_Get_20_Erase_20_Color(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLGraphic_2F_Get_20_Erase_20_Color_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPLGraphic_2F_Get_20_Erase_20_Color_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPLGraphic_2F_Get_20_Parent_20_Frame(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_QDFrame,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

/* Stop Universals */



Nat4 VPLC_VPLLine_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLLine_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLGraphic");
	return kNOERROR;
}

/* Start Universals: { 431 342 }{ 88 320 } */
enum opTrigger vpx_method_VPLLine_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_QDFrame,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_move_2D_to,2,0,TERMINAL(6),TERMINAL(5));

result = vpx_call_primitive(PARAMETERS,VPLP_line_2D_to,2,0,TERMINAL(8),TERMINAL(7));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
TERMINATEONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_VPLLine_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_QDFrame,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Line,5,0,TERMINAL(1),TERMINAL(6),TERMINAL(5),TERMINAL(8),TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(9)
}

/* Stop Universals */



Nat4 VPLC_VPLOval_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLOval_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 322 331 }{ 61 281 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLGraphic");
	return kNOERROR;
}

/* Start Universals: { 320 338 }{ 50 305 } */
enum opTrigger vpx_method_VPLOval_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_QDFrame,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_paint_2D_oval,1,0,TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_VPLOval_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_QDFrame,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Oval,2,0,TERMINAL(1),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

/* Stop Universals */



Nat4 VPLC_VPLRectangle_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLRectangle_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLGraphic");
	return kNOERROR;
}

/* Start Universals: { 332 340 }{ 50 326 } */
enum opTrigger vpx_method_VPLRectangle_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_QDFrame,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_paint_2D_rect,1,0,TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_VPLRectangle_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_QDFrame,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Rect,2,0,TERMINAL(1),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

/* Stop Universals */



Nat4 VPLC_VPLRoundRectangle_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLRoundRectangle_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 322 385 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Oval Width",tempClass,tempAttribute_VPLRoundRectangle_2F_Oval_20_Width,environment);
	tempAttribute = attribute_add("Oval Height",tempClass,tempAttribute_VPLRoundRectangle_2F_Oval_20_Height,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLGraphic");
	return kNOERROR;
}

/* Start Universals: { 497 1002 }{ 281 370 } */
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_QDFrame,1,1,TERMINAL(7),ROOT(8));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(8));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_paint_2D_round_2D_rect,3,0,TERMINAL(9),TERMINAL(5),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_QDFrame,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(6),ROOT(8),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Rounded_20_Rect,4,0,TERMINAL(1),TERMINAL(5),TERMINAL(9),TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Oper_20_Frame_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(21)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(7),ROOT(9),ROOT(10));

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(6),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Color_20_Names,1,2,TERMINAL(4),ROOT(12),ROOT(13));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(13),TERMINAL(11),ROOT(14));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(14),ROOT(15),ROOT(16),ROOT(17),ROOT(18));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(1),TERMINAL(15),TERMINAL(16),TERMINAL(17),TERMINAL(18));

result = vpx_constant(PARAMETERS,"1.4",ROOT(19));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Line_20_Width,2,0,TERMINAL(1),TERMINAL(19));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Rounded_20_Rect,4,0,TERMINAL(1),TERMINAL(2),TERMINAL(10),TERMINAL(8));

result = vpx_constant(PARAMETERS,"1.0",ROOT(20));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Line_20_Width,2,0,TERMINAL(1),TERMINAL(20));

result = kSuccess;

FOOTERSINGLECASE(21)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Oper_20_Inset_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(21)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(7),ROOT(9),ROOT(10));

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(6),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Color_20_Names,1,2,TERMINAL(4),ROOT(12),ROOT(13));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(13),TERMINAL(11),ROOT(14));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(14),ROOT(15),ROOT(16),ROOT(17),ROOT(18));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(1),TERMINAL(15),TERMINAL(16),TERMINAL(17),TERMINAL(18));

result = vpx_constant(PARAMETERS,"1.0",ROOT(19));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Line_20_Width,2,0,TERMINAL(1),TERMINAL(19));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Rounded_20_Rect,4,0,TERMINAL(1),TERMINAL(2),TERMINAL(10),TERMINAL(8));

result = vpx_constant(PARAMETERS,"1.0",ROOT(20));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Line_20_Width,2,0,TERMINAL(1),TERMINAL(20));

result = kSuccess;

FOOTERSINGLECASE(21)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Oper_20_Fill_20_CG_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Oper_20_Fill_20_CG_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
INPUT(5,5)
result = kSuccess;

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(6));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(6),ROOT(7),ROOT(8),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(2),TERMINAL(7),TERMINAL(8),TERMINAL(9),TERMINAL(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Rounded_20_Rect,4,0,TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Oper_20_Fill_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(7),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Color_20_Names,1,2,TERMINAL(4),ROOT(11),ROOT(12));

result = vpx_method_VPLRoundRectangle_2F_Draw_20_Oper_20_Fill_20_CG_case_1_local_7(PARAMETERS,TERMINAL(11),TERMINAL(6),TERMINAL(1),TERMINAL(2),TERMINAL(10),TERMINAL(8));

result = kSuccess;

FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Oper_20_Erase_20_CG_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Oper_20_Erase_20_CG_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
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

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Oper_20_Erase_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Height,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Oval_20_Width,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Erase_20_Color,1,1,TERMINAL(0),ROOT(7));

result = vpx_method_VPLRoundRectangle_2F_Draw_20_Oper_20_Erase_20_CG_case_1_local_5(PARAMETERS,TERMINAL(7),TERMINAL(1),TERMINAL(2),TERMINAL(6),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Success_20_CG_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Success_20_CG_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(0),ROOT(3));

InsetRect( GETPOINTER(8,Rect,*,ROOT(4),TERMINAL(3)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)));
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_Rect_2D_to_2D_list,1,1,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Success_20_CG_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Success_20_CG_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(0),ROOT(1));

PUTREAL(CGRectGetHeight( GETSTRUCTURE(16,CGRect,TERMINAL(1))),2);
result = kSuccess;

result = vpx_constant(PARAMETERS,"9",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3E_,2,0,TERMINAL(2),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Success_20_CG_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Success_20_CG_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"success fill",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Oval,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Success_20_CG_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Success_20_CG_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"success stroke",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_constant(PARAMETERS,"0.8",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Line_20_Width,2,0,TERMINAL(0),TERMINAL(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Oval,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_constant(PARAMETERS,"1.0",ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Line_20_Width,2,0,TERMINAL(0),TERMINAL(10));

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Success_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_constant(PARAMETERS,"4",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_QDFrame,1,1,TERMINAL(3),ROOT(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
TERMINATEONSUCCESS

result = vpx_method_VPLRoundRectangle_2F_Draw_20_Success_20_CG_case_1_local_7(PARAMETERS,TERMINAL(6),TERMINAL(5),TERMINAL(5),ROOT(7));

result = vpx_method_Inset_20_Rectangle(PARAMETERS,TERMINAL(7),TERMINAL(4),TERMINAL(4),ROOT(8));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(8),ROOT(9));

result = vpx_method_VPLRoundRectangle_2F_Draw_20_Success_20_CG_case_1_local_10(PARAMETERS,TERMINAL(6));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(10),ROOT(11));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(7),ROOT(12));

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(11),ROOT(13));

result = vpx_method_VPLRoundRectangle_2F_Draw_20_Success_20_CG_case_1_local_14(PARAMETERS,TERMINAL(1),TERMINAL(12),TERMINAL(13));

result = vpx_method_VPLRoundRectangle_2F_Draw_20_Success_20_CG_case_1_local_15(PARAMETERS,TERMINAL(1),TERMINAL(9),TERMINAL(13));

result = kSuccess;

FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Failure_20_CG_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Failure_20_CG_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(0),ROOT(3));

InsetRect( GETPOINTER(8,Rect,*,ROOT(4),TERMINAL(3)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)));
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_Rect_2D_to_2D_list,1,1,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Failure_20_CG_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Failure_20_CG_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(0),ROOT(1));

PUTREAL(CGRectGetHeight( GETSTRUCTURE(16,CGRect,TERMINAL(1))),2);
result = kSuccess;

result = vpx_constant(PARAMETERS,"9",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3E_,2,0,TERMINAL(2),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Failure_20_CG_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Failure_20_CG_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"failure stroke",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(9),ROOT(10),ROOT(11),ROOT(12));

result = vpx_constant(PARAMETERS,"2.0",ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Line_20_Width,2,0,TERMINAL(0),TERMINAL(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Line,5,0,TERMINAL(0),TERMINAL(10),TERMINAL(9),TERMINAL(12),TERMINAL(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Line,5,0,TERMINAL(0),TERMINAL(12),TERMINAL(9),TERMINAL(10),TERMINAL(11));

result = vpx_constant(PARAMETERS,"1.0",ROOT(14));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Line_20_Width,2,0,TERMINAL(0),TERMINAL(14));

result = kSuccess;

FOOTERSINGLECASE(15)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Failure_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"4",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_QDFrame,1,1,TERMINAL(3),ROOT(7));

result = vpx_method_VPLRoundRectangle_2F_Draw_20_Failure_20_CG_case_1_local_6(PARAMETERS,TERMINAL(7),TERMINAL(6),TERMINAL(6),ROOT(8));

result = vpx_method_VPLRoundRectangle_2F_Draw_20_Failure_20_CG_case_1_local_7(PARAMETERS,TERMINAL(7));
TERMINATEONFAILURE

result = vpx_method_VPLRoundRectangle_2F_Draw_20_Failure_20_CG_case_1_local_8(PARAMETERS,TERMINAL(1),TERMINAL(8),TERMINAL(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
TERMINATEONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_CG_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_CG_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTREAL(CGRectGetHeight( GETSTRUCTURE(16,CGRect,TERMINAL(0))),2);
result = kSuccess;

result = vpx_constant(PARAMETERS,"9",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3E_,2,0,TERMINAL(2),TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"control fill",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_CG_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_CG_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\" fill\"",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_CG_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_CG_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_CG_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_CG_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_CG_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_CG_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Rect,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_CG_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_CG_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"control stroke",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Rect,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Operation,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_QDFrame,1,1,TERMINAL(4),ROOT(9));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(9));
TERMINATEONSUCCESS

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(9),ROOT(10));

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(8),ROOT(11));

result = vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_CG_case_1_local_9(PARAMETERS,TERMINAL(10),TERMINAL(2),ROOT(12));

result = vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_CG_case_1_local_10(PARAMETERS,TERMINAL(1),TERMINAL(10),TERMINAL(11),TERMINAL(12));

result = vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_CG_case_1_local_11(PARAMETERS,TERMINAL(1),TERMINAL(10),TERMINAL(11));

result = kSuccess;

FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTREAL(CGRectGetHeight( GETSTRUCTURE(16,CGRect,TERMINAL(0))),2);
result = kSuccess;

result = vpx_constant(PARAMETERS,"9",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3E_,2,0,TERMINAL(2),TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"control fill",ROOT(4));

result = vpx_constant(PARAMETERS,"1.2",ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\" fill\"",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"1.0",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(25)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(0),ROOT(1),ROOT(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(4),TERMINAL(2),ROOT(5));

result = vpx_constant(PARAMETERS,"3",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(5),TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(2),TERMINAL(7),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(4),TERMINAL(7),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(11),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(3),TERMINAL(1),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(13),TERMINAL(6),ROOT(14),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(1),TERMINAL(14),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(16),TERMINAL(4),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(3),TERMINAL(14),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(18),TERMINAL(4),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(3),TERMINAL(11),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(3),TERMINAL(9),ROOT(21));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(18),TERMINAL(2),ROOT(22));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(16),TERMINAL(2),ROOT(23));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,8,1,TERMINAL(10),TERMINAL(12),TERMINAL(17),TERMINAL(19),TERMINAL(20),TERMINAL(21),TERMINAL(22),TERMINAL(23),ROOT(24));

result = kSuccess;

OUTPUT(0,TERMINAL(24))
FOOTERSINGLECASE(25)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1_local_13_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1_local_13_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Path,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Path,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1_local_13_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1_local_14_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1_local_14_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Path,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Line_20_Width,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Path,1,0,TERMINAL(0));

result = vpx_constant(PARAMETERS,"1.0",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Line_20_Width,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"control stroke",ROOT(4));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(4),TERMINAL(2),ROOT(5));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(5),ROOT(6),ROOT(7),ROOT(8),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(6),TERMINAL(7),TERMINAL(8),TERMINAL(9));

result = vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1_local_14_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(16)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Operation,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_QDFrame,1,1,TERMINAL(4),ROOT(9));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(9));
TERMINATEONSUCCESS

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(9),ROOT(10));

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(8),ROOT(11));

result = vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1_local_9(PARAMETERS,TERMINAL(10),TERMINAL(2),ROOT(12),ROOT(13));

result = vpx_instantiate(PARAMETERS,kVPXClass_CG_20_Path,1,1,NONE,ROOT(14));

result = vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1_local_11(PARAMETERS,TERMINAL(9),ROOT(15));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Corners,2,0,TERMINAL(14),TERMINAL(15));

result = vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1_local_13(PARAMETERS,TERMINAL(1),TERMINAL(14),TERMINAL(11),TERMINAL(12));

result = vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1_local_14(PARAMETERS,TERMINAL(1),TERMINAL(14),TERMINAL(11),TERMINAL(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(14));

result = kSuccess;

FOOTERWITHNONE(16)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_2_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_2_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTREAL(CGRectGetHeight( GETSTRUCTURE(16,CGRect,TERMINAL(0))),2);
result = kSuccess;

result = vpx_constant(PARAMETERS,"9",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3E_,2,0,TERMINAL(2),TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"control fill",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_2_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_2_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\" fill\"",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_2_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_2_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Oval,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"control stroke",ROOT(3));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Oval,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(4),ROOT(7),ROOT(8));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(8),ROOT(9));

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(6),ROOT(10));

result = vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_2_local_7(PARAMETERS,TERMINAL(9),TERMINAL(2),ROOT(11));

result = vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_2_local_8(PARAMETERS,TERMINAL(1),TERMINAL(9),TERMINAL(10),TERMINAL(11));

result = vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_2_local_9(PARAMETERS,TERMINAL(1),TERMINAL(9),TERMINAL(10));

result = kSuccess;

FOOTER(12)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Term_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(24)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"2",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_QDFrame,1,1,TERMINAL(3),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(5),ROOT(6),ROOT(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(7),TERMINAL(4),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(6),TERMINAL(4),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(9),TERMINAL(4),ROOT(12));

result = vpx_constant(PARAMETERS,"control stroke",ROOT(13));

result = vpx_get(PARAMETERS,kVPXValue_Operation,TERMINAL(3),ROOT(14),ROOT(15));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(15),ROOT(16),ROOT(17));

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(17),ROOT(18));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(13),TERMINAL(18),ROOT(19));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(19),ROOT(20),ROOT(21),ROOT(22),ROOT(23));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(1),TERMINAL(20),TERMINAL(21),TERMINAL(22),TERMINAL(23));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Line,5,0,TERMINAL(1),TERMINAL(10),TERMINAL(11),TERMINAL(12),TERMINAL(11));

result = kSuccess;

FOOTERSINGLECASE(24)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fin_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(25)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"2",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(5),ROOT(7),ROOT(8),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(8),TERMINAL(6),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(10),TERMINAL(6),ROOT(12));

result = vpx_constant(PARAMETERS,"control stroke",ROOT(13));

result = vpx_get(PARAMETERS,kVPXValue_Operation,TERMINAL(3),ROOT(14),ROOT(15));

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(15),ROOT(16),ROOT(17));

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(17),ROOT(18));

result = vpx_method_Get_20_Item_20_RGBA(PARAMETERS,TERMINAL(13),TERMINAL(18),ROOT(19));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(19),ROOT(20),ROOT(21),ROOT(22),ROOT(23));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(1),TERMINAL(20),TERMINAL(21),TERMINAL(22),TERMINAL(23));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(9),TERMINAL(6),ROOT(24));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Line,5,0,TERMINAL(1),TERMINAL(11),TERMINAL(24),TERMINAL(12),TERMINAL(24));

result = kSuccess;

FOOTERSINGLECASE(25)
}

enum opTrigger vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Cnt_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Control_20_Term_20_CG,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Control_20_Fin_20_CG,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_VPLText_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLText_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Text",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLGraphic");
	return kNOERROR;
}

/* Start Universals: { 411 337 }{ 95 232 } */
enum opTrigger vpx_method_VPLText_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
TERMINATEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(7),ROOT(8),ROOT(9),ROOT(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_move_2D_to,2,0,TERMINAL(9),TERMINAL(10));

result = vpx_call_primitive(PARAMETERS,VPLP_draw_2D_string,1,0,TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_VPLText_2F_Set_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Text,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */






Nat4	loadClasses_VPLGraphics(V_Environment environment);
Nat4	loadClasses_VPLGraphics(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("VPLFramedRegion",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLFramedRegion_class_load(result,environment);
	result = class_new("VPLGraphic",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLGraphic_class_load(result,environment);
	result = class_new("VPLLine",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLLine_class_load(result,environment);
	result = class_new("VPLOval",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLOval_class_load(result,environment);
	result = class_new("VPLRectangle",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLRectangle_class_load(result,environment);
	result = class_new("VPLRoundRectangle",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLRoundRectangle_class_load(result,environment);
	result = class_new("VPLText",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLText_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_VPLGraphics(V_Environment environment);
Nat4	loadUniversals_VPLGraphics(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Add Point",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Add_20_Point,NULL);

	result = method_new("Debug",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug,NULL);

	result = method_new("Ints To Rect",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Ints_20_To_20_Rect,NULL);

	result = method_new("Point In Rect",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Point_20_In_20_Rect,NULL);

	result = method_new("Rect To Ints",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Rect_20_To_20_Ints,NULL);

	result = method_new("Subtract Point",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Subtract_20_Point,NULL);

	result = method_new("Rectangle Center",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Rectangle_20_Center,NULL);

	result = method_new("Offset Rectangle",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Offset_20_Rectangle,NULL);

	result = method_new("Get Item RGBA",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Item_20_RGBA,NULL);

	result = method_new("Inset Rectangle",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Inset_20_Rectangle,NULL);

	result = method_new("Rectangle Size",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Rectangle_20_Size,NULL);

	result = method_new("Get Theme Brush RGBA",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Theme_20_Brush_20_RGBA,NULL);

	result = method_new("Grow Rectangle",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Grow_20_Rectangle,NULL);

	result = method_new("Rectangle Global To Local",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Rectangle_20_Global_20_To_20_Local,NULL);

	result = method_new("Rectangle Local To Global",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Rectangle_20_Local_20_To_20_Global,NULL);

	result = method_new("VPLFramedRegion/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLFramedRegion_2F_Close,NULL);

	result = method_new("VPLFramedRegion/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLFramedRegion_2F_Draw,NULL);

	result = method_new("VPLFramedRegion/Frame To Corners",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLFramedRegion_2F_Frame_20_To_20_Corners,NULL);

	result = method_new("VPLFramedRegion/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLFramedRegion_2F_Open,NULL);

	result = method_new("VPLFramedRegion/Add Frame To Path",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLFramedRegion_2F_Add_20_Frame_20_To_20_Path,NULL);

	result = method_new("VPLFramedRegion/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLFramedRegion_2F_Draw_20_CG,NULL);

	result = method_new("VPLFramedRegion/Frame To Repeat Corners",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLFramedRegion_2F_Frame_20_To_20_Repeat_20_Corners,NULL);

	result = method_new("VPLGraphic/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLGraphic_2F_Close,NULL);

	result = method_new("VPLGraphic/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLGraphic_2F_Draw,NULL);

	result = method_new("VPLGraphic/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLGraphic_2F_Draw_20_CG,NULL);

	result = method_new("VPLGraphic/Get Application",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLGraphic_2F_Get_20_Application,NULL);

	result = method_new("VPLGraphic/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLGraphic_2F_Open,NULL);

	result = method_new("VPLGraphic/Set Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLGraphic_2F_Set_20_Value,NULL);

	result = method_new("VPLGraphic/Get Erase Color",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLGraphic_2F_Get_20_Erase_20_Color,NULL);

	result = method_new("VPLGraphic/Get Parent Frame",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLGraphic_2F_Get_20_Parent_20_Frame,NULL);

	result = method_new("VPLLine/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLLine_2F_Draw,NULL);

	result = method_new("VPLLine/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLLine_2F_Draw_20_CG,NULL);

	result = method_new("VPLOval/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLOval_2F_Draw,NULL);

	result = method_new("VPLOval/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLOval_2F_Draw_20_CG,NULL);

	result = method_new("VPLRectangle/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLRectangle_2F_Draw,NULL);

	result = method_new("VPLRectangle/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLRectangle_2F_Draw_20_CG,NULL);

	result = method_new("VPLRoundRectangle/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLRoundRectangle_2F_Draw,NULL);

	result = method_new("VPLRoundRectangle/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLRoundRectangle_2F_Draw_20_CG,NULL);

	result = method_new("VPLRoundRectangle/Draw Oper Frame CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLRoundRectangle_2F_Draw_20_Oper_20_Frame_20_CG,NULL);

	result = method_new("VPLRoundRectangle/Draw Oper Inset CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLRoundRectangle_2F_Draw_20_Oper_20_Inset_20_CG,NULL);

	result = method_new("VPLRoundRectangle/Draw Oper Fill CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLRoundRectangle_2F_Draw_20_Oper_20_Fill_20_CG,NULL);

	result = method_new("VPLRoundRectangle/Draw Oper Erase CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLRoundRectangle_2F_Draw_20_Oper_20_Erase_20_CG,NULL);

	result = method_new("VPLRoundRectangle/Draw Success CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLRoundRectangle_2F_Draw_20_Success_20_CG,NULL);

	result = method_new("VPLRoundRectangle/Draw Failure CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLRoundRectangle_2F_Draw_20_Failure_20_CG,NULL);

	result = method_new("VPLRoundRectangle/Draw Control CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_CG,NULL);

	result = method_new("VPLRoundRectangle/Draw Control Fail CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fail_20_CG,NULL);

	result = method_new("VPLRoundRectangle/Draw Control Term CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Term_20_CG,NULL);

	result = method_new("VPLRoundRectangle/Draw Control Fin CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Fin_20_CG,NULL);

	result = method_new("VPLRoundRectangle/Draw Control Cnt CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLRoundRectangle_2F_Draw_20_Control_20_Cnt_20_CG,NULL);

	result = method_new("VPLText/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLText_2F_Draw,NULL);

	result = method_new("VPLText/Set Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLText_2F_Set_20_Value,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_VPLGraphics(V_Environment environment);
Nat4	loadPersistents_VPLGraphics(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_VPLGraphics(V_Environment environment);
Nat4	load_VPLGraphics(V_Environment environment)
{

	loadClasses_VPLGraphics(environment);
	loadUniversals_VPLGraphics(environment);
	loadPersistents_VPLGraphics(environment);
	return kNOERROR;

}

