/* A VPL Section File */
/*

Desktop Service.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_Set_20_Cursor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kThemeArrowCursor,ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

PUTINTEGER(SetThemeCursor( GETINTEGER(TERMINAL(2))),3);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Set_20_Arrow_20_Cursor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(1)
result = kSuccess;

result = vpx_method_Set_20_Cursor(PARAMETERS,NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(1)
}

enum opTrigger vpx_method_Get_20_Desktop_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Get_20_Desktop_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Desktop",ROOT(0));

result = vpx_method_Find_20_Service(PARAMETERS,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Get_20_Desktop_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Get_20_Desktop_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(0));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Get_20_Desktop(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Desktop_case_1(environment, &outcome, inputRepeat, contextIndex,root0))
vpx_method_Get_20_Desktop_case_2(environment, &outcome, inputRepeat, contextIndex,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_Desktop_20_Windows_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Get_20_Desktop_20_Windows_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_method_Get_20_Desktop(PARAMETERS,ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Windows,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Get_20_Desktop_20_Windows_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Get_20_Desktop_20_Windows_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(0));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Get_20_Desktop_20_Windows(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Desktop_20_Windows_case_1(environment, &outcome, inputRepeat, contextIndex,root0))
vpx_method_Get_20_Desktop_20_Windows_case_2(environment, &outcome, inputRepeat, contextIndex,root0);
return outcome;
}




	Nat4 tempAttribute_Desktop_20_Service_2F_Name[] = {
0000000000, 0X00000024, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000007, 0X4465736B, 0X746F7000
	};
	Nat4 tempAttribute_Desktop_20_Service_2F_Required_20_Services[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Desktop_20_Service_2F_Initial_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Desktop_20_Service_2F_Active_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Desktop_20_Service_2F_Windows[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Desktop_20_Service_2F_Initial_20_Windows[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Marten_20_Selection_20_PlugIn_20_Service_2F_Name[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000009, 0X53656C65, 0X6374696F, 0X6E000000
	};
	Nat4 tempAttribute_Marten_20_Selection_20_PlugIn_20_Service_2F_Required_20_Services[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Marten_20_Selection_20_PlugIn_20_Service_2F_Initial_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Marten_20_Selection_20_PlugIn_20_Service_2F_Active_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Marten_20_Selection_20_PlugIn_20_Service_2F_Plug_20_Ins[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Marten_20_Selection_20_Search_20_Info_2F_Name[] = {
0000000000, 0X00000034, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000016, 0X53656172, 0X63682069, 0X6E205072,
0X6F6A6563, 0X7420496E, 0X666F0000
	};
	Nat4 tempAttribute_Marten_20_Selection_20_Search_20_Info_2F_Description[] = {
0000000000, 0X00000054, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000034, 0X53656172, 0X63682066, 0X6F722074,
0X65726D20, 0X696E2074, 0X68697320, 0X70726F6A, 0X65637473, 0X20496E66, 0X6F726D61, 0X74696F6E,
0X2077696E, 0X646F772E, 0000000000
	};
	Nat4 tempAttribute_Marten_20_Selection_20_Search_20_Info_2F_Icon[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000000B, 0X496E666F, 0X726D6174, 0X696F6E00
	};
	Nat4 tempAttribute_Marten_20_Selection_20_Search_20_Info_2F_Command_20_ID[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X68536E66
	};


Nat4 VPLC_Desktop_20_Service_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Desktop_20_Service_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Desktop_20_Service_2F_Name,environment);
	tempAttribute = attribute_add("Required Services",tempClass,tempAttribute_Desktop_20_Service_2F_Required_20_Services,environment);
	tempAttribute = attribute_add("Initial?",tempClass,tempAttribute_Desktop_20_Service_2F_Initial_3F_,environment);
	tempAttribute = attribute_add("Active?",tempClass,tempAttribute_Desktop_20_Service_2F_Active_3F_,environment);
	tempAttribute = attribute_add("Windows",tempClass,tempAttribute_Desktop_20_Service_2F_Windows,environment);
	tempAttribute = attribute_add("Initial Windows",tempClass,tempAttribute_Desktop_20_Service_2F_Initial_20_Windows,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Service Abstract");
	return kNOERROR;
}

/* Start Universals: { 166 202 }{ 281 303 } */
enum opTrigger vpx_method_Desktop_20_Service_2F_Initialize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Menu_20_Bar,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Add_20_Window(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Windows,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(1),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Windows,TERMINAL(2),TERMINAL(5),ROOT(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Windows,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,LIST(2));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Menu_20_Bar,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Window_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Window_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Window_20_Record,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(4),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(2))
FOOTER(5)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Window_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Window_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Window_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Window_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Desktop_20_Service_2F_Find_20_Window_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Desktop_20_Service_2F_Find_20_Window_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Window(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Windows,TERMINAL(0),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Desktop_20_Service_2F_Find_20_Window_case_1_local_3(PARAMETERS,LIST(3),TERMINAL(1),ROOT(4));
REPEATFINISH
} else {
ROOTNULL(4,NULL)
}

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Remove_20_Window_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Desktop_20_Service_2F_Remove_20_Window_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Remove_20_Window_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Desktop_20_Service_2F_Remove_20_Window_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Remove_20_Window_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Desktop_20_Service_2F_Remove_20_Window_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Desktop_20_Service_2F_Remove_20_Window_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Desktop_20_Service_2F_Remove_20_Window_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Remove_20_Window(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Windows,TERMINAL(0),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Desktop_20_Service_2F_Remove_20_Window_case_1_local_3(PARAMETERS,TERMINAL(1),LIST(3),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = vpx_set(PARAMETERS,kVPXValue_Windows,TERMINAL(2),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Get_20_Windows(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Windows,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Type_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Type_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Type_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Type_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Type_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Type_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Type_case_1_local_3_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Type_case_1_local_3_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Type_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Type_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Type_case_1_local_3_case_1_local_3(PARAMETERS,LIST(1),ROOT(2));
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

enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Type_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Type_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(4)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Type_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Type_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Type_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Type_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Type_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Type_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Windows,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Type_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Type_case_1_local_4(PARAMETERS,LIST(2),TERMINAL(3),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Name_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Name_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(4)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Name_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Name_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Name_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Name_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Name_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Name_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Windows,1,1,TERMINAL(0),ROOT(2));

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Name_case_1_local_4(PARAMETERS,LIST(2),TERMINAL(3),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Delete_20_Quit_20_Now_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Desktop_20_Service_2F_Delete_20_Quit_20_Now_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(10)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(0));

result = vpx_constant(PARAMETERS,"\'QNow\'",ROOT(1));

result = vpx_constant(PARAMETERS,"1",ROOT(2));

PUTINTEGER(GetIndMenuItemWithCommandID( GETPOINTER(0,OpaqueMenuRef,*,ROOT(4),TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETPOINTER(0,OpaqueMenuRef,**,ROOT(5),NONE),GETPOINTER(2,unsigned short,*,ROOT(6),NONE)),3);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
TERMINATEONFAILURE

result = vpx_method_Get_20_UInt16(PARAMETERS,TERMINAL(6),NONE,ROOT(7),ROOT(8));

DeleteMenuItem( GETPOINTER(0,OpaqueMenuRef,*,ROOT(9),TERMINAL(5)),GETINTEGER(TERMINAL(8)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASEWITHNONE(10)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Delete_20_Quit_20_Now_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Desktop_20_Service_2F_Delete_20_Quit_20_Now_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Delete_20_Quit_20_Now_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Desktop_20_Service_2F_Delete_20_Quit_20_Now_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(13)
result = kSuccess;

PUTINTEGER(HMGetHelpMenu( GETPOINTER(0,OpaqueMenuRef,**,ROOT(1),NONE),GETPOINTER(2,unsigned short,*,ROOT(2),NONE)),0);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
TERMINATEONFAILURE

PUTINTEGER(CountMenuItems( GETPOINTER(0,OpaqueMenuRef,*,ROOT(4),TERMINAL(1))),3);
result = kSuccess;

result = vpx_method_Get_20_UInt16(PARAMETERS,TERMINAL(2),NONE,ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(3),TERMINAL(6),ROOT(7));

result = vpx_match(PARAMETERS,"0",TERMINAL(7));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"1",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(7),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(9),TERMINAL(6),TERMINAL(8),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_reverse,1,1,TERMINAL(10),ROOT(11));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(11))) ){
REPEATBEGINWITHCOUNTER
DeleteMenuItem( GETPOINTER(0,OpaqueMenuRef,*,ROOT(12),TERMINAL(1)),GETINTEGER(LIST(11)));
result = kSuccess;
REPEATFINISH
} else {
ROOTNULL(12,NULL)
}

result = kSuccess;

FOOTERWITHNONE(13)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Delete_20_Quit_20_Now_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Desktop_20_Service_2F_Delete_20_Quit_20_Now_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Desktop_20_Service_2F_Delete_20_Quit_20_Now_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex))
vpx_method_Desktop_20_Service_2F_Delete_20_Quit_20_Now_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex);
return outcome;
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Delete_20_Quit_20_Now(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Desktop_20_Service_2F_Delete_20_Quit_20_Now_case_1_local_2(PARAMETERS);

result = vpx_method_Desktop_20_Service_2F_Delete_20_Quit_20_Now_case_1_local_3(PARAMETERS);

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Add_20_Quit_20_Now_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Desktop_20_Service_2F_Add_20_Quit_20_Now_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(28)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(0));

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_extconstant(PARAMETERS,kHICommandQuit,ROOT(2));

PUTINTEGER(GetIndMenuItemWithCommandID( GETPOINTER(0,OpaqueMenuRef,*,ROOT(4),TERMINAL(0)),GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(1)),GETPOINTER(0,OpaqueMenuRef,**,ROOT(5),NONE),GETPOINTER(2,unsigned short,*,ROOT(6),NONE)),3);
result = kSuccess;

result = vpx_constant(PARAMETERS,"Quit Without Dispose",ROOT(7));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_constant(PARAMETERS,"\'QNow\'",ROOT(9));

result = vpx_extconstant(PARAMETERS,kMenuItemAttrDynamic,ROOT(10));

PUTINTEGER(AppendMenuItemTextWithCFString( GETPOINTER(0,OpaqueMenuRef,*,ROOT(12),TERMINAL(5)),GETCONSTPOINTER(__CFString,*,TERMINAL(8)),GETINTEGER(TERMINAL(10)),GETINTEGER(TERMINAL(9)),GETPOINTER(2,unsigned short,*,ROOT(13),NONE)),11);
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(14));

result = vpx_constant(PARAMETERS,"\'Q\'",ROOT(15));

result = vpx_method_Get_20_UInt16(PARAMETERS,TERMINAL(13),NONE,ROOT(16),ROOT(17));

PUTINTEGER(SetMenuItemCommandKey( GETPOINTER(0,OpaqueMenuRef,*,ROOT(19),TERMINAL(5)),GETINTEGER(TERMINAL(17)),GETINTEGER(TERMINAL(14)),GETINTEGER(TERMINAL(15))),18);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(8)));
result = kSuccess;

result = vpx_method_Get_20_UInt16(PARAMETERS,TERMINAL(6),NONE,ROOT(20),ROOT(21));

result = vpx_constant(PARAMETERS,"0",ROOT(22));

PUTINTEGER(ChangeMenuItemAttributes( GETPOINTER(0,OpaqueMenuRef,*,ROOT(24),TERMINAL(5)),GETINTEGER(TERMINAL(21)),GETINTEGER(TERMINAL(10)),GETINTEGER(TERMINAL(22))),23);
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kMenuControlModifier,ROOT(25));

PUTINTEGER(SetMenuItemModifiers( GETPOINTER(0,OpaqueMenuRef,*,ROOT(27),TERMINAL(5)),GETINTEGER(TERMINAL(17)),GETINTEGER(TERMINAL(25))),26);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASEWITHNONE(28)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Add_20_Quit_20_Now_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Desktop_20_Service_2F_Add_20_Quit_20_Now_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Add_20_Quit_20_Now_case_1_local_3_case_2_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Desktop_20_Service_2F_Add_20_Quit_20_Now_case_1_local_3_case_2_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(2),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(1),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(3),TERMINAL(4),ROOT(7));

result = vpx_constant(PARAMETERS,"0",ROOT(8));

PUTINTEGER(InsertMenuItemTextWithCFString( GETPOINTER(0,OpaqueMenuRef,*,ROOT(10),TERMINAL(0)),GETCONSTPOINTER(__CFString,*,TERMINAL(5)),GETINTEGER(TERMINAL(6)),GETINTEGER(TERMINAL(8)),GETINTEGER(TERMINAL(7))),9);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(1),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(3),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
OUTPUT(1,TERMINAL(12))
FOOTER(13)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Add_20_Quit_20_Now_case_1_local_3_case_2_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Desktop_20_Service_2F_Add_20_Quit_20_Now_case_1_local_3_case_2_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(1),ROOT(5));

result = vpx_constant(PARAMETERS,"0",ROOT(6));

result = vpx_constant(PARAMETERS,"NULL",ROOT(7));

result = vpx_extconstant(PARAMETERS,kMenuItemAttrSeparator,ROOT(8));

PUTINTEGER(InsertMenuItemTextWithCFString( GETPOINTER(0,OpaqueMenuRef,*,ROOT(10),TERMINAL(0)),GETCONSTPOINTER(__CFString,*,TERMINAL(7)),GETINTEGER(TERMINAL(5)),GETINTEGER(TERMINAL(8)),GETINTEGER(TERMINAL(6))),9);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(1),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
OUTPUT(1,TERMINAL(3))
FOOTER(12)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Add_20_Quit_20_Now_case_1_local_3_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Desktop_20_Service_2F_Add_20_Quit_20_Now_case_1_local_3_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Desktop_20_Service_2F_Add_20_Quit_20_Now_case_1_local_3_case_2_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,root0,root1))
vpx_method_Desktop_20_Service_2F_Add_20_Quit_20_Now_case_1_local_3_case_2_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Add_20_Quit_20_Now_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Desktop_20_Service_2F_Add_20_Quit_20_Now_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(10)
result = kSuccess;

PUTINTEGER(HMGetHelpMenu( GETPOINTER(0,OpaqueMenuRef,**,ROOT(1),NONE),GETPOINTER(2,unsigned short,*,ROOT(2),NONE)),0);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_method_Get_20_UInt16(PARAMETERS,TERMINAL(2),NONE,ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"\'hS00\'",ROOT(5));

result = vpx_constant(PARAMETERS,"( NULL \"Search Project Info\" \"Search ADC\" )",ROOT(6));

result = vpx_constant(PARAMETERS,"1",ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,4,8)
LOOPTERMINAL(1,7,9)
result = vpx_method_Desktop_20_Service_2F_Add_20_Quit_20_Now_case_1_local_3_case_2_local_8(PARAMETERS,TERMINAL(1),LOOP(0),LIST(6),LOOP(1),TERMINAL(5),ROOT(8),ROOT(9));
REPEATFINISH
} else {
ROOTNULL(8,TERMINAL(4))
ROOTNULL(9,TERMINAL(7))
}

result = kSuccess;

FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Add_20_Quit_20_Now_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Desktop_20_Service_2F_Add_20_Quit_20_Now_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Desktop_20_Service_2F_Add_20_Quit_20_Now_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex))
vpx_method_Desktop_20_Service_2F_Add_20_Quit_20_Now_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex);
return outcome;
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Add_20_Quit_20_Now(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Desktop_20_Service_2F_Add_20_Quit_20_Now_case_1_local_2(PARAMETERS);

result = vpx_method_Desktop_20_Service_2F_Add_20_Quit_20_Now_case_1_local_3(PARAMETERS);

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

PUTINTEGER(SetMenuBarFromNib( GETPOINTER(0,OpaqueIBNibRef,*,ROOT(4),TERMINAL(1)),GETCONSTPOINTER(__CFString,*,TERMINAL(2))),3);
result = kSuccess;

DisposeNibReference( GETPOINTER(0,OpaqueIBNibRef,*,ROOT(5),TERMINAL(1)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(6)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_to_2D_integer,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_to_2D_integer,1,1,LIST(0),ROOT(1));
LISTROOT(1,0)
REPEATFINISH
LISTROOTFINISH(1,0)
LISTROOTEND
} else {
ROOTEMPTY(1)
}

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
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

enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3_case_1_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(20)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\'mVPL\'",ROOT(3));

result = vpx_extconstant(PARAMETERS,kOnSystemDisk,ROOT(4));

PUTINTEGER(GetIconRef( GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(2)),GETPOINTER(0,OpaqueIconRef,**,ROOT(6),NONE)),5);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(7));

result = vpx_constant(PARAMETERS,"1",ROOT(8));

PUTINTEGER(GetIndMenuItemWithCommandID( GETPOINTER(0,OpaqueMenuRef,*,ROOT(10),TERMINAL(7)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(8)),GETPOINTER(0,OpaqueMenuRef,**,ROOT(11),NONE),GETPOINTER(2,unsigned short,*,ROOT(12),NONE)),9);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(9));
NEXTCASEONFAILURE

result = vpx_method_Get_20_UInt16(PARAMETERS,TERMINAL(12),NONE,ROOT(13),ROOT(14));

result = vpx_extconstant(PARAMETERS,kMenuIconRefType,ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(6),ROOT(16));

PUTINTEGER(SetMenuItemIconHandle( GETPOINTER(0,OpaqueMenuRef,*,ROOT(18),TERMINAL(11)),GETINTEGER(TERMINAL(14)),GETINTEGER(TERMINAL(15)),GETPOINTER(1,char,**,ROOT(19),TERMINAL(16))),17);
result = kSuccess;

result = kSuccess;

FOOTERWITHNONE(20)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(17)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"martenIcon.icns",ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_constant(PARAMETERS,"1",ROOT(3));

PUTINTEGER(GetIndMenuItemWithCommandID( GETPOINTER(0,OpaqueMenuRef,*,ROOT(5),TERMINAL(2)),GETINTEGER(TERMINAL(0)),GETINTEGER(TERMINAL(3)),GETPOINTER(0,OpaqueMenuRef,**,ROOT(6),NONE),GETPOINTER(2,unsigned short,*,ROOT(7),NONE)),4);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_method_Get_20_UInt16(PARAMETERS,TERMINAL(7),NONE,ROOT(8),ROOT(9));

result = vpx_extconstant(PARAMETERS,kMenuIconResourceType,ROOT(10));

result = vpx_constant(PARAMETERS,"char",ROOT(11));

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(1),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,1,TERMINAL(12),TERMINAL(11),ROOT(13));

PUTINTEGER(SetMenuItemIconHandle( GETPOINTER(0,OpaqueMenuRef,*,ROOT(15),TERMINAL(6)),GETINTEGER(TERMINAL(9)),GETINTEGER(TERMINAL(10)),GETPOINTER(1,char,**,ROOT(16),TERMINAL(13))),14);
result = kSuccess;

result = kSuccess;

FOOTERWITHNONE(17)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(14)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\'GURL\'",ROOT(0));

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_constant(PARAMETERS,"1",ROOT(2));

PUTINTEGER(GetIndMenuItemWithCommandID( GETPOINTER(0,OpaqueMenuRef,*,ROOT(4),TERMINAL(1)),GETINTEGER(TERMINAL(0)),GETINTEGER(TERMINAL(2)),GETPOINTER(0,OpaqueMenuRef,**,ROOT(5),NONE),GETPOINTER(2,unsigned short,*,ROOT(6),NONE)),3);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
TERMINATEONFAILURE

result = vpx_method_Get_20_UInt16(PARAMETERS,TERMINAL(6),NONE,ROOT(7),ROOT(8));

result = vpx_extconstant(PARAMETERS,kMenuSystemIconSelectorType,ROOT(9));

result = vpx_extconstant(PARAMETERS,kGenericURLIcon,ROOT(10));

PUTINTEGER(SetMenuItemIconHandle( GETPOINTER(0,OpaqueMenuRef,*,ROOT(12),TERMINAL(5)),GETINTEGER(TERMINAL(8)),GETINTEGER(TERMINAL(9)),GETPOINTER(1,char,**,ROOT(13),TERMINAL(10))),11);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASEWITHNONE(14)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Menubar_20_Icons,0,1,ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_3(PARAMETERS,LIST(1));
REPEATFINISH
} else {
}

result = vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11_case_1_local_4(PARAMETERS);

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(8)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"main",ROOT(1));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(1),ROOT(2));

PUTINTEGER(CreateNibReference( GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETPOINTER(0,OpaqueIBNibRef,**,ROOT(4),NONE)),3);
result = kSuccess;

result = vpx_constant(PARAMETERS,"Menu Bar",ROOT(5));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_7(PARAMETERS,TERMINAL(3),TERMINAL(4),TERMINAL(6),ROOT(7));

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(2)));
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(6)));
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Quit_20_Now,1,0,TERMINAL(0));

result = vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar_case_1_local_11(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_Desktop_20_Service_2F_Close_20_Menu_20_Bar(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Delete_20_Quit_20_Now,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

/* Stop Universals */



Nat4 VPLC_Marten_20_Selection_20_PlugIn_20_Service_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Marten_20_Selection_20_PlugIn_20_Service_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Marten_20_Selection_20_PlugIn_20_Service_2F_Name,environment);
	tempAttribute = attribute_add("Required Services",tempClass,tempAttribute_Marten_20_Selection_20_PlugIn_20_Service_2F_Required_20_Services,environment);
	tempAttribute = attribute_add("Initial?",tempClass,tempAttribute_Marten_20_Selection_20_PlugIn_20_Service_2F_Initial_3F_,environment);
	tempAttribute = attribute_add("Active?",tempClass,tempAttribute_Marten_20_Selection_20_PlugIn_20_Service_2F_Active_3F_,environment);
	tempAttribute = attribute_add("Plug Ins",tempClass,tempAttribute_Marten_20_Selection_20_PlugIn_20_Service_2F_Plug_20_Ins,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Service Abstract");
	return kNOERROR;
}

/* Start Universals: { 204 54 }{ 293 322 } */
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Command_20_ID_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Command_20_ID_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Base_20_Command_20_ID,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_integer_2D_to_2D_string,1,1,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"2",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(3),TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"2",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_integer_2D_to_2D_string,1,1,TERMINAL(1),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(8),TERMINAL(7),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(5),TERMINAL(9));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Command_20_ID_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Command_20_ID_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Command_20_ID,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Command_20_ID_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Command_20_ID_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Command_20_ID_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Command_20_ID_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Command_20_ID_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Command_20_ID_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Command_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Command_20_ID_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Plug_20_Ins,1,1,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Command_20_ID_case_1_local_4(PARAMETERS,LIST(2),TERMINAL(1),ROOT(3));
REPEATFINISH
} else {
ROOTNULL(3,NULL)
}

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Do_20_Command_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Command_20_ID,2,1,TERMINAL(0),TERMINAL(1),ROOT(4));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Do_20_Selector,3,0,TERMINAL(4),TERMINAL(2),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Name_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Name_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Name_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Name_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Name_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Name_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Plug_20_Ins,1,1,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Name_case_1_local_3(PARAMETERS,LIST(2),TERMINAL(1),ROOT(3));
REPEATFINISH
} else {
ROOTNULL(3,NULL)
}

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Do_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Name,2,1,TERMINAL(0),TERMINAL(1),ROOT(4));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Do_20_Selector,3,0,TERMINAL(4),TERMINAL(2),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Fill_20_Menu_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Fill_20_Menu_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Plug_20_Ins,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"(  NULL )",ROOT(3));

result = vpx_constant(PARAMETERS,"( )",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(5),TERMINAL(2),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Fill_20_Menu_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Fill_20_Menu_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_extconstant(PARAMETERS,kMenuItemAttrSeparator,ROOT(6));

PUTINTEGER(InsertMenuItemTextWithCFString( GETPOINTER(0,OpaqueMenuRef,*,ROOT(8),TERMINAL(1)),GETCONSTPOINTER(__CFString,*,TERMINAL(5)),GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(6)),GETINTEGER(TERMINAL(4))),7);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(2),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Fill_20_Menu_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Fill_20_Menu_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Menu_20_Item,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Fill_20_Menu_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Fill_20_Menu_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Fill_20_Menu_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Fill_20_Menu_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Fill_20_Menu_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Fill_20_Menu_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Fill_20_Menu_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Fill_20_Menu(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Default_20_TRUE(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Fill_20_Menu_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,2,6)
result = vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Fill_20_Menu_case_1_local_4(PARAMETERS,LIST(5),TERMINAL(1),LOOP(0),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(6,TERMINAL(2))
}

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_2_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_2_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Make_20_Class(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_2_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_2_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_2_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_2_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Defaults,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_copy,1,1,TERMINAL(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_2_case_1_local_4(PARAMETERS,LIST(3),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_3_case_1_local_6_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_3_case_1_local_6_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"__CFURL",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_method_CF_20_URL_2F_New(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_instantiate(PARAMETERS,kVPXClass_Marten_20_Selection_20_PlugIn,1,1,NONE,ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Load_20_Type,3,1,TERMINAL(5),TERMINAL(4),TERMINAL(1),ROOT(6));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(4));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_3_case_1_local_6_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_3_case_1_local_6_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_3_case_1_local_6_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_3_case_1_local_6_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_3_case_1_local_6_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_3_case_1_local_6_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_3_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_3_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CFBundleRef,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(2),ROOT(4));

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(1),ROOT(5));

PUTPOINTER(__CFArray,*,CFBundleCopyResourceURLsOfType( GETPOINTER(0,__CFBundle,*,ROOT(7),TERMINAL(3)),GETCONSTPOINTER(__CFString,*,TERMINAL(5)),GETCONSTPOINTER(__CFString,*,TERMINAL(4))),6);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
FAILONSUCCESS

result = vpx_method_From_20_CFType(PARAMETERS,TERMINAL(6),ROOT(8));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(8));
FAILONFAILURE

result = vpx_method_Make_20_Count(PARAMETERS,TERMINAL(8),ROOT(9));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(8),TERMINAL(9))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_3_case_1_local_6_case_1_local_11(PARAMETERS,LIST(8),LIST(9),ROOT(10));
LISTROOT(10,0)
REPEATFINISH
LISTROOTFINISH(10,0)
LISTROOTEND
} else {
ROOTEMPTY(10)
}

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_3_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_3_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Base_20_Command_20_ID,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Command_20_ID,2,0,TERMINAL(2),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Bundle,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Main_20_Bundle,1,0,TERMINAL(1));

result = vpx_constant(PARAMETERS,"vpxselect",ROOT(2));

result = vpx_constant(PARAMETERS,"Selectors",ROOT(3));

result = vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_3_case_1_local_6(PARAMETERS,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_method_Make_20_Count(PARAMETERS,TERMINAL(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(5),TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_3_case_1_local_8(PARAMETERS,TERMINAL(0),LIST(5),LIST(4));
REPEATFINISH
} else {
}

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Plug_20_Ins,2,0,TERMINAL(0),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Help_20_Menu,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Clear_20_Help_20_Menu,1,0,TERMINAL(0));

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Plug_20_Ins,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Get_20_Base_20_Command_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\'hS00\'",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Get_20_Plug_20_Ins(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Plug_20_Ins,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Set_20_Plug_20_Ins(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Plug_20_Ins,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Fill_20_Help_20_Menu(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(HMGetHelpMenu( GETPOINTER(0,OpaqueMenuRef,**,ROOT(2),NONE),GETPOINTER(2,unsigned short,*,ROOT(3),NONE)),1);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_method_Get_20_UInt16(PARAMETERS,TERMINAL(3),NONE,ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Menu,4,0,TERMINAL(0),TERMINAL(2),TERMINAL(5),NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Clear_20_Help_20_Menu(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(14)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(HMGetHelpMenu( GETPOINTER(0,OpaqueMenuRef,**,ROOT(2),NONE),GETPOINTER(2,unsigned short,*,ROOT(3),NONE)),1);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(1));
TERMINATEONFAILURE

PUTINTEGER(CountMenuItems( GETPOINTER(0,OpaqueMenuRef,*,ROOT(5),TERMINAL(2))),4);
result = kSuccess;

result = vpx_method_Get_20_UInt16(PARAMETERS,TERMINAL(3),NONE,ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(4),TERMINAL(7),ROOT(8));

result = vpx_match(PARAMETERS,"0",TERMINAL(8));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"1",ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(8),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(10),TERMINAL(7),TERMINAL(9),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_reverse,1,1,TERMINAL(11),ROOT(12));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(12))) ){
REPEATBEGINWITHCOUNTER
DeleteMenuItem( GETPOINTER(0,OpaqueMenuRef,*,ROOT(13),TERMINAL(2)),GETINTEGER(LIST(12)));
result = kSuccess;
REPEATFINISH
} else {
ROOTNULL(13,NULL)
}

result = kSuccess;

FOOTERSINGLECASEWITHNONE(14)
}

/* Stop Universals */



Nat4 VPLC_Marten_20_Selection_20_PlugIn_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Marten_20_Selection_20_PlugIn_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Bundle",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Description",tempClass,NULL,environment);
	tempAttribute = attribute_add("Icon",tempClass,NULL,environment);
	tempAttribute = attribute_add("Command ID",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 275 431 }{ 427 343 } */
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Do_20_Selector(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_From_20_CFURL(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Bundle,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Load_20_Info,2,0,TERMINAL(0),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Load_20_Type_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Load_20_Type_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MartenSelectorType",ROOT(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Bundle,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_CFURL,2,0,TERMINAL(2),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_method_From_20_CFType(PARAMETERS,TERMINAL(3),ROOT(4));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Load_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Marten_20_Selection_20_PlugIn_2F_Load_20_Type_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(3),ROOT(4));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Match_20_Type,2,1,TERMINAL(0),TERMINAL(3),ROOT(5));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_CFURL,3,0,TERMINAL(5),TERMINAL(4),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Load_20_Info_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Load_20_Info_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MartenSelectorItemName",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Bundle,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_method_From_20_CFType(PARAMETERS,TERMINAL(3),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(4));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Name,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Load_20_Info_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Load_20_Info_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MartenSelectorItemDescription",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Bundle,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_method_From_20_CFType(PARAMETERS,TERMINAL(3),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(4));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Description,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Load_20_Info_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Load_20_Info_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MartenSelectorItemIcon",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Bundle,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"icns",ROOT(4));

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"__CFString",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,1,TERMINAL(3),TERMINAL(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Copy_20_Resource_20_URL,4,1,TERMINAL(2),TERMINAL(7),TERMINAL(4),TERMINAL(5),ROOT(8));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(8),ROOT(9));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(9),ROOT(10));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(8));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Load_20_Info_case_1_local_4_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Load_20_Info_case_1_local_4_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Load_20_Info_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Load_20_Info_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Marten_20_Selection_20_PlugIn_2F_Load_20_Info_case_1_local_4_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Base_20_Command_20_ID,1,1,TERMINAL(0),ROOT(3));

PUTINTEGER(RegisterIconRefFromFSRef( GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(1)),GETCONSTPOINTER(FSRef,*,TERMINAL(2)),GETPOINTER(0,OpaqueIconRef,**,ROOT(5),NONE)),4);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(3),TERMINAL(1),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Icon,2,0,TERMINAL(0),TERMINAL(6));

result = vpx_method_Marten_20_Selection_20_PlugIn_2F_Load_20_Info_case_1_local_4_case_1_local_8(PARAMETERS,TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Load_20_Info(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Marten_20_Selection_20_PlugIn_2F_Load_20_Info_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_Marten_20_Selection_20_PlugIn_2F_Load_20_Info_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_method_Marten_20_Selection_20_PlugIn_2F_Load_20_Info_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Command_20_ID,1,1,TERMINAL(0),ROOT(4));

result = vpx_extconstant(PARAMETERS,kMenuItemAttrUpdateSingleItem,ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(2),ROOT(6));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(3),ROOT(7));

result = vpx_extconstant(PARAMETERS,kMenuItemAttrAutoDisable,ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_bit_2D_or,2,1,TERMINAL(5),TERMINAL(8),ROOT(9));

PUTINTEGER(InsertMenuItemTextWithCFString( GETPOINTER(0,OpaqueMenuRef,*,ROOT(11),TERMINAL(1)),GETCONSTPOINTER(__CFString,*,TERMINAL(7)),GETINTEGER(TERMINAL(6)),GETINTEGER(TERMINAL(9)),GETINTEGER(TERMINAL(4))),10);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(7)));
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(10));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(34)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kHMDefaultSide,ROOT(1));

result = vpx_extconstant(PARAMETERS,kMacHelpVersion,ROOT(2));

result = vpx_constant(PARAMETERS,"HMHelpContentRec",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_sizeof,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_extconstant(PARAMETERS,kHMCFStringContent,ROOT(6));

result = vpx_constant(PARAMETERS,"4",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(0),ROOT(8));

result = vpx_constant(PARAMETERS,"14",ROOT(9));

result = vpx_constant(PARAMETERS,"2",ROOT(10));

result = vpx_constant(PARAMETERS,"12",ROOT(11));

result = vpx_constant(PARAMETERS,"0",ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(5),TERMINAL(12),TERMINAL(7),TERMINAL(2),ROOT(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(13),TERMINAL(11),TERMINAL(10),TERMINAL(1),ROOT(15),ROOT(16));

result = vpx_extconstant(PARAMETERS,kHMPascalStrContent,ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(15),TERMINAL(16),TERMINAL(7),TERMINAL(17),ROOT(18),ROOT(19));

result = vpx_constant(PARAMETERS,"Test!!",ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_byte_2D_length,1,1,TERMINAL(20),ROOT(21));

result = vpx_constant(PARAMETERS,"1",ROOT(22));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(18),TERMINAL(19),TERMINAL(22),TERMINAL(21),ROOT(23),ROOT(24));

result = vpx_extconstant(PARAMETERS,kHMNoContent,ROOT(25));

result = vpx_constant(PARAMETERS,"260",ROOT(26));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(26),TERMINAL(16),ROOT(27));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_text,4,2,TERMINAL(23),TERMINAL(24),TERMINAL(21),TERMINAL(20),ROOT(28),ROOT(29));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(28),TERMINAL(27),TERMINAL(7),TERMINAL(25),ROOT(30),ROOT(31));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(30),TERMINAL(31),TERMINAL(7),TERMINAL(8),ROOT(32),ROOT(33));

result = kSuccess;

OUTPUT(0,TERMINAL(32))
FOOTER(34)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(19)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kHMDefaultSide,ROOT(1));

result = vpx_extconstant(PARAMETERS,kMacHelpVersion,ROOT(2));

result = vpx_constant(PARAMETERS,"HMHelpContentRec",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_sizeof,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_extset(PARAMETERS,"version",2,1,TERMINAL(5),TERMINAL(2),ROOT(6));

result = vpx_extset(PARAMETERS,"tagSide",2,1,TERMINAL(6),TERMINAL(1),ROOT(7));

result = vpx_extget(PARAMETERS,"&content",1,2,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_constant(PARAMETERS,"0",ROOT(10));

result = vpx_extget(PARAMETERS,"content",2,2,TERMINAL(7),TERMINAL(10),ROOT(11),ROOT(12));

result = vpx_extconstant(PARAMETERS,kHMCFStringContent,ROOT(13));

result = vpx_extset(PARAMETERS,"contentType",2,1,TERMINAL(9),TERMINAL(13),ROOT(14));

result = vpx_constant(PARAMETERS,"4",ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(0),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(14),TERMINAL(15),TERMINAL(15),TERMINAL(16),ROOT(17),ROOT(18));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(19)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_2_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_2_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(21)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kHMDefaultSide,ROOT(1));

result = vpx_extconstant(PARAMETERS,kMacHelpVersion,ROOT(2));

result = vpx_constant(PARAMETERS,"HMHelpContentRec",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_sizeof,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"0",ROOT(6));

result = vpx_extset(PARAMETERS,"version",2,1,TERMINAL(5),TERMINAL(2),ROOT(7));

result = vpx_extset(PARAMETERS,"tagSide",2,1,TERMINAL(7),TERMINAL(1),ROOT(8));

result = vpx_extget(PARAMETERS,"&content",1,2,TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_extconstant(PARAMETERS,kHMCFStringContent,ROOT(11));

result = vpx_constant(PARAMETERS,"4",ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(0),ROOT(13));

result = vpx_constant(PARAMETERS,"14",ROOT(14));

result = vpx_constant(PARAMETERS,"0",ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(10),TERMINAL(15),TERMINAL(12),TERMINAL(11),ROOT(16),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(16),TERMINAL(17),TERMINAL(12),TERMINAL(13),ROOT(18),ROOT(19));

result = vpx_extconstant(PARAMETERS,kHMNoContent,ROOT(20));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(21)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_2_local_5_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_2_local_5_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(24)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kHMDefaultSide,ROOT(1));

result = vpx_extconstant(PARAMETERS,kMacHelpVersion,ROOT(2));

result = vpx_constant(PARAMETERS,"HMHelpContentRec",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_sizeof,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"0",ROOT(6));

result = vpx_extset(PARAMETERS,"version",2,1,TERMINAL(5),TERMINAL(2),ROOT(7));

result = vpx_extset(PARAMETERS,"tagSide",2,1,TERMINAL(7),TERMINAL(1),ROOT(8));

result = vpx_extget(PARAMETERS,"&content",1,2,TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_extconstant(PARAMETERS,kHMCFStringContent,ROOT(11));

result = vpx_constant(PARAMETERS,"4",ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(0),ROOT(13));

result = vpx_constant(PARAMETERS,"14",ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(5),TERMINAL(14),TERMINAL(12),TERMINAL(11),ROOT(15),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(15),TERMINAL(16),TERMINAL(12),TERMINAL(13),ROOT(17),ROOT(18));

result = vpx_extconstant(PARAMETERS,kHMNoContent,ROOT(19));

result = vpx_constant(PARAMETERS,"260",ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(20),TERMINAL(14),ROOT(21));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(17),TERMINAL(21),TERMINAL(12),TERMINAL(19),ROOT(22),ROOT(23));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(24)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_2_local_5_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_2_local_5_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(25)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kHMDefaultSide,ROOT(1));

result = vpx_extconstant(PARAMETERS,kMacHelpVersion,ROOT(2));

result = vpx_constant(PARAMETERS,"HMHelpContentRec",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_sizeof,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_extset(PARAMETERS,"version",2,1,TERMINAL(5),TERMINAL(2),ROOT(6));

result = vpx_extset(PARAMETERS,"tagSide",2,1,TERMINAL(6),TERMINAL(1),ROOT(7));

result = vpx_extget(PARAMETERS,"content",1,2,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_extconstant(PARAMETERS,kHMCFStringContent,ROOT(10));

result = vpx_constant(PARAMETERS,"4",ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(0),ROOT(12));

result = vpx_constant(PARAMETERS,"14",ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(7),TERMINAL(13),TERMINAL(11),TERMINAL(10),ROOT(14),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(14),TERMINAL(15),TERMINAL(11),TERMINAL(12),ROOT(16),ROOT(17));

result = vpx_extconstant(PARAMETERS,kHMNoContent,ROOT(18));

result = vpx_constant(PARAMETERS,"260",ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(19),TERMINAL(13),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(16),TERMINAL(20),TERMINAL(11),TERMINAL(10),ROOT(21),ROOT(22));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(21),TERMINAL(22),TERMINAL(11),TERMINAL(12),ROOT(23),ROOT(24));

result = kSuccess;

OUTPUT(0,TERMINAL(23))
FOOTER(25)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_2_local_5_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_2_local_5_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(28)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kHMDefaultSide,ROOT(1));

result = vpx_extconstant(PARAMETERS,kMacHelpVersion,ROOT(2));

result = vpx_constant(PARAMETERS,"HMHelpContentRec",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_sizeof,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_extconstant(PARAMETERS,kHMCFStringContent,ROOT(6));

result = vpx_constant(PARAMETERS,"4",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(0),ROOT(8));

result = vpx_constant(PARAMETERS,"14",ROOT(9));

result = vpx_constant(PARAMETERS,"2",ROOT(10));

result = vpx_constant(PARAMETERS,"12",ROOT(11));

result = vpx_constant(PARAMETERS,"0",ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(5),TERMINAL(12),TERMINAL(7),TERMINAL(2),ROOT(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(13),TERMINAL(11),TERMINAL(10),TERMINAL(1),ROOT(15),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(15),TERMINAL(16),TERMINAL(7),TERMINAL(6),ROOT(17),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(17),TERMINAL(18),TERMINAL(7),TERMINAL(8),ROOT(19),ROOT(20));

result = vpx_extconstant(PARAMETERS,kHMNoContent,ROOT(21));

result = vpx_constant(PARAMETERS,"260",ROOT(22));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(22),TERMINAL(16),ROOT(23));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(19),TERMINAL(23),TERMINAL(7),TERMINAL(6),ROOT(24),ROOT(25));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(24),TERMINAL(25),TERMINAL(7),TERMINAL(8),ROOT(26),ROOT(27));

result = kSuccess;

OUTPUT(0,TERMINAL(26))
FOOTER(28)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_2_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_2_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_2_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_2_local_5_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_2_local_5_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_2_local_5_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Description,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_2_local_5(PARAMETERS,TERMINAL(4),ROOT(5));

PUTINTEGER(HMSetMenuItemHelpContent( GETPOINTER(0,OpaqueMenuRef,*,ROOT(7),TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETCONSTPOINTER(HMHelpContentRec,*,TERMINAL(5))),6);
result = kSuccess;

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Icon,1,1,TERMINAL(0),ROOT(3));

result = vpx_method_Find_20_Item_20_IconRef(PARAMETERS,TERMINAL(3),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(4),ROOT(5));

result = vpx_extconstant(PARAMETERS,kMenuIconRefType,ROOT(6));

PUTINTEGER(SetMenuItemIconHandle( GETPOINTER(0,OpaqueMenuRef,*,ROOT(8),TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(6)),GETPOINTER(1,char,**,ROOT(9),TERMINAL(5))),7);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Default_20_Keys_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Default_20_Keys_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Item_20_Helper(PARAMETERS,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Path_20_Name,1,1,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Default_20_Keys_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Default_20_Keys_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_method_AH_20_Find_20_Help_20_Book_20_Name(PARAMETERS,ROOT(0));
NEXTCASEONFAILURE

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Default_20_Keys_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Default_20_Keys_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Marten Help",ROOT(0));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Default_20_Keys_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Default_20_Keys_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Marten_20_Selection_20_PlugIn_2F_Default_20_Keys_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,root0))
vpx_method_Marten_20_Selection_20_PlugIn_2F_Default_20_Keys_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,root0);
return outcome;
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Default_20_Keys(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_View,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Values,1,1,TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"( )",TERMINAL(5));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"%name%",ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Marten_20_Selection_20_PlugIn_2F_Default_20_Keys_case_1_local_6(PARAMETERS,LIST(5),ROOT(7));
LISTROOT(7,0)
REPEATFINISH
LISTROOTFINISH(7,0)
LISTROOTEND
} else {
ROOTEMPTY(7)
}

result = vpx_constant(PARAMETERS,"\",\"",ROOT(8));

result = vpx_method__28_To_20_String_29_(PARAMETERS,TERMINAL(7),TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(9),ROOT(10));

result = vpx_constant(PARAMETERS,"%Help_Book_Name%",ROOT(11));

result = vpx_method_Marten_20_Selection_20_PlugIn_2F_Default_20_Keys_case_1_local_11(PARAMETERS,ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(11),TERMINAL(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(10),TERMINAL(13),ROOT(14));

result = kSuccess;

OUTPUT(0,TERMINAL(14))
FOOTERSINGLECASE(15)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Match_20_Type_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Match_20_Type_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Make_20_Class(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Type,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(3),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Match_20_Type_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Match_20_Type_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Match_20_Type_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Match_20_Type_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Marten_20_Selection_20_PlugIn_2F_Match_20_Type_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Marten_20_Selection_20_PlugIn_2F_Match_20_Type_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Match_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Marten Selection PlugIn",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_descendants,1,1,TERMINAL(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Marten_20_Selection_20_PlugIn_2F_Match_20_Type_case_1_local_4(PARAMETERS,LIST(3),TERMINAL(1),ROOT(4));
REPEATFINISH
} else {
ROOTNULL(4,NULL)
}

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Bundle(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Bundle,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Set_20_Bundle(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Bundle,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Set_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Description(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Description,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Set_20_Description(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Description,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Icon(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Icon,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Set_20_Icon(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Icon,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Command_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Command_20_ID,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Set_20_Command_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Command_20_ID,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Base_20_Command_20_ID_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Base_20_Command_20_ID_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Selection",ROOT(1));

result = vpx_method_Find_20_Service(PARAMETERS,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Base_20_Command_20_ID,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Base_20_Command_20_ID_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Base_20_Command_20_ID_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\'hS00\'",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Base_20_Command_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Base_20_Command_20_ID_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Base_20_Command_20_ID_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Marten_20_Selection_20_Open_20_URL_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Marten_20_Selection_20_Open_20_URL_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 107 516 }{ 200 300 } */
	tempAttribute = attribute_add("Bundle",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Description",tempClass,NULL,environment);
	tempAttribute = attribute_add("Icon",tempClass,NULL,environment);
	tempAttribute = attribute_add("Command ID",tempClass,NULL,environment);
	tempAttribute = attribute_add("Term",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Marten Selection PlugIn");
	return kNOERROR;
}

/* Start Universals: { 108 516 }{ 200 300 } */
enum opTrigger vpx_method_Marten_20_Selection_20_Open_20_URL_2F_Do_20_Selector_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_Open_20_URL_2F_Do_20_Selector_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUTF8,ROOT(3));

PUTPOINTER(__CFString,*,CFURLCreateStringByAddingPercentEscapes( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(1)),GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(1)),GETCONSTPOINTER(__CFString,*,TERMINAL(1)),GETINTEGER(TERMINAL(3))),4);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(2)));
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(4),ROOT(5));

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(4)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Marten_20_Selection_20_Open_20_URL_2F_Do_20_Selector_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_Open_20_URL_2F_Do_20_Selector_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Marten_20_Selection_20_Open_20_URL_2F_Do_20_Selector_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_Open_20_URL_2F_Do_20_Selector_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Marten_20_Selection_20_Open_20_URL_2F_Do_20_Selector_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Marten_20_Selection_20_Open_20_URL_2F_Do_20_Selector_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Marten_20_Selection_20_Open_20_URL_2F_Do_20_Selector(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Term,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Default_20_Keys,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_method__22_Replace_22_(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_method_Marten_20_Selection_20_Open_20_URL_2F_Do_20_Selector_case_1_local_6(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_method_URL_20_Open_20_In_20_Browser(PARAMETERS,TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Marten_20_Selection_20_Open_20_URL_2F_Load_20_Info_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Marten_20_Selection_20_Open_20_URL_2F_Load_20_Info_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MartenSelectorURLTerm",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Bundle,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_method_From_20_CFType(PARAMETERS,TERMINAL(3),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(4));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Term,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Marten_20_Selection_20_Open_20_URL_2F_Load_20_Info(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Load_20_Info,2,0,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = vpx_method_Marten_20_Selection_20_Open_20_URL_2F_Load_20_Info_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Marten_20_Selection_20_Open_20_URL_2F_Get_20_Term(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Term,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_Open_20_URL_2F_Set_20_Term(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Term,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Marten_20_Selection_20_Search_20_Info_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Marten_20_Selection_20_Search_20_Info_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 314 430 }{ 200 300 } */
	tempAttribute = attribute_add("Bundle",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Marten_20_Selection_20_Search_20_Info_2F_Name,environment);
	tempAttribute = attribute_add("Description",tempClass,tempAttribute_Marten_20_Selection_20_Search_20_Info_2F_Description,environment);
	tempAttribute = attribute_add("Icon",tempClass,tempAttribute_Marten_20_Selection_20_Search_20_Info_2F_Icon,environment);
	tempAttribute = attribute_add("Command ID",tempClass,tempAttribute_Marten_20_Selection_20_Search_20_Info_2F_Command_20_ID,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Marten Selection PlugIn");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Marten_20_Selection_20_Search_20_Info_2F_Do_20_Selector_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_Search_20_Info_2F_Do_20_Selector_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Item_20_Helper(PARAMETERS,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Path_20_Name,1,1,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_Search_20_Info_2F_Do_20_Selector_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_Search_20_Info_2F_Do_20_Selector_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Marten_20_Selection_20_Search_20_Info_2F_Do_20_Selector_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_Search_20_Info_2F_Do_20_Selector_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Marten_20_Selection_20_Search_20_Info_2F_Do_20_Selector_case_1_local_4_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Marten_20_Selection_20_Search_20_Info_2F_Do_20_Selector_case_1_local_4_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Marten_20_Selection_20_Search_20_Info_2F_Do_20_Selector_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_Search_20_Info_2F_Do_20_Selector_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_View,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Values,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
FAILONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Marten_20_Selection_20_Search_20_Info_2F_Do_20_Selector_case_1_local_4_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = vpx_match(PARAMETERS,"( )",TERMINAL(5));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Marten_20_Selection_20_Search_20_Info_2F_Do_20_Selector(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(3),ROOT(4));
TERMINATEONFAILURE

result = vpx_method_Marten_20_Selection_20_Search_20_Info_2F_Do_20_Selector_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(5));
TERMINATEONFAILURE

result = vpx_method_Lookup_20_Project_20_Info(PARAMETERS,TERMINAL(4),TERMINAL(5),NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(6)
}

/* Stop Universals */



Nat4 VPLC_Marten_20_Selection_20_Run_20_Script_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Marten_20_Selection_20_Run_20_Script_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Bundle",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Description",tempClass,NULL,environment);
	tempAttribute = attribute_add("Icon",tempClass,NULL,environment);
	tempAttribute = attribute_add("Command ID",tempClass,NULL,environment);
	tempAttribute = attribute_add("Script",tempClass,NULL,environment);
	tempAttribute = attribute_add("Component Type",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Marten Selection PlugIn");
	return kNOERROR;
}

/* Start Universals: { 321 414 }{ 200 300 } */
enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Do_20_Selector_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Do_20_Selector_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Script,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Default_20_Keys,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(4));
FAILONFAILURE

result = vpx_method__22_Replace_22_(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Do_20_Selector(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Do_20_Selector_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Component_20_Type,1,1,TERMINAL(0),ROOT(4));

result = vpx_method_Simple_20_Run_20_OSA(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Load_20_Info_case_1_local_3_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Load_20_Info_case_1_local_3_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Load_20_Info_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Load_20_Info_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(14)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MartenSelectorScriptFile",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Bundle,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_method_From_20_CFType(PARAMETERS,TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Load_20_Info_case_1_local_3_case_1_local_6(PARAMETERS,TERMINAL(3));

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Copy_20_Resource_20_URL,4,1,TERMINAL(2),TERMINAL(4),TERMINAL(5),TERMINAL(5),ROOT(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Data_20_And_20_Properties_20_From_20_Resource,5,4,TERMINAL(6),TERMINAL(7),NONE,NONE,NONE,ROOT(8),ROOT(9),ROOT(10),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(6));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(8));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(9));
NEXTCASEONFAILURE

result = vpx_method_CF_20_Data_2F_New(PARAMETERS,TERMINAL(9),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Text,2,1,TERMINAL(12),NONE,ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(12));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(13));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Script,2,0,TERMINAL(0),TERMINAL(13));

result = kSuccess;

FOOTERWITHNONE(14)
}

enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Load_20_Info_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Load_20_Info_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Load_20_Info_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Load_20_Info_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Load_20_Info_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Load_20_Info_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Load_20_Info_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Load_20_Info_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Bundle,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"MartenSelectorScriptType",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_method_From_20_CFType(PARAMETERS,TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Component_20_Type,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Load_20_Info_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Load_20_Info_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeAppleScript,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Component_20_Type,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Load_20_Info_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Load_20_Info_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Load_20_Info_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Load_20_Info_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Load_20_Info(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Load_20_Info,2,0,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Load_20_Info_case_1_local_3(PARAMETERS,TERMINAL(0));
FAILONFAILURE

result = vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Load_20_Info_case_1_local_4(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Get_20_Script(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Script,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Set_20_Script(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Script,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Get_20_Component_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Component_20_Type,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Set_20_Component_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Component_20_Type,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */






Nat4	loadClasses_Desktop_20_Service(V_Environment environment);
Nat4	loadClasses_Desktop_20_Service(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Desktop Service",environment);
	if(result == NULL) return kERROR;
	VPLC_Desktop_20_Service_class_load(result,environment);
	result = class_new("Marten Selection PlugIn Service",environment);
	if(result == NULL) return kERROR;
	VPLC_Marten_20_Selection_20_PlugIn_20_Service_class_load(result,environment);
	result = class_new("Marten Selection PlugIn",environment);
	if(result == NULL) return kERROR;
	VPLC_Marten_20_Selection_20_PlugIn_class_load(result,environment);
	result = class_new("Marten Selection Open URL",environment);
	if(result == NULL) return kERROR;
	VPLC_Marten_20_Selection_20_Open_20_URL_class_load(result,environment);
	result = class_new("Marten Selection Search Info",environment);
	if(result == NULL) return kERROR;
	VPLC_Marten_20_Selection_20_Search_20_Info_class_load(result,environment);
	result = class_new("Marten Selection Run Script",environment);
	if(result == NULL) return kERROR;
	VPLC_Marten_20_Selection_20_Run_20_Script_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Desktop_20_Service(V_Environment environment);
Nat4	loadUniversals_Desktop_20_Service(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Set Cursor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Set_20_Cursor,NULL);

	result = method_new("Set Arrow Cursor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Set_20_Arrow_20_Cursor,NULL);

	result = method_new("Get Desktop",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Desktop,NULL);

	result = method_new("Get Desktop Windows",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Desktop_20_Windows,NULL);

	result = method_new("Desktop Service/Initialize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Desktop_20_Service_2F_Initialize,NULL);

	result = method_new("Desktop Service/Add Window",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Desktop_20_Service_2F_Add_20_Window,NULL);

	result = method_new("Desktop Service/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Desktop_20_Service_2F_Close,NULL);

	result = method_new("Desktop Service/Find Window",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Desktop_20_Service_2F_Find_20_Window,NULL);

	result = method_new("Desktop Service/Remove Window",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Desktop_20_Service_2F_Remove_20_Window,NULL);

	result = method_new("Desktop Service/Get Windows",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Desktop_20_Service_2F_Get_20_Windows,NULL);

	result = method_new("Desktop Service/Find Windows Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Type,NULL);

	result = method_new("Desktop Service/Find Windows Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Desktop_20_Service_2F_Find_20_Windows_20_Name,NULL);

	result = method_new("Desktop Service/Delete Quit Now",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Desktop_20_Service_2F_Delete_20_Quit_20_Now,NULL);

	result = method_new("Desktop Service/Add Quit Now",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Desktop_20_Service_2F_Add_20_Quit_20_Now,NULL);

	result = method_new("Desktop Service/Create Menu Bar",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Desktop_20_Service_2F_Create_20_Menu_20_Bar,NULL);

	result = method_new("Desktop Service/Close Menu Bar",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Desktop_20_Service_2F_Close_20_Menu_20_Bar,NULL);

	result = method_new("Marten Selection PlugIn Service/Find Command ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Command_20_ID,NULL);

	result = method_new("Marten Selection PlugIn Service/Do Command ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Do_20_Command_20_ID,NULL);

	result = method_new("Marten Selection PlugIn Service/Find Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Find_20_Name,NULL);

	result = method_new("Marten Selection PlugIn Service/Do Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Do_20_Name,NULL);

	result = method_new("Marten Selection PlugIn Service/Fill Menu",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Fill_20_Menu,NULL);

	result = method_new("Marten Selection PlugIn Service/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Open,NULL);

	result = method_new("Marten Selection PlugIn Service/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Close,NULL);

	result = method_new("Marten Selection PlugIn Service/Get Base Command ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Get_20_Base_20_Command_20_ID,NULL);

	result = method_new("Marten Selection PlugIn Service/Get Plug Ins",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Get_20_Plug_20_Ins,NULL);

	result = method_new("Marten Selection PlugIn Service/Set Plug Ins",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Set_20_Plug_20_Ins,NULL);

	result = method_new("Marten Selection PlugIn Service/Fill Help Menu",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Fill_20_Help_20_Menu,NULL);

	result = method_new("Marten Selection PlugIn Service/Clear Help Menu",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_20_Service_2F_Clear_20_Help_20_Menu,NULL);

	result = method_new("Marten Selection PlugIn/Do Selector",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_2F_Do_20_Selector,NULL);

	result = method_new("Marten Selection PlugIn/Create From CFURL",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_From_20_CFURL,NULL);

	result = method_new("Marten Selection PlugIn/Load Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_2F_Load_20_Type,NULL);

	result = method_new("Marten Selection PlugIn/Load Info",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_2F_Load_20_Info,NULL);

	result = method_new("Marten Selection PlugIn/Create Menu Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_2F_Create_20_Menu_20_Item,NULL);

	result = method_new("Marten Selection PlugIn/Default Keys",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_2F_Default_20_Keys,NULL);

	result = method_new("Marten Selection PlugIn/Match Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_2F_Match_20_Type,NULL);

	result = method_new("Marten Selection PlugIn/Get Bundle",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Bundle,NULL);

	result = method_new("Marten Selection PlugIn/Set Bundle",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_2F_Set_20_Bundle,NULL);

	result = method_new("Marten Selection PlugIn/Get Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Name,NULL);

	result = method_new("Marten Selection PlugIn/Set Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_2F_Set_20_Name,NULL);

	result = method_new("Marten Selection PlugIn/Get Description",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Description,NULL);

	result = method_new("Marten Selection PlugIn/Set Description",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_2F_Set_20_Description,NULL);

	result = method_new("Marten Selection PlugIn/Get Icon",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Icon,NULL);

	result = method_new("Marten Selection PlugIn/Set Icon",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_2F_Set_20_Icon,NULL);

	result = method_new("Marten Selection PlugIn/Get Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Type,NULL);

	result = method_new("Marten Selection PlugIn/Get Command ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Command_20_ID,NULL);

	result = method_new("Marten Selection PlugIn/Set Command ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_2F_Set_20_Command_20_ID,NULL);

	result = method_new("Marten Selection PlugIn/Get Base Command ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_PlugIn_2F_Get_20_Base_20_Command_20_ID,NULL);

	result = method_new("Marten Selection Open URL/Do Selector",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_Open_20_URL_2F_Do_20_Selector,NULL);

	result = method_new("Marten Selection Open URL/Load Info",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_Open_20_URL_2F_Load_20_Info,NULL);

	result = method_new("Marten Selection Open URL/Get Term",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_Open_20_URL_2F_Get_20_Term,NULL);

	result = method_new("Marten Selection Open URL/Set Term",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_Open_20_URL_2F_Set_20_Term,NULL);

	result = method_new("Marten Selection Search Info/Do Selector",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_Search_20_Info_2F_Do_20_Selector,NULL);

	result = method_new("Marten Selection Run Script/Do Selector",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Do_20_Selector,NULL);

	result = method_new("Marten Selection Run Script/Load Info",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Load_20_Info,NULL);

	result = method_new("Marten Selection Run Script/Get Script",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Get_20_Script,NULL);

	result = method_new("Marten Selection Run Script/Set Script",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Set_20_Script,NULL);

	result = method_new("Marten Selection Run Script/Get Component Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Get_20_Component_20_Type,NULL);

	result = method_new("Marten Selection Run Script/Set Component Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Selection_20_Run_20_Script_2F_Set_20_Component_20_Type,NULL);

	return kNOERROR;

}


	Nat4 tempPersistent_Marten_20_Selection_20_PlugIn_20_Service_2F_Defaults[] = {
0000000000, 0X000002C8, 0X00000078, 0X00000019, 0X00000014, 0X00000308, 0X00000208, 0X00000204,
0X000002A8, 0X000002A4, 0X0000029C, 0X00000200, 0X00000254, 0X000001FC, 0X00000220, 0X000001F8,
0X000001CC, 0X000001D4, 0X00000098, 0X000000EC, 0X0000018C, 0X000000E8, 0X00000138, 0X000000E4,
0X00000104, 0X000000E0, 0X000000B0, 0X000000B8, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000002, 0X0000009C, 0X000001B8, 0X000D0008,
0000000000, 0000000000, 0000000000, 0000000000, 0X000000DC, 0X00000005, 0X000000BC, 0X4D617274,
0X656E2053, 0X656C6563, 0X74696F6E, 0X20536561, 0X72636820, 0X496E666F, 0000000000, 0000000000,
0X000000F0, 0X00000124, 0X00000178, 0X000001A0, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000010C, 0X00000016, 0X53656172, 0X63682069, 0X6E205072, 0X6F6A6563, 0X7420496E,
0X666F0000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000140, 0X00000034,
0X53656172, 0X63682066, 0X6F722074, 0X65726D20, 0X696E2074, 0X68697320, 0X70726F6A, 0X65637473,
0X20496E66, 0X6F726D61, 0X74696F6E, 0X2077696E, 0X646F772E, 0000000000, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000194, 0X0000000B, 0X496E666F, 0X726D6174, 0X696F6E00,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X68536E66, 0X000C0008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0X00000006, 0X000001D8, 0X4D617274, 0X656E2053,
0X656C6563, 0X74696F6E, 0X204F7065, 0X6E205552, 0X4C000000, 0000000000, 0X0000020C, 0X00000240,
0X00000288, 0X000002DC, 0X000002F4, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000228, 0X00000015, 0X53656172, 0X63682069, 0X6E204D61, 0X7274656E, 0X2048656C, 0X70000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000028, 0X53656172,
0X63682066, 0X6F722074, 0X65726D20, 0X696E2074, 0X6865204D, 0X61727465, 0X6E204865, 0X6C702062,
0X6F6F6B2E, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002A4,
0X00000002, 0X000002AC, 0X000002C4, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X6D616373, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X68656C70, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X68534D48, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000310, 0X0000002E, 0X68656C70, 0X3A736561, 0X7263683D, 0X22256E61,
0X6D652522, 0X20626F6F, 0X6B49443D, 0X22254865, 0X6C705F42, 0X6F6F6B5F, 0X4E616D65, 0X25220000
	};
	Nat4 tempPersistent_Marten_20_Selection_20_Open_20_URL_2F_Type[] = {
0000000000, 0X00000020, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000003, 0X55524C00
	};
	Nat4 tempPersistent_Marten_20_Selection_20_Search_20_Info_2F_Type[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000000B, 0X4D617274, 0X656E5F49, 0X4E464F00
	};
	Nat4 tempPersistent_Marten_20_Selection_20_Run_20_Script_2F_Type[] = {
0000000000, 0X00000024, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000006, 0X53637269, 0X70740000
	};

Nat4	loadPersistents_Desktop_20_Service(V_Environment environment);
Nat4	loadPersistents_Desktop_20_Service(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	tempPersistent = create_persistentNode("Marten Selection PlugIn Service/Defaults",tempPersistent_Marten_20_Selection_20_PlugIn_20_Service_2F_Defaults,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Marten Selection PlugIn/Type",NULL,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Marten Selection Open URL/Type",tempPersistent_Marten_20_Selection_20_Open_20_URL_2F_Type,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Marten Selection Search Info/Type",tempPersistent_Marten_20_Selection_20_Search_20_Info_2F_Type,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Marten Selection Run Script/Type",tempPersistent_Marten_20_Selection_20_Run_20_Script_2F_Type,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	return kNOERROR;

}

Nat4	load_Desktop_20_Service(V_Environment environment);
Nat4	load_Desktop_20_Service(V_Environment environment)
{

	loadClasses_Desktop_20_Service(environment);
	loadUniversals_Desktop_20_Service(environment);
	loadPersistents_Desktop_20_Service(environment);
	return kNOERROR;

}

