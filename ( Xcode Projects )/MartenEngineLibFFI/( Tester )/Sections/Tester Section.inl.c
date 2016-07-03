/* A VPL Section File */
/*

Tester Section.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_Run_20_Tests_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Run_20_Tests_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_inject_instance(PARAMETERS,INJECT(0),1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Run_20_Tests_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Run_20_Tests_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Choose A Test",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_select,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(0),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Run_20_Tests(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(5)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Test Run",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_descendants,1,1,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_method_Run_20_Tests_case_1_local_4(PARAMETERS,LIST(1),ROOT(2),ROOT(3));
LISTROOT(2,0)
LISTROOT(3,1)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTFINISH(3,1)
LISTROOTEND
} else {
ROOTEMPTY(2)
ROOTEMPTY(3)
}

result = vpx_method_Run_20_Tests_case_1_local_5(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Do_20_Test_20_Run,1,0,TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Results,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Report_20_Time_20_To_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Current_20_Report_20_Time(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(1)
result = kSuccess;

PUTREAL(CFAbsoluteTimeGetCurrent(),0);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTERSINGLECASE(1)
}




	Nat4 tempAttribute_Test_20_Rig_20_Abstract_2F_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0D000000, 0X556E7469, 0X746C6564, 0X20546573,
0X74000000
	};
	Nat4 tempAttribute_Test_20_Rig_20_Abstract_2F_Requires_20_Interaction_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Test_20_Rig_20_Abstract_2F_Test_20_Groups[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Test_20_Run_2F_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0C000000, 0X556E7469, 0X746C6564, 0X2052756E,
0000000000
	};
	Nat4 tempAttribute_Test_20_Run_2F_Requires_20_Interaction_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Test_20_Run_2F_Test_20_Groups[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Test_20_Run_2F_Run_20_Results[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Test_20_Run_20_All_20_Tests_2F_Name[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X09000000, 0X416C6C20, 0X54657374, 0X73000000
	};
	Nat4 tempAttribute_Test_20_Run_20_All_20_Tests_2F_Requires_20_Interaction_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Test_20_Run_20_All_20_Tests_2F_Test_20_Groups[] = {
0000000000, 0X00000040, 0X00000020, 0X00000003, 0X00000014, 0X00000054, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000001, 0X00000040,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000005C, 0X01000000, 0X2A000000
	};
	Nat4 tempAttribute_Test_20_Run_20_All_20_Tests_2F_Run_20_Results[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Test_20_Result_2F_Test_20_Name[] = {
0000000000, 0X00000020, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Test_20_Result_2F_Passed_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Test_20_Result_2F_Score[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Test_20_Result_2F_Comments[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_Test_20_Rig_20_Abstract_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Test_20_Rig_20_Abstract_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 213 145 }{ 208 370 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Test_20_Rig_20_Abstract_2F_Name,environment);
	tempAttribute = attribute_add("Requires Interaction?",tempClass,tempAttribute_Test_20_Rig_20_Abstract_2F_Requires_20_Interaction_3F_,environment);
	tempAttribute = attribute_add("Test Groups",tempClass,tempAttribute_Test_20_Rig_20_Abstract_2F_Test_20_Groups,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 307 220 }{ 269 310 } */
enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_Run_20_Test(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERSINGLECASEWITHNONE(1)
}

enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_Rig_20_For_20_Run_3F__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_Rig_20_For_20_Run_3F__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Abstract_20_Rig_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_Rig_20_For_20_Run_3F__case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_Rig_20_For_20_Run_3F__case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Requires_20_Interaction_3F_,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_Rig_20_For_20_Run_3F__case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_Rig_20_For_20_Run_3F__case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_Rig_20_For_20_Run_3F__case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_Rig_20_For_20_Run_3F__case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_Rig_20_For_20_Run_3F__case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_Rig_20_For_20_Run_3F__case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Test_20_Rig_20_Abstract_2F_Rig_20_For_20_Run_3F__case_1_local_4_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Test_20_Rig_20_Abstract_2F_Rig_20_For_20_Run_3F__case_1_local_4_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_Rig_20_For_20_Run_3F__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_Rig_20_For_20_Run_3F__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"( * )",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Test_20_Groups,1,1,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Test_20_Rig_20_Abstract_2F_Rig_20_For_20_Run_3F__case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(2),LIST(1),ROOT(3));
REPEATFINISH
} else {
ROOTNULL(3,NULL)
}

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_Rig_20_For_20_Run_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Test_20_Rig_20_Abstract_2F_Rig_20_For_20_Run_3F__case_1_local_2(PARAMETERS,TERMINAL(0));
FAILONFAILURE

result = vpx_method_Test_20_Rig_20_Abstract_2F_Rig_20_For_20_Run_3F__case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(2));
FAILONFAILURE

result = vpx_method_Test_20_Rig_20_Abstract_2F_Rig_20_For_20_Run_3F__case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_Get_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_Set_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_Get_20_Requires_20_Interaction_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Requires_20_Interaction_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_Set_20_Requires_20_Interaction_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Requires_20_Interaction_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_Get_20_Test_20_Groups(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Test_20_Groups,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_Set_20_Test_20_Groups(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Test_20_Groups,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_In_20_Test_20_Groups_3F__case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_In_20_Test_20_Groups_3F__case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_In_20_Test_20_Groups_3F__case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_In_20_Test_20_Groups_3F__case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_In_20_Test_20_Groups_3F__case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_In_20_Test_20_Groups_3F__case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Test_20_Rig_20_Abstract_2F_In_20_Test_20_Groups_3F__case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Test_20_Rig_20_Abstract_2F_In_20_Test_20_Groups_3F__case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_In_20_Test_20_Groups_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Test_20_Groups,1,1,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Test_20_Rig_20_Abstract_2F_In_20_Test_20_Groups_3F__case_1_local_3(PARAMETERS,LIST(2),TERMINAL(1),ROOT(3));
REPEATFINISH
} else {
ROOTNULL(3,NULL)
}

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_Get_20_Abstract_20_Rig_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Abstract_20_Rig_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Rig_20_Abstract_2F_Set_20_Abstract_20_Rig_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Abstract_20_Rig_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Test_20_Run_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Test_20_Run_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 230 210 }{ 198 362 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Test_20_Run_2F_Name,environment);
	tempAttribute = attribute_add("Requires Interaction?",tempClass,tempAttribute_Test_20_Run_2F_Requires_20_Interaction_3F_,environment);
	tempAttribute = attribute_add("Test Groups",tempClass,tempAttribute_Test_20_Run_2F_Test_20_Groups,environment);
	tempAttribute = attribute_add("Run Start",tempClass,NULL,environment);
	tempAttribute = attribute_add("Run Stop",tempClass,NULL,environment);
	tempAttribute = attribute_add("Run Results",tempClass,tempAttribute_Test_20_Run_2F_Run_20_Results,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 296 116 }{ 483 316 } */
enum opTrigger vpx_method_Test_20_Run_2F_Do_20_Test_20_Run_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Test_20_Run_2F_Do_20_Test_20_Run_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_Test_20_Result,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Call_20_Test,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Test_20_Run_2F_Do_20_Test_20_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Test_20_Rigs,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Start_20_Test,1,0,TERMINAL(0));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Test_20_Run_2F_Do_20_Test_20_Run_case_1_local_4(PARAMETERS,TERMINAL(0),LIST(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stop_20_Test,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Run_2F_Start_20_Test(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Current_20_Report_20_Time(PARAMETERS,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Run_20_Start,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Test_20_Run_2F_Stop_20_Test_case_1_local_4_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Test_20_Run_2F_Stop_20_Test_case_1_local_4_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Test_20_Run_2F_Stop_20_Test_case_1_local_4_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Test_20_Run_2F_Stop_20_Test_case_1_local_4_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Test_20_Run_2F_Stop_20_Test_case_1_local_4_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Test_20_Run_2F_Stop_20_Test_case_1_local_4_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NONE",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Test_20_Run_2F_Stop_20_Test_case_1_local_4_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Test_20_Run_2F_Stop_20_Test_case_1_local_4_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Test_20_Run_2F_Stop_20_Test_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Test_20_Run_2F_Stop_20_Test_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Test_20_Run_2F_Stop_20_Test_case_1_local_4_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Test_20_Run_2F_Stop_20_Test_case_1_local_4_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Test_20_Run_2F_Stop_20_Test_case_1_local_4_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Test_20_Run_2F_Stop_20_Test_case_1_local_4_case_1_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Test_20_Run_2F_Stop_20_Test_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Test_20_Run_2F_Stop_20_Test_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Test_20_Run_2F_Stop_20_Test_case_1_local_4_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Run_20_Results,2,0,TERMINAL(0),LIST(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Run_2F_Stop_20_Test(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Current_20_Report_20_Time(PARAMETERS,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Run_20_Stop,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_method_Test_20_Run_2F_Stop_20_Test_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Run_2F_Find_20_Test_20_Rigs_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Test_20_Run_2F_Find_20_Test_20_Rigs_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_inject_instance(PARAMETERS,INJECT(0),1,1,NONE,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Rig_20_For_20_Run_3F_,4,0,TERMINAL(4),TERMINAL(1),TERMINAL(2),TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Test_20_Run_2F_Find_20_Test_20_Rigs_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Test_20_Run_2F_Find_20_Test_20_Rigs_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Test_20_Run_2F_Find_20_Test_20_Rigs_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Test_20_Run_2F_Find_20_Test_20_Rigs_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Test_20_Run_2F_Find_20_Test_20_Rigs_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_Test_20_Run_2F_Find_20_Test_20_Rigs_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_Test_20_Run_2F_Find_20_Test_20_Rigs(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Test_20_Groups,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Requires_20_Interaction_3F_,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"Test Rig Abstract",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_descendants,1,1,TERMINAL(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Test_20_Run_2F_Find_20_Test_20_Rigs_case_1_local_6(PARAMETERS,LIST(4),TERMINAL(0),TERMINAL(2),TERMINAL(1),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Test_20_Run_2F_Call_20_Test_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Test_20_Run_2F_Call_20_Test_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"NONE",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_constant(PARAMETERS,"Passed",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Results,4,0,TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stop_20_Test,2,0,TERMINAL(2),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(6)
}

enum opTrigger vpx_method_Test_20_Run_2F_Call_20_Test_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Test_20_Run_2F_Call_20_Test_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_Test_20_Run_2F_Call_20_Test_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Test_20_Run_2F_Call_20_Test_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Test_20_Run_2F_Call_20_Test_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Test_20_Run_2F_Call_20_Test_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Test_20_Run_2F_Call_20_Test_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Test_20_Run_2F_Call_20_Test_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run_20_Test,1,1,TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

result = vpx_method_Test_20_Run_2F_Call_20_Test_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(3),TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Test_20_Run_2F_Call_20_Test_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Test_20_Run_2F_Call_20_Test_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_constant(PARAMETERS,"Failed",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Results,4,0,TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stop_20_Test,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Test_20_Run_2F_Call_20_Test_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Test_20_Run_2F_Call_20_Test_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Test_20_Run_2F_Call_20_Test_case_2_local_2(PARAMETERS,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Test_20_Run_2F_Call_20_Test(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Test_20_Run_2F_Call_20_Test_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Test_20_Run_2F_Call_20_Test_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Test_20_Run_2F_Report_20_Results_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Test_20_Run_2F_Report_20_Results_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Run_20_Results,1,1,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Result,1,0,LIST(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Test_20_Run_2F_Report_20_Results(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Start_20_Report,1,0,TERMINAL(0));

result = vpx_method_Test_20_Run_2F_Report_20_Results_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Finish_20_Report,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Test_20_Run_2F_Start_20_Report(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Test_20_Run_2F_Finish_20_Report(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Test_20_Run_2F_Get_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Run_2F_Set_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Run_2F_Get_20_Requires_20_Interaction_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Requires_20_Interaction_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Run_2F_Set_20_Requires_20_Interaction_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Requires_20_Interaction_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Run_2F_Get_20_Run_20_Start(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Run_20_Start,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Run_2F_Set_20_Run_20_Start(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Run_20_Start,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Run_2F_Get_20_Run_20_Stop(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Run_20_Stop,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Run_2F_Set_20_Run_20_Stop(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Run_20_Stop,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Run_2F_Get_20_Run_20_Results(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Run_20_Results,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Run_2F_Set_20_Run_20_Results(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Run_20_Results,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Run_2F_Add_20_Run_20_Results_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Test_20_Run_2F_Add_20_Run_20_Results_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Run_20_Results,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(2),TERMINAL(1),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Run_20_Results,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Test_20_Run_2F_Add_20_Run_20_Results_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Test_20_Run_2F_Add_20_Run_20_Results_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Test_20_Run_2F_Add_20_Run_20_Results(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Test_20_Run_2F_Add_20_Run_20_Results_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Test_20_Run_2F_Add_20_Run_20_Results_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Test_20_Run_2F_New_20_Test_20_Result(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Test_20_Result,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Start_20_Test,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Test_20_Run_2F_Get_20_Test_20_Groups(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Test_20_Groups,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Run_2F_Set_20_Test_20_Groups(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Test_20_Groups,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Test_20_Run_20_All_20_Tests_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Test_20_Run_20_All_20_Tests_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Test_20_Run_20_All_20_Tests_2F_Name,environment);
	tempAttribute = attribute_add("Requires Interaction?",tempClass,tempAttribute_Test_20_Run_20_All_20_Tests_2F_Requires_20_Interaction_3F_,environment);
	tempAttribute = attribute_add("Test Groups",tempClass,tempAttribute_Test_20_Run_20_All_20_Tests_2F_Test_20_Groups,environment);
	tempAttribute = attribute_add("Run Start",tempClass,NULL,environment);
	tempAttribute = attribute_add("Run Stop",tempClass,NULL,environment);
	tempAttribute = attribute_add("Run Results",tempClass,tempAttribute_Test_20_Run_20_All_20_Tests_2F_Run_20_Results,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Test Run");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
/* Stop Universals */



Nat4 VPLC_Test_20_Result_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Test_20_Result_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Test Name",tempClass,tempAttribute_Test_20_Result_2F_Test_20_Name,environment);
	tempAttribute = attribute_add("Start Time",tempClass,NULL,environment);
	tempAttribute = attribute_add("Stop Time",tempClass,NULL,environment);
	tempAttribute = attribute_add("Passed?",tempClass,tempAttribute_Test_20_Result_2F_Passed_3F_,environment);
	tempAttribute = attribute_add("Score",tempClass,tempAttribute_Test_20_Result_2F_Score,environment);
	tempAttribute = attribute_add("Comments",tempClass,tempAttribute_Test_20_Result_2F_Comments,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 341 502 }{ 461 329 } */
enum opTrigger vpx_method_Test_20_Result_2F_Start_20_Test(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Test_20_Name,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_method_Current_20_Report_20_Time(PARAMETERS,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Start_20_Time,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Test_20_Result_2F_Set_20_Results_case_1_local_4_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Test_20_Result_2F_Set_20_Results_case_1_local_4_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Test_20_Result_2F_Set_20_Results_case_1_local_4_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Test_20_Result_2F_Set_20_Results_case_1_local_4_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Test_20_Result_2F_Set_20_Results_case_1_local_4_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Test_20_Result_2F_Set_20_Results_case_1_local_4_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NONE",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Test_20_Result_2F_Set_20_Results_case_1_local_4_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Test_20_Result_2F_Set_20_Results_case_1_local_4_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Test_20_Result_2F_Set_20_Results_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Test_20_Result_2F_Set_20_Results_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Test_20_Result_2F_Set_20_Results_case_1_local_4_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Test_20_Result_2F_Set_20_Results_case_1_local_4_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Test_20_Result_2F_Set_20_Results_case_1_local_4_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Test_20_Result_2F_Set_20_Results_case_1_local_4_case_1_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Test_20_Result_2F_Set_20_Results_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Test_20_Result_2F_Set_20_Results_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Test_20_Result_2F_Set_20_Results_case_1_local_4_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Comment,2,0,TERMINAL(0),LIST(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Result_2F_Set_20_Results(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Passed_3F_,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Score,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_method_Test_20_Result_2F_Set_20_Results_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Test_20_Result_2F_Stop_20_Test(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Current_20_Report_20_Time(PARAMETERS,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stop_20_Time,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Run_20_Results,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Result_2F_Report_20_Result(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Result_20_Text,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_log_2D_string,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Test_20_Result_2F_Report_20_Result_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Finish_20_String,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Result_20_Strings,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Start_20_String,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(4),TERMINAL(1),ROOT(5));

result = vpx_constant(PARAMETERS,"13",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_ascii,1,1,TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(8));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,8,9)
result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,LOOP(0),LIST(5),TERMINAL(7),ROOT(9));
REPEATFINISH
} else {
ROOTNULL(9,TERMINAL(8))
}

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Test_20_Result_2F_Report_20_Start_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Start_20_Time,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_Report_20_Time_20_To_20_String(PARAMETERS,TERMINAL(1),NONE,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Test_20_Result_2F_Report_20_Result_20_Strings(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Passed_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Test_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Score,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"\"Test:\"",ROOT(4));

result = vpx_constant(PARAMETERS,"\" Pass:\"",ROOT(5));

result = vpx_constant(PARAMETERS,"\" Score:\"",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,6,1,TERMINAL(4),TERMINAL(2),TERMINAL(5),TERMINAL(1),TERMINAL(6),TERMINAL(3),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Test_20_Result_2F_Report_20_Finish_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Stop_20_Time,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_Report_20_Time_20_To_20_String(PARAMETERS,TERMINAL(1),NONE,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Test_20_Result_2F_Get_20_Test_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Test_20_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Result_2F_Set_20_Test_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Test_20_Name,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Result_2F_Get_20_Start_20_Time(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Start_20_Time,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Result_2F_Set_20_Start_20_Time(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Start_20_Time,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Result_2F_Get_20_Stop_20_Time(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Stop_20_Time,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Result_2F_Set_20_Stop_20_Time(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Stop_20_Time,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Result_2F_Get_20_Passed_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Passed_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Result_2F_Set_20_Passed_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Passed_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Result_2F_Get_20_Score(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Score,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Result_2F_Set_20_Score(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Score,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Result_2F_Get_20_Comments(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Comments,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Result_2F_Set_20_Comments(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Comments,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_Result_2F_Add_20_Comment(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Comments,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Comments,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

/* Stop Universals */






Nat4	loadClasses_Tester_20_Section(V_Environment environment);
Nat4	loadClasses_Tester_20_Section(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Test Rig Abstract",environment);
	if(result == NULL) return kERROR;
	VPLC_Test_20_Rig_20_Abstract_class_load(result,environment);
	result = class_new("Test Run",environment);
	if(result == NULL) return kERROR;
	VPLC_Test_20_Run_class_load(result,environment);
	result = class_new("Test Run All Tests",environment);
	if(result == NULL) return kERROR;
	VPLC_Test_20_Run_20_All_20_Tests_class_load(result,environment);
	result = class_new("Test Result",environment);
	if(result == NULL) return kERROR;
	VPLC_Test_20_Result_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Tester_20_Section(V_Environment environment);
Nat4	loadUniversals_Tester_20_Section(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Run Tests",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Run_20_Tests,"Tool");

	result = method_new("Report Time To String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Report_20_Time_20_To_20_String,NULL);

	result = method_new("Current Report Time",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Current_20_Report_20_Time,NULL);

	result = method_new("Test Rig Abstract/Run Test",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Rig_20_Abstract_2F_Run_20_Test,NULL);

	result = method_new("Test Rig Abstract/Rig For Run?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Rig_20_Abstract_2F_Rig_20_For_20_Run_3F_,NULL);

	result = method_new("Test Rig Abstract/Get Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Rig_20_Abstract_2F_Get_20_Name,NULL);

	result = method_new("Test Rig Abstract/Set Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Rig_20_Abstract_2F_Set_20_Name,NULL);

	result = method_new("Test Rig Abstract/Get Requires Interaction?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Rig_20_Abstract_2F_Get_20_Requires_20_Interaction_3F_,NULL);

	result = method_new("Test Rig Abstract/Set Requires Interaction?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Rig_20_Abstract_2F_Set_20_Requires_20_Interaction_3F_,NULL);

	result = method_new("Test Rig Abstract/Get Test Groups",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Rig_20_Abstract_2F_Get_20_Test_20_Groups,NULL);

	result = method_new("Test Rig Abstract/Set Test Groups",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Rig_20_Abstract_2F_Set_20_Test_20_Groups,NULL);

	result = method_new("Test Rig Abstract/In Test Groups?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Rig_20_Abstract_2F_In_20_Test_20_Groups_3F_,NULL);

	result = method_new("Test Rig Abstract/Get Abstract Rig?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Rig_20_Abstract_2F_Get_20_Abstract_20_Rig_3F_,NULL);

	result = method_new("Test Rig Abstract/Set Abstract Rig?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Rig_20_Abstract_2F_Set_20_Abstract_20_Rig_3F_,NULL);

	result = method_new("Test Run/Do Test Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Run_2F_Do_20_Test_20_Run,NULL);

	result = method_new("Test Run/Start Test",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Run_2F_Start_20_Test,NULL);

	result = method_new("Test Run/Stop Test",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Run_2F_Stop_20_Test,NULL);

	result = method_new("Test Run/Find Test Rigs",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Run_2F_Find_20_Test_20_Rigs,NULL);

	result = method_new("Test Run/Call Test",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Run_2F_Call_20_Test,NULL);

	result = method_new("Test Run/Report Results",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Run_2F_Report_20_Results,NULL);

	result = method_new("Test Run/Start Report",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Run_2F_Start_20_Report,NULL);

	result = method_new("Test Run/Finish Report",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Run_2F_Finish_20_Report,NULL);

	result = method_new("Test Run/Get Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Run_2F_Get_20_Name,NULL);

	result = method_new("Test Run/Set Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Run_2F_Set_20_Name,NULL);

	result = method_new("Test Run/Get Requires Interaction?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Run_2F_Get_20_Requires_20_Interaction_3F_,NULL);

	result = method_new("Test Run/Set Requires Interaction?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Run_2F_Set_20_Requires_20_Interaction_3F_,NULL);

	result = method_new("Test Run/Get Run Start",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Run_2F_Get_20_Run_20_Start,NULL);

	result = method_new("Test Run/Set Run Start",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Run_2F_Set_20_Run_20_Start,NULL);

	result = method_new("Test Run/Get Run Stop",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Run_2F_Get_20_Run_20_Stop,NULL);

	result = method_new("Test Run/Set Run Stop",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Run_2F_Set_20_Run_20_Stop,NULL);

	result = method_new("Test Run/Get Run Results",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Run_2F_Get_20_Run_20_Results,NULL);

	result = method_new("Test Run/Set Run Results",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Run_2F_Set_20_Run_20_Results,NULL);

	result = method_new("Test Run/Add Run Results",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Run_2F_Add_20_Run_20_Results,NULL);

	result = method_new("Test Run/New Test Result",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Run_2F_New_20_Test_20_Result,NULL);

	result = method_new("Test Run/Get Test Groups",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Run_2F_Get_20_Test_20_Groups,NULL);

	result = method_new("Test Run/Set Test Groups",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Run_2F_Set_20_Test_20_Groups,NULL);

	result = method_new("Test Result/Start Test",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Result_2F_Start_20_Test,NULL);

	result = method_new("Test Result/Set Results",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Result_2F_Set_20_Results,NULL);

	result = method_new("Test Result/Stop Test",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Result_2F_Stop_20_Test,NULL);

	result = method_new("Test Result/Report Result",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Result_2F_Report_20_Result,NULL);

	result = method_new("Test Result/Report Result Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Result_2F_Report_20_Result_20_Text,NULL);

	result = method_new("Test Result/Report Start String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Result_2F_Report_20_Start_20_String,NULL);

	result = method_new("Test Result/Report Result Strings",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Result_2F_Report_20_Result_20_Strings,NULL);

	result = method_new("Test Result/Report Finish String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Result_2F_Report_20_Finish_20_String,NULL);

	result = method_new("Test Result/Get Test Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Result_2F_Get_20_Test_20_Name,NULL);

	result = method_new("Test Result/Set Test Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Result_2F_Set_20_Test_20_Name,NULL);

	result = method_new("Test Result/Get Start Time",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Result_2F_Get_20_Start_20_Time,NULL);

	result = method_new("Test Result/Set Start Time",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Result_2F_Set_20_Start_20_Time,NULL);

	result = method_new("Test Result/Get Stop Time",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Result_2F_Get_20_Stop_20_Time,NULL);

	result = method_new("Test Result/Set Stop Time",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Result_2F_Set_20_Stop_20_Time,NULL);

	result = method_new("Test Result/Get Passed?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Result_2F_Get_20_Passed_3F_,NULL);

	result = method_new("Test Result/Set Passed?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Result_2F_Set_20_Passed_3F_,NULL);

	result = method_new("Test Result/Get Score",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Result_2F_Get_20_Score,NULL);

	result = method_new("Test Result/Set Score",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Result_2F_Set_20_Score,NULL);

	result = method_new("Test Result/Get Comments",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Result_2F_Get_20_Comments,NULL);

	result = method_new("Test Result/Set Comments",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Result_2F_Set_20_Comments,NULL);

	result = method_new("Test Result/Add Comment",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Result_2F_Add_20_Comment,NULL);

	return kNOERROR;

}


	Nat4 tempPersistent_Test_20_Rig_20_Abstract_2F_Abstract_20_Rig_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};

Nat4	loadPersistents_Tester_20_Section(V_Environment environment);
Nat4	loadPersistents_Tester_20_Section(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	tempPersistent = create_persistentNode("Test Rig Abstract/Abstract Rig?",tempPersistent_Test_20_Rig_20_Abstract_2F_Abstract_20_Rig_3F_,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	return kNOERROR;

}

Nat4	load_Tester_20_Section(V_Environment environment);
Nat4	load_Tester_20_Section(V_Environment environment)
{

	loadClasses_Tester_20_Section(environment);
	loadUniversals_Tester_20_Section(environment);
	loadPersistents_Tester_20_Section(environment);
	return kNOERROR;

}

