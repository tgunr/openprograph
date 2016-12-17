/* A VPL Section File */
/*

CG Context.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_New_20_CGPoint(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"CGPoint",ROOT(2));

result = vpx_constant(PARAMETERS,"8",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"0",ROOT(5));

result = vpx_constant(PARAMETERS,"4",ROOT(6));

result = vpx_method_Coerce_20_Real(PARAMETERS,TERMINAL(0),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_real,4,2,TERMINAL(4),TERMINAL(5),TERMINAL(6),TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_method_Coerce_20_Real(PARAMETERS,TERMINAL(1),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_real,4,2,TERMINAL(8),TERMINAL(9),TERMINAL(6),TERMINAL(10),ROOT(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_New_20_CGSize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"CGSize",ROOT(2));

result = vpx_constant(PARAMETERS,"8",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"0",ROOT(5));

result = vpx_constant(PARAMETERS,"4",ROOT(6));

result = vpx_method_Coerce_20_Real(PARAMETERS,TERMINAL(0),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_real,4,2,TERMINAL(4),TERMINAL(5),TERMINAL(6),TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_method_Coerce_20_Real(PARAMETERS,TERMINAL(1),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_real,4,2,TERMINAL(8),TERMINAL(9),TERMINAL(6),TERMINAL(10),ROOT(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_New_20_CGRect(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"CGRect",ROOT(4));

result = vpx_constant(PARAMETERS,"16",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_method_New_20_CGPoint(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(7));

result = vpx_extset(PARAMETERS,"origin",2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_method_New_20_CGSize(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(9));

result = vpx_extset(PARAMETERS,"size",2,1,TERMINAL(6),TERMINAL(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_From_20_CGPoint_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_From_20_CGPoint_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_real,3,3,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_real,3,3,TERMINAL(3),TERMINAL(4),TERMINAL(2),ROOT(6),ROOT(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_From_20_CGPoint_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_From_20_CGPoint_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0.0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_From_20_CGPoint(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_From_20_CGPoint_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_From_20_CGPoint_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_From_20_CGSize_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_From_20_CGSize_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_real,3,3,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_real,3,3,TERMINAL(3),TERMINAL(4),TERMINAL(2),ROOT(6),ROOT(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_From_20_CGSize_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_From_20_CGSize_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0.0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_From_20_CGSize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_From_20_CGSize_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_From_20_CGSize_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_From_20_CGRect_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_From_20_CGRect_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_extget(PARAMETERS,"origin",1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_extget(PARAMETERS,"size",1,2,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_method_From_20_CGSize(PARAMETERS,TERMINAL(6),ROOT(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
OUTPUT(2,TERMINAL(7))
OUTPUT(3,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_From_20_CGRect_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_From_20_CGRect_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0.0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(1))
OUTPUT(2,TERMINAL(1))
OUTPUT(3,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_From_20_CGRect(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_From_20_CGRect_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2,root3))
vpx_method_From_20_CGRect_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2,root3);
return outcome;
}

enum opTrigger vpx_method_list_2D_to_2D_CGRect(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(0),ROOT(1),ROOT(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(3),TERMINAL(1),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(4),TERMINAL(2),ROOT(6));

result = vpx_method_New_20_CGRect(PARAMETERS,TERMINAL(2),TERMINAL(1),TERMINAL(6),TERMINAL(5),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_list_2D_to_2D_CGSize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_New_20_CGSize(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_list_2D_to_2D_CGPoint(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_New_20_CGPoint(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}




	Nat4 tempAttribute_CG_20_Bitmap_20_Context_2F_Block_20_Size[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_CG_20_Context_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CG_20_Context_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("CGContext Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("QDPort Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("QDFrame",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 59 878 }{ 693 321 } */
enum opTrigger vpx_method_CG_20_Context_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CG_20_Context,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_CoreGraphics,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_CG_20_Context_2F_Setup_20_CoreGraphics(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CGContextRef,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CG_20_Context_2F_Dispose(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CGContextRef,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CG_20_Context_2F_Set_20_CGContextRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_CGContext_20_Reference,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CG_20_Context_2F_Get_20_CGContextRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_CGContext_20_Reference,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CG_20_Context_2F_Set_20_Stroke_20_RGB_20_Color_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_CG_20_Context_2F_Set_20_Stroke_20_RGB_20_Color_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
TERMINATEONSUCCESS

CGContextSetRGBStrokeColor( GETPOINTER(0,CGContext,*,ROOT(6),TERMINAL(5)),GETREAL(TERMINAL(1)),GETREAL(TERMINAL(2)),GETREAL(TERMINAL(3)),GETREAL(TERMINAL(4)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_CG_20_Context_2F_Set_20_Stroke_20_RGB_20_Color(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_method_CG_20_Context_2F_Set_20_Stroke_20_RGB_20_Color_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CG_20_Context_2F_Set_20_Fill_20_RGB_20_Color_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_CG_20_Context_2F_Set_20_Fill_20_RGB_20_Color_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
TERMINATEONSUCCESS

CGContextSetRGBFillColor( GETPOINTER(0,CGContext,*,ROOT(6),TERMINAL(5)),GETREAL(TERMINAL(1)),GETREAL(TERMINAL(2)),GETREAL(TERMINAL(3)),GETREAL(TERMINAL(4)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_CG_20_Context_2F_Set_20_Fill_20_RGB_20_Color(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_method_CG_20_Context_2F_Set_20_Fill_20_RGB_20_Color_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_Rect_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_Rect_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

CGContextFillRect( GETPOINTER(0,CGContext,*,ROOT(3),TERMINAL(2)),GETSTRUCTURE(16,CGRect,TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_Rect(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CG_20_Context_2F_Fill_20_Rect_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_Path_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_Path_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

CGContextFillPath( GETPOINTER(0,CGContext,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_Path(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CG_20_Context_2F_Fill_20_Path_case_1_local_2(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_Oval_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_Oval_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTREAL(CGRectGetMidX( GETSTRUCTURE(16,CGRect,TERMINAL(0))),2);
result = kSuccess;

PUTREAL(CGRectGetMidY( GETSTRUCTURE(16,CGRect,TERMINAL(0))),3);
result = kSuccess;

result = vpx_method_New_20_CGPoint(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(4));

PUTREAL(CGRectGetWidth( GETSTRUCTURE(16,CGRect,TERMINAL(0))),5);
result = kSuccess;

result = vpx_method_Half(PARAMETERS,TERMINAL(5),ROOT(6));

PUTREAL(CGRectGetHeight( GETSTRUCTURE(16,CGRect,TERMINAL(0))),7);
result = kSuccess;

result = vpx_method_Half(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Oval,4,0,TERMINAL(1),TERMINAL(4),TERMINAL(6),TERMINAL(8));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_Oval(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Begin_20_Path,1,0,TERMINAL(0));

result = vpx_method_CG_20_Context_2F_Fill_20_Oval_case_1_local_3(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Path,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CG_20_Context_2F_Stroke_20_Rect_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CG_20_Context_2F_Stroke_20_Rect_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

CGContextStrokeRect( GETPOINTER(0,CGContext,*,ROOT(3),TERMINAL(2)),GETSTRUCTURE(16,CGRect,TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CG_20_Context_2F_Stroke_20_Rect(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CG_20_Context_2F_Stroke_20_Rect_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CG_20_Context_2F_Stroke_20_Path_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CG_20_Context_2F_Stroke_20_Path_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

CGContextStrokePath( GETPOINTER(0,CGContext,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CG_20_Context_2F_Stroke_20_Path(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CG_20_Context_2F_Stroke_20_Path_case_1_local_2(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CG_20_Context_2F_Stroke_20_Oval_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CG_20_Context_2F_Stroke_20_Oval_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTREAL(CGRectGetMidX( GETSTRUCTURE(16,CGRect,TERMINAL(0))),2);
result = kSuccess;

PUTREAL(CGRectGetMidY( GETSTRUCTURE(16,CGRect,TERMINAL(0))),3);
result = kSuccess;

result = vpx_method_New_20_CGPoint(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(4));

PUTREAL(CGRectGetWidth( GETSTRUCTURE(16,CGRect,TERMINAL(0))),5);
result = kSuccess;

result = vpx_method_Half(PARAMETERS,TERMINAL(5),ROOT(6));

PUTREAL(CGRectGetHeight( GETSTRUCTURE(16,CGRect,TERMINAL(0))),7);
result = kSuccess;

result = vpx_method_Half(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Oval,4,0,TERMINAL(1),TERMINAL(4),TERMINAL(6),TERMINAL(8));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_CG_20_Context_2F_Stroke_20_Oval(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Begin_20_Path,1,0,TERMINAL(0));

result = vpx_method_CG_20_Context_2F_Stroke_20_Oval_case_1_local_3(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Path,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CG_20_Context_2F_Add_20_Arc_20_To_20_Point(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
INPUT(5,5)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
TERMINATEONSUCCESS

CGContextAddArcToPoint( GETPOINTER(0,CGContext,*,ROOT(7),TERMINAL(6)),GETREAL(TERMINAL(1)),GETREAL(TERMINAL(2)),GETREAL(TERMINAL(3)),GETREAL(TERMINAL(4)),GETREAL(TERMINAL(5)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_CG_20_Context_2F_Add_20_Line_20_To_20_Point(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

CGContextAddLineToPoint( GETPOINTER(0,CGContext,*,ROOT(4),TERMINAL(3)),GETREAL(TERMINAL(1)),GETREAL(TERMINAL(2)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CG_20_Context_2F_Add_20_Rect(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

CGContextAddRect( GETPOINTER(0,CGContext,*,ROOT(3),TERMINAL(2)),GETSTRUCTURE(16,CGRect,TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CG_20_Context_2F_Add_20_Rounded_20_Rect_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CG_20_Context_2F_Add_20_Rounded_20_Rect_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
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

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_CG_20_Context_2F_Add_20_Rounded_20_Rect(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
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

result = vpx_method_CG_20_Context_2F_Add_20_Rounded_20_Rect_case_1_local_11(PARAMETERS,TERMINAL(0),TERMINAL(9),TERMINAL(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Path,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Restore_20_GState,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_CG_20_Context_2F_Add_20_Oval(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Save_20_GState,1,0,TERMINAL(0));

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Translate_20_CTM,3,0,TERMINAL(0),TERMINAL(4),TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Scale_20_CTM,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));

result = vpx_constant(PARAMETERS,"0",ROOT(6));

result = vpx_constant(PARAMETERS,"1",ROOT(7));

result = vpx_constant(PARAMETERS,"360",ROOT(8));

result = vpx_method_Deg_20_To_20_Rad(PARAMETERS,TERMINAL(8),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Arc,7,0,TERMINAL(0),TERMINAL(6),TERMINAL(6),TERMINAL(7),TERMINAL(6),TERMINAL(9),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Path,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Restore_20_GState,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_CG_20_Context_2F_Add_20_Arc(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object terminal6)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
INPUT(5,5)
INPUT(6,6)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(7));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
TERMINATEONSUCCESS

CGContextAddArc( GETPOINTER(0,CGContext,*,ROOT(8),TERMINAL(7)),GETREAL(TERMINAL(1)),GETREAL(TERMINAL(2)),GETREAL(TERMINAL(3)),GETREAL(TERMINAL(4)),GETREAL(TERMINAL(5)),GETINTEGER(TERMINAL(6)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_CG_20_Context_2F_Save_20_GState_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CG_20_Context_2F_Save_20_GState_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

CGContextSaveGState( GETPOINTER(0,CGContext,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CG_20_Context_2F_Save_20_GState(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CG_20_Context_2F_Save_20_GState_case_1_local_2(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CG_20_Context_2F_Restore_20_GState_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CG_20_Context_2F_Restore_20_GState_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

CGContextRestoreGState( GETPOINTER(0,CGContext,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CG_20_Context_2F_Restore_20_GState(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CG_20_Context_2F_Restore_20_GState_case_1_local_2(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CG_20_Context_2F_Begin_20_Path_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CG_20_Context_2F_Begin_20_Path_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

CGContextBeginPath( GETPOINTER(0,CGContext,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CG_20_Context_2F_Begin_20_Path(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CG_20_Context_2F_Begin_20_Path_case_1_local_2(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CG_20_Context_2F_Close_20_Path_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CG_20_Context_2F_Close_20_Path_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

CGContextClosePath( GETPOINTER(0,CGContext,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CG_20_Context_2F_Close_20_Path(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CG_20_Context_2F_Close_20_Path_case_1_local_2(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CG_20_Context_2F_Translate_20_CTM(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

CGContextTranslateCTM( GETPOINTER(0,CGContext,*,ROOT(4),TERMINAL(3)),GETREAL(TERMINAL(1)),GETREAL(TERMINAL(2)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CG_20_Context_2F_Scale_20_CTM(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

CGContextScaleCTM( GETPOINTER(0,CGContext,*,ROOT(4),TERMINAL(3)),GETREAL(TERMINAL(1)),GETREAL(TERMINAL(2)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CG_20_Context_2F_Move_20_To_20_Point(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

CGContextMoveToPoint( GETPOINTER(0,CGContext,*,ROOT(4),TERMINAL(3)),GETREAL(TERMINAL(1)),GETREAL(TERMINAL(2)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_Rounded_20_Rect(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Begin_20_Path,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Rounded_20_Rect,4,0,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Path,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CG_20_Context_2F_Stroke_20_Rounded_20_Rect(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Begin_20_Path,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Rounded_20_Rect,4,0,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Path,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CG_20_Context_2F_Stroke_20_Line_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_CG_20_Context_2F_Stroke_20_Line_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Move_20_To_20_Point,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Line_20_To_20_Point,3,0,TERMINAL(0),TERMINAL(3),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CG_20_Context_2F_Stroke_20_Line(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Begin_20_Path,1,0,TERMINAL(0));

result = vpx_method_CG_20_Context_2F_Stroke_20_Line_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Path,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CG_20_Context_2F_Begin_20_For_20_CGrafPort_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Context_2F_Begin_20_For_20_CGrafPort_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_CG_20_Context_2F_New(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CG_20_Context_2F_Begin_20_For_20_CGrafPort_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Context_2F_Begin_20_For_20_CGrafPort_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CG_20_Context_2F_Begin_20_For_20_CGrafPort_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Context_2F_Begin_20_For_20_CGrafPort_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CG_20_Context_2F_Begin_20_For_20_CGrafPort_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CG_20_Context_2F_Begin_20_For_20_CGrafPort_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CG_20_Context_2F_Begin_20_For_20_CGrafPort(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(QDBeginCGContext( GETPOINTER(0,OpaqueGrafPtr,*,ROOT(2),TERMINAL(0)),GETPOINTER(0,CGContext,**,ROOT(3),NONE)),1);
result = kSuccess;

result = vpx_method_CG_20_Context_2F_Begin_20_For_20_CGrafPort_case_1_local_3(PARAMETERS,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_CG_20_Context_2F_End_20_For_20_CGrafPort_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Context_2F_End_20_For_20_CGrafPort_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(2));

PUTINTEGER(QDEndCGContext( GETPOINTER(0,OpaqueGrafPtr,*,ROOT(4),TERMINAL(1)),GETPOINTER(0,CGContext,**,ROOT(5),TERMINAL(2))),3);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(6)
}

enum opTrigger vpx_method_CG_20_Context_2F_End_20_For_20_CGrafPort_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Context_2F_End_20_For_20_CGrafPort_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CG_20_Context_2F_End_20_For_20_CGrafPort_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Context_2F_End_20_For_20_CGrafPort_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CG_20_Context_2F_End_20_For_20_CGrafPort_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CG_20_Context_2F_End_20_For_20_CGrafPort_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CG_20_Context_2F_End_20_For_20_CGrafPort(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CG_20_Context_2F_End_20_For_20_CGrafPort_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CG_20_Context_2F_Clear_20_Rect(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

CGContextClearRect( GETPOINTER(0,CGContext,*,ROOT(3),TERMINAL(2)),GETSTRUCTURE(16,CGRect,TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CG_20_Context_2F_Sync_20_Origin_20_With_20_CGrafPort(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

PUTINTEGER(SyncCGContextOriginWithPort( GETPOINTER(0,CGContext,*,ROOT(4),TERMINAL(2)),GETPOINTER(0,OpaqueGrafPtr,*,ROOT(5),TERMINAL(1))),3);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_CG_20_Context_2F_Flush(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

CGContextFlush( GETPOINTER(0,CGContext,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CG_20_Context_2F_Stroke_20_Arc_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_CG_20_Context_2F_Stroke_20_Arc_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

PUTREAL(CGRectGetMidX( GETSTRUCTURE(16,CGRect,TERMINAL(1))),4);
result = kSuccess;

PUTREAL(CGRectGetMidY( GETSTRUCTURE(16,CGRect,TERMINAL(1))),5);
result = kSuccess;

PUTREAL(CGRectGetWidth( GETSTRUCTURE(16,CGRect,TERMINAL(1))),6);
result = kSuccess;

result = vpx_method_Half(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_call_evaluate(PARAMETERS,"A-90",1,1,TERMINAL(2),ROOT(8));

result = vpx_method_Deg_20_To_20_Rad(PARAMETERS,TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(8),TERMINAL(3),ROOT(10));

result = vpx_method_Deg_20_To_20_Rad(PARAMETERS,TERMINAL(10),ROOT(11));

result = vpx_constant(PARAMETERS,"0",ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Arc,7,0,TERMINAL(0),TERMINAL(4),TERMINAL(5),TERMINAL(7),TERMINAL(9),TERMINAL(11),TERMINAL(12));

result = kSuccess;

FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_CG_20_Context_2F_Stroke_20_Arc(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Begin_20_Path,1,0,TERMINAL(0));

result = vpx_method_CG_20_Context_2F_Stroke_20_Arc_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stroke_20_Path,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CG_20_Context_2F_Release(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

CGContextRelease( GETPOINTER(0,CGContext,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CG_20_Context_2F_Set_20_Should_20_Antialias(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

CGContextSetShouldAntialias( GETPOINTER(0,CGContext,*,ROOT(3),TERMINAL(2)),GETINTEGER(TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CG_20_Context_2F_Set_20_Line_20_Width(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

CGContextSetLineWidth( GETPOINTER(0,CGContext,*,ROOT(3),TERMINAL(2)),GETREAL(TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CG_20_Context_2F_Add_20_Path(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGPathRef,1,1,TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

CGContextAddPath( GETPOINTER(0,CGContext,*,ROOT(4),TERMINAL(2)),GETCONSTPOINTER(CGPath,*,TERMINAL(3)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(5));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(0),TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(5));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kCGPathFillStroke,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kCGPathFill,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kCGPathStroke,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_4_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

CGContextDrawPath( GETPOINTER(0,CGContext,*,ROOT(3),TERMINAL(2)),GETINTEGER(TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(2),ROOT(4));

result = vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_4(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));
TERMINATEONFAILURE

result = vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_CG_20_Context_2F_Add_20_Star(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CG_20_Path,1,1,NONE,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Mutable,1,0,TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Star,3,0,TERMINAL(3),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Path,1,0,TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Path,2,0,TERMINAL(0),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release_20_Path,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_CG_20_Context_2F_Add_20_Burst(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CG_20_Path,1,1,NONE,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Mutable,1,0,TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Burst,4,0,TERMINAL(4),TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Path,1,0,TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Path,2,0,TERMINAL(0),TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release_20_Path,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(5)
}

/* Stop Universals */



Nat4 VPLC_CG_20_Path_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CG_20_Path_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("CGPath Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Current Transform",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 249 1252 }{ 564 295 } */
enum opTrigger vpx_method_CG_20_Path_2F_Set_20_CGPathRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_CGPath_20_Reference,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CG_20_Path_2F_Get_20_CGPathRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_CGPath_20_Reference,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CG_20_Path_2F_Dispose(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CGPathRef,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CG_20_Path_2F_Create_20_Mutable(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTPOINTER(CGPath,*,CGPathCreateMutable(),1);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CGPathRef,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CG_20_Path_2F_Close_20_Subpath(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGPathRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

CGPathCloseSubpath( GETPOINTER(0,CGPath,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CG_20_Path_2F_Release(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGPathRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

CGPathRelease( GETCONSTPOINTER(CGPath,*,TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CG_20_Path_2F_Retain(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGPathRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

PUTPOINTER(CGPath,*,CGPathRetain( GETCONSTPOINTER(CGPath,*,TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Arc(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object terminal6)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
INPUT(5,5)
INPUT(6,6)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGPathRef,1,1,TERMINAL(0),ROOT(7));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Transform,1,1,TERMINAL(0),ROOT(8));

CGPathAddArc( GETPOINTER(0,CGPath,*,ROOT(9),TERMINAL(7)),GETCONSTPOINTER(CGAffineTransform,*,TERMINAL(8)),GETREAL(TERMINAL(1)),GETREAL(TERMINAL(2)),GETREAL(TERMINAL(3)),GETREAL(TERMINAL(4)),GETREAL(TERMINAL(5)),GETINTEGER(TERMINAL(6)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Arc_20_Rect(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADERWITHNONE(14)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

PUTREAL(CGRectGetMidX( GETSTRUCTURE(16,CGRect,TERMINAL(1))),4);
result = kSuccess;

PUTREAL(CGRectGetMidY( GETSTRUCTURE(16,CGRect,TERMINAL(1))),5);
result = kSuccess;

PUTREAL(CGRectGetWidth( GETSTRUCTURE(16,CGRect,TERMINAL(1))),6);
result = kSuccess;

result = vpx_method_Half(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_call_evaluate(PARAMETERS,"A-90",1,1,TERMINAL(2),ROOT(8));

result = vpx_method_Deg_20_To_20_Rad(PARAMETERS,TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(8),TERMINAL(3),ROOT(10));

result = vpx_method_Deg_20_To_20_Rad(PARAMETERS,TERMINAL(10),ROOT(11));

result = vpx_constant(PARAMETERS,"0",ROOT(12));

result = vpx_instantiate(PARAMETERS,kVPXClass_CG_20_Path,1,1,NONE,ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Begin_20_Path,1,0,TERMINAL(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Arc,7,0,TERMINAL(13),TERMINAL(4),TERMINAL(5),TERMINAL(7),TERMINAL(9),TERMINAL(11),TERMINAL(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Path,2,0,TERMINAL(0),TERMINAL(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release_20_Path,1,0,TERMINAL(13));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(14)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Arc_20_To_20_Point(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
INPUT(5,5)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGPathRef,1,1,TERMINAL(0),ROOT(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Transform,1,1,TERMINAL(0),ROOT(7));

CGPathAddArcToPoint( GETPOINTER(0,CGPath,*,ROOT(8),TERMINAL(6)),GETCONSTPOINTER(CGAffineTransform,*,TERMINAL(7)),GETREAL(TERMINAL(1)),GETREAL(TERMINAL(2)),GETREAL(TERMINAL(3)),GETREAL(TERMINAL(4)),GETREAL(TERMINAL(5)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Line_20_To_20_Point(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGPathRef,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Transform,1,1,TERMINAL(0),ROOT(4));

CGPathAddLineToPoint( GETPOINTER(0,CGPath,*,ROOT(5),TERMINAL(3)),GETCONSTPOINTER(CGAffineTransform,*,TERMINAL(4)),GETREAL(TERMINAL(1)),GETREAL(TERMINAL(2)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Rect(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGPathRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Transform,1,1,TERMINAL(0),ROOT(3));

CGPathAddRect( GETPOINTER(0,CGPath,*,ROOT(4),TERMINAL(2)),GETCONSTPOINTER(CGAffineTransform,*,TERMINAL(3)),GETSTRUCTURE(16,CGRect,TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Path(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGPathRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGPathRef,1,1,TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Transform,1,1,TERMINAL(0),ROOT(4));

CGPathAddPath( GETPOINTER(0,CGPath,*,ROOT(5),TERMINAL(2)),GETCONSTPOINTER(CGAffineTransform,*,TERMINAL(4)),GETCONSTPOINTER(CGPath,*,TERMINAL(3)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_CG_20_Path_2F_Move_20_To_20_Point(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGPathRef,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Transform,1,1,TERMINAL(0),ROOT(4));

CGPathMoveToPoint( GETPOINTER(0,CGPath,*,ROOT(5),TERMINAL(3)),GETCONSTPOINTER(CGAffineTransform,*,TERMINAL(4)),GETREAL(TERMINAL(1)),GETREAL(TERMINAL(2)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_CG_20_Path_2F_Equal_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Path_2F_Equal_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGPathRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGPathRef,1,1,TERMINAL(1),ROOT(3));

PUTINTEGER(CGPathEqualToPath( GETCONSTPOINTER(CGPath,*,TERMINAL(2)),GETCONSTPOINTER(CGPath,*,TERMINAL(3))),4);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_CG_20_Path_2F_Equal_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Path_2F_Equal_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CG_20_Path_2F_Equal_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CG_20_Path_2F_Equal_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CG_20_Path_2F_Equal_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CG_20_Path_2F_Is_20_Empty_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CG_20_Path_2F_Is_20_Empty_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGPathRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(CGPathIsEmpty( GETCONSTPOINTER(CGPath,*,TERMINAL(1))),2);
result = kSuccess;

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CG_20_Path_2F_Is_20_Empty_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CG_20_Path_2F_Is_20_Empty_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CG_20_Path_2F_Is_20_Empty_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CG_20_Path_2F_Is_20_Empty_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CG_20_Path_2F_Is_20_Empty_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CG_20_Path_2F_Is_20_Rect_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CG_20_Path_2F_Is_20_Rect_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGPathRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(CGPathIsRect( GETCONSTPOINTER(CGPath,*,TERMINAL(1)),GETPOINTER(16,CGRect,*,ROOT(3),NONE)),2);
result = kSuccess;

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(3))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_CG_20_Path_2F_Is_20_Rect_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CG_20_Path_2F_Is_20_Rect_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CG_20_Path_2F_Is_20_Rect_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CG_20_Path_2F_Is_20_Rect_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_CG_20_Path_2F_Is_20_Rect_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_CG_20_Path_2F_Create_20_Corners_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CG_20_Path_2F_Create_20_Corners_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

enum opTrigger vpx_method_CG_20_Path_2F_Create_20_Corners_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CG_20_Path_2F_Create_20_Corners_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

enum opTrigger vpx_method_CG_20_Path_2F_Create_20_Corners(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Mutable,1,0,TERMINAL(0));

result = vpx_method_CG_20_Path_2F_Create_20_Corners_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_CG_20_Path_2F_Create_20_Corners_case_1_local_5(PARAMETERS,TERMINAL(0),LIST(3));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Subpath,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CG_20_Path_2F_Get_20_Current_20_Transform(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Current_20_Transform,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CG_20_Path_2F_Set_20_Current_20_Transform(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Current_20_Transform,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CG_20_Path_2F_Begin_20_Path(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Mutable,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CG_20_Path_2F_Close_20_Path(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Subpath,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CG_20_Path_2F_Release_20_Path(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Line(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Move_20_To_20_Point,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Line_20_To_20_Point,3,0,TERMINAL(0),TERMINAL(3),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Oval(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"0",ROOT(6));

result = vpx_constant(PARAMETERS,"1",ROOT(7));

result = vpx_constant(PARAMETERS,"360",ROOT(8));

result = vpx_method_Deg_20_To_20_Rad(PARAMETERS,TERMINAL(8),ROOT(9));

PUTSTRUCTURE(24,CGAffineTransform,CGAffineTransformMakeTranslation( GETREAL(TERMINAL(4)),GETREAL(TERMINAL(5))),10);
result = kSuccess;

PUTSTRUCTURE(24,CGAffineTransform,CGAffineTransformScale( GETSTRUCTURE(24,CGAffineTransform,TERMINAL(10)),GETREAL(TERMINAL(2)),GETREAL(TERMINAL(3))),11);
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CG_20_Path,1,1,NONE,ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Begin_20_Path,1,0,TERMINAL(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Current_20_Transform,2,0,TERMINAL(12),TERMINAL(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Arc,7,0,TERMINAL(12),TERMINAL(6),TERMINAL(6),TERMINAL(7),TERMINAL(6),TERMINAL(9),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Path,2,0,TERMINAL(0),TERMINAL(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release_20_Path,1,0,TERMINAL(12));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(13)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Diamond_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Diamond_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(16)
INPUT(0,0)
result = kSuccess;

result = vpx_method_From_20_CGRect(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2),ROOT(3),ROOT(4));

result = vpx_method_Half(PARAMETERS,TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(1),TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(2),TERMINAL(6),ROOT(7));

result = vpx_method_Half(PARAMETERS,TERMINAL(4),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(2),TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(1),TERMINAL(3),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(9),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(2),TERMINAL(4),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(12),TERMINAL(6),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(9),TERMINAL(1),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(7),TERMINAL(11),TERMINAL(13),TERMINAL(14),ROOT(15));

result = kSuccess;

OUTPUT(0,TERMINAL(15))
FOOTERSINGLECASE(16)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Diamond(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CG_20_Path_2F_Add_20_Diamond_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Corners,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Corners(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CG_20_Path,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Corners,2,0,TERMINAL(2),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Path,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release_20_Path,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Rounded_20_Rect_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Rounded_20_Rect_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(0),ROOT(4),ROOT(5));

PUTSTRUCTURE(24,CGAffineTransform,CGAffineTransformMakeTranslation( GETREAL(TERMINAL(4)),GETREAL(TERMINAL(5))),6);
result = kSuccess;

PUTSTRUCTURE(24,CGAffineTransform,CGAffineTransformScale( GETSTRUCTURE(24,CGAffineTransform,TERMINAL(6)),GETREAL(TERMINAL(1)),GETREAL(TERMINAL(2))),7);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Current_20_Transform,2,0,TERMINAL(3),TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Rounded_20_Rect_case_1_local_5_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Rounded_20_Rect_case_1_local_5_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
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

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Rounded_20_Rect_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Rounded_20_Rect_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

PUTREAL(CGRectGetHeight( GETSTRUCTURE(16,CGRect,TERMINAL(1))),4);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(4),TERMINAL(3),ROOT(5));

PUTREAL(CGRectGetWidth( GETSTRUCTURE(16,CGRect,TERMINAL(1))),6);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(6),TERMINAL(2),ROOT(7));

result = vpx_method_CG_20_Path_2F_Add_20_Rounded_20_Rect_case_1_local_5_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(7),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Rounded_20_Rect(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CG_20_Path,1,1,NONE,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Begin_20_Path,1,0,TERMINAL(4));

result = vpx_method_CG_20_Path_2F_Add_20_Rounded_20_Rect_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(4));

result = vpx_method_CG_20_Path_2F_Add_20_Rounded_20_Rect_case_1_local_5(PARAMETERS,TERMINAL(4),TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Path,2,0,TERMINAL(0),TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release_20_Path,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Triangle_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Triangle_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Triangle_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Triangle_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(16)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"North",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_CG_20_Path_2F_Add_20_Triangle_case_1_local_2_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(2),ROOT(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(6),TERMINAL(4),ROOT(7));

result = vpx_constant(PARAMETERS,"2",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(7),TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(4),TERMINAL(9),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(3),TERMINAL(11),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(5),TERMINAL(6),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(5),TERMINAL(4),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(12),TERMINAL(13),TERMINAL(14),ROOT(15));

result = kSuccess;

OUTPUT(0,TERMINAL(15))
FOOTER(16)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Triangle_case_1_local_2_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Triangle_case_1_local_2_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Triangle_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Triangle_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(16)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"South",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_CG_20_Path_2F_Add_20_Triangle_case_1_local_2_case_2_local_3(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(2),ROOT(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(6),TERMINAL(4),ROOT(7));

result = vpx_constant(PARAMETERS,"2",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(7),TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(4),TERMINAL(9),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(3),TERMINAL(4),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(3),TERMINAL(6),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(5),TERMINAL(11),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(12),TERMINAL(13),TERMINAL(14),ROOT(15));

result = kSuccess;

OUTPUT(0,TERMINAL(15))
FOOTER(16)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Triangle_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Triangle_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Triangle_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Triangle_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CG_20_Path_2F_Add_20_Triangle_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_CG_20_Path_2F_Add_20_Triangle_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CG_20_Path_2F_Add_20_Triangle_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Triangle(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_CG_20_Path_2F_Add_20_Triangle_case_1_local_2(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Corners,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Star_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Star_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

PUTREAL(CGRectGetWidth( GETSTRUCTURE(16,CGRect,TERMINAL(1))),3);
result = kSuccess;

result = vpx_method_Half(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_method_Half(PARAMETERS,TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Burst,4,0,TERMINAL(0),TERMINAL(5),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pi,0,1,ROOT(1));

result = vpx_call_evaluate(PARAMETERS,"(2*A)/B",2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_method_Half(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

PUTREAL(CGRectGetWidth( GETSTRUCTURE(16,CGRect,TERMINAL(0))),1);
result = kSuccess;

result = vpx_method_Half(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_method_New_20_CGPoint(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_method_Half(PARAMETERS,TERMINAL(2),ROOT(5));

result = vpx_constant(PARAMETERS,"3",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(2),TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(2),TERMINAL(7),ROOT(8));

result = vpx_method_New_20_CGPoint(PARAMETERS,TERMINAL(8),TERMINAL(3),ROOT(9));

PUTREAL(CGRectGetHeight( GETSTRUCTURE(16,CGRect,TERMINAL(0))),10);
result = kSuccess;

result = vpx_method_Half(PARAMETERS,TERMINAL(10),ROOT(11));

result = vpx_method_New_20_CGPoint(PARAMETERS,TERMINAL(2),TERMINAL(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(9))
OUTPUT(2,TERMINAL(12))
FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTSTRUCTURE(24,CGAffineTransform,CGAffineTransformMakeRotation( GETREAL(TERMINAL(1))),2);
result = kSuccess;

PUTSTRUCTURE(8,CGPoint,CGPointApplyAffineTransform( GETSTRUCTURE(8,CGPoint,TERMINAL(0)),GETSTRUCTURE(24,CGAffineTransform,TERMINAL(2))),3);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(2),TERMINAL(4),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(3),TERMINAL(5),ROOT(7));

result = vpx_method_New_20_CGPoint(PARAMETERS,TERMINAL(6),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(2),TERMINAL(4),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(3),TERMINAL(5),ROOT(7));

result = vpx_method_New_20_CGPoint(PARAMETERS,TERMINAL(6),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(2),TERMINAL(4),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(3),TERMINAL(5),ROOT(7));

result = vpx_method_New_20_CGPoint(PARAMETERS,TERMINAL(6),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_15_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_15_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(2),TERMINAL(4),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(3),TERMINAL(5),ROOT(7));

result = vpx_method_New_20_CGPoint(PARAMETERS,TERMINAL(6),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_15_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_15_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(2),TERMINAL(4),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(3),TERMINAL(5),ROOT(7));

result = vpx_method_New_20_CGPoint(PARAMETERS,TERMINAL(6),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object *root0,V_Object *root1)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
INPUT(5,5)
result = kSuccess;

PUTSTRUCTURE(8,CGPoint,CGPointApplyAffineTransform( GETSTRUCTURE(8,CGPoint,TERMINAL(2)),GETSTRUCTURE(24,CGAffineTransform,TERMINAL(4))),6);
result = kSuccess;

result = vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_15_case_1_local_3(PARAMETERS,TERMINAL(1),TERMINAL(6),ROOT(7));

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Line_20_To_20_Point,3,0,TERMINAL(0),TERMINAL(8),TERMINAL(9));

PUTSTRUCTURE(8,CGPoint,CGPointApplyAffineTransform( GETSTRUCTURE(8,CGPoint,TERMINAL(3)),GETSTRUCTURE(24,CGAffineTransform,TERMINAL(4))),10);
result = kSuccess;

result = vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_15_case_1_local_7(PARAMETERS,TERMINAL(1),TERMINAL(10),ROOT(11));

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(11),ROOT(12),ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Line_20_To_20_Point,3,0,TERMINAL(0),TERMINAL(12),TERMINAL(13));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(10))
FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Star_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Star_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(22)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_2(PARAMETERS,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_3(PARAMETERS,TERMINAL(1),ROOT(5),ROOT(6),ROOT(7));

result = vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_4(PARAMETERS,TERMINAL(5),TERMINAL(4),ROOT(8));

PUTSTRUCTURE(24,CGAffineTransform,CGAffineTransformMakeRotation( GETREAL(TERMINAL(3))),9);
result = kSuccess;

result = vpx_extget(PARAMETERS,"origin",1,2,TERMINAL(1),ROOT(10),ROOT(11));

result = vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_7(PARAMETERS,TERMINAL(11),TERMINAL(7),ROOT(12));

result = vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_8(PARAMETERS,TERMINAL(12),TERMINAL(6),ROOT(13));

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(13),ROOT(14),ROOT(15));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Move_20_To_20_Point,3,0,TERMINAL(0),TERMINAL(14),TERMINAL(15));

result = vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_11(PARAMETERS,TERMINAL(12),TERMINAL(8),ROOT(16));

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(16),ROOT(17),ROOT(18));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Line_20_To_20_Point,3,0,TERMINAL(0),TERMINAL(17),TERMINAL(18));

result = vpx_method_Make_20_Count(PARAMETERS,TERMINAL(2),ROOT(19));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(19))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,6,20)
LOOPTERMINAL(1,8,21)
result = vpx_method_CG_20_Path_2F_Add_20_Star_case_2_local_15(PARAMETERS,TERMINAL(0),TERMINAL(12),LOOP(0),LOOP(1),TERMINAL(9),LIST(19),ROOT(20),ROOT(21));
REPEATFINISH
} else {
ROOTNULL(20,TERMINAL(6))
ROOTNULL(21,TERMINAL(8))
}

result = kSuccess;

FOOTER(22)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Star(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CG_20_Path_2F_Add_20_Star_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_CG_20_Path_2F_Add_20_Star_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pi,0,1,ROOT(1));

result = vpx_call_evaluate(PARAMETERS,"(2*A)/B",2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_method_Half(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTREAL(CGRectGetWidth( GETSTRUCTURE(16,CGRect,TERMINAL(1))),2);
result = kSuccess;

result = vpx_method_Half(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_method_New_20_CGPoint(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"3",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(3),TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(3),TERMINAL(7),ROOT(8));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(8),ROOT(9));

result = vpx_method_New_20_CGPoint(PARAMETERS,TERMINAL(9),TERMINAL(4),ROOT(10));

PUTREAL(CGRectGetHeight( GETSTRUCTURE(16,CGRect,TERMINAL(1))),11);
result = kSuccess;

result = vpx_method_Half(PARAMETERS,TERMINAL(11),ROOT(12));

result = vpx_method_New_20_CGPoint(PARAMETERS,TERMINAL(3),TERMINAL(12),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(10))
OUTPUT(2,TERMINAL(13))
FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTSTRUCTURE(24,CGAffineTransform,CGAffineTransformMakeRotation( GETREAL(TERMINAL(1))),2);
result = kSuccess;

PUTSTRUCTURE(8,CGPoint,CGPointApplyAffineTransform( GETSTRUCTURE(8,CGPoint,TERMINAL(0)),GETSTRUCTURE(24,CGAffineTransform,TERMINAL(2))),3);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(2),TERMINAL(4),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(3),TERMINAL(5),ROOT(7));

result = vpx_method_New_20_CGPoint(PARAMETERS,TERMINAL(6),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(2),TERMINAL(4),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(3),TERMINAL(5),ROOT(7));

result = vpx_method_New_20_CGPoint(PARAMETERS,TERMINAL(6),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(2),TERMINAL(4),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(3),TERMINAL(5),ROOT(7));

result = vpx_method_New_20_CGPoint(PARAMETERS,TERMINAL(6),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_15_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_15_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(2),TERMINAL(4),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(3),TERMINAL(5),ROOT(7));

result = vpx_method_New_20_CGPoint(PARAMETERS,TERMINAL(6),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_15_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_15_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(2),TERMINAL(4),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(3),TERMINAL(5),ROOT(7));

result = vpx_method_New_20_CGPoint(PARAMETERS,TERMINAL(6),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object *root0,V_Object *root1)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
INPUT(5,5)
result = kSuccess;

PUTSTRUCTURE(8,CGPoint,CGPointApplyAffineTransform( GETSTRUCTURE(8,CGPoint,TERMINAL(2)),GETSTRUCTURE(24,CGAffineTransform,TERMINAL(4))),6);
result = kSuccess;

result = vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_15_case_1_local_3(PARAMETERS,TERMINAL(1),TERMINAL(6),ROOT(7));

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Line_20_To_20_Point,3,0,TERMINAL(0),TERMINAL(8),TERMINAL(9));

PUTSTRUCTURE(8,CGPoint,CGPointApplyAffineTransform( GETSTRUCTURE(8,CGPoint,TERMINAL(3)),GETSTRUCTURE(24,CGAffineTransform,TERMINAL(4))),10);
result = kSuccess;

result = vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_15_case_1_local_7(PARAMETERS,TERMINAL(1),TERMINAL(10),ROOT(11));

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(11),ROOT(12),ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Line_20_To_20_Point,3,0,TERMINAL(0),TERMINAL(12),TERMINAL(13));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(10))
FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_CG_20_Path_2F_Add_20_Burst(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(23)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_2(PARAMETERS,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_3(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(6),ROOT(7),ROOT(8));

result = vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_4(PARAMETERS,TERMINAL(6),TERMINAL(5),ROOT(9));

PUTSTRUCTURE(24,CGAffineTransform,CGAffineTransformMakeRotation( GETREAL(TERMINAL(4))),10);
result = kSuccess;

result = vpx_extget(PARAMETERS,"origin",1,2,TERMINAL(2),ROOT(11),ROOT(12));

result = vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_7(PARAMETERS,TERMINAL(12),TERMINAL(8),ROOT(13));

result = vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_8(PARAMETERS,TERMINAL(13),TERMINAL(7),ROOT(14));

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(14),ROOT(15),ROOT(16));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Move_20_To_20_Point,3,0,TERMINAL(0),TERMINAL(15),TERMINAL(16));

result = vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_11(PARAMETERS,TERMINAL(13),TERMINAL(9),ROOT(17));

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(17),ROOT(18),ROOT(19));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Line_20_To_20_Point,3,0,TERMINAL(0),TERMINAL(18),TERMINAL(19));

result = vpx_method_Make_20_Count(PARAMETERS,TERMINAL(3),ROOT(20));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(20))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,7,21)
LOOPTERMINAL(1,9,22)
result = vpx_method_CG_20_Path_2F_Add_20_Burst_case_1_local_15(PARAMETERS,TERMINAL(0),TERMINAL(13),LOOP(0),LOOP(1),TERMINAL(10),LIST(20),ROOT(21),ROOT(22));
REPEATFINISH
} else {
ROOTNULL(21,TERMINAL(7))
ROOTNULL(22,TERMINAL(9))
}

result = kSuccess;

FOOTERSINGLECASE(23)
}

/* Stop Universals */



Nat4 VPLC_CG_20_Bitmap_20_Context_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CG_20_Bitmap_20_Context_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 239 236 }{ 200 300 } */
	tempAttribute = attribute_add("CGContext Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("QDPort Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("QDFrame",tempClass,NULL,environment);
	tempAttribute = attribute_add("Block Pointer",tempClass,NULL,environment);
	tempAttribute = attribute_add("Block Size",tempClass,tempAttribute_CG_20_Bitmap_20_Context_2F_Block_20_Size,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"CG Context");
	return kNOERROR;
}

/* Start Universals: { 274 59 }{ 200 300 } */
enum opTrigger vpx_method_CG_20_Bitmap_20_Context_2F_Create(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object terminal6,V_Object terminal7)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
INPUT(5,5)
INPUT(6,6)
INPUT(7,7)
result = kSuccess;

PUTPOINTER(CGContext,*,CGBitmapContextCreate( GETPOINTER(0,void,*,ROOT(9),TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(5)),GETPOINTER(0,CGColorSpace,*,ROOT(10),TERMINAL(6)),GETINTEGER(TERMINAL(7))),8);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(8));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CGContextRef,2,0,TERMINAL(0),TERMINAL(8));

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_CG_20_Bitmap_20_Context_2F_Create_20_32_2D_RGBA_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CG_20_Bitmap_20_Context_2F_Create_20_32_2D_RGBA_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_CG_20_Bitmap_20_Context_2F_Create_20_32_2D_RGBA_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CG_20_Bitmap_20_Context_2F_Create_20_32_2D_RGBA_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"kCGColorSpaceGenericRGB",ROOT(1));

result = vpx_constant(PARAMETERS,"__CFString",ROOT(2));

result = vpx_method_Get_20_Framework_20_Constant(PARAMETERS,TERMINAL(1),NONE,TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

PUTPOINTER(CGColorSpace,*,CGColorSpaceCreateWithName( GETCONSTPOINTER(__CFString,*,TERMINAL(3))),4);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_CG_20_Bitmap_20_Context_2F_Create_20_32_2D_RGBA_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CG_20_Bitmap_20_Context_2F_Create_20_32_2D_RGBA_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTPOINTER(CGColorSpace,*,CGColorSpaceCreateDeviceRGB(),1);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CG_20_Bitmap_20_Context_2F_Create_20_32_2D_RGBA_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CG_20_Bitmap_20_Context_2F_Create_20_32_2D_RGBA_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CG_20_Bitmap_20_Context_2F_Create_20_32_2D_RGBA_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CG_20_Bitmap_20_Context_2F_Create_20_32_2D_RGBA_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CG_20_Bitmap_20_Context_2F_Create_20_32_2D_RGBA_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CG_20_Bitmap_20_Context_2F_Create_20_32_2D_RGBA_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CG_20_Bitmap_20_Context_2F_Create_20_32_2D_RGBA_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_evaluate(PARAMETERS,"A*32",1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__2A2A_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

PUTPOINTER(char,*,NewPtrClear( GETINTEGER(TERMINAL(4))),5);
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Block_20_Pointer,TERMINAL(0),TERMINAL(5),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Block_20_Size,TERMINAL(0),TERMINAL(4),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(3))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_CG_20_Bitmap_20_Context_2F_Create_20_32_2D_RGBA(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_CG_20_Bitmap_20_Context_2F_Create_20_32_2D_RGBA_case_1_local_2(PARAMETERS,TERMINAL(3),ROOT(4));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"8",ROOT(5));

result = vpx_extconstant(PARAMETERS,kCGImageAlphaPremultipliedLast,ROOT(6));

result = vpx_method_CG_20_Bitmap_20_Context_2F_Create_20_32_2D_RGBA_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create,8,0,TERMINAL(0),TERMINAL(7),TERMINAL(1),TERMINAL(2),TERMINAL(5),TERMINAL(8),TERMINAL(4),TERMINAL(6));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_CG_20_Bitmap_20_Context_2F_Create_20_Image_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CG_20_Bitmap_20_Context_2F_Create_20_Image_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(30)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Block_20_Pointer,TERMINAL(0),ROOT(2),ROOT(3));

PUTINTEGER(CGBitmapContextGetBitsPerComponent( GETPOINTER(0,CGContext,*,ROOT(5),TERMINAL(1))),4);
result = kSuccess;

PUTINTEGER(CGBitmapContextGetWidth( GETPOINTER(0,CGContext,*,ROOT(7),TERMINAL(1))),6);
result = kSuccess;

PUTINTEGER(CGBitmapContextGetHeight( GETPOINTER(0,CGContext,*,ROOT(9),TERMINAL(1))),8);
result = kSuccess;

PUTINTEGER(CGBitmapContextGetBitsPerPixel( GETPOINTER(0,CGContext,*,ROOT(11),TERMINAL(1))),10);
result = kSuccess;

PUTINTEGER(CGBitmapContextGetBytesPerRow( GETPOINTER(0,CGContext,*,ROOT(13),TERMINAL(1))),12);
result = kSuccess;

PUTPOINTER(CGColorSpace,*,CGBitmapContextGetColorSpace( GETPOINTER(0,CGContext,*,ROOT(15),TERMINAL(1))),14);
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCGImageAlphaPremultipliedLast,ROOT(16));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(17));

result = vpx_extconstant(PARAMETERS,kCGRenderingIntentDefault,ROOT(18));

result = vpx_constant(PARAMETERS,"NULL",ROOT(19));

result = vpx_constant(PARAMETERS,"0",ROOT(20));

result = vpx_get(PARAMETERS,kVPXValue_Block_20_Size,TERMINAL(0),ROOT(21),ROOT(22));

PUTPOINTER(CGDataProvider,*,CGDataProviderCreateWithData( GETPOINTER(0,void,*,ROOT(24),TERMINAL(19)),GETCONSTPOINTER(void,*,TERMINAL(3)),GETINTEGER(TERMINAL(22)),GETPOINTER(0,void,*,ROOT(25),TERMINAL(20))),23);
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(26));

PUTPOINTER(CGImage,*,CGImageCreate( GETINTEGER(TERMINAL(6)),GETINTEGER(TERMINAL(8)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(10)),GETINTEGER(TERMINAL(12)),GETPOINTER(0,CGColorSpace,*,ROOT(28),TERMINAL(14)),GETINTEGER(TERMINAL(16)),GETPOINTER(0,CGDataProvider,*,ROOT(29),TERMINAL(23)),GETCONSTPOINTER(float,*,TERMINAL(26)),GETINTEGER(TERMINAL(17)),GETINTEGER(TERMINAL(18))),27);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(27))
FOOTERSINGLECASE(30)
}

enum opTrigger vpx_method_CG_20_Bitmap_20_Context_2F_Create_20_Image(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CGContextRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = vpx_method_CG_20_Bitmap_20_Context_2F_Create_20_Image_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

/* Stop Universals */






Nat4	loadClasses_CG_20_Context(V_Environment environment);
Nat4	loadClasses_CG_20_Context(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("CG Context",environment);
	if(result == NULL) return kERROR;
	VPLC_CG_20_Context_class_load(result,environment);
	result = class_new("CG Path",environment);
	if(result == NULL) return kERROR;
	VPLC_CG_20_Path_class_load(result,environment);
	result = class_new("CG Bitmap Context",environment);
	if(result == NULL) return kERROR;
	VPLC_CG_20_Bitmap_20_Context_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_CG_20_Context(V_Environment environment);
Nat4	loadUniversals_CG_20_Context(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("New CGPoint",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_New_20_CGPoint,NULL);

	result = method_new("New CGSize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_New_20_CGSize,NULL);

	result = method_new("New CGRect",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_New_20_CGRect,NULL);

	result = method_new("From CGPoint",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_From_20_CGPoint,NULL);

	result = method_new("From CGSize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_From_20_CGSize,NULL);

	result = method_new("From CGRect",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_From_20_CGRect,NULL);

	result = method_new("list-to-CGRect",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_list_2D_to_2D_CGRect,NULL);

	result = method_new("list-to-CGSize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_list_2D_to_2D_CGSize,NULL);

	result = method_new("list-to-CGPoint",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_list_2D_to_2D_CGPoint,NULL);

	result = method_new("CG Context/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_New,NULL);

	result = method_new("CG Context/Setup CoreGraphics",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Setup_20_CoreGraphics,NULL);

	result = method_new("CG Context/Dispose",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Dispose,NULL);

	result = method_new("CG Context/Set CGContextRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Set_20_CGContextRef,NULL);

	result = method_new("CG Context/Get CGContextRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Get_20_CGContextRef,NULL);

	result = method_new("CG Context/Set Stroke RGB Color",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Set_20_Stroke_20_RGB_20_Color,NULL);

	result = method_new("CG Context/Set Fill RGB Color",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Set_20_Fill_20_RGB_20_Color,NULL);

	result = method_new("CG Context/Fill Rect",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Fill_20_Rect,NULL);

	result = method_new("CG Context/Fill Path",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Fill_20_Path,NULL);

	result = method_new("CG Context/Fill Oval",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Fill_20_Oval,NULL);

	result = method_new("CG Context/Stroke Rect",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Stroke_20_Rect,NULL);

	result = method_new("CG Context/Stroke Path",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Stroke_20_Path,NULL);

	result = method_new("CG Context/Stroke Oval",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Stroke_20_Oval,NULL);

	result = method_new("CG Context/Add Arc To Point",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Add_20_Arc_20_To_20_Point,NULL);

	result = method_new("CG Context/Add Line To Point",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Add_20_Line_20_To_20_Point,NULL);

	result = method_new("CG Context/Add Rect",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Add_20_Rect,NULL);

	result = method_new("CG Context/Add Rounded Rect",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Add_20_Rounded_20_Rect,NULL);

	result = method_new("CG Context/Add Oval",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Add_20_Oval,NULL);

	result = method_new("CG Context/Add Arc",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Add_20_Arc,NULL);

	result = method_new("CG Context/Save GState",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Save_20_GState,NULL);

	result = method_new("CG Context/Restore GState",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Restore_20_GState,NULL);

	result = method_new("CG Context/Begin Path",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Begin_20_Path,NULL);

	result = method_new("CG Context/Close Path",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Close_20_Path,NULL);

	result = method_new("CG Context/Translate CTM",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Translate_20_CTM,NULL);

	result = method_new("CG Context/Scale CTM",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Scale_20_CTM,NULL);

	result = method_new("CG Context/Move To Point",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Move_20_To_20_Point,NULL);

	result = method_new("CG Context/Fill Rounded Rect",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Fill_20_Rounded_20_Rect,NULL);

	result = method_new("CG Context/Stroke Rounded Rect",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Stroke_20_Rounded_20_Rect,NULL);

	result = method_new("CG Context/Stroke Line",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Stroke_20_Line,NULL);

	result = method_new("CG Context/Begin For CGrafPort",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Begin_20_For_20_CGrafPort,NULL);

	result = method_new("CG Context/End For CGrafPort",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_End_20_For_20_CGrafPort,NULL);

	result = method_new("CG Context/Clear Rect",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Clear_20_Rect,NULL);

	result = method_new("CG Context/Sync Origin With CGrafPort",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Sync_20_Origin_20_With_20_CGrafPort,NULL);

	result = method_new("CG Context/Flush",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Flush,NULL);

	result = method_new("CG Context/Stroke Arc",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Stroke_20_Arc,NULL);

	result = method_new("CG Context/Release",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Release,NULL);

	result = method_new("CG Context/Set Should Antialias",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Set_20_Should_20_Antialias,NULL);

	result = method_new("CG Context/Set Line Width",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Set_20_Line_20_Width,NULL);

	result = method_new("CG Context/Add Path",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Add_20_Path,NULL);

	result = method_new("CG Context/Fill And Stroke Path",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path,NULL);

	result = method_new("CG Context/Add Star",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Add_20_Star,NULL);

	result = method_new("CG Context/Add Burst",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Context_2F_Add_20_Burst,NULL);

	result = method_new("CG Path/Set CGPathRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Set_20_CGPathRef,NULL);

	result = method_new("CG Path/Get CGPathRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Get_20_CGPathRef,NULL);

	result = method_new("CG Path/Dispose",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Dispose,NULL);

	result = method_new("CG Path/Create Mutable",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Create_20_Mutable,NULL);

	result = method_new("CG Path/Close Subpath",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Close_20_Subpath,NULL);

	result = method_new("CG Path/Release",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Release,NULL);

	result = method_new("CG Path/Retain",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Retain,NULL);

	result = method_new("CG Path/Add Arc",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Add_20_Arc,NULL);

	result = method_new("CG Path/Add Arc Rect",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Add_20_Arc_20_Rect,NULL);

	result = method_new("CG Path/Add Arc To Point",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Add_20_Arc_20_To_20_Point,NULL);

	result = method_new("CG Path/Add Line To Point",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Add_20_Line_20_To_20_Point,NULL);

	result = method_new("CG Path/Add Rect",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Add_20_Rect,NULL);

	result = method_new("CG Path/Add Path",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Add_20_Path,NULL);

	result = method_new("CG Path/Move To Point",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Move_20_To_20_Point,NULL);

	result = method_new("CG Path/Equal?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Equal_3F_,NULL);

	result = method_new("CG Path/Is Empty?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Is_20_Empty_3F_,NULL);

	result = method_new("CG Path/Is Rect?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Is_20_Rect_3F_,NULL);

	result = method_new("CG Path/Create Corners",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Create_20_Corners,NULL);

	result = method_new("CG Path/Get Current Transform",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Get_20_Current_20_Transform,NULL);

	result = method_new("CG Path/Set Current Transform",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Set_20_Current_20_Transform,NULL);

	result = method_new("CG Path/Begin Path",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Begin_20_Path,NULL);

	result = method_new("CG Path/Close Path",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Close_20_Path,NULL);

	result = method_new("CG Path/Release Path",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Release_20_Path,NULL);

	result = method_new("CG Path/Add Line",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Add_20_Line,NULL);

	result = method_new("CG Path/Add Oval",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Add_20_Oval,NULL);

	result = method_new("CG Path/Add Diamond",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Add_20_Diamond,NULL);

	result = method_new("CG Path/Add Corners",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Add_20_Corners,NULL);

	result = method_new("CG Path/Add Rounded Rect",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Add_20_Rounded_20_Rect,NULL);

	result = method_new("CG Path/Add Triangle",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Add_20_Triangle,NULL);

	result = method_new("CG Path/Add Star",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Add_20_Star,NULL);

	result = method_new("CG Path/Add Burst",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Path_2F_Add_20_Burst,NULL);

	result = method_new("CG Bitmap Context/Create",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Bitmap_20_Context_2F_Create,NULL);

	result = method_new("CG Bitmap Context/Create 32-RGBA",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Bitmap_20_Context_2F_Create_20_32_2D_RGBA,NULL);

	result = method_new("CG Bitmap Context/Create Image",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CG_20_Bitmap_20_Context_2F_Create_20_Image,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_CG_20_Context(V_Environment environment);
Nat4	loadPersistents_CG_20_Context(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_CG_20_Context(V_Environment environment);
Nat4	load_CG_20_Context(V_Environment environment)
{

	loadClasses_CG_20_Context(environment);
	loadUniversals_CG_20_Context(environment);
	loadPersistents_CG_20_Context(environment);
	return kNOERROR;

}

