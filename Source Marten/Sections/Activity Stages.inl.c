/* A VPL Section File */
/*

Activity Stages.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"




	Nat4 tempAttribute_Activity_20_Staged_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X11000000, 0X556E7469, 0X746C6564, 0X20416374,
0X69766974, 0X79000000
	};
	Nat4 tempAttribute_Activity_20_Staged_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Staged_2F_Completed_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Staged_2F_Completion_20_Callback[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Staged_2F_Attachments[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Staged_2F_Stages[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Staged_2F_Completed_20_Stages[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Stage_2F_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0E000000, 0X556E7469, 0X746C6564, 0X20537461,
0X67650000
	};


Nat4 VPLC_Activity_20_Staged_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Activity_20_Staged_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Activity_20_Staged_2F_Name,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Activity_20_Staged_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Completed?",tempClass,tempAttribute_Activity_20_Staged_2F_Completed_3F_,environment);
	tempAttribute = attribute_add("Completion Callback",tempClass,tempAttribute_Activity_20_Staged_2F_Completion_20_Callback,environment);
	tempAttribute = attribute_add("Attachments",tempClass,tempAttribute_Activity_20_Staged_2F_Attachments,environment);
	tempAttribute = attribute_add("Progress",tempClass,NULL,environment);
	tempAttribute = attribute_add("Stages",tempClass,tempAttribute_Activity_20_Staged_2F_Stages,environment);
	tempAttribute = attribute_add("Current Stage",tempClass,NULL,environment);
	tempAttribute = attribute_add("Completed Stages",tempClass,tempAttribute_Activity_20_Staged_2F_Completed_20_Stages,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Activity Abstract");
	return kNOERROR;
}

/* Start Universals: { 256 268 }{ 200 300 } */
enum opTrigger vpx_method_Activity_20_Staged_2F_Run_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Activity_20_Staged_2F_Run_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Current_20_Stage,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Completed_20_Stages,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(6),TERMINAL(1),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Completed_20_Stages,TERMINAL(5),TERMINAL(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run_20_End,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Activity_20_Staged_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Activity_20_Staged_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Current_20_Stage,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run,2,1,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

result = vpx_method_Activity_20_Staged_2F_Run_case_1_local_6(PARAMETERS,TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Activity_20_Staged_2F_Run_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Activity_20_Staged_2F_Run_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Stages,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(2));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Stages,TERMINAL(1),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Activity_20_Staged_2F_Run_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Activity_20_Staged_2F_Run_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Make_20_Class(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Current_20_Stage,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run_20_Begin,2,0,TERMINAL(2),TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Activity_20_Staged_2F_Run_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Activity_20_Staged_2F_Run_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Current_20_Stage,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Activity_20_Staged_2F_Run_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Activity_20_Staged_2F_Run_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Activity_20_Staged_2F_Run_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Activity_20_Staged_2F_Run_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Activity_20_Staged_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Activity_20_Staged_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_method_Activity_20_Staged_2F_Run_case_2_local_3(PARAMETERS,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_method_Activity_20_Staged_2F_Run_case_2_local_4(PARAMETERS,TERMINAL(0),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_Activity_20_Staged_2F_Run_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Activity_20_Staged_2F_Run_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run_20_Verify_20_Completion,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Activity_20_Staged_2F_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Activity_20_Staged_2F_Run_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Activity_20_Staged_2F_Run_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Activity_20_Staged_2F_Run_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Activity_20_Staged_2F_Run_20_Verify_20_Completion(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Activity_20_Staged_2F_Cancel_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Activity_20_Staged_2F_Cancel_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Current_20_Stage,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Cancel,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Activity_20_Staged_2F_Cancel_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Activity_20_Staged_2F_Cancel_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Completed_20_Stages,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_reverse,1,1,TERMINAL(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Cancel,2,0,LIST(3),TERMINAL(0));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Activity_20_Staged_2F_Cancel_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Activity_20_Staged_2F_Cancel_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Activity_20_Staged_2F_Cancel_case_1_local_3_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_Activity_20_Staged_2F_Cancel_case_1_local_3_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Activity_20_Staged_2F_Cancel(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Cancel,1,0,TERMINAL(0));

result = vpx_method_Activity_20_Staged_2F_Cancel_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Activity_20_Staged_2F_Push_20_Next_20_Stage(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Stages,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Stages,TERMINAL(3),TERMINAL(5),ROOT(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Activity_20_Staged_2F_Push_20_Last_20_Stage(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Stages,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(4),TERMINAL(2),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Stages,TERMINAL(3),TERMINAL(5),ROOT(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

/* Stop Universals */



Nat4 VPLC_Activity_20_Stage_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Activity_20_Stage_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Activity_20_Stage_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Activity_20_Stage_2F_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Activity_20_Stage_2F_Run_20_Begin(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Activity,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Activity_20_Stage_2F_Run_20_End(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Activity,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Activity_20_Stage_2F_Cancel(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Activity_20_Stage_2F_Get_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

/* Stop Universals */






Nat4	loadClasses_Activity_20_Stages(V_Environment environment);
Nat4	loadClasses_Activity_20_Stages(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Activity Staged",environment);
	if(result == NULL) return kERROR;
	VPLC_Activity_20_Staged_class_load(result,environment);
	result = class_new("Activity Stage",environment);
	if(result == NULL) return kERROR;
	VPLC_Activity_20_Stage_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Activity_20_Stages(V_Environment environment);
Nat4	loadUniversals_Activity_20_Stages(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Activity Staged/Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Activity_20_Staged_2F_Run,NULL);

	result = method_new("Activity Staged/Run Verify Completion",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Activity_20_Staged_2F_Run_20_Verify_20_Completion,NULL);

	result = method_new("Activity Staged/Cancel",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Activity_20_Staged_2F_Cancel,NULL);

	result = method_new("Activity Staged/Push Next Stage",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Activity_20_Staged_2F_Push_20_Next_20_Stage,NULL);

	result = method_new("Activity Staged/Push Last Stage",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Activity_20_Staged_2F_Push_20_Last_20_Stage,NULL);

	result = method_new("Activity Stage/Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Activity_20_Stage_2F_Run,NULL);

	result = method_new("Activity Stage/Run Begin",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Activity_20_Stage_2F_Run_20_Begin,NULL);

	result = method_new("Activity Stage/Run End",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Activity_20_Stage_2F_Run_20_End,NULL);

	result = method_new("Activity Stage/Cancel",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Activity_20_Stage_2F_Cancel,NULL);

	result = method_new("Activity Stage/Get Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Activity_20_Stage_2F_Get_20_Name,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_Activity_20_Stages(V_Environment environment);
Nat4	loadPersistents_Activity_20_Stages(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_Activity_20_Stages(V_Environment environment);
Nat4	load_Activity_20_Stages(V_Environment environment)
{

	loadClasses_Activity_20_Stages(environment);
	loadUniversals_Activity_20_Stages(environment);
	loadPersistents_Activity_20_Stages(environment);
	return kNOERROR;

}

