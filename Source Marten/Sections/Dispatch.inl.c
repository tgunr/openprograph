/* A VPL Section File */
/*

Dispatch.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"




	Nat4 tempAttribute_Method_20_Call_2F_Name[] = {
0000000000, 0X00000034, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X14000000, 0X556E7469, 0X746C6564, 0X204D6574,
0X686F6420, 0X43616C6C, 0000000000
	};
	Nat4 tempAttribute_Method_20_Call_2F_Method_20_Name[] = {
0000000000, 0X00000020, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Method_20_Call_2F_Input_20_Specifiers[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Method_20_Call_2F_Output_20_Specifiers[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Method_20_Call_2F_Attachments[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Universal_20_Method_20_Input_20_Specifier_2F_Value[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0F000000, 0X47657420, 0X4170706C, 0X69636174,
0X696F6E00
	};


Nat4 VPLC_Method_20_Call_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Method_20_Call_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 204 234 }{ 153 400 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Method_20_Call_2F_Name,environment);
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Method Name",tempClass,tempAttribute_Method_20_Call_2F_Method_20_Name,environment);
	tempAttribute = attribute_add("Input Specifiers",tempClass,tempAttribute_Method_20_Call_2F_Input_20_Specifiers,environment);
	tempAttribute = attribute_add("Output Specifiers",tempClass,tempAttribute_Method_20_Call_2F_Output_20_Specifiers,environment);
	tempAttribute = attribute_add("Attachments",tempClass,tempAttribute_Method_20_Call_2F_Attachments,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 222 383 }{ 323 293 } */
enum opTrigger vpx_method_Method_20_Call_2F_Call_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Method_20_Call_2F_Call_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Method_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Output_20_Count,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_call,3,1,TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Method_20_Call_2F_Call_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Method_20_Call_2F_Call_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Process_20_Input_20_Specifiers,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_method_Method_20_Call_2F_Call_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Process_20_Output_20_Specifiers,2,0,TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Method_20_Call_2F_Call_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Method_20_Call_2F_Call_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Call_20_Failed,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Method_20_Call_2F_Call(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Method_20_Call_2F_Call_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Method_20_Call_2F_Call_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Method_20_Call_2F_Call_20_Failed(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Method_20_Call_2F_Process_20_Input_20_Specifiers(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Input_20_Specifiers,1,1,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Process_20_Input,2,1,LIST(1),TERMINAL(0),ROOT(2));
FAILONFAILURE
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Method_20_Call_2F_Process_20_Output_20_Specifiers(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Output_20_Specifiers,1,1,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(2),TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Process_20_Output,3,0,LIST(2),TERMINAL(0),LIST(1));
FAILONFAILURE
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Method_20_Call_2F_Get_20_Output_20_Count(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Output_20_Specifiers,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Method_20_Call_2F_Get_20_Method_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Method_20_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Method_20_Call_2F_Get_20_Input_20_Specifiers(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Input_20_Specifiers,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Method_20_Call_2F_Get_20_Output_20_Specifiers(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Output_20_Specifiers,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Method_20_Call_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Owner,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Method_20_Call_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Owner,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_constant(PARAMETERS,"(  )",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Attachments,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Method_20_Call_2F_Get_20_Owner(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Method_20_Call_2F_Set_20_Owner(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Method_20_Call_2F_Get_20_Attachments(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Attachments,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Default_20_List(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Method_20_Call_2F_Set_20_Attachments(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Attachments,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Method_20_Call_2F_Get_20_Attachment_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Attachments,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(2));
FAILONFAILURE

result = vpx_method__28_Get_20_Setting_29_(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Method_20_Call_2F_Set_20_Attachment_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Attachments,1,1,TERMINAL(0),ROOT(3));

result = vpx_method__28_Set_20_Setting_29_(PARAMETERS,TERMINAL(3),TERMINAL(1),TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Attachments,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

/* Stop Universals */



Nat4 VPLC_Specifier_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Specifier_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 121 365 } */
	tempAttribute = attribute_add("Value",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Specifier_2F_Get_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Specifier_2F_Set_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Value,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Specifier_2F_Process_20_Input(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Specifier_2F_Process_20_Output(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Value,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Input_20_Specifier_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Input_20_Specifier_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Value",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Specifier");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Input_20_Specifier_2F_Process_20_Input(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Universal_20_Method_20_Input_20_Specifier_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Universal_20_Method_20_Input_20_Specifier_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Value",tempClass,tempAttribute_Universal_20_Method_20_Input_20_Specifier_2F_Value,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Input Specifier");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Universal_20_Method_20_Input_20_Specifier_2F_Process_20_Input_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Method_20_Input_20_Specifier_2F_Process_20_Input_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_inject_method(PARAMETERS,INJECT(2),0,1,ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Universal_20_Method_20_Input_20_Specifier_2F_Process_20_Input_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Method_20_Input_20_Specifier_2F_Process_20_Input_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Universal_20_Method_20_Input_20_Specifier_2F_Process_20_Input(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Method_20_Input_20_Specifier_2F_Process_20_Input_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Universal_20_Method_20_Input_20_Specifier_2F_Process_20_Input_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Output_20_Specifier_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Output_20_Specifier_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Value",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Specifier");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Output_20_Specifier_2F_Process_20_Output(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Value,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Attribute_20_Input_20_Specifier_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Attribute_20_Input_20_Specifier_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Value",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Input Specifier");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Attribute_20_Input_20_Specifier_2F_Process_20_Input_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Input_20_Specifier_2F_Process_20_Input_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_inject_get(PARAMETERS,INJECT(2),1,2,TERMINAL(1),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Attribute_20_Input_20_Specifier_2F_Process_20_Input_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Input_20_Specifier_2F_Process_20_Input_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Attribute_20_Input_20_Specifier_2F_Process_20_Input_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Input_20_Specifier_2F_Process_20_Input_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Type:",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_log_2D_error,2,0,TERMINAL(2),TERMINAL(3));

result = vpx_get(PARAMETERS,kVPXValue_The_20_Event,TERMINAL(1),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Attribute_20_Input_20_Specifier_2F_Process_20_Input(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attribute_20_Input_20_Specifier_2F_Process_20_Input_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Attribute_20_Input_20_Specifier_2F_Process_20_Input_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Attribute_20_Input_20_Specifier_2F_Process_20_Input_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Attribute_20_Output_20_Specifier_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Attribute_20_Output_20_Specifier_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Value",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Output Specifier");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Attribute_20_Output_20_Specifier_2F_Process_20_Output_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Attribute_20_Output_20_Specifier_2F_Process_20_Output_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_inject_set(PARAMETERS,INJECT(3),2,1,TERMINAL(1),TERMINAL(2),ROOT(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Attribute_20_Output_20_Specifier_2F_Process_20_Output_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Attribute_20_Output_20_Specifier_2F_Process_20_Output_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"AOS Set Class:",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_log_2D_error,2,0,TERMINAL(3),TERMINAL(4));

result = vpx_set(PARAMETERS,kVPXValue_Callback_20_Result,TERMINAL(1),TERMINAL(2),ROOT(5));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Attribute_20_Output_20_Specifier_2F_Process_20_Output(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attribute_20_Output_20_Specifier_2F_Process_20_Output_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Attribute_20_Output_20_Specifier_2F_Process_20_Output_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Attachment_20_Specifier_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Attachment_20_Specifier_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Value",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Specifier");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Attachment_20_Specifier_2F_Process_20_Input_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Attachment_20_Specifier_2F_Process_20_Input_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Attachment_20_Value,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Attachment_20_Specifier_2F_Process_20_Input_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Attachment_20_Specifier_2F_Process_20_Input_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"UNDEFINED",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Attachment_20_Specifier_2F_Process_20_Input(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attachment_20_Specifier_2F_Process_20_Input_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Attachment_20_Specifier_2F_Process_20_Input_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Attachment_20_Specifier_2F_Process_20_Output(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Attachment_20_Value,3,0,TERMINAL(1),TERMINAL(3),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

/* Stop Universals */



Nat4 VPLC_Attribute_20_Specifier_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Attribute_20_Specifier_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Value",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Specifier");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Attribute_20_Specifier_2F_Process_20_Input_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Specifier_2F_Process_20_Input_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_inject_get(PARAMETERS,INJECT(2),1,2,TERMINAL(1),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Attribute_20_Specifier_2F_Process_20_Input_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Specifier_2F_Process_20_Input_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Attribute_20_Specifier_2F_Process_20_Input(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attribute_20_Specifier_2F_Process_20_Input_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Attribute_20_Specifier_2F_Process_20_Input_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Attribute_20_Specifier_2F_Process_20_Output(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_inject_set(PARAMETERS,INJECT(3),2,1,TERMINAL(1),TERMINAL(2),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

/* Stop Universals */






Nat4	loadClasses_Dispatch(V_Environment environment);
Nat4	loadClasses_Dispatch(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Method Call",environment);
	if(result == NULL) return kERROR;
	VPLC_Method_20_Call_class_load(result,environment);
	result = class_new("Specifier",environment);
	if(result == NULL) return kERROR;
	VPLC_Specifier_class_load(result,environment);
	result = class_new("Input Specifier",environment);
	if(result == NULL) return kERROR;
	VPLC_Input_20_Specifier_class_load(result,environment);
	result = class_new("Universal Method Input Specifier",environment);
	if(result == NULL) return kERROR;
	VPLC_Universal_20_Method_20_Input_20_Specifier_class_load(result,environment);
	result = class_new("Output Specifier",environment);
	if(result == NULL) return kERROR;
	VPLC_Output_20_Specifier_class_load(result,environment);
	result = class_new("Attribute Input Specifier",environment);
	if(result == NULL) return kERROR;
	VPLC_Attribute_20_Input_20_Specifier_class_load(result,environment);
	result = class_new("Attribute Output Specifier",environment);
	if(result == NULL) return kERROR;
	VPLC_Attribute_20_Output_20_Specifier_class_load(result,environment);
	result = class_new("Attachment Specifier",environment);
	if(result == NULL) return kERROR;
	VPLC_Attachment_20_Specifier_class_load(result,environment);
	result = class_new("Attribute Specifier",environment);
	if(result == NULL) return kERROR;
	VPLC_Attribute_20_Specifier_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Dispatch(V_Environment environment);
Nat4	loadUniversals_Dispatch(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Method Call/Call",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Method_20_Call_2F_Call,NULL);

	result = method_new("Method Call/Call Failed",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Method_20_Call_2F_Call_20_Failed,NULL);

	result = method_new("Method Call/Process Input Specifiers",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Method_20_Call_2F_Process_20_Input_20_Specifiers,NULL);

	result = method_new("Method Call/Process Output Specifiers",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Method_20_Call_2F_Process_20_Output_20_Specifiers,NULL);

	result = method_new("Method Call/Get Output Count",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Method_20_Call_2F_Get_20_Output_20_Count,NULL);

	result = method_new("Method Call/Get Method Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Method_20_Call_2F_Get_20_Method_20_Name,NULL);

	result = method_new("Method Call/Get Input Specifiers",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Method_20_Call_2F_Get_20_Input_20_Specifiers,NULL);

	result = method_new("Method Call/Get Output Specifiers",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Method_20_Call_2F_Get_20_Output_20_Specifiers,NULL);

	result = method_new("Method Call/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Method_20_Call_2F_Open,NULL);

	result = method_new("Method Call/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Method_20_Call_2F_Close,NULL);

	result = method_new("Method Call/Get Owner",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Method_20_Call_2F_Get_20_Owner,NULL);

	result = method_new("Method Call/Set Owner",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Method_20_Call_2F_Set_20_Owner,NULL);

	result = method_new("Method Call/Get Attachments",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Method_20_Call_2F_Get_20_Attachments,NULL);

	result = method_new("Method Call/Set Attachments",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Method_20_Call_2F_Set_20_Attachments,NULL);

	result = method_new("Method Call/Get Attachment Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Method_20_Call_2F_Get_20_Attachment_20_Value,NULL);

	result = method_new("Method Call/Set Attachment Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Method_20_Call_2F_Set_20_Attachment_20_Value,NULL);

	result = method_new("Specifier/Get Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Specifier_2F_Get_20_Value,NULL);

	result = method_new("Specifier/Set Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Specifier_2F_Set_20_Value,NULL);

	result = method_new("Specifier/Process Input",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Specifier_2F_Process_20_Input,NULL);

	result = method_new("Specifier/Process Output",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Specifier_2F_Process_20_Output,NULL);

	result = method_new("Input Specifier/Process Input",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Input_20_Specifier_2F_Process_20_Input,NULL);

	result = method_new("Universal Method Input Specifier/Process Input",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Method_20_Input_20_Specifier_2F_Process_20_Input,NULL);

	result = method_new("Output Specifier/Process Output",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Output_20_Specifier_2F_Process_20_Output,NULL);

	result = method_new("Attribute Input Specifier/Process Input",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Input_20_Specifier_2F_Process_20_Input,NULL);

	result = method_new("Attribute Output Specifier/Process Output",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Output_20_Specifier_2F_Process_20_Output,NULL);

	result = method_new("Attachment Specifier/Process Input",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attachment_20_Specifier_2F_Process_20_Input,NULL);

	result = method_new("Attachment Specifier/Process Output",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attachment_20_Specifier_2F_Process_20_Output,NULL);

	result = method_new("Attribute Specifier/Process Input",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Specifier_2F_Process_20_Input,NULL);

	result = method_new("Attribute Specifier/Process Output",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Specifier_2F_Process_20_Output,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_Dispatch(V_Environment environment);
Nat4	loadPersistents_Dispatch(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_Dispatch(V_Environment environment);
Nat4	load_Dispatch(V_Environment environment)
{

	loadClasses_Dispatch(environment);
	loadUniversals_Dispatch(environment);
	loadPersistents_Dispatch(environment);
	return kNOERROR;

}

