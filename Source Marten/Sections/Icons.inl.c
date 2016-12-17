/* A VPL Section File */
/*

Icons.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"




	Nat4 tempAttribute_MacOS_20_Icon_20_Service_2F_Name[] = {
0000000000, 0X00000024, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X05000000, 0X49636F6E, 0X73000000
	};
	Nat4 tempAttribute_MacOS_20_Icon_20_Service_2F_Required_20_Services[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MacOS_20_Icon_20_Service_2F_Initial_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_MacOS_20_Icon_20_Service_2F_Active_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MacOS_20_Icon_20_Service_2F_Icons[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MacOS_20_Icon_20_Reference_2F_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0D000000, 0X556E7469, 0X746C6564, 0X2049636F,
0X6E000000
	};
	Nat4 tempAttribute_MacOS_20_Icon_20_Registrar_2F_Type[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X646F6375
	};
	Nat4 tempAttribute_MacOS_20_Icon_20_Registrar_2F_Creator[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X6D616373
	};
	Nat4 tempAttribute_MacOS_20_Icon_20_Registrar_2F_Volume_20_Reference[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0XFFFF8000
	};
	Nat4 tempAttribute_MacOS_20_Icon_20_icns_20_File_20_Registrar_2F_Type[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MacOS_20_Icon_20_icns_20_File_20_Registrar_2F_Creator[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MacOS_20_Icon_20_icns_20_File_20_Registrar_2F_File_20_Name[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0B000000, 0X63757374, 0X6F6D2E69, 0X636E7300
	};


Nat4 VPLC_MacOS_20_Icon_20_Service_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_MacOS_20_Icon_20_Service_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_MacOS_20_Icon_20_Service_2F_Name,environment);
	tempAttribute = attribute_add("Required Services",tempClass,tempAttribute_MacOS_20_Icon_20_Service_2F_Required_20_Services,environment);
	tempAttribute = attribute_add("Initial?",tempClass,tempAttribute_MacOS_20_Icon_20_Service_2F_Initial_3F_,environment);
	tempAttribute = attribute_add("Active?",tempClass,tempAttribute_MacOS_20_Icon_20_Service_2F_Active_3F_,environment);
	tempAttribute = attribute_add("Icons",tempClass,tempAttribute_MacOS_20_Icon_20_Service_2F_Icons,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Service Abstract");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_MacOS_20_Icon_20_Service_2F_Register_20_Icons(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Icons,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Register_20_Icon,1,0,LIST(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_Icon_20_Service_2F_Unregister_20_Icons(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Icons,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Unregister_20_Icon,1,0,LIST(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_Icon_20_Service_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Unregister_20_Icons,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_MacOS_20_Icon_20_Service_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Register_20_Icons,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

/* Stop Universals */



Nat4 VPLC_MacOS_20_Icon_20_Reference_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_MacOS_20_Icon_20_Reference_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 73 530 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_MacOS_20_Icon_20_Reference_2F_Name,environment);
	tempAttribute = attribute_add("Icon Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Icon Registrar",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_MacOS_20_Icon_20_Reference_2F_Register_20_Icon_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_Icon_20_Reference_2F_Register_20_Icon_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Icon_20_Registrar,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Register_20_Icon,2,0,TERMINAL(2),TERMINAL(0));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_Icon_20_Reference_2F_Register_20_Icon_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_Icon_20_Reference_2F_Register_20_Icon_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_MacOS_20_Icon_20_Reference_2F_Register_20_Icon(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_Icon_20_Reference_2F_Register_20_Icon_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_MacOS_20_Icon_20_Reference_2F_Register_20_Icon_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_Icon_20_Reference_2F_Unregister_20_Icon_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_Icon_20_Reference_2F_Unregister_20_Icon_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Icon_20_Registrar,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Unregister_20_Icon,2,0,TERMINAL(2),TERMINAL(0));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_Icon_20_Reference_2F_Unregister_20_Icon_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_Icon_20_Reference_2F_Unregister_20_Icon_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_MacOS_20_Icon_20_Reference_2F_Unregister_20_Icon(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_Icon_20_Reference_2F_Unregister_20_Icon_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_MacOS_20_Icon_20_Reference_2F_Unregister_20_Icon_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_Icon_20_Reference_2F_Set_20_IconRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Icon_20_Reference,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_Icon_20_Reference_2F_Get_20_IconRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Icon_20_Reference,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_Icon_20_Reference_2F_Release_20_IconRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_IconRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

PUTINTEGER(ReleaseIconRef( GETPOINTER(0,OpaqueIconRef,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_MacOS_20_Icon_20_Reference_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Register_20_Icon,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_MacOS_20_Icon_20_Reference_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Unregister_20_Icon,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

/* Stop Universals */



Nat4 VPLC_MacOS_20_Icon_20_Registrar_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_MacOS_20_Icon_20_Registrar_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Type",tempClass,tempAttribute_MacOS_20_Icon_20_Registrar_2F_Type,environment);
	tempAttribute = attribute_add("Creator",tempClass,tempAttribute_MacOS_20_Icon_20_Registrar_2F_Creator,environment);
	tempAttribute = attribute_add("Volume Reference",tempClass,tempAttribute_MacOS_20_Icon_20_Registrar_2F_Volume_20_Reference,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 289 504 }{ 200 300 } */
enum opTrigger vpx_method_MacOS_20_Icon_20_Registrar_2F_Register_20_Icon(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_Icon_20_Registrar_2F_Unregister_20_Icon_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MacOS_20_Icon_20_Registrar_2F_Unregister_20_Icon_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Type,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Creator,1,1,TERMINAL(0),ROOT(3));

PUTINTEGER(UnregisterIconRef( GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(2))),4);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release_20_IconRef,1,0,TERMINAL(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_IconRef,2,0,TERMINAL(1),TERMINAL(5));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_MacOS_20_Icon_20_Registrar_2F_Unregister_20_Icon_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MacOS_20_Icon_20_Registrar_2F_Unregister_20_Icon_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_Icon_20_Registrar_2F_Unregister_20_Icon(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_Icon_20_Registrar_2F_Unregister_20_Icon_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_MacOS_20_Icon_20_Registrar_2F_Unregister_20_Icon_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_Icon_20_Registrar_2F_Get_20_Reference_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_MacOS_20_Icon_20_Registrar_2F_Get_20_Reference_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"GetIconRef",ROOT(4));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(4),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_MacOS_20_Icon_20_Registrar_2F_Get_20_Reference(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Domain,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Creator,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Type,1,1,TERMINAL(0),ROOT(4));

PUTINTEGER(GetIconRef( GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(4)),GETPOINTER(0,OpaqueIconRef,**,ROOT(6),NONE)),5);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_IconRef,2,0,TERMINAL(1),TERMINAL(6));

result = vpx_method_MacOS_20_Icon_20_Registrar_2F_Get_20_Reference_case_1_local_7(PARAMETERS,TERMINAL(5),TERMINAL(2),TERMINAL(3),TERMINAL(4));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_MacOS_20_Icon_20_Registrar_2F_Get_20_Creator_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_Icon_20_Registrar_2F_Get_20_Creator_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Creator,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_Icon_20_Registrar_2F_Get_20_Creator_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_Icon_20_Registrar_2F_Get_20_Creator_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Application(PARAMETERS,ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Signature,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_Icon_20_Registrar_2F_Get_20_Creator_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_Icon_20_Registrar_2F_Get_20_Creator_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_Icon_20_Registrar_2F_Get_20_Creator(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_Icon_20_Registrar_2F_Get_20_Creator_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_MacOS_20_Icon_20_Registrar_2F_Get_20_Creator_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_Icon_20_Registrar_2F_Get_20_Creator_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_Icon_20_Registrar_2F_Get_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_Icon_20_Registrar_2F_Get_20_Domain(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Volume_20_Reference,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_MacOS_20_Icon_20_icns_20_File_20_Registrar_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_MacOS_20_Icon_20_icns_20_File_20_Registrar_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Type",tempClass,tempAttribute_MacOS_20_Icon_20_icns_20_File_20_Registrar_2F_Type,environment);
	tempAttribute = attribute_add("Creator",tempClass,tempAttribute_MacOS_20_Icon_20_icns_20_File_20_Registrar_2F_Creator,environment);
	tempAttribute = attribute_add("Volume Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("File Name",tempClass,tempAttribute_MacOS_20_Icon_20_icns_20_File_20_Registrar_2F_File_20_Name,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"MacOS Icon Registrar");
	return kNOERROR;
}

/* Start Universals: { 450 471 }{ 200 300 } */
enum opTrigger vpx_method_MacOS_20_Icon_20_icns_20_File_20_Registrar_2F_Register_20_Icon_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MacOS_20_Icon_20_icns_20_File_20_Registrar_2F_Register_20_Icon_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_File_20_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_URL,1,1,NONE,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Capture_20_Resources_20_Name,2,1,TERMINAL(4),TERMINAL(3),ROOT(5));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(5),ROOT(6));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Creator,1,1,TERMINAL(0),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Type,1,1,TERMINAL(0),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(6),ROOT(9));
NEXTCASEONFAILURE

PUTINTEGER(RegisterIconRefFromFSRef( GETINTEGER(TERMINAL(7)),GETINTEGER(TERMINAL(8)),GETCONSTPOINTER(FSRef,*,TERMINAL(9)),GETPOINTER(0,OpaqueIconRef,**,ROOT(11),NONE)),10);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(10));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_IconRef,2,0,TERMINAL(1),TERMINAL(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(5));

result = kSuccess;

FOOTERWITHNONE(12)
}

enum opTrigger vpx_method_MacOS_20_Icon_20_icns_20_File_20_Registrar_2F_Register_20_Icon_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MacOS_20_Icon_20_icns_20_File_20_Registrar_2F_Register_20_Icon_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_Icon_20_icns_20_File_20_Registrar_2F_Register_20_Icon(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_Icon_20_icns_20_File_20_Registrar_2F_Register_20_Icon_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_MacOS_20_Icon_20_icns_20_File_20_Registrar_2F_Register_20_Icon_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

/* Stop Universals */






Nat4	loadClasses_Icons(V_Environment environment);
Nat4	loadClasses_Icons(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("MacOS Icon Service",environment);
	if(result == NULL) return kERROR;
	VPLC_MacOS_20_Icon_20_Service_class_load(result,environment);
	result = class_new("MacOS Icon Reference",environment);
	if(result == NULL) return kERROR;
	VPLC_MacOS_20_Icon_20_Reference_class_load(result,environment);
	result = class_new("MacOS Icon Registrar",environment);
	if(result == NULL) return kERROR;
	VPLC_MacOS_20_Icon_20_Registrar_class_load(result,environment);
	result = class_new("MacOS Icon icns File Registrar",environment);
	if(result == NULL) return kERROR;
	VPLC_MacOS_20_Icon_20_icns_20_File_20_Registrar_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Icons(V_Environment environment);
Nat4	loadUniversals_Icons(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("MacOS Icon Service/Register Icons",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Icon_20_Service_2F_Register_20_Icons,NULL);

	result = method_new("MacOS Icon Service/Unregister Icons",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Icon_20_Service_2F_Unregister_20_Icons,NULL);

	result = method_new("MacOS Icon Service/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Icon_20_Service_2F_Close,NULL);

	result = method_new("MacOS Icon Service/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Icon_20_Service_2F_Open,NULL);

	result = method_new("MacOS Icon Reference/Register Icon",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Icon_20_Reference_2F_Register_20_Icon,NULL);

	result = method_new("MacOS Icon Reference/Unregister Icon",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Icon_20_Reference_2F_Unregister_20_Icon,NULL);

	result = method_new("MacOS Icon Reference/Set IconRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Icon_20_Reference_2F_Set_20_IconRef,NULL);

	result = method_new("MacOS Icon Reference/Get IconRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Icon_20_Reference_2F_Get_20_IconRef,NULL);

	result = method_new("MacOS Icon Reference/Release IconRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Icon_20_Reference_2F_Release_20_IconRef,NULL);

	result = method_new("MacOS Icon Reference/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Icon_20_Reference_2F_Open,NULL);

	result = method_new("MacOS Icon Reference/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Icon_20_Reference_2F_Close,NULL);

	result = method_new("MacOS Icon Registrar/Register Icon",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Icon_20_Registrar_2F_Register_20_Icon,NULL);

	result = method_new("MacOS Icon Registrar/Unregister Icon",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Icon_20_Registrar_2F_Unregister_20_Icon,NULL);

	result = method_new("MacOS Icon Registrar/Get Reference",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Icon_20_Registrar_2F_Get_20_Reference,NULL);

	result = method_new("MacOS Icon Registrar/Get Creator",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Icon_20_Registrar_2F_Get_20_Creator,NULL);

	result = method_new("MacOS Icon Registrar/Get Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Icon_20_Registrar_2F_Get_20_Type,NULL);

	result = method_new("MacOS Icon Registrar/Get Domain",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Icon_20_Registrar_2F_Get_20_Domain,NULL);

	result = method_new("MacOS Icon icns File Registrar/Register Icon",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Icon_20_icns_20_File_20_Registrar_2F_Register_20_Icon,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_Icons(V_Environment environment);
Nat4	loadPersistents_Icons(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_Icons(V_Environment environment);
Nat4	load_Icons(V_Environment environment)
{

	loadClasses_Icons(environment);
	loadUniversals_Icons(environment);
	loadPersistents_Icons(environment);
	return kNOERROR;

}

