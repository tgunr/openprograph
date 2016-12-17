/* A VPL Section File */
/*

Common Drawing.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_To_20_Point_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_Point_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 0 0 )",ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_To_20_Point_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_To_20_Point_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_To_20_Point_case_1_local_4_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_To_20_Point_case_1_local_4_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"CGPoint",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"HIPoint",TERMINAL(1));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_To_20_Point_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_To_20_Point_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_To_20_Point_case_1_local_4_case_2_local_3(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_From_20_CGPoint(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_To_20_Point_case_1_local_4_case_3_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_To_20_Point_case_1_local_4_case_3_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"CGSize",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"HISize",TERMINAL(1));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_To_20_Point_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_To_20_Point_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_To_20_Point_case_1_local_4_case_3_local_3(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_From_20_CGSize(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_To_20_Point_case_1_local_4_case_4_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_To_20_Point_case_1_local_4_case_4_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Point",TERMINAL(1));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_To_20_Point_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_To_20_Point_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_To_20_Point_case_1_local_4_case_4_local_3(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extget(PARAMETERS,"v",1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_extget(PARAMETERS,"h",1,2,TERMINAL(0),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_To_20_Point_case_1_local_4_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_To_20_Point_case_1_local_4_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
OUTPUT(1,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_To_20_Point_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_To_20_Point_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_To_20_Point_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_To_20_Point_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_To_20_Point_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_To_20_Point_case_1_local_4_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_To_20_Point_case_1_local_4_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_To_20_Point(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Point,1,1,NONE,ROOT(1));

result = vpx_method_To_20_Point_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_method_To_20_Point_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(3),ROOT(4));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_With_20_Points,3,0,TERMINAL(1),TERMINAL(3),TERMINAL(4));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(5)
}




	Nat4 tempAttribute_Point_2F_X[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X02BA0004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Point_2F_Y[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X02BE0004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Rectangle_2F_Origin[] = {
0000000000, 0X00000060, 0X00000024, 0X00000004, 0X00000014, 0X00000050, 0X0000004C, 0X00000038,
0X00000040, 0X03000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000004C, 0X00000002,
0X00000044, 0X506F696E, 0X74000000, 0X00000054, 0X0000006C, 0X02BA0004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X02BE0004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000
	};
	Nat4 tempAttribute_Rectangle_2F_Size[] = {
0000000000, 0X00000060, 0X00000024, 0X00000004, 0X00000014, 0X00000050, 0X0000004C, 0X00000038,
0X00000040, 0X03000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000004C, 0X00000002,
0X00000044, 0X506F696E, 0X74000000, 0X00000054, 0X0000006C, 0X02BA0004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X02BE0004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000
	};


Nat4 VPLC_Point_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Point_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("X",tempClass,tempAttribute_Point_2F_X,environment);
	tempAttribute = attribute_add("Y",tempClass,tempAttribute_Point_2F_Y,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 403 708 }{ 250 296 } */
enum opTrigger vpx_method_Point_2F_Get_20_X(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_X,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Point_2F_Get_20_Y(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Y,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Point_2F_Get_20_X_20_Int(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_X,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_Int(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Point_2F_Get_20_Y_20_Int(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Y,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_Int(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Point_2F_Set_20_X(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_X,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Point_2F_Set_20_Y(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Y,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Point_2F_New_20_With_20_Points(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_X,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Y,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Point_2F_Add_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Point_2F_Add_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_X,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_X,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Point_2F_Add_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Point_2F_Add_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Y,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Y,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Point_2F_Add(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Point_2F_Add_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_Point_2F_Add_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_method_To_20_Point(PARAMETERS,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Point_2F_Subtract_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Point_2F_Subtract_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_X,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_X,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Point_2F_Subtract_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Point_2F_Subtract_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Y,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Y,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Point_2F_Subtract(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Point_2F_Subtract_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_Point_2F_Subtract_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_method_To_20_Point(PARAMETERS,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Point_2F_Multiply_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Point_2F_Multiply_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_X,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_X,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__2A_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Point_2F_Multiply_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Point_2F_Multiply_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Y,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Y,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__2A_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Point_2F_Multiply(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Point_2F_Multiply_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_Point_2F_Multiply_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_method_To_20_Point(PARAMETERS,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Point_2F_Divide_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Point_2F_Divide_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_X,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_X,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Point_2F_Divide_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Point_2F_Divide_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Y,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Y,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Point_2F_Divide(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Point_2F_Divide_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_Point_2F_Divide_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_method_To_20_Point(PARAMETERS,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Point_2F_Get_20_QDPoint_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Point_2F_Get_20_QDPoint_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Point",ROOT(0));

result = vpx_constant(PARAMETERS,"4",ROOT(1));

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_method_Create_20_Block_20_Type(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Point_2F_Get_20_QDPoint_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Point_2F_Get_20_QDPoint_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_X_20_Int,1,1,TERMINAL(1),ROOT(2));

result = vpx_extset(PARAMETERS,"h",2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Point_2F_Get_20_QDPoint_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Point_2F_Get_20_QDPoint_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Y_20_Int,1,1,TERMINAL(1),ROOT(2));

result = vpx_extset(PARAMETERS,"v",2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Point_2F_Get_20_QDPoint(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Point_2F_Get_20_QDPoint_case_1_local_2(PARAMETERS,ROOT(1));
FAILONFAILURE

result = vpx_method_Point_2F_Get_20_QDPoint_case_1_local_3(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = vpx_method_Point_2F_Get_20_QDPoint_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Point_2F_Get_20_CGPoint(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_X,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Y,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_New_20_CGPoint(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Point_2F_Get_20_CGSize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_X,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Y,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_New_20_CGSize(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

/* Stop Universals */



Nat4 VPLC_Rectangle_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Rectangle_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Origin",tempClass,tempAttribute_Rectangle_2F_Origin,environment);
	tempAttribute = attribute_add("Size",tempClass,tempAttribute_Rectangle_2F_Size,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
/* Stop Universals */






Nat4	loadClasses_Common_20_Drawing(V_Environment environment);
Nat4	loadClasses_Common_20_Drawing(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Point",environment);
	if(result == NULL) return kERROR;
	VPLC_Point_class_load(result,environment);
	result = class_new("Rectangle",environment);
	if(result == NULL) return kERROR;
	VPLC_Rectangle_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Common_20_Drawing(V_Environment environment);
Nat4	loadUniversals_Common_20_Drawing(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("To Point",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_To_20_Point,NULL);

	result = method_new("Point/Get X",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Point_2F_Get_20_X,NULL);

	result = method_new("Point/Get Y",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Point_2F_Get_20_Y,NULL);

	result = method_new("Point/Get X Int",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Point_2F_Get_20_X_20_Int,NULL);

	result = method_new("Point/Get Y Int",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Point_2F_Get_20_Y_20_Int,NULL);

	result = method_new("Point/Set X",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Point_2F_Set_20_X,NULL);

	result = method_new("Point/Set Y",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Point_2F_Set_20_Y,NULL);

	result = method_new("Point/New With Points",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Point_2F_New_20_With_20_Points,NULL);

	result = method_new("Point/Add",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Point_2F_Add,NULL);

	result = method_new("Point/Subtract",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Point_2F_Subtract,NULL);

	result = method_new("Point/Multiply",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Point_2F_Multiply,NULL);

	result = method_new("Point/Divide",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Point_2F_Divide,NULL);

	result = method_new("Point/Get QDPoint",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Point_2F_Get_20_QDPoint,NULL);

	result = method_new("Point/Get CGPoint",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Point_2F_Get_20_CGPoint,NULL);

	result = method_new("Point/Get CGSize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Point_2F_Get_20_CGSize,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_Common_20_Drawing(V_Environment environment);
Nat4	loadPersistents_Common_20_Drawing(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_Common_20_Drawing(V_Environment environment);
Nat4	load_Common_20_Drawing(V_Environment environment)
{

	loadClasses_Common_20_Drawing(environment);
	loadUniversals_Common_20_Drawing(environment);
	loadPersistents_Common_20_Drawing(environment);
	return kNOERROR;

}

