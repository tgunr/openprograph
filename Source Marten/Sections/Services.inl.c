/* A VPL Section File */
/*

Services.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_Get_20_Service_20_Manager(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_method_Get_20_Application(PARAMETERS,ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Service_20_Manager,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Find_20_Service(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Service_20_Manager(PARAMETERS,ROOT(1));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Service_20_Name,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}




	Nat4 tempAttribute_Service_20_Manager_2F_Services[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Service_20_Abstract_2F_Name[] = {
0000000000, 0X00000020, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Service_20_Abstract_2F_Required_20_Services[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Service_20_Abstract_2F_Initial_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000EE00
	};
	Nat4 tempAttribute_Service_20_Abstract_2F_Active_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_Service_20_Manager_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Service_20_Manager_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Services",tempClass,tempAttribute_Service_20_Manager_2F_Services,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Service_20_Manager_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Initial_20_Services,1,1,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Begin_20_Service,2,0,TERMINAL(0),LIST(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Service_20_Manager_2F_Get_20_Initial_20_Services_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Service_20_Manager_2F_Get_20_Initial_20_Services_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Initial_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Service_20_Manager_2F_Get_20_Initial_20_Services_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Service_20_Manager_2F_Get_20_Initial_20_Services_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Service_20_Manager_2F_Get_20_Initial_20_Services_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Service_20_Manager_2F_Get_20_Initial_20_Services_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Service_20_Manager_2F_Get_20_Initial_20_Services_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Service_20_Manager_2F_Get_20_Initial_20_Services_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Service_20_Manager_2F_Get_20_Initial_20_Services(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Services,1,1,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Service_20_Manager_2F_Get_20_Initial_20_Services_case_1_local_3(PARAMETERS,LIST(1),ROOT(2));
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

enum opTrigger vpx_method_Service_20_Manager_2F_Get_20_Active_20_Services_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Service_20_Manager_2F_Get_20_Active_20_Services_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Active_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Service_20_Manager_2F_Get_20_Active_20_Services_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Service_20_Manager_2F_Get_20_Active_20_Services_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Service_20_Manager_2F_Get_20_Active_20_Services_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Service_20_Manager_2F_Get_20_Active_20_Services_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Service_20_Manager_2F_Get_20_Active_20_Services_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Service_20_Manager_2F_Get_20_Active_20_Services_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Service_20_Manager_2F_Get_20_Active_20_Services(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Services,1,1,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Service_20_Manager_2F_Get_20_Active_20_Services_case_1_local_3(PARAMETERS,LIST(1),ROOT(2));
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

enum opTrigger vpx_method_Service_20_Manager_2F_Get_20_Services(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Services,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Service_20_Manager_2F_Set_20_Services(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Services,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Service_20_Manager_2F_Find_20_Service_20_Name_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Service_20_Manager_2F_Find_20_Service_20_Name_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Service_20_Manager_2F_Find_20_Service_20_Name_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Service_20_Manager_2F_Find_20_Service_20_Name_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Service_20_Manager_2F_Find_20_Service_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Service_20_Manager_2F_Find_20_Service_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Service_20_Manager_2F_Find_20_Service_20_Name_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Service_20_Manager_2F_Find_20_Service_20_Name_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Service_20_Manager_2F_Find_20_Service_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Services,1,1,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Service_20_Manager_2F_Find_20_Service_20_Name_case_1_local_3(PARAMETERS,LIST(2),TERMINAL(1),ROOT(3));
REPEATFINISH
} else {
ROOTNULL(3,NULL)
}

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Service_20_Manager_2F_Begin_20_Service_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Service_20_Manager_2F_Begin_20_Service_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Service_20_Name,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Active_3F_,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(4));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Service_20_Manager_2F_Begin_20_Service_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Service_20_Manager_2F_Begin_20_Service_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Service_20_Name,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Service_20_Manager_2F_Begin_20_Service_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Service_20_Manager_2F_Begin_20_Service_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Services,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Services,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Service_20_Manager_2F_Begin_20_Service_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Service_20_Manager_2F_Begin_20_Service_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Service_20_Manager_2F_Begin_20_Service_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Service_20_Manager_2F_Begin_20_Service_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Service_20_Manager_2F_Begin_20_Service(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Service_20_Manager_2F_Begin_20_Service_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_method_Service_20_Manager_2F_Begin_20_Service_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Begin,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Service_20_Manager_2F_Finish_20_Service(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Finish,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Service_20_Manager_2F_Load_20_Service_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Service_20_Manager_2F_Load_20_Service_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Make_20_Class(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Service_20_Manager_2F_Load_20_Service(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Service_20_Manager_2F_Load_20_Service_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Begin_20_Service,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Service_20_Name,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Service_20_Manager_2F_Initialize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Active_20_Services,1,1,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize,1,0,LIST(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Service_20_Manager_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Active_20_Services,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_reverse,1,1,TERMINAL(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Finish_20_Service,2,0,TERMINAL(0),LIST(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Service_20_Abstract_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Service_20_Abstract_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Service_20_Abstract_2F_Name,environment);
	tempAttribute = attribute_add("Required Services",tempClass,tempAttribute_Service_20_Abstract_2F_Required_20_Services,environment);
	tempAttribute = attribute_add("Initial?",tempClass,tempAttribute_Service_20_Abstract_2F_Initial_3F_,environment);
	tempAttribute = attribute_add("Active?",tempClass,tempAttribute_Service_20_Abstract_2F_Active_3F_,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 180 494 }{ 343 280 } */
enum opTrigger vpx_method_Service_20_Abstract_2F_Begin(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Active_3F_,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Service_20_Abstract_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Service_20_Abstract_2F_Create(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Load_20_Required_20_Services,2,0,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Service_20_Abstract_2F_Dispose(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Service_20_Abstract_2F_Finish(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Active_3F_,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Service_20_Abstract_2F_Get_20_Active_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Active_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Service_20_Abstract_2F_Get_20_Initial_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Initial_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Service_20_Abstract_2F_Get_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Service_20_Abstract_2F_Get_20_Required_20_Services(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Required_20_Services,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Service_20_Abstract_2F_Get_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Service_20_Abstract_2F_Initialize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Service_20_Abstract_2F_Load_20_Required_20_Services(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Required_20_Services,1,1,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Load_20_Service,2,0,TERMINAL(1),LIST(2));
FAILONFAILURE
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Service_20_Abstract_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Service_20_Abstract_2F_Set_20_Active_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Active_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Service_20_Abstract_2F_Set_20_Initial_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Initial_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Service_20_Abstract_2F_Set_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Service_20_Abstract_2F_Set_20_Required_20_Services(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Required_20_Services,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */






Nat4	loadClasses_Services(V_Environment environment);
Nat4	loadClasses_Services(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Service Manager",environment);
	if(result == NULL) return kERROR;
	VPLC_Service_20_Manager_class_load(result,environment);
	result = class_new("Service Abstract",environment);
	if(result == NULL) return kERROR;
	VPLC_Service_20_Abstract_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Services(V_Environment environment);
Nat4	loadUniversals_Services(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Get Service Manager",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Service_20_Manager,NULL);

	result = method_new("Find Service",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Find_20_Service,NULL);

	result = method_new("Service Manager/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Manager_2F_Open,NULL);

	result = method_new("Service Manager/Get Initial Services",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Manager_2F_Get_20_Initial_20_Services,NULL);

	result = method_new("Service Manager/Get Active Services",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Manager_2F_Get_20_Active_20_Services,NULL);

	result = method_new("Service Manager/Get Services",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Manager_2F_Get_20_Services,NULL);

	result = method_new("Service Manager/Set Services",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Manager_2F_Set_20_Services,NULL);

	result = method_new("Service Manager/Find Service Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Manager_2F_Find_20_Service_20_Name,NULL);

	result = method_new("Service Manager/Begin Service",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Manager_2F_Begin_20_Service,NULL);

	result = method_new("Service Manager/Finish Service",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Manager_2F_Finish_20_Service,NULL);

	result = method_new("Service Manager/Load Service",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Manager_2F_Load_20_Service,NULL);

	result = method_new("Service Manager/Initialize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Manager_2F_Initialize,NULL);

	result = method_new("Service Manager/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Manager_2F_Close,NULL);

	result = method_new("Service Abstract/Begin",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Abstract_2F_Begin,NULL);

	result = method_new("Service Abstract/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Abstract_2F_Close,NULL);

	result = method_new("Service Abstract/Create",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Abstract_2F_Create,NULL);

	result = method_new("Service Abstract/Dispose",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Abstract_2F_Dispose,NULL);

	result = method_new("Service Abstract/Finish",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Abstract_2F_Finish,NULL);

	result = method_new("Service Abstract/Get Active?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Abstract_2F_Get_20_Active_3F_,NULL);

	result = method_new("Service Abstract/Get Initial?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Abstract_2F_Get_20_Initial_3F_,NULL);

	result = method_new("Service Abstract/Get Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Abstract_2F_Get_20_Name,NULL);

	result = method_new("Service Abstract/Get Required Services",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Abstract_2F_Get_20_Required_20_Services,NULL);

	result = method_new("Service Abstract/Get Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Abstract_2F_Get_20_Type,NULL);

	result = method_new("Service Abstract/Initialize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Abstract_2F_Initialize,NULL);

	result = method_new("Service Abstract/Load Required Services",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Abstract_2F_Load_20_Required_20_Services,NULL);

	result = method_new("Service Abstract/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Abstract_2F_Open,NULL);

	result = method_new("Service Abstract/Set Active?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Abstract_2F_Set_20_Active_3F_,NULL);

	result = method_new("Service Abstract/Set Initial?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Abstract_2F_Set_20_Initial_3F_,NULL);

	result = method_new("Service Abstract/Set Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Abstract_2F_Set_20_Name,NULL);

	result = method_new("Service Abstract/Set Required Services",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Service_20_Abstract_2F_Set_20_Required_20_Services,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_Services(V_Environment environment);
Nat4	loadPersistents_Services(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_Services(V_Environment environment);
Nat4	load_Services(V_Environment environment)
{

	loadClasses_Services(environment);
	loadUniversals_Services(environment);
	loadPersistents_Services(environment);
	return kNOERROR;

}

