/* A VPL Section File */
/*

MyProjectData.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_Load_20_Project_20_Templates_case_1_local_6_case_1_local_10_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Load_20_Project_20_Templates_case_1_local_6_case_1_local_10_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"__CFURL",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_CF_20_URL_2F_New(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Load_20_Project_20_Templates_case_1_local_6_case_1_local_10_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Load_20_Project_20_Templates_case_1_local_6_case_1_local_10_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Load_20_Project_20_Templates_case_1_local_6_case_1_local_10_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Load_20_Project_20_Templates_case_1_local_6_case_1_local_10_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Load_20_Project_20_Templates_case_1_local_6_case_1_local_10_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Load_20_Project_20_Templates_case_1_local_6_case_1_local_10_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Load_20_Project_20_Templates_case_1_local_6_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Load_20_Project_20_Templates_case_1_local_6_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Marten_20_Project_20_Template,1,1,NONE,ROOT(1));

result = vpx_method_Load_20_Project_20_Templates_case_1_local_6_case_1_local_10_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_CFURL,2,0,TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Load_20_Project_20_Templates_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Load_20_Project_20_Templates_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
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

if( (repeatLimit = vpx_multiplex(1,TERMINAL(8))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Load_20_Project_20_Templates_case_1_local_6_case_1_local_10(PARAMETERS,LIST(8),ROOT(9));
LISTROOT(9,0)
REPEATFINISH
LISTROOTFINISH(9,0)
LISTROOTEND
} else {
ROOTEMPTY(9)
}

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Load_20_Project_20_Templates(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(4)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Bundle,1,1,NONE,ROOT(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Main_20_Bundle,1,0,TERMINAL(0));

result = vpx_constant(PARAMETERS,"vpxplate",ROOT(1));

result = vpx_constant(PARAMETERS,"Project Templates",ROOT(2));

result = vpx_method_Load_20_Project_20_Templates_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_persistent(PARAMETERS,kVPXValue_Project_20_Templates,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_Find_20_Template_20_ID_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Template_20_ID_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Default_20_Template,0,1,ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Find_20_Template_20_ID_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Find_20_Template_20_ID_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_ID,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Find_20_Template_20_ID_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Find_20_Template_20_ID_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Find_20_Template_20_ID_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Find_20_Template_20_ID_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Find_20_Template_20_ID_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Find_20_Template_20_ID_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Find_20_Template_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Project_20_Templates,0,1,ROOT(1));

result = vpx_method_Find_20_Template_20_ID_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Find_20_Template_20_ID_case_1_local_4(PARAMETERS,LIST(1),TERMINAL(2),ROOT(3));
REPEATFINISH
} else {
ROOTNULL(3,NULL)
}

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Substitute_20_Template_20_Keys_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Substitute_20_Template_20_Keys_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(3));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(1),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Substitute_20_Template_20_Keys(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Find_20_Template_20_ID(PARAMETERS,TERMINAL(0),ROOT(3));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Substitute_20_Keys,3,1,TERMINAL(3),TERMINAL(1),TERMINAL(2),ROOT(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_TEST_20_Show_20_Standard_20_Form_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_TEST_20_Show_20_Standard_20_Form_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( ( \"%vpl_projectname_cfilename%\" \"Math Project.inl.c\" ) ( \"%vpl_projectname_hfilename%\" \"Math Project.inl.h\" ) ( \"%vpl_projectname_mainmethod%\" \"\"\"Math Main\"\"\" ) ( \"%vpl_projectname_initmethod%\" \"\"\"Math Init\"\"\" ) ( \"%vpl_projectname_encoded%\" \"Math_20_Project\" ) ( \"%vpl_projectname_escapec%\" \"\"\"Math Project\"\"\" ) ( \"%vpl_gindex_Class%\" \"4\" ) ( \"%vpl_gindex_Method%\" \"43\" ) ( \"%vpl_gindex_Value%\" \"29\" ) ( \"%vpl_prims_declare%\" \"extern Nat4 load_framework_MartenStandard(V_Environment environment);\" ) ( \"%vpl_prims_load%\" \"\tresult = load_framework_MartenStandard(environment);\" ) ( \"%vpl_sections_declare%\" \"extern Nat4 load_section_Application(V_Environment environment);\" ) ( \"%vpl_sections_load%\" \"\tresult = load_section_Application(environment);\" ) ( \"%vpl_project_map%\" \"\tresult = vpx_class_map(environment,kVPXClass_AE_20_Descriptor,\"\"AE Descriptor\"\");\" ) )",ROOT(0));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_TEST_20_Show_20_Standard_20_Form(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MartenInlineProject",ROOT(0));

result = vpx_method_TEST_20_Show_20_Standard_20_Form_case_1_local_3(PARAMETERS,ROOT(1));

result = vpx_method_Substitute_20_Template_20_Keys(PARAMETERS,NONE,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_log_2D_string_2D_return,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}




	Nat4 tempAttribute_Project_20_Data_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X10000000, 0X556E7469, 0X746C6564, 0X2050726F,
0X6A656374, 0000000000
	};
	Nat4 tempAttribute_Project_20_Data_2F_Dirty[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Message_2F_Parameters[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Message_2F_Repeat_20_Count[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X02F10004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Settings_20_Locator_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X10000000, 0X50726F6A, 0X65637420, 0X53657474,
0X696E6773, 0000000000
	};
	Nat4 tempAttribute_Project_20_Settings_20_Locator_2F_Required_20_Services[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Settings_20_Locator_2F_Initial_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Project_20_Settings_20_Locator_2F_Active_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Settings_20_Locator_2F_Known_20_Projects[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_Project_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Project_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 98 305 }{ 167 385 } */
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Project_20_Data_2F_Name,environment);
	tempAttribute = attribute_add("File Specification",tempClass,NULL,environment);
	tempAttribute = attribute_add("Dirty",tempClass,tempAttribute_Project_20_Data_2F_Dirty,environment);
	tempAttribute = attribute_add("Environment",tempClass,NULL,environment);
	tempAttribute = attribute_add("Application Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Application Type",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Helper Data");
	return kNOERROR;
}

/* Start Universals: { 44 611 }{ 852 335 } */
enum opTrigger vpx_method_Project_20_Data_2F_Old_20_Show_20_Errors_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Old_20_Show_20_Errors_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\n\"",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Old_20_Show_20_Errors_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Old_20_Show_20_Errors_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"Errors:\n",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Errors,1,1,TERMINAL(2),ROOT(4));

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
NEXTCASEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,3,5)
result = vpx_method_Project_20_Data_2F_Old_20_Show_20_Errors_case_1_local_6(PARAMETERS,LOOP(0),LIST(4),ROOT(5));
REPEATFINISH
} else {
ROOTNULL(5,TERMINAL(3))
}

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(5));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Old_20_Show_20_Errors_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Old_20_Show_20_Errors_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"No errors",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Old_20_Show_20_Errors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Old_20_Show_20_Errors_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_Data_2F_Old_20_Show_20_Errors_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_17(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_17(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Universals,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18_case_1_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18_case_1_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"\"\"\"\"",ROOT(3));

result = vpx_constant(PARAMETERS,"\"\"\"\"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_exstring_2D_to_2D_instring,1,1,TERMINAL(2),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(4),TERMINAL(5),TERMINAL(3),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18_case_1_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18_case_1_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"NULL\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18_case_1_local_6_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18_case_1_local_6_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\n#define vpl_MAIN \"",ROOT(1));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18_case_1_local_6_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18_case_1_local_7_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18_case_1_local_7_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"\"\"\"\"",ROOT(3));

result = vpx_constant(PARAMETERS,"\"\"\"\"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_exstring_2D_to_2D_instring,1,1,TERMINAL(2),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(4),TERMINAL(5),TERMINAL(3),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18_case_1_local_7_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18_case_1_local_7_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"NULL\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18_case_1_local_7_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18_case_1_local_7_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\n#define vpl_INIT \"",ROOT(1));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18_case_1_local_7_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( MAIN INIT )",ROOT(1));

result = vpx_constant(PARAMETERS,"Text",ROOT(2));

result = vpx_method_Find_20_Instance_20_Values(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18_case_1_local_6(PARAMETERS,TERMINAL(4),ROOT(6));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18_case_1_local_7(PARAMETERS,TERMINAL(5),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_29(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_29(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_30(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_30(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Nat4 gClassConstantToIndex[\"",ROOT(2));

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(4),TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"\"];\"",ROOT(7));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,5,1,TERMINAL(0),TERMINAL(2),TERMINAL(6),TERMINAL(7),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_31(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_31(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Nat4 gMethodConstantToIndex[\"",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"\"];\"",ROOT(7));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,5,1,TERMINAL(0),TERMINAL(2),TERMINAL(6),TERMINAL(7),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_32(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_32(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Attributes,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Persistents,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_33(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_33(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Nat4 gValueConstantToIndex[\"",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"\"];\"",ROOT(7));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,5,1,TERMINAL(0),TERMINAL(2),TERMINAL(6),TERMINAL(7),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(32)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Export_20_Mode,0,1,ROOT(1));

result = vpx_match(PARAMETERS,"Experimental",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"/* A VPL Project Source File */\n/*\n\n",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_File_20_Name,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"\nCopyright: 2005 Andescotia LLC\n\n*/\n",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"\"\n#include \"\"\"",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_constant(PARAMETERS,"\"\"\"\n\"",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_H_20_File_20_Name,1,1,TERMINAL(0),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(8),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(11),TERMINAL(9),ROOT(12));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(12),TERMINAL(13),ROOT(14));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_17(PARAMETERS,TERMINAL(0),ROOT(15));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_18(PARAMETERS,TERMINAL(15),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(14),TERMINAL(16),ROOT(17));

result = vpx_constant(PARAMETERS,"\"\n\"",ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(17),TERMINAL(18),TERMINAL(18),ROOT(19));

result = vpx_constant(PARAMETERS,"extern Nat4\t*pClassConstantToIndex;",ROOT(20));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(21));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(19),TERMINAL(20),TERMINAL(21),ROOT(22));

result = vpx_constant(PARAMETERS,"extern Nat4\t*pMethodConstantToIndex;",ROOT(23));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(22),TERMINAL(23),TERMINAL(21),ROOT(24));

result = vpx_constant(PARAMETERS,"extern Nat4\t*pValueConstantToIndex;",ROOT(25));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(24),TERMINAL(25),TERMINAL(21),TERMINAL(21),ROOT(26));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_29(PARAMETERS,TERMINAL(0),ROOT(27));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_30(PARAMETERS,TERMINAL(26),TERMINAL(27),ROOT(28));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_31(PARAMETERS,TERMINAL(28),TERMINAL(15),ROOT(29));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_32(PARAMETERS,TERMINAL(0),ROOT(30));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1_local_33(PARAMETERS,TERMINAL(29),TERMINAL(30),ROOT(31));

result = kSuccess;

OUTPUT(0,TERMINAL(31))
FOOTER(32)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7_case_1_local_7_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7_case_1_local_7_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"\"\"\"\"",ROOT(3));

result = vpx_constant(PARAMETERS,"\"\"\"\"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_exstring_2D_to_2D_instring,1,1,TERMINAL(2),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(4),TERMINAL(5),TERMINAL(3),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7_case_1_local_7_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7_case_1_local_7_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"NULL\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7_case_1_local_7_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7_case_1_local_7_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\n#define vpl_MAIN \"",ROOT(1));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7_case_1_local_7_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7_case_1_local_8_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7_case_1_local_8_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"\"\"\"\"",ROOT(3));

result = vpx_constant(PARAMETERS,"\"\"\"\"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_exstring_2D_to_2D_instring,1,1,TERMINAL(2),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(4),TERMINAL(5),TERMINAL(3),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7_case_1_local_8_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7_case_1_local_8_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"NULL\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7_case_1_local_8_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7_case_1_local_8_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7_case_1_local_8_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7_case_1_local_8_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\n#define vpl_INIT \"",ROOT(1));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7_case_1_local_8_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( MAIN INIT )",ROOT(1));

result = vpx_constant(PARAMETERS,"Text",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Universals,1,1,TERMINAL(0),ROOT(3));

result = vpx_method_Find_20_Instance_20_Values(PARAMETERS,TERMINAL(3),TERMINAL(2),TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7_case_1_local_7(PARAMETERS,TERMINAL(5),ROOT(7));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7_case_1_local_8(PARAMETERS,TERMINAL(6),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
OUTPUT(1,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"/* A VPL Project File */\n/*\n\n",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_File_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"\nCopyright: 2005 Andescotia LLC\n\n*/\n",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2_local_7(PARAMETERS,TERMINAL(0),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(5),TERMINAL(6),ROOT(8));

result = vpx_constant(PARAMETERS,"\"\n\"",ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(8),TERMINAL(7),TERMINAL(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_3_local_17_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_3_local_17_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(3),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_3_local_17_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_3_local_17_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_3_local_17(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_3_local_17(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_3_local_17_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_3_local_17_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_3_local_18_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_3_local_18_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_3_local_18_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_3_local_18_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"ERROR: Export - MAIN method not found!",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(1));

result = vpx_constant(PARAMETERS,"MAIN",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_3_local_18(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_3_local_18(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_3_local_18_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_3_local_18_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(29)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Export_20_Mode,0,1,ROOT(1));

result = vpx_match(PARAMETERS,"Experimental",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"/* A VPL Project Source File */\n/*\n\n",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_File_20_Name,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"\nCopyright: 2004Andescotia LLC\n\n*/\n",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"\"\n#include \"\"\"",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_constant(PARAMETERS,"\"\"\"\n\"",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_H_20_File_20_Name,1,1,TERMINAL(0),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(8),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(11),TERMINAL(9),ROOT(12));

result = vpx_constant(PARAMETERS,"MAIN",ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Universals,1,1,TERMINAL(0),ROOT(14));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(14))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_3_local_17(PARAMETERS,LIST(14),TERMINAL(13),ROOT(15));
REPEATFINISH
} else {
ROOTNULL(15,NULL)
}

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_3_local_18(PARAMETERS,TERMINAL(15),ROOT(16));

result = vpx_constant(PARAMETERS,"\"\n#define vpl_MAIN \"\"\"",ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(12),TERMINAL(17),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(18),TERMINAL(16),ROOT(19));

result = vpx_constant(PARAMETERS,"\"\"\"\n\"",ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(19),TERMINAL(20),ROOT(21));

result = vpx_constant(PARAMETERS,"extern Nat4\t*pClassConstantToIndex;",ROOT(22));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(23));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(21),TERMINAL(22),TERMINAL(23),ROOT(24));

result = vpx_constant(PARAMETERS,"extern Nat4\t*pMethodConstantToIndex;",ROOT(25));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(24),TERMINAL(25),TERMINAL(23),ROOT(26));

result = vpx_constant(PARAMETERS,"extern Nat4\t*pValueConstantToIndex;",ROOT(27));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(26),TERMINAL(27),TERMINAL(23),ROOT(28));

result = kSuccess;

OUTPUT(0,TERMINAL(28))
FOOTER(29)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Header(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Header_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitive_20_Includes_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitive_20_Includes_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Load_20_Function_20_Name,1,1,TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"extern Nat4 \"",ROOT(5));

result = vpx_constant(PARAMETERS,"\"(V_Environment environment);\n\"",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(5),TERMINAL(4),TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitive_20_Includes_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitive_20_Includes_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitive_20_Includes_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitive_20_Includes_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"extern Nat4 load_",ROOT(4));

result = vpx_constant(PARAMETERS,"\"(V_Environment environment);\n\"",ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(4),TERMINAL(7),TERMINAL(5),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitive_20_Includes_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitive_20_Includes_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Primitive_20_Includes_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Primitive_20_Includes_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Primitive_20_Includes_case_1_local_7_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitive_20_Includes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitive_20_Includes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Primitives Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"\"\n\"",ROOT(5));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,6,7)
result = vpx_method_Project_20_Data_2F_C_20_Code_20_Primitive_20_Includes_case_1_local_7(PARAMETERS,LOOP(0),LIST(4),ROOT(7));
REPEATFINISH
} else {
ROOTNULL(7,TERMINAL(6))
}

result = vpx_constant(PARAMETERS,"\n\n",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(7),TERMINAL(6),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(7),TERMINAL(6));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitive_20_Includes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitive_20_Includes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\n\"",ROOT(1));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitive_20_Includes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Primitive_20_Includes_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Primitive_20_Includes_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Section_20_Includes_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Section_20_Includes_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"extern Nat4 load_",ROOT(4));

result = vpx_constant(PARAMETERS,"\"(V_Environment environment);\n\"",ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(4),TERMINAL(8),TERMINAL(5),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Section_20_Includes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Section_20_Includes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Section Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,5,6)
result = vpx_method_Project_20_Data_2F_C_20_Code_20_Section_20_Includes_case_1_local_6(PARAMETERS,LOOP(0),LIST(4),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(6,TERMINAL(5))
}

result = vpx_constant(PARAMETERS,"\n\n",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(5),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Section_20_Includes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Section_20_Includes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\n/* PRIMITIVES DATA NOT FOUND! */\n\"",ROOT(1));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Section_20_Includes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Section_20_Includes_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Section_20_Includes_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Load_20_Project_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Load_20_Project_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(14)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"V_Environment load_project_",ROOT(1));

result = vpx_constant(PARAMETERS,"(void)\n{\n",ROOT(2));

result = vpx_constant(PARAMETERS,"\tInt4\tresult = 0;\n",ROOT(3));

result = vpx_constant(PARAMETERS,"\tV_Environment ptrE = VPLEnvironmentGetMainEnvironment();\n",ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(1),TERMINAL(7),TERMINAL(2),ROOT(8));

result = vpx_constant(PARAMETERS,"(void);\n",ROOT(9));

result = vpx_constant(PARAMETERS,"V_Environment load_project_",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(10),TERMINAL(7),TERMINAL(9),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(11),TERMINAL(8),TERMINAL(3),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(12),TERMINAL(4),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
FOOTER(14)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Load_20_Project_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Load_20_Project_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(14)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"V_Environment load_project_",ROOT(1));

result = vpx_constant(PARAMETERS,"(void)\n{\n",ROOT(2));

result = vpx_constant(PARAMETERS,"\tInt4\tresult = 0;\n",ROOT(3));

result = vpx_constant(PARAMETERS,"\tV_Environment ptrE = createEnvironment();\n\n",ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(1),TERMINAL(7),TERMINAL(2),ROOT(8));

result = vpx_constant(PARAMETERS,"(void);\n",ROOT(9));

result = vpx_constant(PARAMETERS,"V_Environment load_project_",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(10),TERMINAL(7),TERMINAL(9),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(11),TERMINAL(8),TERMINAL(3),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(12),TERMINAL(4),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
FOOTER(14)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Load_20_Project(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Load_20_Project_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Load_20_Project_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitives_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitives_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Load_20_Function_20_Name,1,1,TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"(ptrE);\n\"",ROOT(5));

result = vpx_constant(PARAMETERS,"\"(environment);\n\"",ROOT(6));

result = vpx_constant(PARAMETERS,"\"\t\"",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(7),TERMINAL(4),TERMINAL(6),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitives_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitives_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitives_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitives_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"\"(ptrE);\n\"",ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"\"load_\"",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(7),TERMINAL(6),TERMINAL(4),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitives_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitives_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Primitives_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Primitives_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Primitives_case_1_local_6_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitives_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitives_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Primitives Data\"",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"\"",ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,3,6)
result = vpx_method_Project_20_Data_2F_C_20_Code_20_Primitives_case_1_local_6(PARAMETERS,LOOP(0),LIST(5),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(6,TERMINAL(3))
}

result = vpx_match(PARAMETERS,"\"\"",TERMINAL(6));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"\"/* Begin Primitive File Load */\n\"",ROOT(7));

result = vpx_constant(PARAMETERS,"\"/* End Primitive File Load */\n\n\"",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(7),TERMINAL(6),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitives_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitives_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\n\"",ROOT(1));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Primitives(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Primitives_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Primitives_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Sections_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Sections_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"\"(environment);\n\"",ROOT(4));

result = vpx_constant(PARAMETERS,"\"\tload_\"",ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(5),TERMINAL(8),TERMINAL(4),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(9),ROOT(10));

result = vpx_constant(PARAMETERS,"\"(ptrE);\n\"",ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Sections_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Sections_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Section Data\"",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"\"",ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,3,6)
result = vpx_method_Project_20_Data_2F_C_20_Code_20_Sections_case_1_local_2_case_1_local_6(PARAMETERS,LOOP(0),LIST(5),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(6,TERMINAL(3))
}

result = vpx_constant(PARAMETERS,"\"\n\"",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(3),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Sections_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Sections_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\n/* SECTION DATA NOT FOUND! */\n\"",ROOT(1));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Sections_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Sections_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Sections_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Sections_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Sections(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Sections_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"\"\treturn ptrE;\n}\n\n\"",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Name,LIST(0),ROOT(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTNULL(1,NULL)
ROOTEMPTY(2)
}

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_sort,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_4_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Name,LIST(0),ROOT(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTNULL(1,NULL)
ROOTEMPTY(2)
}

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_sort,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Universals,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_5_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Name,LIST(0),ROOT(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTNULL(1,NULL)
ROOTEMPTY(2)
}

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_sort,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Attributes,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Persistents,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_6_case_1_local_5(PARAMETERS,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"int main(int argc, char *argv[])\n{\n\tif( VPLEnvironmentIsLoaded(NULL) == kFALSE ) init();\n\t\t\n\treturn VPLEnvironmentMain(NULL,vpl_MAIN,argc,argv);\n}\n",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_MAIN,1,1,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(16)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"int main(int argc, char *argv[])\n",ROOT(1));

result = vpx_constant(PARAMETERS,"{\n\tInt4 result = 0;\n\n",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"\tV_Environment environment = load_project_",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(6),ROOT(7));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(5),TERMINAL(8),ROOT(9));

result = vpx_constant(PARAMETERS,"();\n\n\tresult = post_load(environment);\n\n",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(9),TERMINAL(10),ROOT(11));

result = vpx_constant(PARAMETERS,"\tresult = execute_environment(environment,vpl_MAIN,argc,argv);\n\n",ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(11),TERMINAL(12),ROOT(13));

result = vpx_constant(PARAMETERS,"\treturn result;\n\n}\n",ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(13),TERMINAL(14),ROOT(15));

result = kSuccess;

OUTPUT(0,TERMINAL(15))
FOOTER(16)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_7_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_8_case_1_local_7_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_8_case_1_local_7_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\tresult = vpx_class_map(environment,kVPXClass_\"",ROOT(2));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"\",\"\"\"",ROOT(4));

result = vpx_constant(PARAMETERS,"\"\"\");\"",ROOT(5));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,7,1,TERMINAL(0),TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(1),TERMINAL(5),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_8_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_8_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,2)
result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_8_case_1_local_7_case_1_local_2(PARAMETERS,LOOP(0),LIST(1),ROOT(2));
REPEATFINISH
} else {
ROOTNULL(2,TERMINAL(0))
}

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_8_case_1_local_8_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_8_case_1_local_8_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\tresult = vpx_method_map(environment,kVPXMethod_\"",ROOT(2));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"\",\"",ROOT(4));

result = vpx_constant(PARAMETERS,"\");\"",ROOT(5));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(6));

result = vpx_method_VPL_20_Text_20_To_20_C_20_String(PARAMETERS,TERMINAL(1),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,7,1,TERMINAL(0),TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(7),TERMINAL(5),TERMINAL(6),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_8_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_8_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,2)
result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_8_case_1_local_8_case_1_local_2(PARAMETERS,LOOP(0),LIST(1),ROOT(2));
REPEATFINISH
} else {
ROOTNULL(2,TERMINAL(0))
}

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_8_case_1_local_9_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_8_case_1_local_9_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\tresult = vpx_value_map(environment,kVPXValue_\"",ROOT(2));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"\",\"\"\"",ROOT(4));

result = vpx_constant(PARAMETERS,"\"\"\");\"",ROOT(5));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,7,1,TERMINAL(0),TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(1),TERMINAL(5),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_8_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_8_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,2)
result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_8_case_1_local_9_case_1_local_2(PARAMETERS,LOOP(0),LIST(1),ROOT(2));
REPEATFINISH
} else {
ROOTNULL(2,TERMINAL(0))
}

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"void init(void);\nvoid init(void)\n{\n\tInt4 result = 0;\n\n\tV_Environment environment = load_project_\"",ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"\"();\n\n\tpClassConstantToIndex=gClassConstantToIndex;\n\tpMethodConstantToIndex=gMethodConstantToIndex;\n\tpValueConstantToIndex=gValueConstantToIndex;\n\n\"",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(4),TERMINAL(7),TERMINAL(8),ROOT(9));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_8_case_1_local_7(PARAMETERS,TERMINAL(9),TERMINAL(1),ROOT(10));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_8_case_1_local_8(PARAMETERS,TERMINAL(10),TERMINAL(2),ROOT(11));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_8_case_1_local_9(PARAMETERS,TERMINAL(11),TERMINAL(3),ROOT(12));

result = vpx_constant(PARAMETERS,"\"\n\tVPLEnvironmentInit(environment, kvpl_StackInline, vpl_INIT);\n}\n\n\"",ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(12),TERMINAL(13),ROOT(14));

result = kSuccess;

OUTPUT(0,TERMINAL(14))
FOOTERSINGLECASE(15)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Export_20_Mode,0,1,ROOT(1));

result = vpx_match(PARAMETERS,"Experimental",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_4(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_5(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_6(PARAMETERS,TERMINAL(0),ROOT(4));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_7(PARAMETERS,TERMINAL(0),ROOT(5));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1_local_8(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(3),TERMINAL(4),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(5),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"int main(int argc, char *argv[])\n{\n\tif( VPLEnvironmentIsLoaded(NULL) == kFALSE ) init();\n\t\t\n\treturn VPLEnvironmentMain(NULL,vpl_MAIN,argc,argv);\n}\n",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_MAIN,1,1,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_2_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_2_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(16)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"int main(int argc, char *argv[])\n",ROOT(1));

result = vpx_constant(PARAMETERS,"{\n\tInt4 result = 0;\n\n",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"\tV_Environment environment = load_project_",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(6),ROOT(7));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(5),TERMINAL(8),ROOT(9));

result = vpx_constant(PARAMETERS,"();\n\n\tresult = post_load(environment);\n\n",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(9),TERMINAL(10),ROOT(11));

result = vpx_constant(PARAMETERS,"\tresult = execute_environment(environment,vpl_MAIN,argc,argv);\n\n",ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(11),TERMINAL(12),ROOT(13));

result = vpx_constant(PARAMETERS,"\treturn result;\n\n}\n",ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(13),TERMINAL(14),ROOT(15));

result = kSuccess;

OUTPUT(0,TERMINAL(15))
FOOTER(16)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_2_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_2_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_2_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"void init(void);\nvoid init(void)\n{\n\tV_Environment environment = load_project_",ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"\"();\n\n\tVPLEnvironmentInit(environment, kvpl_StackRuntime, vpl_INIT);\t\n}\n\n\"",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(5),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(16)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"int main(int argc, char *argv[])\n",ROOT(1));

result = vpx_constant(PARAMETERS,"{\n\tInt4 result = 0;\n\n",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"\tV_Environment environment = load_project_",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(6),ROOT(7));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(5),TERMINAL(8),ROOT(9));

result = vpx_constant(PARAMETERS,"();\n\n\tresult = post_load(environment);\n\n",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(9),TERMINAL(10),ROOT(11));

result = vpx_constant(PARAMETERS,"\tresult = execute_environment(environment,vpl_MAIN,argc,argv);\n\n",ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(11),TERMINAL(12),ROOT(13));

result = vpx_constant(PARAMETERS,"\treturn result;\n\n}\n",ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(13),TERMINAL(14),ROOT(15));

result = kSuccess;

OUTPUT(0,TERMINAL(15))
FOOTER(16)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_2_local_2(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_2_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Name,LIST(0),ROOT(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTNULL(1,NULL)
ROOTEMPTY(2)
}

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_sort,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_6_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Nat4 gClassConstantToIndex[\"",ROOT(2));

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(4),TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"\"];\"",ROOT(7));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,5,1,TERMINAL(0),TERMINAL(2),TERMINAL(6),TERMINAL(7),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_8_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_8_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Name,LIST(0),ROOT(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTNULL(1,NULL)
ROOTEMPTY(2)
}

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_sort,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Universals,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_8_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Nat4 gMethodConstantToIndex[\"",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"\"];\"",ROOT(7));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,5,1,TERMINAL(0),TERMINAL(2),TERMINAL(6),TERMINAL(7),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_10_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_10_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Name,LIST(0),ROOT(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTNULL(1,NULL)
ROOTEMPTY(2)
}

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_sort,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Attributes,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Persistents,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_10_case_1_local_5(PARAMETERS,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Nat4 gValueConstantToIndex[\"",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"\"];\"",ROOT(7));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,5,1,TERMINAL(0),TERMINAL(2),TERMINAL(6),TERMINAL(7),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_22_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_22_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\tresult = vpx_class_map(environment,kVPXClass_\"",ROOT(2));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"\",\"\"\"",ROOT(4));

result = vpx_constant(PARAMETERS,"\"\"\");\"",ROOT(5));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,7,1,TERMINAL(0),TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(1),TERMINAL(5),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_22(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_22(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,2)
result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_22_case_1_local_2(PARAMETERS,LOOP(0),LIST(1),ROOT(2));
REPEATFINISH
} else {
ROOTNULL(2,TERMINAL(0))
}

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_23_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_23_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\tresult = vpx_method_map(environment,kVPXMethod_\"",ROOT(2));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"\",\"",ROOT(4));

result = vpx_constant(PARAMETERS,"\");\"",ROOT(5));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(6));

result = vpx_method_VPL_20_Text_20_To_20_C_20_String(PARAMETERS,TERMINAL(1),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,7,1,TERMINAL(0),TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(7),TERMINAL(5),TERMINAL(6),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_23(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_23(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,2)
result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_23_case_1_local_2(PARAMETERS,LOOP(0),LIST(1),ROOT(2));
REPEATFINISH
} else {
ROOTNULL(2,TERMINAL(0))
}

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_24_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_24_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\tresult = vpx_value_map(environment,kVPXValue_\"",ROOT(2));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"\",\"\"\"",ROOT(4));

result = vpx_constant(PARAMETERS,"\"\"\");\"",ROOT(5));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,7,1,TERMINAL(0),TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(1),TERMINAL(5),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_24(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_24(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,2)
result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_24_case_1_local_2(PARAMETERS,LOOP(0),LIST(1),ROOT(2));
REPEATFINISH
} else {
ROOTNULL(2,TERMINAL(0))
}

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(28)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\treturn ptrE;\n\n}\n\n",ROOT(1));

result = vpx_persistent(PARAMETERS,kVPXValue_Export_20_Mode,0,1,ROOT(2));

result = vpx_match(PARAMETERS,"Experimental",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"int main(int argc, char *argv[])\n",ROOT(3));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_6(PARAMETERS,TERMINAL(0),ROOT(4));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_7(PARAMETERS,TERMINAL(1),TERMINAL(4),ROOT(5));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_8(PARAMETERS,TERMINAL(0),ROOT(6));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_9(PARAMETERS,TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_10(PARAMETERS,TERMINAL(0),ROOT(8));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_11(PARAMETERS,TERMINAL(7),TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(9),TERMINAL(3),ROOT(10));

result = vpx_constant(PARAMETERS,"\"{\n\n\tDECLARE_ENVIRONMENT\n\n\"",ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(10),TERMINAL(11),ROOT(12));

result = vpx_constant(PARAMETERS,"\tV_Environment environment = load_project_",ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(12),TERMINAL(13),ROOT(14));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(15),ROOT(16));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(16),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(14),TERMINAL(17),ROOT(18));

result = vpx_constant(PARAMETERS,"\"();\n\n\tINITIALIZE_ENVIRONMENT\n\n\"",ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(18),TERMINAL(19),ROOT(20));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_22(PARAMETERS,TERMINAL(20),TERMINAL(4),ROOT(21));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_23(PARAMETERS,TERMINAL(21),TERMINAL(6),ROOT(22));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3_local_24(PARAMETERS,TERMINAL(22),TERMINAL(8),ROOT(23));

result = vpx_constant(PARAMETERS,"\"\n\n\tEXECUTE_ENVIRONMENT;\n\n\"",ROOT(24));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(23),TERMINAL(24),ROOT(25));

result = vpx_constant(PARAMETERS,"\treturn result;\n\n}\n",ROOT(26));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(25),TERMINAL(26),ROOT(27));

result = kSuccess;

OUTPUT(0,TERMINAL(27))
FOOTER(28)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Footer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Footer_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_File_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"\".c\"",ROOT(3));

result = vpx_method_Get_20_Export_20_Mode_20_Extension(PARAMETERS,ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(2),TERMINAL(4),TERMINAL(3),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_2_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_2_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(0),TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Cancel,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_2_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_2_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_2_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_2_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Desktop(PARAMETERS,ROOT(1));

result = vpx_constant(PARAMETERS,"List Value Window",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Windows_20_Name,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_2_case_1_local_5(PARAMETERS,TERMINAL(0),LIST(3));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_3_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_3_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Cancel,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_3_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_3_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_3_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_3_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Desktop(PARAMETERS,ROOT(1));

result = vpx_constant(PARAMETERS,"Debug Window",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Windows_20_Name,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_3_case_1_local_5(PARAMETERS,TERMINAL(0),LIST(3));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Cancel,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_4_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_4_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Desktop(PARAMETERS,ROOT(1));

result = vpx_constant(PARAMETERS,"Stack Window",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Windows_20_Name,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_4_case_1_local_5(PARAMETERS,TERMINAL(0),LIST(3));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_5_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_5_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Cancel,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_5_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_5_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_5_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_5_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Desktop(PARAMETERS,ROOT(1));

result = vpx_constant(PARAMETERS,"VPLInfo Window",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Windows_20_Name,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_5_case_1_local_5(PARAMETERS,TERMINAL(0),LIST(3));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_4(PARAMETERS,TERMINAL(0));

result = vpx_method_Project_20_Data_2F_Close_case_1_local_2_case_1_local_5(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Project Settings",ROOT(0));

result = vpx_method_Find_20_Service(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Close_case_1_local_3_case_1_local_2(PARAMETERS,ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Project,2,0,TERMINAL(1),TERMINAL(0));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Project Info",ROOT(1));

result = vpx_method_Find_20_Service(PARAMETERS,TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Project,2,0,TERMINAL(2),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Close_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Data_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Close_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_Project_20_Data_2F_Close_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_method_Project_20_Data_2F_Close_case_1_local_4(PARAMETERS,TERMINAL(0));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Project_20_Data_2F_Close_case_1_local_6(PARAMETERS,TERMINAL(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Environment,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"%vpl_projectname_cfilename%",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_File_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"%vpl_projectname_hfilename%",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_H_20_File_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4_case_1_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4_case_1_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"\"\"\"\"",ROOT(3));

result = vpx_constant(PARAMETERS,"\"\"\"\"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_exstring_2D_to_2D_instring,1,1,TERMINAL(2),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(4),TERMINAL(5),TERMINAL(3),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4_case_1_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4_case_1_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"NULL\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4_case_1_local_6_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4_case_1_local_6_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"%vpl_projectname_mainmethod%",ROOT(1));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4_case_1_local_6_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4_case_1_local_7_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4_case_1_local_7_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"\"\"\"\"",ROOT(3));

result = vpx_constant(PARAMETERS,"\"\"\"\"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_exstring_2D_to_2D_instring,1,1,TERMINAL(2),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(4),TERMINAL(5),TERMINAL(3),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4_case_1_local_7_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4_case_1_local_7_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"NULL\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4_case_1_local_7_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4_case_1_local_7_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"%vpl_projectname_initmethod%",ROOT(1));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4_case_1_local_7_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Text",ROOT(1));

result = vpx_constant(PARAMETERS,"( MAIN INIT )",ROOT(2));

result = vpx_method_Find_20_Instance_20_Values(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4_case_1_local_6(PARAMETERS,TERMINAL(4),ROOT(6));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4_case_1_local_7(PARAMETERS,TERMINAL(5),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"%vpl_projectname_encoded%",ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"%vpl_projectname_escapec%",ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_VPL_20_Text_20_To_20_C_20_String(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_5(PARAMETERS,TERMINAL(0),ROOT(6));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3_case_1_local_6(PARAMETERS,TERMINAL(0),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,6,1,TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(5),TERMINAL(6),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"%vpl_prims_declare%",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Primitive_20_Includes,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"%vpl_prims_load%",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Primitives,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"%vpl_frameworks_declare%",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Framework_20_Link_20_Headers,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_4_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_4_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"%vpl_sections_declare%",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Section_20_Includes,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"%vpl_sections_load%",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Sections,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_5_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_5_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Name,LIST(0),ROOT(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTNULL(1,NULL)
ROOTEMPTY(2)
}

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_sort,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Attributes,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Persistents,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_4_case_1_local_5(PARAMETERS,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Name,LIST(0),ROOT(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTNULL(1,NULL)
ROOTEMPTY(2)
}

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_sort,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Name,LIST(0),ROOT(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTNULL(1,NULL)
ROOTEMPTY(2)
}

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_sort,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_6_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\tresult = vpx_class_map(environment,kVPXClass_\"",ROOT(2));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"\",\"\"\"",ROOT(4));

result = vpx_constant(PARAMETERS,"\"\"\");\"",ROOT(5));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,7,1,TERMINAL(0),TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(1),TERMINAL(5),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,1,2)
result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_7_case_1_local_3(PARAMETERS,LOOP(0),LIST(0),ROOT(2));
REPEATFINISH
} else {
ROOTNULL(2,TERMINAL(1))
}

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_8_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_8_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\tresult = vpx_method_map(environment,kVPXMethod_\"",ROOT(2));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"\",\"",ROOT(4));

result = vpx_constant(PARAMETERS,"\");\"",ROOT(5));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(6));

result = vpx_method_VPL_20_Text_20_To_20_C_20_String(PARAMETERS,TERMINAL(1),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,7,1,TERMINAL(0),TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(7),TERMINAL(5),TERMINAL(6),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,2)
result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_8_case_1_local_2(PARAMETERS,LOOP(0),LIST(1),ROOT(2));
REPEATFINISH
} else {
ROOTNULL(2,TERMINAL(0))
}

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_9_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_9_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\tresult = vpx_value_map(environment,kVPXValue_\"",ROOT(2));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"\",\"\"\"",ROOT(4));

result = vpx_constant(PARAMETERS,"\"\"\");\"",ROOT(5));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,7,1,TERMINAL(0),TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(1),TERMINAL(5),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,2)
result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_9_case_1_local_2(PARAMETERS,LOOP(0),LIST(1),ROOT(2));
REPEATFINISH
} else {
ROOTNULL(2,TERMINAL(0))
}

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"%vpl_gindex_Class%",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(5),TERMINAL(4),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"1",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"%vpl_gindex_Method%",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(5),TERMINAL(4),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"1",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"%vpl_gindex_Value%",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(5),TERMINAL(4),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Export_20_Mode,0,1,ROOT(2));

result = vpx_match(PARAMETERS,"Experimental",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_4(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_5(PARAMETERS,TERMINAL(1),ROOT(4));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_6(PARAMETERS,TERMINAL(0),ROOT(5));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_7(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_8(PARAMETERS,TERMINAL(6),TERMINAL(4),ROOT(7));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_9(PARAMETERS,TERMINAL(7),TERMINAL(3),ROOT(8));

result = vpx_constant(PARAMETERS,"%vpl_project_map%",ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(9),TERMINAL(8),ROOT(10));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_12(PARAMETERS,TERMINAL(5),ROOT(11));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_13(PARAMETERS,TERMINAL(4),ROOT(12));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1_local_14(PARAMETERS,TERMINAL(3),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(11),TERMINAL(12),TERMINAL(13),ROOT(14));

result = kSuccess;

OUTPUT(0,TERMINAL(14))
OUTPUT(1,TERMINAL(10))
FOOTER(15)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Universals,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_4(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_5(PARAMETERS,TERMINAL(0),ROOT(4));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,4,1,TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(5),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
OUTPUT(1,TERMINAL(6))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Export_20_Mode,0,1,ROOT(1));

result = vpx_match(PARAMETERS,"Experimental",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Inline",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Runtime",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_3_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_3_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MartenProject",ROOT(1));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_3_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"( )",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_method__22_Split_20_At_22_(PARAMETERS,TERMINAL(0),TERMINAL(2),ROOT(4),ROOT(5),ROOT(6));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(4),TERMINAL(3),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_method_Substitute_20_Template_20_Keys(PARAMETERS,NONE,TERMINAL(3),TERMINAL(1),ROOT(4));
NEXTCASEONFAILURE

result = vpx_method_Project_20_Data_2F_Export_20_Text_case_1_local_5(PARAMETERS,TERMINAL(4),TERMINAL(2),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Export_20_Text_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Export_20_Text_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_xExport_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_xExport_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(15)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Export_20_Mode,0,1,ROOT(1));

result = vpx_match(PARAMETERS,"Experimental",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Header,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Primitive_20_Includes,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Section_20_Includes,1,1,TERMINAL(0),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Load_20_Project,1,1,TERMINAL(0),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Sections,1,1,TERMINAL(0),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Primitives,1,1,TERMINAL(0),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(8),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(11),TERMINAL(9),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Footer,1,1,TERMINAL(0),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(12),TERMINAL(13),ROOT(14));

result = kSuccess;

OUTPUT(0,TERMINAL(14))
FOOTER(15)
}

enum opTrigger vpx_method_Project_20_Data_2F_xExport_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_xExport_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(14)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Header,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Primitive_20_Includes,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Section_20_Includes,1,1,TERMINAL(0),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Load_20_Project,1,1,TERMINAL(0),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Sections,1,1,TERMINAL(0),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Primitives,1,1,TERMINAL(0),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(7),TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(10),TERMINAL(8),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Footer,1,1,TERMINAL(0),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(11),TERMINAL(12),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
FOOTER(14)
}

enum opTrigger vpx_method_Project_20_Data_2F_xExport_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_xExport_20_Text_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_xExport_20_Text_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_All_20_Universals_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_All_20_Universals_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Universals,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Methods,1,1,TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_All_20_Universals(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Section Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Get_20_All_20_Universals_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = vpx_method_Lists_20_To_20_List(PARAMETERS,TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Classes_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Classes_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Classes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Classes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Section Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Get_20_Classes_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = vpx_method_Lists_20_To_20_List(PARAMETERS,TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Classes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Classes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Classes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Get_20_Classes_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Get_20_Classes_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Persistents_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Persistents_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Persistents,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Persistents(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Section Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Get_20_Persistents_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = vpx_method_Lists_20_To_20_List(PARAMETERS,TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Primitives_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Primitives_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Primitives,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Primitives(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Primitives Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Get_20_Primitives_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = vpx_method_Lists_20_To_20_List(PARAMETERS,TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Project_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Section_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Universals_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Universals_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Universals,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Universals(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Section Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Get_20_Universals_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = vpx_method_Lists_20_To_20_List(PARAMETERS,TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Initialize_20_Item_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(2));

result = vpx_constant(PARAMETERS,"\"Section Data\"",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(5));

result = vpx_constant(PARAMETERS,"\"Primitives Data\"",ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"\"Resource File Data\"",ROOT(8));

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(9),TERMINAL(8),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(7),TERMINAL(4),TERMINAL(10),ROOT(11));

result = vpx_set(PARAMETERS,kVPXValue_Lists,TERMINAL(1),TERMINAL(11),ROOT(12));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(13)
}

enum opTrigger vpx_method_Project_20_Data_2F_Open_case_1_local_3_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Open_case_1_local_3_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Open_case_1_local_3_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Open_case_1_local_3_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Interpreter,1,1,NONE,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Open_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Open_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Open_case_1_local_3_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Open_case_1_local_3_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Open_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Open_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"Untitled Project",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application_20_Name,1,1,TERMINAL(0),ROOT(3));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Name,2,0,TERMINAL(0),TERMINAL(3));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Open_case_1_local_3_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(1),TERMINAL(0));
FAILONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Environment,TERMINAL(0),TERMINAL(1),ROOT(4));

result = vpx_method_Project_20_Data_2F_Open_case_1_local_3_case_1_local_7(PARAMETERS,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_Project_20_Data_2F_Open_case_1_local_3(PARAMETERS,TERMINAL(0));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_9_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_9_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Read_20_Object_20_File,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_9_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_9_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_open_2D_file,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_read_2D_object,1,1,TERMINAL(1),ROOT(2));
CONTINUEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_close_2D_file,1,0,TERMINAL(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_9_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_9_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_9_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_9_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_9_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Item_20_Data,2,0,TERMINAL(0),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Attributes,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Class_20_Attributes,1,1,TERMINAL(4),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Persistents,1,1,TERMINAL(4),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,3,1,TERMINAL(5),TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Universals,1,1,TERMINAL(4),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Methods,1,1,TERMINAL(4),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(9),TERMINAL(10),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Unarchive_20_Element,2,0,TERMINAL(0),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Value,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"MAIN",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"MAIN",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"1",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Arity,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Text,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17_case_1_local_6_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Get_20_Application(PARAMETERS,ROOT(2));

result = vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Universals,1,1,TERMINAL(1),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17_case_1_local_5(PARAMETERS,LIST(3),ROOT(4));
REPEATFINISH
} else {
ROOTNULL(4,NULL)
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17_case_1_local_6(PARAMETERS,LIST(0),TERMINAL(4));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Section_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Post_20_Load_3F_,2,0,TERMINAL(4),TERMINAL(2));

result = vpx_constant(PARAMETERS,"Section Data",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(3),TERMINAL(5),ROOT(6));

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(7));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(8));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_9(PARAMETERS,TERMINAL(6),LIST(7),ROOT(9),ROOT(10));
LISTROOT(9,0)
LISTROOT(10,1)
REPEATFINISH
LISTROOTFINISH(9,0)
LISTROOTFINISH(10,1)
LISTROOTEND
} else {
ROOTEMPTY(9)
ROOTEMPTY(10)
}

result = vpx_method_Lists_20_To_20_List(PARAMETERS,TERMINAL(9),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Post_20_Load_3F_,2,0,TERMINAL(4),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Resolve_20_References,1,0,TERMINAL(0));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(11))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_13(PARAMETERS,TERMINAL(4),LIST(11));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(0));

result = vpx_method_Lists_20_To_20_List(PARAMETERS,TERMINAL(10),ROOT(12));

result = vpx_method_Project_20_Data_2F_Add_20_Section_20_Data_case_1_local_17(PARAMETERS,TERMINAL(12),TERMINAL(0));

result = vpx_method_VPLProject_20_Info_20_Tools_2F_Update_20_Tool_20_Set(PARAMETERS,NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(13)
}

enum opTrigger vpx_method_Project_20_Data_2F_Resolve_20_References_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Resolve_20_References_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"( )",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"Class Data",ROOT(2));

result = vpx_constant(PARAMETERS,"Problem Classes",ROOT(3));

result = vpx_method_Get_20_Application(PARAMETERS,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Display_20_List,4,0,TERMINAL(4),TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Resolve_20_References_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Resolve_20_References_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,1,3)
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Resolve_20_Class,2,2,LIST(1),LOOP(0),ROOT(2),ROOT(3));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
ROOTNULL(3,TERMINAL(1))
}

result = vpx_method_Project_20_Data_2F_Resolve_20_References_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Resolve_20_References_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Resolve_20_References_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,1,3)
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Resolve_20_Class,2,2,LIST(1),LOOP(0),ROOT(2),ROOT(3));
REPEATFINISH
} else {
ROOTNULL(2,NULL)
ROOTNULL(3,TERMINAL(1))
}

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Resolve_20_References(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Resolve_20_References_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_Data_2F_Resolve_20_References_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(3),TERMINAL(1));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(5),TERMINAL(3),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(4),TERMINAL(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_List_20_Data,2,0,TERMINAL(2),TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(14)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Value,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(4),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_constant(PARAMETERS,"\" contained non-null value. Please save section.\"",ROOT(10));

result = vpx_constant(PARAMETERS,"\"Class: \"",ROOT(11));

result = vpx_constant(PARAMETERS,"\" of Section: \"",ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,5,1,TERMINAL(11),TERMINAL(6),TERMINAL(12),TERMINAL(9),TERMINAL(10),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(13));

result = kSuccess;

FOOTER(14)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_To_20_List_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Resolve_20_References,1,0,TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Post_20_Load_20_Processing,1,0,TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(2),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_7(PARAMETERS,LIST(4));
REPEATFINISH
} else {
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Value,1,0,LIST(4));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Persistents,1,1,TERMINAL(2),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Value,1,0,LIST(5));
REPEATFINISH
} else {
}

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(2),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application,1,1,TERMINAL(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Universals,1,1,TERMINAL(2),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Tools,2,0,TERMINAL(8),TERMINAL(9));

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_Set_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Set_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_boolean_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Dirty,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Set_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Set_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Please set TRUE or FALSE!",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Container,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Editor,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh_20_Data,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Set_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Set_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Data_2F_Set_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Dirty,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Object_20_File_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_File_20_Extension,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Object_20_File_20_Extension(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\".vpx\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Object_20_File_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\'vplP\'",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_MacOS_20_File_20_Reference,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_FSSpec,2,0,TERMINAL(1),TERMINAL(0));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Primitives_20_Data,1,1,NONE,ROOT(2));

result = vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_FSRef,3,1,TERMINAL(2),TERMINAL(3),TERMINAL(0),ROOT(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_3_local_14_case_1_local_9_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_3_local_14_case_1_local_9_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Primitive_20_Data,1,1,NONE,ROOT(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(1),TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(2),TERMINAL(3));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Item_20_Data,2,0,TERMINAL(4),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_3_local_14_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_3_local_14_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_3_local_14_case_1_local_9_case_1_local_2(PARAMETERS,LIST(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

result = vpx_constant(PARAMETERS,"Primitive Data",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(4),TERMINAL(2),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_3_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_3_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Primitives_20_Data,1,1,NONE,ROOT(3));

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(3),TERMINAL(1),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_File,TERMINAL(5),TERMINAL(0),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(4),TERMINAL(5));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(6),TERMINAL(4),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Item_20_Data,2,0,TERMINAL(7),TERMINAL(4));

result = vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_3_local_14_case_1_local_9(PARAMETERS,TERMINAL(4),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(15)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\".bundle\"",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_extract_2D_file_2D_specification,1,3,TERMINAL(1),ROOT(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(5),TERMINAL(2),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(6));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"load_",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_minus_2D_one,1,1,TERMINAL(6),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(5),TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(7),TERMINAL(9),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Load_20_Bundle,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(11));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_MacOS_20_File_20_Reference,1,1,NONE,ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_FSSpec,2,0,TERMINAL(12),TERMINAL(1));
CONTINUEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Bundle_20_Primitives,2,1,TERMINAL(0),TERMINAL(9),ROOT(13));

result = vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_3_local_14(PARAMETERS,TERMINAL(12),TERMINAL(9),TERMINAL(13),ROOT(14));

result = kSuccess;

OUTPUT(0,TERMINAL(14))
FOOTERWITHNONE(15)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1_local_4(PARAMETERS,TERMINAL(3),LIST(1),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = vpx_constant(PARAMETERS,"Primitives Data",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(2),TERMINAL(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(6),ROOT(7),ROOT(8));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(8))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,LIST(8));
REPEATFINISH
} else {
}

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(7),TERMINAL(4),ROOT(9));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,LIST(4),TERMINAL(9));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(7));

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_Primitives(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Import_20_Primitives_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Data_2F_Import_20_Primitives_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Show_20_Errors_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Show_20_Errors_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Show_20_Project_20_Messages(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Project_20_Data_2F_Show_20_Errors_case_2_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Show_20_Errors_case_2_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\n\"",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Show_20_Errors_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Show_20_Errors_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"( )",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,1,2)
result = vpx_method_Project_20_Data_2F_Show_20_Errors_case_2_local_5_case_1_local_4(PARAMETERS,LOOP(0),LIST(0),ROOT(2));
REPEATFINISH
} else {
ROOTNULL(2,TERMINAL(1))
}

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Show_20_Errors_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Show_20_Errors_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"No errors.",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Show_20_Errors_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Show_20_Errors_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Show_20_Errors_case_2_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Show_20_Errors_case_2_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Show_20_Errors_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Show_20_Errors_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"0.0",ROOT(4));

result = vpx_extconstant(PARAMETERS,kCFUserNotificationStopAlertLevel,ROOT(5));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(1),ROOT(6));

PUTINTEGER(CFUserNotificationDisplayNotice( GETREAL(TERMINAL(4)),GETINTEGER(TERMINAL(5)),GETCONSTPOINTER(__CFURL,*,TERMINAL(2)),GETCONSTPOINTER(__CFURL,*,TERMINAL(2)),GETCONSTPOINTER(__CFURL,*,TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(3)),GETCONSTPOINTER(__CFString,*,TERMINAL(6)),GETCONSTPOINTER(__CFString,*,TERMINAL(2))),7);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(3)));
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(6)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_Show_20_Errors_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Show_20_Errors_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"Errors of ",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Errors,1,1,TERMINAL(2),ROOT(4));

result = vpx_method_Project_20_Data_2F_Show_20_Errors_case_2_local_5(PARAMETERS,TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(3),TERMINAL(6),ROOT(7));

result = vpx_method_Project_20_Data_2F_Show_20_Errors_case_2_local_8(PARAMETERS,TERMINAL(7),TERMINAL(5));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_Show_20_Errors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Show_20_Errors_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_Data_2F_Show_20_Errors_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Full_20_Path,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Dirty,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_File,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_9_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_9_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name_20_As_20_String,1,1,TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"\"\"",TERMINAL(5));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_9_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_9_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(6),TERMINAL(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_9_case_1_local_3_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_9_case_1_local_3_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_9_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_9_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_9_case_1_local_3_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_9_case_1_local_3_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_9_case_1_local_3_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_9_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_9_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(1));

result = vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_9_case_1_local_3_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_instantiate(PARAMETERS,kVPXClass_Primitives_20_Data,1,1,NONE,ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(4),TERMINAL(2),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Helper,TERMINAL(1),TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_9_case_1_local_3(PARAMETERS,LIST(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_10_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_10_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_10_case_1_local_3(PARAMETERS,LIST(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_11_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_11_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_11_case_1_local_3(PARAMETERS,LIST(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(27)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,3,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Controller,TERMINAL(0),ROOT(8),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(8),ROOT(10),ROOT(11));

result = vpx_constant(PARAMETERS,"NULL",ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(10),TERMINAL(12),ROOT(13));

result = vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_9(PARAMETERS,TERMINAL(5),ROOT(14));

result = vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_10(PARAMETERS,TERMINAL(6),ROOT(15));

result = vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6_case_1_local_11(PARAMETERS,TERMINAL(7),ROOT(16));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Isolate,1,2,LIST(4),ROOT(17),ROOT(18));
LISTROOT(17,0)
LISTROOT(18,1)
REPEATFINISH
LISTROOTFINISH(17,0)
LISTROOTFINISH(18,1)
LISTROOTEND
} else {
ROOTEMPTY(17)
ROOTEMPTY(18)
}

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,6,1,TERMINAL(11),TERMINAL(9),TERMINAL(14),TERMINAL(15),TERMINAL(16),TERMINAL(18),ROOT(19));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(2),ROOT(20),ROOT(21));

result = vpx_constant(PARAMETERS,"NULL",ROOT(22));

result = vpx_set(PARAMETERS,kVPXValue_Environment,TERMINAL(20),TERMINAL(22),ROOT(23));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(19),TERMINAL(21),ROOT(24));

result = vpx_constant(PARAMETERS,"NULL",ROOT(25));

result = vpx_set(PARAMETERS,kVPXValue_Controller,TERMINAL(13),TERMINAL(25),ROOT(26));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
OUTPUT(1,TERMINAL(24))
FOOTERSINGLECASE(27)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_File_20_Type,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Coerce_20_FSSpec,1,1,TERMINAL(1),ROOT(5));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\'mVPL\'",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Finder_20_Info,4,0,TERMINAL(1),TERMINAL(4),TERMINAL(6),NONE);
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_open_2D_file,1,1,TERMINAL(5),ROOT(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Dirty,TERMINAL(3),TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_write_2D_object,2,0,TERMINAL(7),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_close_2D_file,1,0,TERMINAL(7));
NEXTCASEONFAILURE

result = kSuccess;

FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Trouble writing file: \"",ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_File_20_Name,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(5),ROOT(6));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_File_20_Type,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Coerce_20_FSSpec,1,1,TERMINAL(1),ROOT(5));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FX_20_ScriptCode,1,1,TERMINAL(1),ROOT(6));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_create_2D_object_2D_file,3,0,TERMINAL(5),TERMINAL(6),TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_open_2D_file,1,1,TERMINAL(5),ROOT(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Dirty,TERMINAL(3),TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_write_2D_object,2,0,TERMINAL(7),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_close_2D_file,1,0,TERMINAL(7));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_7_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(23)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,6,TERMINAL(4),ROOT(6),ROOT(7),ROOT(8),ROOT(9),ROOT(10),ROOT(11));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(3),TERMINAL(11))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Integrate,2,0,LIST(3),LIST(11));
REPEATFINISH
} else {
}

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,3,TERMINAL(3),ROOT(12),ROOT(13),ROOT(14));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(13),TERMINAL(9),ROOT(15));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(2),TERMINAL(6),ROOT(16));

result = vpx_set(PARAMETERS,kVPXValue_Controller,TERMINAL(16),TERMINAL(7),ROOT(17));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(17),ROOT(18),ROOT(19));

result = vpx_set(PARAMETERS,kVPXValue_Environment,TERMINAL(19),TERMINAL(5),ROOT(20));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(12),TERMINAL(8),ROOT(21));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(14),TERMINAL(10),ROOT(22));

result = kSuccess;

FOOTERSINGLECASE(23)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_MacOS_20_File_20_Reference,1,1,NONE,ROOT(2));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_Path_20_String,4,0,TERMINAL(2),TERMINAL(1),NONE,TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_File,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = kSuccess;

FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UniChar,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Length,1,1,TERMINAL(0),ROOT(4));

result = vpx_extconstant(PARAMETERS,kTextEncodingUnknown,ROOT(5));

result = vpx_instantiate(PARAMETERS,kVPXClass_MacOS_20_File_20_Reference,1,1,NONE,ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_Unicode,5,0,TERMINAL(6),TERMINAL(1),TERMINAL(2),TERMINAL(4),TERMINAL(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_5_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_5_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_5_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Delete,1,0,TERMINAL(3));
CONTINUEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UniChar,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Length,1,1,TERMINAL(0),ROOT(4));

result = vpx_extconstant(PARAMETERS,kTextEncodingUnknown,ROOT(5));

result = vpx_instantiate(PARAMETERS,kVPXClass_MacOS_20_File_20_Reference,1,1,NONE,ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_Unicode,5,0,TERMINAL(6),TERMINAL(1),TERMINAL(2),TERMINAL(4),TERMINAL(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Delete,1,0,TERMINAL(3));
CONTINUEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_9_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_9_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UniChar,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Length,1,1,TERMINAL(0),ROOT(4));

result = vpx_extconstant(PARAMETERS,kTextEncodingUnknown,ROOT(5));

result = vpx_instantiate(PARAMETERS,kVPXClass_MacOS_20_File_20_Reference,1,1,NONE,ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_Unicode,5,0,TERMINAL(6),TERMINAL(1),TERMINAL(2),TERMINAL(4),TERMINAL(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_9_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_9_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_9_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_9_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_9_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_9_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_9_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Delete,1,0,TERMINAL(3));
CONTINUEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"\".o\"",ROOT(3));

result = vpx_method_Get_20_Export_20_Mode_20_Extension(PARAMETERS,ROOT(4));

result = vpx_constant(PARAMETERS,"( \"\" \".ppc\" \".x86\" )",ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(2),TERMINAL(4),LIST(5),TERMINAL(3),ROOT(6));
LISTROOT(6,0)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTEND
} else {
ROOTEMPTY(6)
}

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_11_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_11_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UniChar,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Length,1,1,TERMINAL(0),ROOT(4));

result = vpx_extconstant(PARAMETERS,kTextEncodingUnknown,ROOT(5));

result = vpx_instantiate(PARAMETERS,kVPXClass_MacOS_20_File_20_Reference,1,1,NONE,ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_Unicode,5,0,TERMINAL(6),TERMINAL(1),TERMINAL(2),TERMINAL(4),TERMINAL(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_11_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_11_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_11_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_11_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_11_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_11_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_11_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Delete,1,0,TERMINAL(3));
CONTINUEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parent,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_File_20_Name,1,1,TERMINAL(0),ROOT(3));

result = vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_5(PARAMETERS,TERMINAL(2),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_H_20_File_20_Name,1,1,TERMINAL(0),ROOT(4));

result = vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7(PARAMETERS,TERMINAL(2),TERMINAL(4));

result = vpx_constant(PARAMETERS,"MartenInlineProject.h",ROOT(5));

result = vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_9(PARAMETERS,TERMINAL(2),TERMINAL(5));

result = vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_10(PARAMETERS,TERMINAL(0),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_11(PARAMETERS,TERMINAL(2),LIST(6));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_4(PARAMETERS,TERMINAL(0));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_6(PARAMETERS,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_7(PARAMETERS,TERMINAL(4),TERMINAL(1));

result = vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_8(PARAMETERS,TERMINAL(5),TERMINAL(6));

result = vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_9(PARAMETERS,TERMINAL(0),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh_20_Data,1,0,TERMINAL(4));

result = vpx_method_Project_20_Data_2F_Save_20_File_case_1_local_11(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Save_20_File,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Save_20_File_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Data_2F_Save_20_File_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Section_20_Items_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Section_20_Items_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Section Data",ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Section_20_Items_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Section_20_Items_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Section_20_Items(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Get_20_Section_20_Items_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Get_20_Section_20_Items_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Primitives_20_File_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Primitives_20_File_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Primitives_20_Data,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_FSRef,3,1,TERMINAL(2),TERMINAL(1),TERMINAL(0),ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Primitives_20_File_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Primitives_20_File_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Primitives_20_File_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Primitives_20_File_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Add_20_Primitives_20_File_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Add_20_Primitives_20_File_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Primitives_20_File_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Primitives_20_File_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(5),TERMINAL(2),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(4),TERMINAL(6),ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,LIST(2),TERMINAL(7));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Primitives_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Primitives_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Add_20_Primitives_20_File_case_1_local_5(PARAMETERS,TERMINAL(3),LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = vpx_constant(PARAMETERS,"Primitives Data",ROOT(6));

result = vpx_method_Project_20_Data_2F_Add_20_Primitives_20_File_case_1_local_7(PARAMETERS,TERMINAL(2),TERMINAL(6),TERMINAL(5));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Primitives_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Primitives_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Primitives_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Add_20_Primitives_20_File_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Data_2F_Add_20_Primitives_20_File_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Resource_20_File_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Resource_20_File_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Resource_20_File_20_Data,1,1,NONE,ROOT(2));

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Copy_20_Original,3,0,TERMINAL(2),TERMINAL(1),TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(3),TERMINAL(5),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Helper,TERMINAL(3),TERMINAL(2),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Resource_20_File_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Resource_20_File_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Resource_20_File_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Resource_20_File_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Add_20_Resource_20_File_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Add_20_Resource_20_File_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Resource_20_File_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Resource_20_File_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Resource File Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Resource_20_File_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Resource_20_File_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(10)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"\"Resource File Data\"",ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(5),TERMINAL(7),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Lists,TERMINAL(3),TERMINAL(6),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(8),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Resource_20_File_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Resource_20_File_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Add_20_Resource_20_File_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Add_20_Resource_20_File_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Resource_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Resource_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Add_20_Resource_20_File_case_1_local_5(PARAMETERS,TERMINAL(0),LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = vpx_method_Project_20_Data_2F_Add_20_Resource_20_File_case_1_local_6(PARAMETERS,TERMINAL(2),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(8),TERMINAL(5),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(7),TERMINAL(9),ROOT(10));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,LIST(5),TERMINAL(10));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(10));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Resource_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Resource_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Add_20_Resource_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Add_20_Resource_20_File_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Data_2F_Add_20_Resource_20_File_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Class_20_Items(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Owner,LIST(1),ROOT(2),ROOT(3));
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

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_File_20_Specification,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Set_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_File_20_Specification,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Find_20_MAIN(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Universals,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Text",ROOT(2));

result = vpx_constant(PARAMETERS,"MAIN",ROOT(3));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Stack_20_Frames,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(2));

result = kSuccess;
FINISHONSUCCESS

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Threads,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
NEXTCASEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_1_local_5(PARAMETERS,LIST(4));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_2_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_2_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Universals,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"Text",ROOT(3));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"INIT",ROOT(1));

result = vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_2_local_2_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"( )",ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_instantiate(PARAMETERS,kVPXClass_Project_20_Run_20_Task,1,1,NONE,ROOT(5));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Execute,5,0,TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(5),TERMINAL(6));
TERMINATEONFAILURE

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_2_local_2(PARAMETERS,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_Execute_20_MAIN,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Universals,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"Text",ROOT(3));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"INIT",ROOT(1));

result = vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_3_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"( )",ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_instantiate(PARAMETERS,kVPXClass_Project_20_Run_20_Task,1,1,NONE,ROOT(5));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Execute,5,0,TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(5),TERMINAL(6));
TERMINATEONFAILURE

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

PUTPOINTER(__CFURL,*,CFURLCreateFromFSRef( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(1)),GETCONSTPOINTER(FSRef,*,TERMINAL(0))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

PUTPOINTER(__CFBundle,*,CFBundleCreate( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(1)),GETCONSTPOINTER(__CFURL,*,TERMINAL(2))),3);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(2)));
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

PUTPOINTER(__CFURL,*,CFBundleCopyExecutableURL( GETPOINTER(0,__CFBundle,*,ROOT(5),TERMINAL(3))),4);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

result = vpx_extconstant(PARAMETERS,kCFURLPOSIXPathStyle,ROOT(6));

PUTPOINTER(__CFString,*,CFURLCopyFileSystemPath( GETCONSTPOINTER(__CFURL,*,TERMINAL(4)),GETINTEGER(TERMINAL(6))),7);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(4)));
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
FAILONSUCCESS

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(7),ROOT(8));

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(7)));
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(8));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Interpreter_d",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_1_local_4_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_1_local_4_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(10)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"_",ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method__22_Parse_22_(PARAMETERS,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(7));
FAILONFAILURE

PUTINTEGER(GetProcessForPID( GETINTEGER(TERMINAL(7)),GETPOINTER(8,ProcessSerialNumber,*,ROOT(9),NONE)),8);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(8));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASEWITHNONE(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_1_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_1_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_1_local_4_case_1_local_3_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_extget(PARAMETERS,"highLongOfPSN",1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_extget(PARAMETERS,"lowLongOfPSN",1,2,TERMINAL(1),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_1_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_1_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_1_local_4_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_1_local_4_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"-psn_",ROOT(1));

result = vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_1_local_4_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"_",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(1),TERMINAL(2),TERMINAL(4),TERMINAL(3),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_1_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"string",ROOT(1));

result = vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_1_local_4(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Value,3,1,TERMINAL(0),TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(2),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"string",ROOT(1));

result = vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_2_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Value,3,1,TERMINAL(0),LIST(2),TERMINAL(1),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(14)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"list",ROOT(4));

result = vpx_constant(PARAMETERS,"string",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Value,3,1,TERMINAL(2),TERMINAL(3),TERMINAL(5),ROOT(6));

result = vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1_local_8(PARAMETERS,TERMINAL(2),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(6),TERMINAL(7),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Value,3,1,TERMINAL(2),TERMINAL(9),TERMINAL(4),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(3),TERMINAL(8),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_retain_2D_object,1,1,TERMINAL(12),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
OUTPUT(1,TERMINAL(12))
FOOTER(14)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_MAIN,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_3(PARAMETERS,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

result = vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3_local_7(PARAMETERS,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Execute,5,0,TERMINAL(1),TERMINAL(5),TERMINAL(2),TERMINAL(3),TERMINAL(4));
FAILONFAILURE

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Main\"",ROOT(1));

result = vpx_constant(PARAMETERS,"\"1\"",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Method,4,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"MAIN",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Text,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Execute_20_MAIN,1,0,TERMINAL(0));
FAILONFAILURE

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_MAIN,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Execute,5,0,TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(5));
FAILONFAILURE

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Execute_20_MAIN(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_Data_2F_Execute_20_MAIN_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Stack_20_Frames,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(2));

result = kSuccess;
FINISHONSUCCESS

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Threads,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"( )",TERMINAL(5));
NEXTCASEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_1_local_5(PARAMETERS,LIST(5));
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"FALSE",ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"$0",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Key_20_Value,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application_20_Name,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Project Settings",ROOT(0));

result = vpx_method_Find_20_Service(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"( %s )\"",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_format,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method__22_Check_22_(PARAMETERS,LIST(3),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_1_local_2(PARAMETERS,ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Read_20_Project_20_Parameter_20_Keys,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"param",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Project_20_Setting,4,0,TERMINAL(1),TERMINAL(0),TERMINAL(4),TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"-psn",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Key_20_Value,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_2_local_2_case_2_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_2_local_2_case_2_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(10)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"_",ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method__22_Parse_22_(PARAMETERS,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(7));
FAILONFAILURE

PUTINTEGER(GetProcessForPID( GETINTEGER(TERMINAL(7)),GETPOINTER(8,ProcessSerialNumber,*,ROOT(9),NONE)),8);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(8));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASEWITHNONE(10)
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_2_local_2_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_2_local_2_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_2_local_2_case_2_local_3_case_1_local_3(PARAMETERS,TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_extget(PARAMETERS,"highLongOfPSN",1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_extget(PARAMETERS,"lowLongOfPSN",1,2,TERMINAL(3),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_2_local_2_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_2_local_2_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_2_local_2_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_2_local_2_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_2_local_2_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_2_local_2_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"_",ROOT(1));

result = vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_2_local_2_case_2_local_3(PARAMETERS,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"-psn",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,5,1,TERMINAL(4),TERMINAL(1),TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Key_20_Value,3,0,TERMINAL(0),TERMINAL(4),TERMINAL(5));
CONTINUEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_2_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_2_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_2_local_2(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"list",ROOT(2));

result = vpx_constant(PARAMETERS,"string",ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Value,3,1,TERMINAL(0),LIST(1),TERMINAL(3),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Value,3,1,TERMINAL(0),TERMINAL(4),TERMINAL(2),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_4(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_5(PARAMETERS,TERMINAL(0),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1_local_7(PARAMETERS,TERMINAL(2),TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_MAIN,1,1,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2_local_3(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_constant(PARAMETERS,"0",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Execute,5,0,TERMINAL(2),TERMINAL(3),TERMINAL(6),TERMINAL(5),TERMINAL(4));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"1\"",ROOT(1));

result = vpx_constant(PARAMETERS,"\"Main\"",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Method,4,1,TERMINAL(0),TERMINAL(2),TERMINAL(1),TERMINAL(1),ROOT(3));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"MAIN",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Text,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(5));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_Execute_20_MAIN,2,1,TERMINAL(0),TERMINAL(6),ROOT(7));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_3_local_2(PARAMETERS,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_Data_2F7E_Execute_20_MAIN(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F7E_Execute_20_MAIN_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Find_20_Methods_20_With_20_Value_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Find_20_Methods_20_With_20_Value_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Find_20_Methods_20_With_20_Value_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Find_20_Methods_20_With_20_Value_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Dispatch_20_Event(PARAMETERS);

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Find_20_Methods_20_With_20_Value_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Find_20_Methods_20_With_20_Value_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Find_20_Methods_20_With_20_Value_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Find_20_Methods_20_With_20_Value_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Find_20_Methods_20_With_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Universals,1,1,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Find_20_Methods_20_With_20_Value_case_1_local_3(PARAMETERS,LIST(2),TERMINAL(1),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Method_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Library_20_Info_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Library_20_Info_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"persistent",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Persistents,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"Name",ROOT(4));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(3),TERMINAL(4),TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Library_20_Info_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Library_20_Info_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"class",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"Name",ROOT(4));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(3),TERMINAL(4),TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Library_20_Info_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Library_20_Info_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Info,3,1,TERMINAL(4),TERMINAL(1),TERMINAL(2),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Library_20_Info(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Get_20_Library_20_Info_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Project_20_Data_2F_Get_20_Library_20_Info_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Project_20_Data_2F_Get_20_Library_20_Info_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Lookup_20_Info(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Lookup_20_Project_20_Info(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_All_20_Breakpoints(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Breakpoints,TERMINAL(2),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Dirty_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Dirty_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Dirty,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Dirty,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(5));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Dirty_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Dirty_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Dirty(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Make_20_Dirty_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_Data_2F_Make_20_Dirty_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"/",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"1",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(4))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"/",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"1",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(3),TERMINAL(5),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(4))
FOOTER(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"Name",ROOT(3));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(1),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(1))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Yes",ROOT(2));

result = vpx_constant(PARAMETERS,"No",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_answer,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Yes",ROOT(4));

result = vpx_constant(PARAMETERS,"No",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_answer,3,1,TERMINAL(1),TERMINAL(4),TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Yes",ROOT(2));

result = vpx_constant(PARAMETERS,"No",ROOT(3));

result = vpx_constant(PARAMETERS,"Select Super",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_answer,4,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_6_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Select a destination class:",ROOT(2));

result = vpx_method_Select_20_Class(PARAMETERS,TERMINAL(0),TERMINAL(2),NONE,ROOT(3));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(3),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"Name",ROOT(3));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Class,2,0,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"Name",ROOT(3));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"Yes",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Select a base class:",ROOT(2));

result = vpx_method_Select_20_Class(PARAMETERS,TERMINAL(0),TERMINAL(2),NONE,ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"Name",ROOT(3));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_2_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_2_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Class,2,0,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"Name",ROOT(3));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_2_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FINISHONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(3))
OUTPUT(2,TERMINAL(2))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"Select Super",TERMINAL(2));
FAILONFAILURE

result = vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_2_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));
FAILONFAILURE

LISTROOTBEGIN(2)
REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,3,4)
result = vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_2_local_4(PARAMETERS,LOOP(0),ROOT(4),ROOT(5),ROOT(6));
LISTROOT(5,0)
LISTROOT(6,1)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTFINISH(6,1)
LISTROOTEND

result = vpx_constant(PARAMETERS,"Select a parent:",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_select,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(8));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(6),TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(5),TERMINAL(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"The attribute \"\"\"",ROOT(3));

result = vpx_constant(PARAMETERS,"\"\"\" does not exist.  Do you want to create it?\"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(6),ROOT(7));

result = vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_6(PARAMETERS,TERMINAL(6),TERMINAL(5),ROOT(8));

result = vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2_case_1_local_7(PARAMETERS,TERMINAL(0),TERMINAL(7),TERMINAL(8),ROOT(9));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_7_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_7_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Instance",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Attribute_20_Data,1,1,NONE,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_7_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_7_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Class_20_Attribute_20_Data,1,1,NONE,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_7_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_7_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Test_20_Attribute_20_Name,2,0,TERMINAL(1),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_7_case_1_local_3(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(1),TERMINAL(5),ROOT(6));
FAILONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(4),TERMINAL(2),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(2),ROOT(5));

result = vpx_constant(PARAMETERS,"Warning",ROOT(6));

result = vpx_constant(PARAMETERS,"VPLDuplicateAttribute",ROOT(7));

result = vpx_method_Project_20_Message_2F_Create(PARAMETERS,TERMINAL(7),TERMINAL(6),TERMINAL(5),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Display_20_Message,2,0,TERMINAL(0),TERMINAL(8));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(4))
FOOTER(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1))
vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"Instance",ROOT(4));

result = vpx_constant(PARAMETERS,"Class",ROOT(5));

result = vpx_constant(PARAMETERS,"Is this an instance or class attribute?",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_answer,3,1,TERMINAL(6),TERMINAL(4),TERMINAL(5),ROOT(7));

result = vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3_case_1_local_7(PARAMETERS,TERMINAL(0),TERMINAL(3),TERMINAL(2),TERMINAL(7),ROOT(8),ROOT(9));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Attribute(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5));
FAILONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(6),TERMINAL(4),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(7),TERMINAL(5));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(5),TERMINAL(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Item_20_Data,2,0,TERMINAL(8),TERMINAL(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(8),TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(8));

result = vpx_method_Project_20_Data_2F_Make_20_Attribute_case_1_local_11(PARAMETERS,TERMINAL(4));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Attributes_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Attributes_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Attributes,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Attributes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Section Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Get_20_Attributes_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = vpx_method_Lists_20_To_20_List(PARAMETERS,TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Persistent_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Persistent_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Warning",ROOT(2));

result = vpx_constant(PARAMETERS,"VPLPersistentCreate",ROOT(3));

result = vpx_method_Project_20_Message_2F_Create(PARAMETERS,TERMINAL(3),TERMINAL(2),TERMINAL(1),ROOT(4));

result = vpx_constant(PARAMETERS,"Yes",ROOT(5));

result = vpx_constant(PARAMETERS,"No",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Answer,3,1,TERMINAL(4),TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_match(PARAMETERS,"Yes",TERMINAL(7));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Persistent_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Persistent_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Section Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"1",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(5),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(7),ROOT(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Persistent_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Persistent_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"\":\"",ROOT(2));

result = vpx_constant(PARAMETERS,"\"Select a section for persistent \"\"\"",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(3),TERMINAL(1),TERMINAL(2),ROOT(4));

result = vpx_method_Select_20_Section(PARAMETERS,TERMINAL(0),TERMINAL(4),NONE,ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Persistent_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Persistent_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Make_20_Persistent_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Make_20_Persistent_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Persistent_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Persistent_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(3),TERMINAL(0),ROOT(4));

result = vpx_call_inject_instance(PARAMETERS,INJECT(1),1,1,NONE,ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(5),TERMINAL(2),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(4),TERMINAL(6));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(6),TERMINAL(4),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Item_20_Data,2,0,TERMINAL(7),TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(7),TERMINAL(0));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Persistent_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Persistent_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));
FAILONFAILURE

result = vpx_method_Project_20_Data_2F_Make_20_Persistent_case_1_local_5_case_1_local_3(PARAMETERS,TERMINAL(3),TERMINAL(1),TERMINAL(2),ROOT(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Persistent(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Make_20_Persistent_case_1_local_2(PARAMETERS,TERMINAL(1));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"Persistent Data",ROOT(2));

result = vpx_method_Project_20_Data_2F_Make_20_Persistent_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));
FAILONFAILURE

result = vpx_method_Project_20_Data_2F_Make_20_Persistent_case_1_local_5(PARAMETERS,TERMINAL(3),TERMINAL(2),TERMINAL(1),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Warning",ROOT(2));

result = vpx_constant(PARAMETERS,"VPLClassCreate",ROOT(3));

result = vpx_method_Project_20_Message_2F_Create(PARAMETERS,TERMINAL(3),TERMINAL(2),TERMINAL(1),ROOT(4));

result = vpx_constant(PARAMETERS,"Yes",ROOT(5));

result = vpx_constant(PARAMETERS,"No",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Answer,3,1,TERMINAL(4),TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_match(PARAMETERS,"Yes",TERMINAL(7));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Make_20_Class_case_1_local_2(PARAMETERS,TERMINAL(1));
FAILONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Create_20_Class_20_Window,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Class_20_Name,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run_20_Modal,2,0,TERMINAL(2),TERMINAL(0));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Class_20_Name,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Class_20_Name,2,1,TERMINAL(0),TERMINAL(5),ROOT(6));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Warning",ROOT(2));

result = vpx_constant(PARAMETERS,"VPLClassCreate",ROOT(3));

result = vpx_method_Project_20_Message_2F_Create(PARAMETERS,TERMINAL(3),TERMINAL(2),TERMINAL(1),ROOT(4));

result = vpx_constant(PARAMETERS,"Yes",ROOT(5));

result = vpx_constant(PARAMETERS,"No",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Answer,3,1,TERMINAL(4),TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_match(PARAMETERS,"Yes",TERMINAL(7));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Class_20_Items,1,1,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,LIST(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = vpx_call_primitive(PARAMETERS,VPLP_sort,1,1,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"No parent class",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(5),TERMINAL(4),ROOT(6));

result = vpx_constant(PARAMETERS,"Please select a parent class:",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_select,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(8));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(5),TERMINAL(8));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Section Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"1",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(5),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(7),ROOT(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"\":\"",ROOT(2));

result = vpx_constant(PARAMETERS,"\"Select a section for class \"\"\"",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(3),TERMINAL(1),TERMINAL(2),ROOT(4));

result = vpx_method_Select_20_Section(PARAMETERS,TERMINAL(0),TERMINAL(4),NONE,ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_5_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_5_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(3));

result = vpx_constant(PARAMETERS,"Class Data",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(4),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(3),TERMINAL(5),ROOT(6));

result = vpx_instantiate(PARAMETERS,kVPXClass_Class_20_Data,1,1,NONE,ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(7),TERMINAL(2),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(6),TERMINAL(8));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(8),TERMINAL(6),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Item_20_Data,2,0,TERMINAL(9),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(9),TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Value,2,0,TERMINAL(9),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(9));

result = vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_5_case_1_local_14(PARAMETERS,TERMINAL(5));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASEWITHNONE(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_2(PARAMETERS,TERMINAL(1));
FAILONFAILURE

result = vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));
FAILONFAILURE

result = vpx_method_Project_20_Data_2F_Make_20_Class_case_2_local_5(PARAMETERS,TERMINAL(3),TERMINAL(2),TERMINAL(1),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Class(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Make_20_Class_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Make_20_Class_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"Nonexistent Class",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Class,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = kSuccess;
FAILONSUCCESS

FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"Nonexistent Persistent",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Persistent,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = kSuccess;
FAILONSUCCESS

FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"Nonexistent Method",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,3,TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Method,4,1,TERMINAL(0),TERMINAL(3),TERMINAL(4),TERMINAL(5),ROOT(6));
NEXTCASEONFAILURE

result = kSuccess;
FAILONSUCCESS

FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"Nonexistent Attribute",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Attribute,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = kSuccess;
FAILONSUCCESS

FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Incorrect Outarity",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"root",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Incorrect Inarity",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"terminal",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Normal",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_lowercase,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"\"a \"",ROOT(2));

result = vpx_constant(PARAMETERS,"\" of \"",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_6_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_6_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_6_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_6_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"1",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"\"",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_6_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_6_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"s\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_6_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_6_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_6_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_6_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"The operation %s expects %s%s %s%s but found %s.\"",ROOT(5));

result = vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_6_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(6));

result = vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_6_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_format,7,1,TERMINAL(5),TERMINAL(0),TERMINAL(6),TERMINAL(2),TERMINAL(3),TERMINAL(7),TERMINAL(4),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_match(PARAMETERS,"\"NULL\"",LIST(1));
NEXTCASEONSUCCESS
REPEATFINISH
} else {
}

result = vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"Module Name not implemented yet!",TERMINAL(6));
NEXTCASEONSUCCESS

result = vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1_local_6(PARAMETERS,TERMINAL(3),TERMINAL(4),TERMINAL(5),TERMINAL(2),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,TERMINAL(0))
OUTPUT(2,TERMINAL(7))
FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"No Control Annotation",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"This operation has failed, but has no control annotation.",ROOT(2));

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,TERMINAL(0))
OUTPUT(2,TERMINAL(2))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Incorrect Cases",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"This operation has a next case control, but there is no next case.",ROOT(2));

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,TERMINAL(0))
OUTPUT(2,TERMINAL(2))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Watchpoint triggered",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Use \xE2\x80\x9CStep In\xE2\x80\x9D from the \xE2\x80\x9CRun\xE2\x80\x9D\xC2\xA0menu to continue.",ROOT(2));

result = vpx_extconstant(PARAMETERS,kCFUserNotificationNoteAlertLevel,ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(0))
OUTPUT(2,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_5_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_5_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"\":\"",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\":\"",ROOT(4));

result = vpx_method__22_Parse_22_(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"\" or \"",ROOT(8));

result = vpx_constant(PARAMETERS,"\", \"",ROOT(9));

result = vpx_method__28_To_20_String_29_(PARAMETERS,TERMINAL(6),TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(10),TERMINAL(8),TERMINAL(7),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_5_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_5_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_5_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_5_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_5_local_6_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_5_local_6_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_5_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_5_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Terminal %s of %s expected a value of type %s but found type %s.\"",ROOT(4));

result = vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_5_local_6_case_1_local_3(PARAMETERS,TERMINAL(2),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_format,5,1,TERMINAL(4),TERMINAL(1),TERMINAL(0),TERMINAL(5),TERMINAL(3),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"Incorrect Type\"",TERMINAL(0));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_match(PARAMETERS,"\"NULL\"",LIST(1));
NEXTCASEONSUCCESS
REPEATFINISH
} else {
}

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"Module Name not implemented yet!",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_5_local_6(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,TERMINAL(0))
OUTPUT(2,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_6_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_6_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Terminal %s of %s expected a list value but found type %s.\"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_format,4,1,TERMINAL(4),TERMINAL(1),TERMINAL(0),TERMINAL(3),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"Incorrect List Input\"",TERMINAL(0));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_match(PARAMETERS,"\"NULL\"",LIST(1));
NEXTCASEONSUCCESS
REPEATFINISH
} else {
}

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"Module Name not implemented yet!",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_6_local_6(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,TERMINAL(0))
OUTPUT(2,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_7_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_7_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"NULL\"",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"\"0\"",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"Module Name not implemented yet!",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"\"\n\"",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_7_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_7_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_7_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_7_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_7_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_7_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,2,3)
result = vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_7_local_3(PARAMETERS,LOOP(0),LIST(1),ROOT(3));
REPEATFINISH
} else {
ROOTNULL(3,TERMINAL(2))
}

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,TERMINAL(0))
OUTPUT(2,TERMINAL(3))
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1,root2))
if(vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1,root2))
if(vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1,root2))
if(vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1,root2))
if(vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1,root2))
if(vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1,root2))
vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(1),ROOT(4));

result = vpx_constant(PARAMETERS,"0.0",ROOT(5));

result = vpx_extconstant(PARAMETERS,kCFUserNotificationStopAlertLevel,ROOT(6));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(2),ROOT(7));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(6),ROOT(8));

PUTINTEGER(CFUserNotificationDisplayNotice( GETREAL(TERMINAL(5)),GETINTEGER(TERMINAL(8)),GETCONSTPOINTER(__CFURL,*,TERMINAL(3)),GETCONSTPOINTER(__CFURL,*,TERMINAL(3)),GETCONSTPOINTER(__CFURL,*,TERMINAL(3)),GETCONSTPOINTER(__CFString,*,TERMINAL(4)),GETCONSTPOINTER(__CFString,*,TERMINAL(7)),GETCONSTPOINTER(__CFString,*,TERMINAL(3))),9);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(4)));
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(7)));
result = kSuccess;

result = vpx_constant(PARAMETERS,"Fault",ROOT(10));

result = vpx_constant(PARAMETERS,"1",ROOT(11));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(10),TERMINAL(1),TERMINAL(2),TERMINAL(11));

result = kSuccess;

FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_2(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5_local_3(PARAMETERS,TERMINAL(3),TERMINAL(4),TERMINAL(5));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Handle_20_Fault(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Handle_20_Fault_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Project_20_Data_2F_Handle_20_Fault_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Project_20_Data_2F_Handle_20_Fault_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Project_20_Data_2F_Handle_20_Fault_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Project_20_Data_2F_Handle_20_Fault_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_All_20_Attributes_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_All_20_Attributes_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Attributes,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Class_20_Attributes,1,1,TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_All_20_Attributes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Section Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Get_20_All_20_Attributes_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = vpx_method_Lists_20_To_20_List(PARAMETERS,TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Class_20_Attributes_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Class_20_Attributes_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Class_20_Attributes,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Class_20_Attributes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Section Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Get_20_Class_20_Attributes_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = vpx_method_Lists_20_To_20_List(PARAMETERS,TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Mark_20_Instances_case_1_local_10_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Mark_20_Instances_case_1_local_10_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Address,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"mark",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Data,3,1,TERMINAL(0),TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(1));

result = kSuccess;
FINISHONSUCCESS

FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Mark_20_Instances_case_1_local_10_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Mark_20_Instances_case_1_local_10_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Mark_20_Instances_case_1_local_10_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Mark_20_Instances_case_1_local_10_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Mark_20_Instances_case_1_local_10_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Data_2F_Mark_20_Instances_case_1_local_10_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Mark_20_Instances_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Mark_20_Instances_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Persistents,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Attributes,1,1,TERMINAL(3),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Class_20_Attributes,1,1,TERMINAL(3),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,3,1,TERMINAL(4),TERMINAL(5),TERMINAL(6),ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Mark_20_Instances_case_1_local_10_case_1_local_7(PARAMETERS,TERMINAL(0),LIST(7));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_Mark_20_Instances(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_post_2D_load,3,0,TERMINAL(8),TERMINAL(6),TERMINAL(4));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"Section Data",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(1),TERMINAL(9),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(10),ROOT(11),ROOT(12));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(12))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Mark_20_Instances_case_1_local_10(PARAMETERS,TERMINAL(2),LIST(12));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Unmark_20_Heap,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"Name",ROOT(3));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(1),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Yes",ROOT(2));

result = vpx_constant(PARAMETERS,"No",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_answer,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Yes",ROOT(4));

result = vpx_constant(PARAMETERS,"No",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_answer,3,1,TERMINAL(1),TERMINAL(4),TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Yes",ROOT(2));

result = vpx_constant(PARAMETERS,"No",ROOT(3));

result = vpx_constant(PARAMETERS,"Select Super",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_answer,4,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_8_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Select a destination class:",ROOT(2));

result = vpx_method_Select_20_Class(PARAMETERS,TERMINAL(0),TERMINAL(2),NONE,ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"Name",ROOT(3));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Class,2,0,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"Name",ROOT(3));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"Yes",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"Name",ROOT(3));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Class,2,0,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"Name",ROOT(3));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FINISHONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(3))
OUTPUT(2,TERMINAL(2))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"Select Super",TERMINAL(2));
FAILONFAILURE

result = vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_2_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));
FAILONFAILURE

LISTROOTBEGIN(2)
REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,3,4)
result = vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_2_local_4(PARAMETERS,LOOP(0),ROOT(4),ROOT(5),ROOT(6));
LISTROOT(5,0)
LISTROOT(6,1)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTFINISH(6,1)
LISTROOTEND

result = vpx_constant(PARAMETERS,"Select a destination class:",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_select,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(8));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(6),TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(5),TERMINAL(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"The class method \"\"\"",ROOT(3));

result = vpx_constant(PARAMETERS,"\"\"\" does not exist.  Do you want to create it?\"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"1",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(1),TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_7(PARAMETERS,TERMINAL(0),TERMINAL(7),ROOT(9));

result = vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_8(PARAMETERS,TERMINAL(9),TERMINAL(5),ROOT(10));

result = vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8_case_1_local_9(PARAMETERS,TERMINAL(0),TERMINAL(7),TERMINAL(10),ROOT(11));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Universal_20_Data,1,1,NONE,ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(5),TERMINAL(2),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(3),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Inarity,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(4),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Outarity,TERMINAL(8),TERMINAL(9),ROOT(10));

result = vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6_case_1_local_8(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(11));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(11))
OUTPUT(1,TERMINAL(10))
FOOTERSINGLECASEWITHNONE(12)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(14)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Case Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Names,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(5),TERMINAL(6),ROOT(7));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(9),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(10),ROOT(11),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Names,2,0,TERMINAL(12),TERMINAL(7));

result = vpx_match(PARAMETERS,"( )",TERMINAL(9));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"TRUE",ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Change_20_Breakpoint,2,0,TERMINAL(12),TERMINAL(13));

result = kSuccess;

FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_17(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_17(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADERWITHNONE(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"/",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(1),TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(1),TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(6),TERMINAL(7),TERMINAL(2),TERMINAL(3),ROOT(8),ROOT(9));
FAILONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(10));

result = vpx_constant(PARAMETERS,"Universal Data",ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(8),TERMINAL(11),ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(10),TERMINAL(12),ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(13),TERMINAL(9));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(9),TERMINAL(13),ROOT(14));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Item_20_Data,2,0,TERMINAL(14),TERMINAL(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(14),TERMINAL(12));

result = vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_15(PARAMETERS,TERMINAL(14));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(14));

result = vpx_method_Project_20_Data_2F_Make_20_Method_case_1_local_17(PARAMETERS,TERMINAL(12));

result = kSuccess;

OUTPUT(0,TERMINAL(14))
FOOTERWITHNONE(15)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Warning",ROOT(2));

result = vpx_constant(PARAMETERS,"VPLUniversalCreate",ROOT(3));

result = vpx_method_Project_20_Message_2F_Create(PARAMETERS,TERMINAL(3),TERMINAL(2),TERMINAL(1),ROOT(4));

result = vpx_constant(PARAMETERS,"Yes",ROOT(5));

result = vpx_constant(PARAMETERS,"No",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Answer,3,1,TERMINAL(4),TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_match(PARAMETERS,"Yes",TERMINAL(7));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_2_case_1_local_2(PARAMETERS,TERMINAL(0));
FAILONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Universal_20_Data,1,1,NONE,ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(3),TERMINAL(0),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(1),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Inarity,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(2),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Outarity,TERMINAL(6),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Section Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_Element,1,1,TERMINAL(2),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Section Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"1",TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(4),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(6),ROOT(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Select a section for universal:",ROOT(1));

result = vpx_method_Select_20_Section(PARAMETERS,TERMINAL(0),TERMINAL(1),NONE,ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(14)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Case Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Names,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(5),TERMINAL(6),ROOT(7));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(9),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(10),ROOT(11),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Names,2,0,TERMINAL(12),TERMINAL(7));

result = vpx_match(PARAMETERS,"( )",TERMINAL(9));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"TRUE",ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Change_20_Breakpoint,2,0,TERMINAL(12),TERMINAL(13));

result = kSuccess;

FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Editor,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh_20_Data,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_14_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_14_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADERWITHNONE(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_2(PARAMETERS,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));
FAILONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(5));

result = vpx_constant(PARAMETERS,"Universal Data",ROOT(6));

result = vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_5(PARAMETERS,TERMINAL(0),ROOT(7));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(7),TERMINAL(6),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(5),TERMINAL(8),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(9),TERMINAL(4));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(4),TERMINAL(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Item_20_Data,2,0,TERMINAL(10),TERMINAL(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(10),TERMINAL(8));

result = vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_12(PARAMETERS,TERMINAL(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(10));

result = vpx_method_Project_20_Data_2F_Make_20_Method_case_2_local_14(PARAMETERS,TERMINAL(8));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERWITHNONE(11)
}

enum opTrigger vpx_method_Project_20_Data_2F_Make_20_Method(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Make_20_Method_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_Project_20_Data_2F_Make_20_Method_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Application_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Application_20_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(2),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Set_20_Application_20_Name_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Set_20_Application_20_Name_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Application_20_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(3),TERMINAL(1));
FAILONSUCCESS

result = vpx_set(PARAMETERS,kVPXValue_Application_20_Name,TERMINAL(0),TERMINAL(1),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Set_20_Application_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Set_20_Application_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,".app",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application_20_Name,1,1,TERMINAL(0),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(5),ROOT(7));

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(4),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Rename,2,0,TERMINAL(8),TERMINAL(7));
CONTINUEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(8));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_Set_20_Application_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Set_20_Application_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Set_20_Application_20_Name_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Project_20_Data_2F_Set_20_Application_20_Name_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Set_20_Application_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Set_20_Application_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Set_20_Application_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Set_20_Application_20_Name_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Data_2F_Set_20_Application_20_Name_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Have_20_Row_20_Values_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Display_20_Message(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Display,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MartenInlineProject.h",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UniChar,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Length,1,1,TERMINAL(0),ROOT(4));

result = vpx_extconstant(PARAMETERS,kTextEncodingUnknown,ROOT(5));

result = vpx_instantiate(PARAMETERS,kVPXClass_MacOS_20_File_20_Reference,1,1,NONE,ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_Unicode,5,0,TERMINAL(6),TERMINAL(1),TERMINAL(2),TERMINAL(4),TERMINAL(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4_case_1_local_5_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4_case_1_local_5_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4_case_1_local_5_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_File,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parent,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
FAILONFAILURE

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4_case_1_local_5(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(4));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"\'TEXT\'",ROOT(5));

result = vpx_persistent(PARAMETERS,kVPXValue_Text_20_File_20_Creator_20_Code,0,1,ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Finder_20_Info,4,0,TERMINAL(4),TERMINAL(5),TERMINAL(6),NONE);
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Coerce_20_FSSpec,1,1,TERMINAL(4),ROOT(7));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(16)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"/* A VPL Project Linker File */\n/*\n\n",ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"\nCopyright: 2004 Andescotia LLC\n\n*/\n",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"\"\n#include \"\"\"",ROOT(7));

result = vpx_constant(PARAMETERS,"\"\n\"",ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Framework_20_Link_20_Headers,1,1,TERMINAL(0),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(6),TERMINAL(8),TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(10),TERMINAL(7),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_H_20_File_20_Name,1,1,TERMINAL(0),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(11),TERMINAL(12),ROOT(13));

result = vpx_constant(PARAMETERS,"\"\"\"\n\"",ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(13),TERMINAL(14),ROOT(15));

result = kSuccess;

OUTPUT(0,TERMINAL(15))
FOOTERSINGLECASE(16)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Export_20_Mode,0,1,ROOT(2));

result = vpx_match(PARAMETERS,"Experimental",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_open_2D_file,1,1,TERMINAL(3),ROOT(4));
FAILONFAILURE

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_6(PARAMETERS,TERMINAL(0),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_write_2D_text,2,0,TERMINAL(4),TERMINAL(5));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_close_2D_file,1,0,TERMINAL(4));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"\".o\"",ROOT(3));

result = vpx_method_Get_20_Export_20_Mode_20_Extension(PARAMETERS,ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(2),TERMINAL(4),TERMINAL(3),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_5_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_5_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UniChar,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Length,1,1,TERMINAL(0),ROOT(4));

result = vpx_extconstant(PARAMETERS,kTextEncodingUnknown,ROOT(5));

result = vpx_instantiate(PARAMETERS,kVPXClass_MacOS_20_File_20_Reference,1,1,NONE,ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_Unicode,5,0,TERMINAL(6),TERMINAL(1),TERMINAL(2),TERMINAL(4),TERMINAL(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_5_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_5_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_5_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_5_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_5_case_1_local_5_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_5_case_1_local_5_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_5_case_1_local_5_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Delete,1,0,TERMINAL(3));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parent,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_5_case_1_local_4(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_5_case_1_local_5(PARAMETERS,TERMINAL(2),TERMINAL(3));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Export_20_Source,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Export_20_Header,2,0,TERMINAL(0),TERMINAL(1));
TERMINATEONFAILURE

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1));
TERMINATEONFAILURE

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Export_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(1));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Source_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Source_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Coerce_20_FSSpec,1,1,TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"\'TEXT\'",ROOT(3));

result = vpx_persistent(PARAMETERS,kVPXValue_Text_20_File_20_Creator_20_Code,0,1,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Finder_20_Info,4,0,TERMINAL(1),TERMINAL(3),TERMINAL(4),NONE);
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Source_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Source_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_File_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_file,1,3,TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_create_2D_text_2D_file,2,0,TERMINAL(4),TERMINAL(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Source_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Source_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Source_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Source_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Source(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Source_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_open_2D_file,1,1,TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Export_20_Text,1,1,TERMINAL(0),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_write_2D_text,2,0,TERMINAL(3),TERMINAL(4));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_close_2D_file,1,0,TERMINAL(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UniChar,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Length,1,1,TERMINAL(0),ROOT(4));

result = vpx_extconstant(PARAMETERS,kTextEncodingUnknown,ROOT(5));

result = vpx_instantiate(PARAMETERS,kVPXClass_MacOS_20_File_20_Reference,1,1,NONE,ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_Unicode,5,0,TERMINAL(6),TERMINAL(1),TERMINAL(2),TERMINAL(4),TERMINAL(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4_case_1_local_5_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4_case_1_local_5_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4_case_1_local_5_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_File,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parent,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_H_20_File_20_Name,1,1,TERMINAL(0),ROOT(3));

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4_case_1_local_5(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(4));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"\'TEXT\'",ROOT(5));

result = vpx_persistent(PARAMETERS,kVPXValue_Text_20_File_20_Creator_20_Code,0,1,ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Finder_20_Info,4,0,TERMINAL(4),TERMINAL(5),TERMINAL(6),NONE);
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Coerce_20_FSSpec,1,1,TERMINAL(4),ROOT(7));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\".h\"",ROOT(2));

result = vpx_constant(PARAMETERS,"\".c\"",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_extract_2D_file_2D_specification,1,3,TERMINAL(1),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(6),TERMINAL(3),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(6),TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(9),TERMINAL(2),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_file_2D_specification,3,1,TERMINAL(4),TERMINAL(5),TERMINAL(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTER(13)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Export_20_Mode,0,1,ROOT(2));

result = vpx_match(PARAMETERS,"Experimental",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_open_2D_file,1,1,TERMINAL(3),ROOT(4));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Export_20_Header_20_Text,1,1,TERMINAL(0),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_write_2D_text,2,0,TERMINAL(4),TERMINAL(5));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_close_2D_file,1,0,TERMINAL(4));
FAILONFAILURE

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\".h\"",ROOT(1));

result = vpx_constant(PARAMETERS,"\".c\"",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_extract_2D_file_2D_specification,1,3,TERMINAL(0),ROOT(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(5),TERMINAL(2),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(5),TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(8),TERMINAL(1),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_file_2D_specification,3,1,TERMINAL(3),TERMINAL(4),TERMINAL(10),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Export_20_Mode,0,1,ROOT(2));

result = vpx_match(PARAMETERS,"Experimental",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_2_local_4(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_extconstant(PARAMETERS,smSystemScript,ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_create_2D_text_2D_file,2,0,TERMINAL(3),TERMINAL(4));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_open_2D_file,1,1,TERMINAL(3),ROOT(5));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Export_20_Header_20_Text,1,1,TERMINAL(0),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_write_2D_text,2,0,TERMINAL(5),TERMINAL(6));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_close_2D_file,1,0,TERMINAL(5));
FAILONFAILURE

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_5_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_5_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(5));

result = vpx_constant(PARAMETERS,"\"extern Int4 VPLP_\"",ROOT(6));

result = vpx_constant(PARAMETERS,"\"( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );\"",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,5,1,TERMINAL(0),TERMINAL(6),TERMINAL(4),TERMINAL(7),TERMINAL(5),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_5_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_5_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Primitive Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,6)
result = vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_5_case_1_local_6_case_1_local_5(PARAMETERS,LOOP(0),LIST(5),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(6,TERMINAL(0))
}

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_5_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_5_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_5_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_5_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_5_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_5_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Primitives Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,5,6)
result = vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_5_case_1_local_6(PARAMETERS,LOOP(0),LIST(4),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(6,TERMINAL(5))
}

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6_case_1_local_6_case_1_local_10_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6_case_1_local_6_case_1_local_10_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"V_Object,",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6_case_1_local_6_case_1_local_10_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6_case_1_local_6_case_1_local_10_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"V_Object *,",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6_case_1_local_6_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6_case_1_local_6_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(29)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"(V_Environment, enum boolType *, Nat4,",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Export_20_Name,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"\"enum opTrigger \"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(5),TERMINAL(2),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(1),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(7),ROOT(9),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(9),ROOT(11),ROOT(12));

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(12),ROOT(13),ROOT(14));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(14))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,6,15)
result = vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6_case_1_local_6_case_1_local_10_case_1_local_11(PARAMETERS,LOOP(0),LIST(14),ROOT(15));
REPEATFINISH
} else {
ROOTNULL(15,TERMINAL(6))
}

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(8),ROOT(16),ROOT(17));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(17),ROOT(18),ROOT(19));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(19))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,15,20)
result = vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6_case_1_local_6_case_1_local_10_case_1_local_14(PARAMETERS,LOOP(0),LIST(19),ROOT(20));
REPEATFINISH
} else {
ROOTNULL(20,TERMINAL(15))
}

result = vpx_constant(PARAMETERS,"1",ROOT(21));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(20),TERMINAL(21),ROOT(22),ROOT(23));

result = vpx_constant(PARAMETERS,")",ROOT(24));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(22),TERMINAL(24),ROOT(25));

result = vpx_constant(PARAMETERS,";",ROOT(26));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(27));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(25),TERMINAL(26),TERMINAL(27),ROOT(28));

result = kSuccess;

OUTPUT(0,TERMINAL(28))
FOOTERSINGLECASE(29)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Case Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"( )",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6_case_1_local_6_case_1_local_10(PARAMETERS,TERMINAL(1),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTER(13)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Methods,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Universals,1,1,TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(5),TERMINAL(4),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,7)
result = vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6_case_1_local_6(PARAMETERS,LOOP(0),LIST(6),ROOT(7));
REPEATFINISH
} else {
ROOTNULL(7,TERMINAL(0))
}

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Section Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,5,6)
result = vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1_local_6(PARAMETERS,LOOP(0),LIST(4),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(6,TERMINAL(5))
}

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_10_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_10_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"( )",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_10_case_1_local_4_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_10_case_1_local_4_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"kVPXClass_",ROOT(5));

result = vpx_constant(PARAMETERS,",",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(5),TERMINAL(4),TERMINAL(6),ROOT(7));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(0),TERMINAL(8),TERMINAL(7),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_10_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_10_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"enum classConstantType {",ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,2,3)
result = vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_10_case_1_local_4_case_2_local_3(PARAMETERS,LOOP(0),LIST(0),ROOT(3));
REPEATFINISH
} else {
ROOTNULL(3,TERMINAL(2))
}

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(3),TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"};",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(5),TERMINAL(1),TERMINAL(7),TERMINAL(1),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_10_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_10_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_10_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_10_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(2));

result = vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_10_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_12_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_12_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Name,LIST(0),ROOT(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTNULL(1,NULL)
ROOTEMPTY(2)
}

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_sort,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_12_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_12_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"( )",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_12_case_1_local_7_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_12_case_1_local_7_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"kVPXValue_",ROOT(3));

result = vpx_constant(PARAMETERS,",",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(0),TERMINAL(6),TERMINAL(5),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_12_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_12_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"enum valueConstantType {",ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,2,3)
result = vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_12_case_1_local_7_case_2_local_3(PARAMETERS,LOOP(0),LIST(0),ROOT(3));
REPEATFINISH
} else {
ROOTNULL(3,TERMINAL(2))
}

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(3),TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"};",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(5),TERMINAL(1),TERMINAL(7),TERMINAL(1),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_12_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_12_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_12_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_12_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_12_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_12_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Persistents,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Attributes,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_12_case_1_local_6(PARAMETERS,TERMINAL(4),ROOT(5));

result = vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_12_case_1_local_7(PARAMETERS,TERMINAL(5),TERMINAL(1),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_12_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_12_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_12_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_12_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_13_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_13_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Name,LIST(0),ROOT(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTNULL(1,NULL)
ROOTEMPTY(2)
}

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_sort,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_13_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_13_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"( )",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_13_case_1_local_5_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_13_case_1_local_5_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"kVPXMethod_",ROOT(3));

result = vpx_constant(PARAMETERS,",",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(0),TERMINAL(6),TERMINAL(5),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_13_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_13_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"enum methodConstantType {",ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,2,3)
result = vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_13_case_1_local_5_case_2_local_3(PARAMETERS,LOOP(0),LIST(0),ROOT(3));
REPEATFINISH
} else {
ROOTNULL(3,TERMINAL(2))
}

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(3),TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"};",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(5),TERMINAL(1),TERMINAL(7),TERMINAL(1),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_13_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_13_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_13_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_13_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Universals,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_13_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_13_case_1_local_5(PARAMETERS,TERMINAL(3),TERMINAL(1),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_13_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_13_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(15)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Export_20_Mode,0,1,ROOT(1));

result = vpx_match(PARAMETERS,"Experimental",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_H_20_Code_20_Header,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_5(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_H_20_Code_20_Footer,1,1,TERMINAL(0),ROOT(5));

result = vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_8(PARAMETERS,TERMINAL(0),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(6),ROOT(7));

result = vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_10(PARAMETERS,TERMINAL(0),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(7),TERMINAL(8),ROOT(9));

result = vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_12(PARAMETERS,TERMINAL(0),ROOT(10));

result = vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1_local_13(PARAMETERS,TERMINAL(0),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(9),TERMINAL(11),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(12),TERMINAL(10),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(13),TERMINAL(5),ROOT(14));

result = kSuccess;

OUTPUT(0,TERMINAL(14))
FOOTER(15)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Export_20_Header_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Export_20_Header_20_Text_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_H_20_Code_20_Header_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_H_20_Code_20_Header_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\" \"",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"1",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(3),TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(4),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_H_20_Code_20_Header_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_H_20_Code_20_Header_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Project_20_Data_2F_H_20_Code_20_Header_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_H_20_Code_20_Header_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_H_20_Code_20_Header_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_H_20_Code_20_Header_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_H_20_Code_20_Header(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(21)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"/* A VPL Project Header File */\n/*\n\n",ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"\nCopyright: 2004 Andescotia LLC\n\n*/\n",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"\"\n#ifndef \"",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_uppercase,1,1,TERMINAL(3),ROOT(9));

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,9,10)
result = vpx_method_Project_20_Data_2F_H_20_Code_20_Header_case_1_local_10(PARAMETERS,LOOP(0),ROOT(10));
REPEATFINISH

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(8),TERMINAL(10),ROOT(11));

result = vpx_constant(PARAMETERS,"\"\n#define \"",ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(11),TERMINAL(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(13),TERMINAL(10),ROOT(14));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(14),TERMINAL(15),ROOT(16));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(17));

result = vpx_constant(PARAMETERS,"#include <MartenEngine/MartenEngine.h>",ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(16),TERMINAL(18),TERMINAL(15),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(19),TERMINAL(17),ROOT(20));

result = kSuccess;

OUTPUT(0,TERMINAL(20))
FOOTERSINGLECASE(21)
}

enum opTrigger vpx_method_Project_20_Data_2F_H_20_Code_20_Footer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"#endif",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_H_20_File_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"\".h\"",ROOT(3));

result = vpx_method_Get_20_Export_20_Mode_20_Extension(PARAMETERS,ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(2),TERMINAL(4),TERMINAL(3),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Section Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Coerce_20_FSSpec,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_open_2D_file,1,1,TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_read_2D_buffer,1,1,TERMINAL(2),ROOT(3));
CONTINUEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_close_2D_file,1,0,TERMINAL(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name_20_As_20_String,1,1,TERMINAL(0),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_open_2D_file,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_read_2D_buffer,1,1,TERMINAL(1),ROOT(2));
CONTINUEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_close_2D_file,1,0,TERMINAL(1));
FAILONFAILURE

result = vpx_extget(PARAMETERS,"name",1,2,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method_Pascal_20_To_20_String(PARAMETERS,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_14_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_14_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(1),TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"ntab",TERMINAL(5));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(4))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_14_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_14_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_14_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_14_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_14_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_14_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_14_case_1_local_6_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_14_case_1_local_6_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_From_20_MacRoman(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_14_case_1_local_6_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_14_case_1_local_6_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Encoding failure",ROOT(2));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(2),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_14_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_14_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_14_case_1_local_6_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_14_case_1_local_6_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_14_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_14_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(0),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(4),TERMINAL(5),TERMINAL(6),ROOT(7),ROOT(8),ROOT(9));

result = vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_14_case_1_local_6_case_1_local_5(PARAMETERS,TERMINAL(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(10))
FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,2)
result = vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_14_case_1_local_2(PARAMETERS,LOOP(0),TERMINAL(1),ROOT(2));
REPEATFINISH

result = vpx_constant(PARAMETERS,"2",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,1,1,TERMINAL(6),ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,5,8)
result = vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_14_case_1_local_6(PARAMETERS,TERMINAL(4),LOOP(0),LIST(7),ROOT(8),ROOT(9));
LISTROOT(9,0)
REPEATFINISH
LISTROOTFINISH(9,0)
LISTROOTEND
} else {
ROOTNULL(8,TERMINAL(5))
ROOTEMPTY(9)
}

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_15_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_15_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,3,TERMINAL(0),ROOT(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(1),TERMINAL(5),ROOT(6));

result = vpx_call_inject_method(PARAMETERS,INJECT(4),2,0,TERMINAL(2),TERMINAL(6));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_15_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_15_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,3,TERMINAL(0),ROOT(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(1),TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"Couldn\'t perform :",ROOT(7));

result = vpx_constant(PARAMETERS,": with :",ROOT(8));

result = vpx_constant(PARAMETERS,": for :",ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(2),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,6,1,TERMINAL(7),TERMINAL(4),TERMINAL(8),TERMINAL(6),TERMINAL(9),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(11));

result = kSuccess;

FOOTER(12)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_15_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_15_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(15)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Section_20_Data,1,1,NONE,ROOT(2));

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(3),TERMINAL(0),ROOT(4));

result = vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_5(PARAMETERS,TERMINAL(1),ROOT(5),ROOT(6));
NEXTCASEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(2),TERMINAL(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(4),TERMINAL(7));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(7),TERMINAL(4),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Item_20_Data,2,0,TERMINAL(8),TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(8),TERMINAL(0));

result = vpx_constant(PARAMETERS,"( )",ROOT(9));

result = vpx_constant(PARAMETERS,"0",ROOT(10));

REPEATBEGIN
LOOPTERMINALBEGIN(3)
LOOPTERMINAL(0,8,11)
LOOPTERMINAL(1,9,12)
LOOPTERMINAL(2,10,13)
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Parse_20_CPX_20_Buffer,4,3,LOOP(0),LOOP(1),LOOP(2),TERMINAL(5),ROOT(11),ROOT(12),ROOT(13));
REPEATFINISH

result = vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_14(PARAMETERS,TERMINAL(13),TERMINAL(5),ROOT(14));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(12))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1_local_15(PARAMETERS,LIST(12),TERMINAL(14));
REPEATFINISH
} else {
}

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTERWITHNONE(15)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"object",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Value,3,1,TERMINAL(0),TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Direct_20_Value,2,0,TERMINAL(2),TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Value,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_1_local_12_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_1_local_12_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"8",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"Untitled",TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(1))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_1_local_12_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_1_local_12_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_1_local_12_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_1_local_12_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_1_local_22_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_1_local_22_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(0),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(7),TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(4),TERMINAL(3),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(8),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_After_20_Import,1,0,TERMINAL(8));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_1_local_22_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_1_local_22_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_1_local_22(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_1_local_22(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_1_local_22_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_1_local_22_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(21)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Persistents,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Attributes,1,1,TERMINAL(0),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Class_20_Attributes,1,1,TERMINAL(0),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,3,1,TERMINAL(5),TERMINAL(1),TERMINAL(6),ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_1_local_8(PARAMETERS,TERMINAL(4),LIST(7));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(8));

result = vpx_constant(PARAMETERS,"Universal Data",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(9),ROOT(10));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(8))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_1_local_12(PARAMETERS,LIST(8),ROOT(11));
REPEATFINISH
} else {
ROOTNULL(11,NULL)
}

result = vpx_match(PARAMETERS,"NULL",TERMINAL(11));
NEXTCASEONSUCCESS

result = vpx_persistent(PARAMETERS,kVPXValue_Problem_20_Operations,0,1,ROOT(12));

result = vpx_match(PARAMETERS,"( )",TERMINAL(12));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(11),TERMINAL(9),ROOT(13));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(13),ROOT(14),ROOT(15));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(15))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Isolate_20_First,1,2,LIST(15),ROOT(16),ROOT(17));
LISTROOT(16,0)
LISTROOT(17,1)
REPEATFINISH
LISTROOTFINISH(16,0)
LISTROOTFINISH(17,1)
LISTROOTEND
} else {
ROOTEMPTY(16)
ROOTEMPTY(17)
}

result = vpx_call_primitive(PARAMETERS,VPLP_object_2D_to_2D_archive,1,2,TERMINAL(16),ROOT(18),ROOT(19));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(16),TERMINAL(17))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Integrate_20_First,2,0,LIST(16),LIST(17));
REPEATFINISH
} else {
}

result = vpx_call_primitive(PARAMETERS,VPLP_archive_2D_to_2D_object,1,1,TERMINAL(18),ROOT(20));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(2,TERMINAL(20),TERMINAL(16))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_1_local_22(PARAMETERS,TERMINAL(10),LIST(20),LIST(16));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Self,1,0,TERMINAL(11));

result = kSuccess;

FOOTER(21)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Problem_20_Operations,0,1,ROOT(0));

result = vpx_match(PARAMETERS,"( )",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(1));

result = vpx_method_Get_20_Application(PARAMETERS,ROOT(2));

result = vpx_constant(PARAMETERS,"Problem Items",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Display_20_List,4,0,TERMINAL(2),TERMINAL(0),TERMINAL(1),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = vpx_persistent(PARAMETERS,kVPXValue_Problem_20_Operations,1,0,TERMINAL(2));

result = vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_4(PARAMETERS,TERMINAL(0),ROOT(3));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Post_20_Load_3F_,2,0,TERMINAL(5),TERMINAL(6));

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_9(PARAMETERS,TERMINAL(3),LIST(7),ROOT(8));
LISTROOT(8,0)
REPEATFINISH
LISTROOTFINISH(8,0)
LISTROOTEND
} else {
ROOTEMPTY(8)
}

result = vpx_constant(PARAMETERS,"TRUE",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Post_20_Load_3F_,2,0,TERMINAL(5),TERMINAL(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Resolve_20_References,1,0,TERMINAL(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(8))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_13(PARAMETERS,LIST(8));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(0));

result = vpx_method_Project_20_Data_2F_Import_20_CPX_case_1_local_15(PARAMETERS);

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(3));

result = vpx_constant(PARAMETERS,"( )",ROOT(10));

result = vpx_persistent(PARAMETERS,kVPXValue_Problem_20_Operations,1,0,TERMINAL(10));

result = vpx_persistent(PARAMETERS,kVPXValue_Attribute_20_Indices,1,0,TERMINAL(10));

result = vpx_persistent(PARAMETERS,kVPXValue_Class_20_Attribute_20_Indices,1,0,TERMINAL(10));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Section Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0,V_Object *root1)
{
HEADER(7)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_file,0,2,ROOT(0),ROOT(1));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_open_2D_file,1,1,TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_read_2D_buffer,1,1,TERMINAL(2),ROOT(3));
CONTINUEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_close_2D_file,1,0,TERMINAL(2));
FAILONFAILURE

result = vpx_extget(PARAMETERS,"name",1,2,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_method_Pascal_20_To_20_String(PARAMETERS,TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_17_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_17_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(1),TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"ntab",TERMINAL(5));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(4))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_17_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_17_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_17_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_17_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_17_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_17_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_17_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_17_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(0),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(4),TERMINAL(5),TERMINAL(6),ROOT(7),ROOT(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_17(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_17(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,2)
result = vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_17_case_1_local_2(PARAMETERS,LOOP(0),TERMINAL(1),ROOT(2));
REPEATFINISH

result = vpx_constant(PARAMETERS,"2",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,1,1,TERMINAL(6),ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,5,8)
result = vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_17_case_1_local_6(PARAMETERS,TERMINAL(4),LOOP(0),LIST(7),ROOT(8),ROOT(9));
LISTROOT(9,0)
REPEATFINISH
LISTROOTFINISH(9,0)
LISTROOTEND
} else {
ROOTNULL(8,TERMINAL(5))
ROOTEMPTY(9)
}

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_18_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_18_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,3,TERMINAL(0),ROOT(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(1),TERMINAL(5),ROOT(6));

result = vpx_call_inject_method(PARAMETERS,INJECT(4),2,0,TERMINAL(2),TERMINAL(6));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_18_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_18_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,3,TERMINAL(0),ROOT(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(1),TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"Couldn\'t perform :",ROOT(7));

result = vpx_constant(PARAMETERS,": with :",ROOT(8));

result = vpx_constant(PARAMETERS,": for :",ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(2),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,6,1,TERMINAL(7),TERMINAL(4),TERMINAL(8),TERMINAL(6),TERMINAL(9),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(11));

result = kSuccess;

FOOTER(12)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_18(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_18(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_18_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_18_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_19(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_19(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Problem_20_Operations,0,1,ROOT(0));

result = vpx_match(PARAMETERS,"( )",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(1));

result = vpx_method_Get_20_Application(PARAMETERS,ROOT(2));

result = vpx_constant(PARAMETERS,"Problem Items",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Display_20_List,4,0,TERMINAL(2),TERMINAL(0),TERMINAL(1),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_20_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_20_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_method_Object_20_To_20_Instance(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"archive",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_object_2D_to_2D_archive,1,2,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Value,3,1,TERMINAL(0),TERMINAL(6),TERMINAL(5),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Direct_20_Value,2,0,TERMINAL(2),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Value,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_20_case_1_local_12_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_20_case_1_local_12_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"8",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"Untitled",TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(1))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_20_case_1_local_12_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_20_case_1_local_12_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_20_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_20_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_20_case_1_local_12_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_20_case_1_local_12_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_20_case_1_local_22_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_20_case_1_local_22_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(0),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(7),TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(4),TERMINAL(3),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(8),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_After_20_Import,1,0,TERMINAL(8));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_20_case_1_local_22_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_20_case_1_local_22_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_20_case_1_local_22(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_20_case_1_local_22(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_20_case_1_local_22_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_20_case_1_local_22_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_20(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_20(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(21)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Persistents,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Attributes,1,1,TERMINAL(0),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Class_20_Attributes,1,1,TERMINAL(0),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,3,1,TERMINAL(5),TERMINAL(1),TERMINAL(6),ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_20_case_1_local_8(PARAMETERS,TERMINAL(4),LIST(7));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(8));

result = vpx_constant(PARAMETERS,"Universal Data",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(9),ROOT(10));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(8))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_20_case_1_local_12(PARAMETERS,LIST(8),ROOT(11));
REPEATFINISH
} else {
ROOTNULL(11,NULL)
}

result = vpx_persistent(PARAMETERS,kVPXValue_Problem_20_Operations,0,1,ROOT(12));

result = vpx_match(PARAMETERS,"( )",TERMINAL(12));
TERMINATEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(11));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(11),TERMINAL(9),ROOT(13));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(13),ROOT(14),ROOT(15));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(15))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Isolate_20_First,1,2,LIST(15),ROOT(16),ROOT(17));
LISTROOT(16,0)
LISTROOT(17,1)
REPEATFINISH
LISTROOTFINISH(16,0)
LISTROOTFINISH(17,1)
LISTROOTEND
} else {
ROOTEMPTY(16)
ROOTEMPTY(17)
}

result = vpx_call_primitive(PARAMETERS,VPLP_object_2D_to_2D_archive,1,2,TERMINAL(16),ROOT(18),ROOT(19));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(16),TERMINAL(17))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Integrate_20_First,2,0,LIST(16),LIST(17));
REPEATFINISH
} else {
}

result = vpx_call_primitive(PARAMETERS,VPLP_archive_2D_to_2D_object,1,1,TERMINAL(18),ROOT(20));
TERMINATEONFAILURE

if( (repeatLimit = vpx_multiplex(2,TERMINAL(20),TERMINAL(16))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_20_case_1_local_22(PARAMETERS,TERMINAL(10),LIST(20),LIST(16));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Self,1,0,TERMINAL(11));

result = kSuccess;

FOOTERSINGLECASE(21)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(18)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_2(PARAMETERS,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_3(PARAMETERS,ROOT(3),ROOT(4));
TERMINATEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Section_20_Data,1,1,NONE,ROOT(5));

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(6),TERMINAL(2),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(5),TERMINAL(4),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(7),TERMINAL(8));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(8),TERMINAL(7),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Item_20_Data,2,0,TERMINAL(9),TERMINAL(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(9),TERMINAL(2));

result = vpx_constant(PARAMETERS,"( )",ROOT(10));

result = vpx_constant(PARAMETERS,"( )",ROOT(11));

result = vpx_persistent(PARAMETERS,kVPXValue_Problem_20_Operations,1,0,TERMINAL(11));

result = vpx_constant(PARAMETERS,"0",ROOT(12));

REPEATBEGIN
LOOPTERMINALBEGIN(3)
LOOPTERMINAL(0,9,13)
LOOPTERMINAL(1,10,14)
LOOPTERMINAL(2,12,15)
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Parse_20_CPX_20_Buffer,4,3,LOOP(0),LOOP(1),LOOP(2),TERMINAL(3),ROOT(13),ROOT(14),ROOT(15));
REPEATFINISH

result = vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_17(PARAMETERS,TERMINAL(15),TERMINAL(3),ROOT(16));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(14))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_18(PARAMETERS,LIST(14),TERMINAL(16));
REPEATFINISH
} else {
}

result = vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_19(PARAMETERS);

result = vpx_method_Project_20_Data_2F_Import_20_CPX_case_2_local_20(PARAMETERS,TERMINAL(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"( )",ROOT(17));

result = vpx_persistent(PARAMETERS,kVPXValue_Problem_20_Operations,1,0,TERMINAL(17));

result = vpx_persistent(PARAMETERS,kVPXValue_Attribute_20_Indices,1,0,TERMINAL(17));

result = vpx_persistent(PARAMETERS,kVPXValue_Class_20_Attribute_20_Indices,1,0,TERMINAL(17));

result = kSuccess;

FOOTERWITHNONE(18)
}

enum opTrigger vpx_method_Project_20_Data_2F_Import_20_CPX(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Import_20_CPX_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Data_2F_Import_20_CPX_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Find_20_Class_20_Name_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Find_20_Class_20_Name_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Class Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Item_20_Name,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Find_20_Class_20_Name_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Find_20_Class_20_Name_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_Data_2F_Find_20_Class_20_Name_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Find_20_Class_20_Name_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Find_20_Class_20_Name_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Data_2F_Find_20_Class_20_Name_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Find_20_Class_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Section Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Find_20_Class_20_Name_case_1_local_5(PARAMETERS,LIST(5),TERMINAL(1),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(6,NULL)
}

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(6));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Data_2F_Framework_20_Link_20_Headers_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Framework_20_Link_20_Headers_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Link_20_Headers,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Framework_20_Link_20_Headers_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Framework_20_Link_20_Headers_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Primitives Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Data_2F_Framework_20_Link_20_Headers_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = vpx_method__28_Flatten_29_(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_method__28_Unique_29_(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_match(PARAMETERS,"( )",TERMINAL(7));
NEXTCASEONSUCCESS

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(8));

result = vpx_method__28_To_20_String_29_(PARAMETERS,TERMINAL(7),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Project_20_Data_2F_Framework_20_Link_20_Headers_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Framework_20_Link_20_Headers_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Framework_20_Link_20_Headers(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Data_2F_Framework_20_Link_20_Headers_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Data_2F_Framework_20_Link_20_Headers_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Key_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Key_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Project Settings",ROOT(0));

result = vpx_method_Find_20_Service(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Get_20_Key_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Get_20_Key_20_Value_case_1_local_2(PARAMETERS,ROOT(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Setting,3,1,TERMINAL(2),TERMINAL(0),TERMINAL(1),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Set_20_Key_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Set_20_Key_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Project Settings",ROOT(0));

result = vpx_method_Find_20_Service(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Set_20_Key_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Set_20_Key_20_Value_case_1_local_2(PARAMETERS,ROOT(3));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Project_20_Setting,4,0,TERMINAL(3),TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Data_2F_Load_20_Key_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Load_20_Key_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Project Settings",ROOT(0));

result = vpx_method_Find_20_Service(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Load_20_Key_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Load_20_Key_20_Value_case_1_local_2(PARAMETERS,ROOT(3));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Load_20_Project_20_Setting,4,1,TERMINAL(3),TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_Key_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Project_20_Data_2F_Save_20_Key_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Project Settings",ROOT(0));

result = vpx_method_Find_20_Service(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Data_2F_Save_20_Key_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Data_2F_Save_20_Key_20_Value_case_1_local_2(PARAMETERS,ROOT(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Save_20_Project_20_Setting,3,0,TERMINAL(2),TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Project_20_Message_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Project_20_Message_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 338 345 }{ 200 300 } */
	tempAttribute = attribute_add("Key",tempClass,NULL,environment);
	tempAttribute = attribute_add("Type",tempClass,NULL,environment);
	tempAttribute = attribute_add("Time Stamp",tempClass,NULL,environment);
	tempAttribute = attribute_add("Originator",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parameters",tempClass,tempAttribute_Project_20_Message_2F_Parameters,environment);
	tempAttribute = attribute_add("Text",tempClass,NULL,environment);
	tempAttribute = attribute_add("Repeat Count",tempClass,tempAttribute_Project_20_Message_2F_Repeat_20_Count,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 740 469 }{ 200 300 } */
enum opTrigger vpx_method_Project_20_Message_2F_Create(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Project_20_Message,1,1,NONE,ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Key,TERMINAL(3),TERMINAL(0),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Type,TERMINAL(4),TERMINAL(1),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Parameters,TERMINAL(5),TERMINAL(2),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Construct_20_Text,1,1,TERMINAL(6),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Text,TERMINAL(6),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_Project_20_Message_2F_Construct_20_Text_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Message_2F_Construct_20_Text_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Key,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Copy_20_Localized_20_String(PARAMETERS,TERMINAL(2),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Message_2F_Construct_20_Text_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Message_2F_Construct_20_Text_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(18)
INPUT(0,0)
result = kSuccess;

PUTPOINTER(__CFBundle,*,CFBundleGetMainBundle(),1);
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Key,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_to_2D_pointer,1,1,TERMINAL(4),ROOT(5));

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUTF8,ROOT(6));

PUTPOINTER(__CFString,*,CFStringCreateWithCString( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETCONSTPOINTER(char,*,TERMINAL(5)),GETINTEGER(TERMINAL(6))),7);
result = kSuccess;

PUTPOINTER(__CFString,*,CFBundleCopyLocalizedString( GETPOINTER(0,__CFBundle,*,ROOT(9),TERMINAL(1)),GETCONSTPOINTER(__CFString,*,TERMINAL(7)),GETCONSTPOINTER(__CFString,*,TERMINAL(7)),GETCONSTPOINTER(__CFString,*,TERMINAL(2))),8);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(8));
FAILONSUCCESS

CFShow( GETCONSTPOINTER(void,*,TERMINAL(8)));
result = kSuccess;

PUTINTEGER(CFStringGetLength( GETCONSTPOINTER(__CFString,*,TERMINAL(8))),10);
result = kSuccess;

PUTINTEGER(CFStringGetMaximumSizeForEncoding( GETINTEGER(TERMINAL(10)),GETINTEGER(TERMINAL(6))),11);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(11),ROOT(12));

PUTPOINTER(char,*,NewPtrClear( GETINTEGER(TERMINAL(12))),13);
result = kSuccess;

PUTINTEGER(CFStringGetCString( GETCONSTPOINTER(__CFString,*,TERMINAL(8)),GETPOINTER(1,char,*,ROOT(15),TERMINAL(13)),GETINTEGER(TERMINAL(11)),GETINTEGER(TERMINAL(6))),14);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pointer_2D_to_2D_string,1,1,TERMINAL(13),ROOT(16));

DisposePtr( GETPOINTER(1,char,*,ROOT(17),TERMINAL(13)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(16))
FOOTER(18)
}

enum opTrigger vpx_method_Project_20_Message_2F_Construct_20_Text_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Message_2F_Construct_20_Text_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

PUTPOINTER(__CFBundle,*,CFBundleGetMainBundle(),1);
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Key,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_to_2D_pointer,1,1,TERMINAL(4),ROOT(5));

PUTINTEGER(CFStringGetSystemEncoding(),6);
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUTF8,ROOT(7));

PUTPOINTER(__CFString,*,CFStringCreateWithCString( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETCONSTPOINTER(char,*,TERMINAL(5)),GETINTEGER(TERMINAL(7))),8);
result = kSuccess;

PUTPOINTER(__CFString,*,CFBundleCopyLocalizedString( GETPOINTER(0,__CFBundle,*,ROOT(10),TERMINAL(1)),GETCONSTPOINTER(__CFString,*,TERMINAL(8)),GETCONSTPOINTER(__CFString,*,TERMINAL(8)),GETCONSTPOINTER(__CFString,*,TERMINAL(2))),9);
result = kSuccess;

PUTPOINTER(char,*,CFStringGetCStringPtr( GETCONSTPOINTER(__CFString,*,TERMINAL(9)),GETINTEGER(TERMINAL(7))),11);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pointer_2D_to_2D_string,1,1,TERMINAL(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTER(13)
}

enum opTrigger vpx_method_Project_20_Message_2F_Construct_20_Text_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Message_2F_Construct_20_Text_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Message_2F_Construct_20_Text_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Message_2F_Construct_20_Text_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Message_2F_Construct_20_Text_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Message_2F_Construct_20_Text_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Message_2F_Construct_20_Text_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"%s",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"2",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(6),TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(5),TERMINAL(1),TERMINAL(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_Project_20_Message_2F_Construct_20_Text_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Message_2F_Construct_20_Text_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Message_2F_Construct_20_Text_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Message_2F_Construct_20_Text_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Message_2F_Construct_20_Text_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Message_2F_Construct_20_Text_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Message_2F_Construct_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Message_2F_Construct_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parameters,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Project_20_Message_2F_Construct_20_Text_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,3,4)
result = vpx_method_Project_20_Message_2F_Construct_20_Text_case_1_local_4(PARAMETERS,LOOP(0),LIST(2),ROOT(4));
REPEATFINISH
} else {
ROOTNULL(4,TERMINAL(3))
}

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Message_2F_Construct_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Message_2F_Construct_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Key,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Message_2F_Construct_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Message_2F_Construct_20_Text_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Message_2F_Construct_20_Text_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Message_2F_Display(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Message_2F_Get_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Message_2F_Get_20_Answer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Text,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_answer,3,1,TERMINAL(3),TERMINAL(1),TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

/* Stop Universals */



Nat4 VPLC_Project_20_Run_20_Task_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Project_20_Run_20_Task_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 590 503 }{ 200 300 } */
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Thread Task");
	return kNOERROR;
}

/* Start Universals: { 605 633 }{ 200 300 } */
enum opTrigger vpx_method_Project_20_Run_20_Task_2F_Perform_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Run_20_Task_2F_Perform_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_Execute_20_MAIN,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Run_20_Task_2F_Perform_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Run_20_Task_2F_Perform_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Run_20_Task_2F_Perform_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Run_20_Task_2F_Perform_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_MAIN,1,1,TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( )",ROOT(5));

result = vpx_constant(PARAMETERS,"0",ROOT(6));

result = vpx_constant(PARAMETERS,"NULL",ROOT(7));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Execute,5,0,TERMINAL(4),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Project_20_Run_20_Task_2F_Perform(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Run_20_Task_2F_Perform_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Run_20_Task_2F_Perform_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Run_20_Task_2F_Perform_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Marten_20_Project_20_Template_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Marten_20_Project_20_Template_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Bundle",tempClass,NULL,environment);
	tempAttribute = attribute_add("ID",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Description",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 324 848 }{ 287 303 } */
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Substitute_20_Keys_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Substitute_20_Keys_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Keys",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Read_20_Form_20_For_20_Key,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(2),TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Substitute_20_Keys_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Substitute_20_Keys_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Substitute_20_Keys_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Substitute_20_Keys_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Marten_20_Project_20_Template_2F_Substitute_20_Keys_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Marten_20_Project_20_Template_2F_Substitute_20_Keys_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Substitute_20_Keys_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Substitute_20_Keys_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method__22_Replace_22_(PARAMETERS,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(2),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Substitute_20_Keys_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Substitute_20_Keys_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(3));

result = vpx_method_VPL_20_Text_20_To_20_C_20_String(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(1),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Substitute_20_Keys(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Form",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Read_20_Form_20_For_20_Key,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(3),ROOT(4));
FAILONFAILURE

result = vpx_method_Default_20_List(PARAMETERS,TERMINAL(2),ROOT(5));

result = vpx_method_Marten_20_Project_20_Template_2F_Substitute_20_Keys_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Marten_20_Project_20_Template_2F_Substitute_20_Keys_case_1_local_6(PARAMETERS,LIST(6),TERMINAL(6),ROOT(7));
LISTROOT(7,0)
REPEATFINISH
LISTROOTFINISH(7,0)
LISTROOTEND
} else {
ROOTEMPTY(7)
}

result = vpx_method__22_Replace_22_(PARAMETERS,TERMINAL(4),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Read_20_Form_20_For_20_Key_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Read_20_Form_20_For_20_Key_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CFBundleRef,1,1,TERMINAL(0),ROOT(1));

PUTPOINTER(__CFURL,*,CFBundleCopyBundleURL( GETPOINTER(0,__CFBundle,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Read_20_Form_20_For_20_Key_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Read_20_Form_20_For_20_Key_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_method_From_20_CFType(PARAMETERS,TERMINAL(4),ROOT(5));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"\"Contents/Forms/\"",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(5),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Read_20_Form_20_For_20_Key_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Read_20_Form_20_For_20_Key_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

PUTPOINTER(__CFURL,*,CFURLCreateCopyAppendingPathComponent( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETCONSTPOINTER(__CFURL,*,TERMINAL(0)),GETCONSTPOINTER(__CFString,*,TERMINAL(3)),GETINTEGER(TERMINAL(4))),5);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(3)));
result = kSuccess;

PUTINTEGER(CFURLGetFSRef( GETCONSTPOINTER(__CFURL,*,TERMINAL(5)),GETPOINTER(144,FSRef,*,ROOT(7),NONE)),6);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(0)));
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(5)));
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(6));
FAILONFAILURE

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(7),ROOT(8));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Read_20_Form_20_For_20_Key_case_1_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Read_20_Form_20_For_20_Key_case_1_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_File_20_Process,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Reference,2,0,TERMINAL(1),TERMINAL(0));

result = vpx_extconstant(PARAMETERS,fsRdPerm,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Permission,2,0,TERMINAL(1),TERMINAL(2));

result = vpx_extconstant(PARAMETERS,fsFromStart,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Position_20_Mode,2,0,TERMINAL(1),TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Read_20_Form_20_For_20_Key_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Read_20_Form_20_For_20_Key_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Marten_20_Project_20_Template_2F_Read_20_Form_20_For_20_Key_case_1_local_6_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Load_20_String,2,2,TERMINAL(1),NONE,ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"\"\"",ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,4,5)
result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,LOOP(0),LIST(3),ROOT(5));
REPEATFINISH
} else {
ROOTNULL(5,TERMINAL(4))
}

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Read_20_Form_20_For_20_Key(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Bundle,1,1,TERMINAL(0),ROOT(3));

result = vpx_method_Marten_20_Project_20_Template_2F_Read_20_Form_20_For_20_Key_case_1_local_3(PARAMETERS,TERMINAL(3),ROOT(4));
FAILONFAILURE

result = vpx_method_Marten_20_Project_20_Template_2F_Read_20_Form_20_For_20_Key_case_1_local_4(PARAMETERS,TERMINAL(3),TERMINAL(1),TERMINAL(2),ROOT(5));
FAILONFAILURE

result = vpx_method_Marten_20_Project_20_Template_2F_Read_20_Form_20_For_20_Key_case_1_local_5(PARAMETERS,TERMINAL(4),TERMINAL(5),ROOT(6));
FAILONFAILURE

result = vpx_method_Marten_20_Project_20_Template_2F_Read_20_Form_20_For_20_Key_case_1_local_6(PARAMETERS,TERMINAL(6),ROOT(7));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Create_20_From_20_CFURL(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Bundle,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_CFURL,2,0,TERMINAL(2),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Bundle,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Load_20_Info,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Load_20_Info_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Load_20_Info_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MartenTemplateItemName",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Bundle,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_method_From_20_CFType(PARAMETERS,TERMINAL(3),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Name,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Load_20_Info_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Load_20_Info_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MartenTemplateItemDescription",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Bundle,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_method_From_20_CFType(PARAMETERS,TERMINAL(3),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Description,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Load_20_Info_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Load_20_Info_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MartenTemplateID",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Bundle,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_method_From_20_CFType(PARAMETERS,TERMINAL(3),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_ID,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Load_20_Info(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Marten_20_Project_20_Template_2F_Load_20_Info_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_Marten_20_Project_20_Template_2F_Load_20_Info_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_method_Marten_20_Project_20_Template_2F_Load_20_Info_case_1_local_4(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Get_20_Bundle(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Bundle,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Set_20_Bundle(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Bundle,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Get_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Set_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Get_20_Description(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Description,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Set_20_Description(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Description,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Get_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_ID,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Marten_20_Project_20_Template_2F_Set_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_ID,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Project_20_Settings_20_Locator_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Project_20_Settings_20_Locator_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Project_20_Settings_20_Locator_2F_Name,environment);
	tempAttribute = attribute_add("Required Services",tempClass,tempAttribute_Project_20_Settings_20_Locator_2F_Required_20_Services,environment);
	tempAttribute = attribute_add("Initial?",tempClass,tempAttribute_Project_20_Settings_20_Locator_2F_Initial_3F_,environment);
	tempAttribute = attribute_add("Active?",tempClass,tempAttribute_Project_20_Settings_20_Locator_2F_Active_3F_,environment);
	tempAttribute = attribute_add("Known Projects",tempClass,tempAttribute_Project_20_Settings_20_Locator_2F_Known_20_Projects,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Service Abstract");
	return kNOERROR;
}

/* Start Universals: { 541 560 }{ 282 305 } */
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Find_20_Project_20_Storage(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_Projects,1,1,TERMINAL(0),ROOT(2));

result = vpx_method__28_Get_20_Setting_29_(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Get_20_Project_20_Setting(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Project_20_Storage,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));
FAILONFAILURE

result = vpx_method__28_Get_20_Setting_29_(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Set_20_Project_20_Setting_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Set_20_Project_20_Setting_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_Projects,1,1,TERMINAL(0),ROOT(4));

result = vpx_method__28_Get_20_Setting_29_(PARAMETERS,TERMINAL(4),TERMINAL(1),ROOT(5));
NEXTCASEONFAILURE

result = vpx_method__28_Set_20_Setting_29_(PARAMETERS,TERMINAL(5),TERMINAL(2),TERMINAL(3),ROOT(6));

result = vpx_method__28_Set_20_Setting_29_(PARAMETERS,TERMINAL(4),TERMINAL(1),TERMINAL(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Known_20_Projects,2,0,TERMINAL(0),TERMINAL(7));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Set_20_Project_20_Setting_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Set_20_Project_20_Setting_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_Projects,1,1,TERMINAL(0),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(2),TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(5),ROOT(6));

result = vpx_method__28_Set_20_Setting_29_(PARAMETERS,TERMINAL(4),TERMINAL(1),TERMINAL(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Known_20_Projects,2,0,TERMINAL(0),TERMINAL(7));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Set_20_Project_20_Setting(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Settings_20_Locator_2F_Set_20_Project_20_Setting_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
vpx_method_Project_20_Settings_20_Locator_2F_Set_20_Project_20_Setting_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3);
return outcome;
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Remove_20_Project_20_Setting(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_Projects,1,1,TERMINAL(0),ROOT(3));

result = vpx_method__28_Get_20_Setting_29_(PARAMETERS,TERMINAL(3),TERMINAL(1),ROOT(4));
FAILONFAILURE

result = vpx_method__28_Remove_20_Setting_29_(PARAMETERS,TERMINAL(4),TERMINAL(2),ROOT(5),ROOT(6));
FAILONFAILURE

result = vpx_method__28_Set_20_Setting_29_(PARAMETERS,TERMINAL(3),TERMINAL(1),TERMINAL(5),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Known_20_Projects,2,0,TERMINAL(0),TERMINAL(7));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Project_20_Storage,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Project_20_Parameter_20_Keys,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

PUTPOINTER(__CFURL,*,CFURLCreateFromFSRef( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(1)),GETCONSTPOINTER(FSRef,*,TERMINAL(0))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

PUTPOINTER(__CFBundle,*,CFBundleCreate( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(1)),GETCONSTPOINTER(__CFURL,*,TERMINAL(2))),3);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(2)));
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

PUTPOINTER(__CFURL,*,CFBundleCopyExecutableURL( GETPOINTER(0,__CFBundle,*,ROOT(5),TERMINAL(3))),4);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

result = vpx_extconstant(PARAMETERS,kCFURLPOSIXPathStyle,ROOT(6));

PUTPOINTER(__CFString,*,CFURLCopyFileSystemPath( GETCONSTPOINTER(__CFURL,*,TERMINAL(4)),GETINTEGER(TERMINAL(6))),7);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(4)));
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
FAILONSUCCESS

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(7),ROOT(8));

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(7)));
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(8));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Interpreter_d",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_5_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_5_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(10)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"_",ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method__22_Parse_22_(PARAMETERS,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(7));
FAILONFAILURE

PUTINTEGER(GetProcessForPID( GETINTEGER(TERMINAL(7)),GETPOINTER(8,ProcessSerialNumber,*,ROOT(9),NONE)),8);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(8));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASEWITHNONE(10)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_5_case_1_local_3_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_extget(PARAMETERS,"highLongOfPSN",1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_extget(PARAMETERS,"lowLongOfPSN",1,2,TERMINAL(1),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_5_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_5_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"-psn_",ROOT(1));

result = vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_5_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"_",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(1),TERMINAL(2),TERMINAL(4),TERMINAL(3),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_4(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1_local_5(PARAMETERS,TERMINAL(3),ROOT(5));

result = vpx_constant(PARAMETERS,"$0",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Project_20_Setting,4,0,TERMINAL(0),TERMINAL(1),TERMINAL(6),TERMINAL(4));

result = vpx_constant(PARAMETERS,"-psn",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Project_20_Setting,4,0,TERMINAL(0),TERMINAL(1),TERMINAL(7),TERMINAL(5));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Remove_20_Project(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_Projects,1,1,TERMINAL(0),ROOT(2));

result = vpx_method__28_Remove_20_Setting_29_(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3),ROOT(4));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Known_20_Projects,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Get_20_Known_20_Projects(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Known_20_Projects,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Set_20_Known_20_Projects(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Known_20_Projects,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_File,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_File_20_Type_20_Extension(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_4_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_4_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_4_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_6_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_6_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_6_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_6_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_6_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_6_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_6_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_6_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Full_20_Path_20_CFURL,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Copy_20_Appending_20_Path_20_Component,3,1,TERMINAL(3),TERMINAL(1),TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_6_case_1_local_7(PARAMETERS,TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(4));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(3));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parent,1,1,TERMINAL(3),ROOT(4));

result = vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

result = vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2_case_1_local_6(PARAMETERS,TERMINAL(4),TERMINAL(5),ROOT(6));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"object",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Read_20_Object_20_File,1,1,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"text",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Read_20_Text_20_File,1,1,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(4));
FAILONFAILURE

result = vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting_case_1_local_3(PARAMETERS,TERMINAL(4),TERMINAL(3),ROOT(5));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Project_20_Setting,4,0,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_File_20_Type_20_Extension(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_4_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_4_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_4_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(3),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(4))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_5_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_5_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_5_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_5_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_5_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_5_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_5_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_5_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Full_20_Path_20_CFURL,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Copy_20_Appending_20_Path_20_Component,3,1,TERMINAL(3),TERMINAL(1),TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_5_case_1_local_7(PARAMETERS,TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(4));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_File,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parent,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4_case_1_local_5(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(6));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"\'mVPL\'",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Finder_20_Info,4,0,TERMINAL(6),TERMINAL(5),TERMINAL(7),NONE);
CONTINUEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Coerce_20_FSSpec,1,1,TERMINAL(6),ROOT(8));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_open_2D_file,1,1,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_write_2D_text,2,0,TERMINAL(2),TERMINAL(1));
CONTINUEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_close_2D_file,1,0,TERMINAL(2));
CONTINUEONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_open_2D_file,1,1,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_write_2D_object,2,0,TERMINAL(2),TERMINAL(1));
CONTINUEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_close_2D_file,1,0,TERMINAL(2));
CONTINUEONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Setting,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_File,1,1,TERMINAL(1),ROOT(4));
FAILONFAILURE

result = vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_4(PARAMETERS,TERMINAL(4),TERMINAL(1),TERMINAL(2),ROOT(5));
FAILONFAILURE

result = vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting_case_1_local_5(PARAMETERS,TERMINAL(5),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"###END#OF#PARAMS###\"",ROOT(1));

result = vpx_method__22_Split_20_At_22_(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_method__22_Trim_22_(PARAMETERS,TERMINAL(2),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"###ASK#FOR#PARAM###",ROOT(1));

result = vpx_method__22_Split_20_At_22_(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_method__22_Trim_22_(PARAMETERS,TERMINAL(2),ROOT(5));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method__22_Check_22_(PARAMETERS,LIST(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

result = vpx_constant(PARAMETERS,"Please select a prarmater line to pass.",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_select,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Please enter a parameter line.",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_ask_2D_text,2,1,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"param",ROOT(2));

result = vpx_constant(PARAMETERS,"text",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Load_20_Project_20_Setting,4,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));
FAILONFAILURE

result = vpx_method__22_Trim_22_(PARAMETERS,TERMINAL(4),ROOT(5));

result = vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_6(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_7(PARAMETERS,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_8(PARAMETERS,TERMINAL(7),ROOT(9));

result = vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys_case_1_local_9(PARAMETERS,TERMINAL(9),TERMINAL(8),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(11)
}

/* Stop Universals */






Nat4	loadClasses_MyProjectData(V_Environment environment);
Nat4	loadClasses_MyProjectData(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Project Data",environment);
	if(result == NULL) return kERROR;
	VPLC_Project_20_Data_class_load(result,environment);
	result = class_new("Project Message",environment);
	if(result == NULL) return kERROR;
	VPLC_Project_20_Message_class_load(result,environment);
	result = class_new("Project Run Task",environment);
	if(result == NULL) return kERROR;
	VPLC_Project_20_Run_20_Task_class_load(result,environment);
	result = class_new("Marten Project Template",environment);
	if(result == NULL) return kERROR;
	VPLC_Marten_20_Project_20_Template_class_load(result,environment);
	result = class_new("Project Settings Locator",environment);
	if(result == NULL) return kERROR;
	VPLC_Project_20_Settings_20_Locator_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_MyProjectData(V_Environment environment);
Nat4	loadUniversals_MyProjectData(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Load Project Templates",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Load_20_Project_20_Templates,NULL);

	result = method_new("Find Template ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Find_20_Template_20_ID,NULL);

	result = method_new("Substitute Template Keys",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Substitute_20_Template_20_Keys,NULL);

	result = method_new("TEST Show Standard Form",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_Show_20_Standard_20_Form,NULL);

	result = method_new("Project Data/Old Show Errors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Old_20_Show_20_Errors,NULL);

	result = method_new("Project Data/C Code Header",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_C_20_Code_20_Header,NULL);

	result = method_new("Project Data/C Code Primitive Includes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_C_20_Code_20_Primitive_20_Includes,NULL);

	result = method_new("Project Data/C Code Section Includes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_C_20_Code_20_Section_20_Includes,NULL);

	result = method_new("Project Data/C Code Load Project",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_C_20_Code_20_Load_20_Project,NULL);

	result = method_new("Project Data/C Code Primitives",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_C_20_Code_20_Primitives,NULL);

	result = method_new("Project Data/C Code Sections",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_C_20_Code_20_Sections,NULL);

	result = method_new("Project Data/C Code Footer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_C_20_Code_20_Footer,NULL);

	result = method_new("Project Data/C File Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_C_20_File_20_Name,NULL);

	result = method_new("Project Data/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Close,NULL);

	result = method_new("Project Data/Export Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Export_20_Text,NULL);

	result = method_new("Project Data/xExport Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_xExport_20_Text,NULL);

	result = method_new("Project Data/Get All Universals",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Get_20_All_20_Universals,NULL);

	result = method_new("Project Data/Get Classes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Get_20_Classes,NULL);

	result = method_new("Project Data/Get Persistents",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Get_20_Persistents,NULL);

	result = method_new("Project Data/Get Primitives",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Get_20_Primitives,NULL);

	result = method_new("Project Data/Get Project Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Get_20_Project_20_Data,NULL);

	result = method_new("Project Data/Get Section Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Get_20_Section_20_Data,NULL);

	result = method_new("Project Data/Get Universals",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Get_20_Universals,NULL);

	result = method_new("Project Data/Initialize Item Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Initialize_20_Item_20_Data,NULL);

	result = method_new("Project Data/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Open,NULL);

	result = method_new("Project Data/Add Section Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Add_20_Section_20_Data,NULL);

	result = method_new("Project Data/Resolve References",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Resolve_20_References,NULL);

	result = method_new("Project Data/Add To List Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Add_20_To_20_List_20_Data,NULL);

	result = method_new("Project Data/Set Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Set_20_Value,NULL);

	result = method_new("Project Data/Get Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Get_20_Value,NULL);

	result = method_new("Project Data/Object File Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Object_20_File_20_Name,NULL);

	result = method_new("Project Data/Object File Extension",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Object_20_File_20_Extension,NULL);

	result = method_new("Project Data/Object File Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Object_20_File_20_Type,NULL);

	result = method_new("Project Data/Import Primitives",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Import_20_Primitives,NULL);

	result = method_new("Project Data/Show Errors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Show_20_Errors,NULL);

	result = method_new("Project Data/Save File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Save_20_File,NULL);

	result = method_new("Project Data/Get Section Items",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Get_20_Section_20_Items,NULL);

	result = method_new("Project Data/Add Primitives File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Add_20_Primitives_20_File,NULL);

	result = method_new("Project Data/Add Resource File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Add_20_Resource_20_File,NULL);

	result = method_new("Project Data/Get Class Items",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Get_20_Class_20_Items,NULL);

	result = method_new("Project Data/Get File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Get_20_File,NULL);

	result = method_new("Project Data/Set File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Set_20_File,NULL);

	result = method_new("Project Data/Find MAIN",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Find_20_MAIN,NULL);

	result = method_new("Project Data/Execute MAIN",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Execute_20_MAIN,NULL);

	result = method_new("Project Data/~Execute MAIN",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F7E_Execute_20_MAIN,NULL);

	result = method_new("Project Data/Find Methods With Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Find_20_Methods_20_With_20_Value,NULL);

	result = method_new("Project Data/Get Method Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Get_20_Method_20_Data,NULL);

	result = method_new("Project Data/Get Library Info",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Get_20_Library_20_Info,NULL);

	result = method_new("Project Data/Lookup Info",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Lookup_20_Info,NULL);

	result = method_new("Project Data/Get All Breakpoints",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Get_20_All_20_Breakpoints,NULL);

	result = method_new("Project Data/Make Dirty",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Make_20_Dirty,NULL);

	result = method_new("Project Data/Make Attribute",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Make_20_Attribute,NULL);

	result = method_new("Project Data/Get Attributes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Get_20_Attributes,NULL);

	result = method_new("Project Data/Make Persistent",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Make_20_Persistent,NULL);

	result = method_new("Project Data/Make Class",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Make_20_Class,NULL);

	result = method_new("Project Data/Handle Fault",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Handle_20_Fault,NULL);

	result = method_new("Project Data/Get All Attributes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Get_20_All_20_Attributes,NULL);

	result = method_new("Project Data/Get Class Attributes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Get_20_Class_20_Attributes,NULL);

	result = method_new("Project Data/Mark Instances",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Mark_20_Instances,NULL);

	result = method_new("Project Data/Make Method",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Make_20_Method,NULL);

	result = method_new("Project Data/Get Application Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Get_20_Application_20_Name,NULL);

	result = method_new("Project Data/Set Application Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Set_20_Application_20_Name,NULL);

	result = method_new("Project Data/Have Row Values?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Have_20_Row_20_Values_3F_,NULL);

	result = method_new("Project Data/Display Message",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Display_20_Message,NULL);

	result = method_new("Project Data/C Code Export",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_C_20_Code_20_Export,NULL);

	result = method_new("Project Data/C Code Export Source",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Source,NULL);

	result = method_new("Project Data/C Code Export Header",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_C_20_Code_20_Export_20_Header,NULL);

	result = method_new("Project Data/Export Header Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Export_20_Header_20_Text,NULL);

	result = method_new("Project Data/H Code Header",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_H_20_Code_20_Header,NULL);

	result = method_new("Project Data/H Code Footer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_H_20_Code_20_Footer,NULL);

	result = method_new("Project Data/H File Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_H_20_File_20_Name,NULL);

	result = method_new("Project Data/Import CPX",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Import_20_CPX,NULL);

	result = method_new("Project Data/Find Class Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Find_20_Class_20_Name,NULL);

	result = method_new("Project Data/Framework Link Headers",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Framework_20_Link_20_Headers,NULL);

	result = method_new("Project Data/Get Key Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Get_20_Key_20_Value,NULL);

	result = method_new("Project Data/Set Key Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Set_20_Key_20_Value,NULL);

	result = method_new("Project Data/Load Key Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Load_20_Key_20_Value,NULL);

	result = method_new("Project Data/Save Key Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Data_2F_Save_20_Key_20_Value,NULL);

	result = method_new("Project Message/Create",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Message_2F_Create,NULL);

	result = method_new("Project Message/Construct Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Message_2F_Construct_20_Text,NULL);

	result = method_new("Project Message/Display",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Message_2F_Display,NULL);

	result = method_new("Project Message/Get Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Message_2F_Get_20_Text,NULL);

	result = method_new("Project Message/Get Answer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Message_2F_Get_20_Answer,NULL);

	result = method_new("Project Run Task/Perform",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Run_20_Task_2F_Perform,NULL);

	result = method_new("Marten Project Template/Substitute Keys",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Project_20_Template_2F_Substitute_20_Keys,NULL);

	result = method_new("Marten Project Template/Read Form For Key",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Project_20_Template_2F_Read_20_Form_20_For_20_Key,NULL);

	result = method_new("Marten Project Template/Create From CFURL",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Project_20_Template_2F_Create_20_From_20_CFURL,NULL);

	result = method_new("Marten Project Template/Load Info",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Project_20_Template_2F_Load_20_Info,NULL);

	result = method_new("Marten Project Template/Get Bundle",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Project_20_Template_2F_Get_20_Bundle,NULL);

	result = method_new("Marten Project Template/Set Bundle",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Project_20_Template_2F_Set_20_Bundle,NULL);

	result = method_new("Marten Project Template/Get Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Project_20_Template_2F_Get_20_Name,NULL);

	result = method_new("Marten Project Template/Set Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Project_20_Template_2F_Set_20_Name,NULL);

	result = method_new("Marten Project Template/Get Description",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Project_20_Template_2F_Get_20_Description,NULL);

	result = method_new("Marten Project Template/Set Description",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Project_20_Template_2F_Set_20_Description,NULL);

	result = method_new("Marten Project Template/Get ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Project_20_Template_2F_Get_20_ID,NULL);

	result = method_new("Marten Project Template/Set ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Marten_20_Project_20_Template_2F_Set_20_ID,NULL);

	result = method_new("Project Settings Locator/Find Project Storage",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Settings_20_Locator_2F_Find_20_Project_20_Storage,NULL);

	result = method_new("Project Settings Locator/Get Project Setting",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Settings_20_Locator_2F_Get_20_Project_20_Setting,NULL);

	result = method_new("Project Settings Locator/Set Project Setting",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Settings_20_Locator_2F_Set_20_Project_20_Setting,NULL);

	result = method_new("Project Settings Locator/Remove Project Setting",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Settings_20_Locator_2F_Remove_20_Project_20_Setting,NULL);

	result = method_new("Project Settings Locator/Add Project",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project,NULL);

	result = method_new("Project Settings Locator/Add Project Parameter Keys",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Settings_20_Locator_2F_Add_20_Project_20_Parameter_20_Keys,NULL);

	result = method_new("Project Settings Locator/Remove Project",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Settings_20_Locator_2F_Remove_20_Project,NULL);

	result = method_new("Project Settings Locator/Get Known Projects",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Settings_20_Locator_2F_Get_20_Known_20_Projects,NULL);

	result = method_new("Project Settings Locator/Set Known Projects",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Settings_20_Locator_2F_Set_20_Known_20_Projects,NULL);

	result = method_new("Project Settings Locator/Load Project Setting",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Settings_20_Locator_2F_Load_20_Project_20_Setting,NULL);

	result = method_new("Project Settings Locator/Save Project Setting",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Settings_20_Locator_2F_Save_20_Project_20_Setting,NULL);

	result = method_new("Project Settings Locator/Read Project Parameter Keys",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Settings_20_Locator_2F_Read_20_Project_20_Parameter_20_Keys,NULL);

	return kNOERROR;

}


	Nat4 tempPersistent_Export_20_Mode[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X08000000, 0X5374616E, 0X64617264, 0000000000
	};
	Nat4 tempPersistent_Project_20_Templates[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempPersistent_Default_20_Template[] = {
0000000000, 0X0000004C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X2C000000, 0X636F6D2E, 0X616E6465, 0X73636F74,
0X69612E6D, 0X61727465, 0X6E2E7465, 0X6D706C61, 0X74652E70, 0X726F6A65, 0X63742E65, 0X6D707479,
0000000000
	};

Nat4	loadPersistents_MyProjectData(V_Environment environment);
Nat4	loadPersistents_MyProjectData(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	tempPersistent = create_persistentNode("Export Mode",tempPersistent_Export_20_Mode,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Project Templates",tempPersistent_Project_20_Templates,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Default Template",tempPersistent_Default_20_Template,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	return kNOERROR;

}

Nat4	load_MyProjectData(V_Environment environment);
Nat4	load_MyProjectData(V_Environment environment)
{

	loadClasses_MyProjectData(environment);
	loadUniversals_MyProjectData(environment);
	loadPersistents_MyProjectData(environment);
	return kNOERROR;

}

