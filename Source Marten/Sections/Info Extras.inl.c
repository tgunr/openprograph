/* A VPL Section File */
/*

Info Extras.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_Find_20_Project_20_Info(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Project Info",ROOT(1));

result = vpx_method_Find_20_Service(PARAMETERS,TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Project_20_Info,2,1,TERMINAL(2),TERMINAL(0),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Find_20_Project_20_Info_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Find_20_Project_20_Info(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_List_20_Name,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Get_20_Recents_20_Service(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Recents",ROOT(0));

result = vpx_method_Find_20_Service(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Unique_20_Recents_20_Names_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Unique_20_Recents_20_Names_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method__28_Unique_29_(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(0),TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
OUTPUT(2,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Unique_20_Recents_20_Names_case_2_local_4_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Unique_20_Recents_20_Names_case_2_local_4_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\xE2\x80\xA6\"",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_byte_2D_length,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"\"\xE2\x80\xA6\"",TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Unique_20_Recents_20_Names_case_2_local_4_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Unique_20_Recents_20_Names_case_2_local_4_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Unique_20_Recents_20_Names_case_2_local_4_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Unique_20_Recents_20_Names_case_2_local_4_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Unique_20_Recents_20_Names_case_2_local_4_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Unique_20_Recents_20_Names_case_2_local_4_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Unique_20_Recents_20_Names_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Unique_20_Recents_20_Names_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_nth,3,1,TERMINAL(0),TERMINAL(5),TERMINAL(1),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(6),TERMINAL(2),ROOT(7));

result = vpx_match(PARAMETERS,"0",TERMINAL(7));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"( )",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(3),ROOT(8),ROOT(9));

result = vpx_constant(PARAMETERS,"\"/\"",ROOT(10));

result = vpx_constant(PARAMETERS,"\"\xE2\x80\xA6\"",ROOT(11));

result = vpx_method_Unique_20_Recents_20_Names_case_2_local_4_case_1_local_10(PARAMETERS,TERMINAL(2),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(11),TERMINAL(8),TERMINAL(10),TERMINAL(12),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
OUTPUT(1,TERMINAL(4))
OUTPUT(2,TERMINAL(9))
FOOTER(14)
}

enum opTrigger vpx_method_Unique_20_Recents_20_Names_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Unique_20_Recents_20_Names_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(4))
OUTPUT(2,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Unique_20_Recents_20_Names_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Unique_20_Recents_20_Names_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Unique_20_Recents_20_Names_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,root0,root1,root2))
vpx_method_Unique_20_Recents_20_Names_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_Unique_20_Recents_20_Names_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Unique_20_Recents_20_Names_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Make_20_Count(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_copy,1,1,TERMINAL(0),ROOT(4));

if( (repeatLimit = vpx_multiplex(4,TERMINAL(3),TERMINAL(0),TERMINAL(2),TERMINAL(1))) ){
LISTROOTBEGIN(3)
REPEATBEGINWITHCOUNTER
result = vpx_method_Unique_20_Recents_20_Names_case_2_local_4(PARAMETERS,TERMINAL(4),LIST(3),LIST(0),LIST(2),LIST(1),ROOT(5),ROOT(6),ROOT(7));
LISTROOT(5,0)
LISTROOT(6,1)
LISTROOT(7,2)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTFINISH(6,1)
LISTROOTFINISH(7,2)
LISTROOTEND
} else {
ROOTEMPTY(5)
ROOTEMPTY(6)
ROOTEMPTY(7)
}

result = vpx_method_Unique_20_Recents_20_Names(PARAMETERS,TERMINAL(5),TERMINAL(6),TERMINAL(7),ROOT(8),ROOT(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(9))
OUTPUT(2,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_Unique_20_Recents_20_Names(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Unique_20_Recents_20_Names_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2))
vpx_method_Unique_20_Recents_20_Names_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2);
return outcome;
}




	Nat4 tempAttribute_VPLInfo_20_Page_20_Contents_2F_Title[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X08000000, 0X436F6E74, 0X656E7473, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Contents_2F_Topical_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Contents_2F_Standard_20_List_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Contents_2F_Standard_20_Text_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Contents_2F_Search_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Contents_2F_Search_20_Phrase[] = {
0000000000, 0X00000020, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Contents_2F_Helper_20_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X10000000, 0X46696E64, 0X20526573, 0X756C7420,
0X44617461, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Contents_2F_List_20_Index[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000001
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Contents_2F_Data[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLProject_20_Info_20_Service_2F_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0C000000, 0X50726F6A, 0X65637420, 0X496E666F,
0000000000
	};
	Nat4 tempAttribute_VPLProject_20_Info_20_Service_2F_Required_20_Services[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLProject_20_Info_20_Service_2F_Initial_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X04520003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_VPLProject_20_Info_20_Service_2F_Active_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLProject_20_Info_20_Service_2F_Projects[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X07620007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLProject_20_Info_2F_Lists[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X07630007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLProject_20_Info_2F_App_20_Saved_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X07630003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLProject_20_Info_20_List_2F_Name[] = {
0000000000, 0X00000024, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X085F0006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X04000000, 0X4C697374, 0000000000
	};
	Nat4 tempAttribute_VPLProject_20_Info_20_List_2F_Title[] = {
0000000000, 0X00000024, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X07610006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X04000000, 0X4C697374, 0000000000
	};
	Nat4 tempAttribute_VPLProject_20_Info_20_List_2F_Helper_20_Name[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X07610006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0B000000, 0X48656C70, 0X65722044, 0X61746100
	};
	Nat4 tempAttribute_VPLProject_20_Info_20_List_2F_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X07620007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLProject_20_Info_20_List_2F_Dirty_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X045D0003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010007
	};
	Nat4 tempAttribute_VPLProject_20_Info_20_Tools_2F_Name[] = {
0000000000, 0X00000024, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X05000000, 0X546F6F6C, 0X73000000
	};
	Nat4 tempAttribute_VPLProject_20_Info_20_Tools_2F_Title[] = {
0000000000, 0X00000024, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X05000000, 0X546F6F6C, 0X73000000
	};
	Nat4 tempAttribute_VPLProject_20_Info_20_Tools_2F_Helper_20_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0E000000, 0X556E6976, 0X65727361, 0X6C204461,
0X74610000
	};
	Nat4 tempAttribute_VPLProject_20_Info_20_Tools_2F_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X07620007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLProject_20_Info_20_Tools_2F_Dirty_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X045D0003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010007
	};
	Nat4 tempAttribute_VPLProject_20_Info_20_Messages_2F_Name[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X08000000, 0X4D657373, 0X61676573, 0000000000
	};
	Nat4 tempAttribute_VPLProject_20_Info_20_Messages_2F_Title[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X08000000, 0X4D657373, 0X61676573, 0000000000
	};
	Nat4 tempAttribute_VPLProject_20_Info_20_Messages_2F_Helper_20_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X12000000, 0X446F6375, 0X6D656E74, 0X6174696F,
0X6E204461, 0X74610000
	};
	Nat4 tempAttribute_VPLProject_20_Info_20_Messages_2F_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X07620007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLProject_20_Info_20_Messages_2F_Dirty_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X045D0003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010007
	};
	Nat4 tempAttribute_Recents_20_Menu_20_Service_2F_Name[] = {
0000000000, 0X00000024, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X07000000, 0X52656365, 0X6E747300
	};
	Nat4 tempAttribute_Recents_20_Menu_20_Service_2F_Required_20_Services[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Recents_20_Menu_20_Service_2F_Initial_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Recents_20_Menu_20_Service_2F_Active_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Recents_20_Menu_20_Service_2F_Recent_20_Projects[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Recents_20_Menu_20_Service_2F_Projects_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000000A
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Code_20_Checks_2F_Title[] = {
0000000000, 0X00000024, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X06000000, 0X43686563, 0X6B730000
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Code_20_Checks_2F_Topical_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Code_20_Checks_2F_Standard_20_List_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Code_20_Checks_2F_Standard_20_Text_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Code_20_Checks_2F_Search_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Code_20_Checks_2F_Search_20_Phrase[] = {
0000000000, 0X00000020, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Code_20_Checks_2F_Helper_20_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X10000000, 0X46696E64, 0X20526573, 0X756C7420,
0X44617461, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Code_20_Checks_2F_List_20_Index[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000001
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Code_20_Checks_2F_Data[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_VPLInfo_20_Page_20_Contents_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLInfo_20_Page_20_Contents_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Title",tempClass,tempAttribute_VPLInfo_20_Page_20_Contents_2F_Title,environment);
	tempAttribute = attribute_add("Topical?",tempClass,tempAttribute_VPLInfo_20_Page_20_Contents_2F_Topical_3F_,environment);
	tempAttribute = attribute_add("Standard List?",tempClass,tempAttribute_VPLInfo_20_Page_20_Contents_2F_Standard_20_List_3F_,environment);
	tempAttribute = attribute_add("Standard Text?",tempClass,tempAttribute_VPLInfo_20_Page_20_Contents_2F_Standard_20_Text_3F_,environment);
	tempAttribute = attribute_add("Search?",tempClass,tempAttribute_VPLInfo_20_Page_20_Contents_2F_Search_3F_,environment);
	tempAttribute = attribute_add("Search Phrase",tempClass,tempAttribute_VPLInfo_20_Page_20_Contents_2F_Search_20_Phrase,environment);
	tempAttribute = attribute_add("Helper Name",tempClass,tempAttribute_VPLInfo_20_Page_20_Contents_2F_Helper_20_Name,environment);
	tempAttribute = attribute_add("List Index",tempClass,tempAttribute_VPLInfo_20_Page_20_Contents_2F_List_20_Index,environment);
	tempAttribute = attribute_add("Data",tempClass,tempAttribute_VPLInfo_20_Page_20_Contents_2F_Data,environment);
	tempAttribute = attribute_add("Window",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLInfo Page Description");
	return kNOERROR;
}

/* Start Universals: { 261 510 }{ 200 300 } */
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Class Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(1),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Owner,LIST(3),ROOT(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTNULL(4,NULL)
ROOTEMPTY(5)
}

result = vpx_instantiate(PARAMETERS,kVPXClass_Find_20_Result_20_Data,1,1,NONE,ROOT(6));

result = vpx_constant(PARAMETERS,"Classes",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Results_20_List,4,0,TERMINAL(6),TERMINAL(7),TERMINAL(2),TERMINAL(5));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Universal Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Universals,1,1,TERMINAL(1),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Owner,LIST(3),ROOT(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTNULL(4,NULL)
ROOTEMPTY(5)
}

result = vpx_instantiate(PARAMETERS,kVPXClass_Find_20_Result_20_Data,1,1,NONE,ROOT(6));

result = vpx_constant(PARAMETERS,"Universals",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Results_20_List,4,0,TERMINAL(6),TERMINAL(7),TERMINAL(2),TERMINAL(5));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Persistent Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Persistents,1,1,TERMINAL(1),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Owner,LIST(3),ROOT(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTNULL(4,NULL)
ROOTEMPTY(5)
}

result = vpx_instantiate(PARAMETERS,kVPXClass_Find_20_Result_20_Data,1,1,NONE,ROOT(6));

result = vpx_constant(PARAMETERS,"Persistents",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Results_20_List,4,0,TERMINAL(6),TERMINAL(7),TERMINAL(2),TERMINAL(5));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Breakpoints,1,1,TERMINAL(1),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Owner,LIST(3),ROOT(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTNULL(4,NULL)
ROOTEMPTY(5)
}

result = vpx_instantiate(PARAMETERS,kVPXClass_Find_20_Result_20_Data,1,1,NONE,ROOT(6));

result = vpx_constant(PARAMETERS,"Breakpoints",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Results_20_List,4,0,TERMINAL(6),TERMINAL(7),TERMINAL(2),TERMINAL(5));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_7_case_1_local_11_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_7_case_1_local_11_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"Name",ROOT(3));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(7),ROOT(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_7_case_1_local_11_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_7_case_1_local_11_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Watchpoint,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Watchpoint_20_Data,1,1,NONE,ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Class_20_Name,TERMINAL(7),TERMINAL(3),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(7),TERMINAL(5),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Instance,TERMINAL(7),TERMINAL(2),ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Attribute,TERMINAL(7),TERMINAL(0),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Item,1,1,TERMINAL(7),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTERWITHNONE(13)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_7_case_1_local_11_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_7_case_1_local_11_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
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

enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_7_case_1_local_11_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_7_case_1_local_11_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_7_case_1_local_11_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_7_case_1_local_11_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_7_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_7_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"name",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Data,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_7_case_1_local_11_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(4),ROOT(5));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_7_case_1_local_11_case_1_local_5(PARAMETERS,LIST(5),TERMINAL(1),TERMINAL(2),TERMINAL(4),ROOT(6));
LISTROOT(6,0)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTEND
} else {
ROOTEMPTY(6)
}

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_7_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_7_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_7_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_7_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_7_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_7_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(13)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Watchpoint Data",ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Watchpoints,1,1,TERMINAL(4),ROOT(5));

result = vpx_instantiate(PARAMETERS,kVPXClass_Find_20_Result_20_Data,1,1,NONE,ROOT(6));

result = vpx_constant(PARAMETERS,"Watchpoints",ROOT(7));

result = vpx_constant(PARAMETERS,"list",ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Data,3,1,TERMINAL(4),TERMINAL(5),TERMINAL(8),ROOT(9));

result = vpx_method__28_Unique_29_(PARAMETERS,TERMINAL(9),ROOT(10));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(10))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_7_case_1_local_11(PARAMETERS,TERMINAL(1),TERMINAL(4),LIST(10),ROOT(11));
LISTROOT(11,0)
REPEATFINISH
LISTROOTFINISH(11,0)
LISTROOTEND
} else {
ROOTEMPTY(11)
}

result = vpx_method__28_Flatten_29_(PARAMETERS,TERMINAL(11),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Results_20_List,4,0,TERMINAL(6),TERMINAL(7),TERMINAL(2),TERMINAL(12));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASEWITHNONE(13)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Tools",ROOT(2));

result = vpx_method_Find_20_Project_20_Info_20_List(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Find_20_Result,1,1,TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Messages",ROOT(2));

result = vpx_method_Find_20_Project_20_Info_20_List(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Find_20_Result,1,1,TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
result = kSuccess;

result = vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_5(PARAMETERS,TERMINAL(0),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(5));

result = vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_7(PARAMETERS,TERMINAL(0),ROOT(6));

result = vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_8(PARAMETERS,TERMINAL(0),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(4),TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1_local_10(PARAMETERS,TERMINAL(0),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,3,1,TERMINAL(5),TERMINAL(8),TERMINAL(10),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"Project Info",ROOT(2));

result = vpx_method_Find_20_Service(PARAMETERS,TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Project_20_Info,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Data,1,1,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Window,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh_case_1_local_5(PARAMETERS,LIST(3),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = vpx_set(PARAMETERS,kVPXValue_Data,TERMINAL(0),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

/* Stop Universals */



Nat4 VPLC_VPLProject_20_Info_20_Service_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLProject_20_Info_20_Service_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_VPLProject_20_Info_20_Service_2F_Name,environment);
	tempAttribute = attribute_add("Required Services",tempClass,tempAttribute_VPLProject_20_Info_20_Service_2F_Required_20_Services,environment);
	tempAttribute = attribute_add("Initial?",tempClass,tempAttribute_VPLProject_20_Info_20_Service_2F_Initial_3F_,environment);
	tempAttribute = attribute_add("Active?",tempClass,tempAttribute_VPLProject_20_Info_20_Service_2F_Active_3F_,environment);
	tempAttribute = attribute_add("Projects",tempClass,tempAttribute_VPLProject_20_Info_20_Service_2F_Projects,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Service Abstract");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_VPLProject_20_Info_20_Service_2F_Open_20_Project(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Project_20_Info,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Projects,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method_VPLProject_20_Info_2F_New(PARAMETERS,TERMINAL(1),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Projects,TERMINAL(3),TERMINAL(6),ROOT(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Service_2F_Find_20_Project_20_Info_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Service_2F_Find_20_Project_20_Info_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(3),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
FOOTER(4)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Service_2F_Find_20_Project_20_Info_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Service_2F_Find_20_Project_20_Info_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_VPLProject_20_Info_20_Service_2F_Find_20_Project_20_Info_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Service_2F_Find_20_Project_20_Info_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLProject_20_Info_20_Service_2F_Find_20_Project_20_Info_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_VPLProject_20_Info_20_Service_2F_Find_20_Project_20_Info_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Service_2F_Find_20_Project_20_Info(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Projects,TERMINAL(0),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_VPLProject_20_Info_20_Service_2F_Find_20_Project_20_Info_case_1_local_3(PARAMETERS,LIST(3),TERMINAL(1),ROOT(4));
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

enum opTrigger vpx_method_VPLProject_20_Info_20_Service_2F_Close_20_Project_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLProject_20_Info_20_Service_2F_Close_20_Project_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Projects,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method__28_Detach_20_Item_29_(PARAMETERS,TERMINAL(3),TERMINAL(1),ROOT(4),ROOT(5));
TERMINATEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Projects,TERMINAL(2),TERMINAL(4),ROOT(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Service_2F_Close_20_Project(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Project_20_Info,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(2));

result = vpx_method_VPLProject_20_Info_20_Service_2F_Close_20_Project_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_VPLProject_20_Info_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLProject_20_Info_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Project",tempClass,NULL,environment);
	tempAttribute = attribute_add("Lists",tempClass,tempAttribute_VPLProject_20_Info_2F_Lists,environment);
	tempAttribute = attribute_add("App Saved?",tempClass,tempAttribute_VPLProject_20_Info_2F_App_20_Saved_3F_,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 355 769 }{ 200 300 } */
enum opTrigger vpx_method_VPLProject_20_Info_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLProject_20_Info,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_VPLProject_20_Info_2F_Open_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLProject_20_Info_2F_Open_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Recents_20_Service(PARAMETERS,ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Project,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLProject_20_Info_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Project,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Lists,1,0,TERMINAL(0));

result = vpx_method_VPLProject_20_Info_2F_Open_case_1_local_4(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLProject_20_Info_2F_Open_20_Lists(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Initial_20_Lists,1,1,TERMINAL(0),ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Lists,TERMINAL(0),TERMINAL(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,LIST(1),TERMINAL(0));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLProject_20_Info_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Lists,1,0,TERMINAL(0));

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Project,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLProject_20_Info_2F_Close_20_Lists(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,LIST(2));
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"( )",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Lists,TERMINAL(0),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_VPLProject_20_Info_2F_Get_20_Initial_20_Lists(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Default_20_Info_20_Lists,0,1,ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP_copy,1,1,LIST(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Make_20_Class(PARAMETERS,LIST(2),ROOT(3));
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

enum opTrigger vpx_method_VPLProject_20_Info_2F_Get_20_Project_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPLProject_20_Info_2F_Get_20_Current_20_Data_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_2F_Get_20_Current_20_Data_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Find_20_Result,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPLProject_20_Info_2F_Get_20_Current_20_Data_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_2F_Get_20_Current_20_Data_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_VPLProject_20_Info_2F_Get_20_Current_20_Data_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_2F_Get_20_Current_20_Data_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLProject_20_Info_2F_Get_20_Current_20_Data_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPLProject_20_Info_2F_Get_20_Current_20_Data_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPLProject_20_Info_2F_Get_20_Current_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_VPLProject_20_Info_2F_Get_20_Current_20_Data_case_1_local_3(PARAMETERS,LIST(2),ROOT(3));
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

enum opTrigger vpx_method_VPLProject_20_Info_2F_Find_20_List_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"Name",ROOT(4));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(3),TERMINAL(4),TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

/* Stop Universals */



Nat4 VPLC_VPLProject_20_Info_20_List_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLProject_20_Info_20_List_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_VPLProject_20_Info_20_List_2F_Name,environment);
	tempAttribute = attribute_add("Title",tempClass,tempAttribute_VPLProject_20_Info_20_List_2F_Title,environment);
	tempAttribute = attribute_add("Helper Name",tempClass,tempAttribute_VPLProject_20_Info_20_List_2F_Helper_20_Name,environment);
	tempAttribute = attribute_add("Project Info",tempClass,NULL,environment);
	tempAttribute = attribute_add("List",tempClass,tempAttribute_VPLProject_20_Info_20_List_2F_List,environment);
	tempAttribute = attribute_add("Dirty?",tempClass,tempAttribute_VPLProject_20_Info_20_List_2F_Dirty_3F_,environment);
	tempAttribute = attribute_add("Find Result",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 306 977 }{ 299 301 } */
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Project_20_Info,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Find_20_Result,1,1,TERMINAL(0),ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLProject_20_Info_20_List_2F_Open_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLProject_20_Info_20_List_2F_Open_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Project_20_Info,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Get_20_Project_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Project_20_Info,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(2),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Get_20_Current_20_Find_20_Result_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Get_20_Current_20_Find_20_Result_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Dirty_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh_20_Result,1,0,TERMINAL(0));

result = vpx_get(PARAMETERS,kVPXValue_Find_20_Result,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Get_20_Current_20_Find_20_Result_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Get_20_Current_20_Find_20_Result_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Find_20_Result,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Get_20_Current_20_Find_20_Result(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLProject_20_Info_20_List_2F_Get_20_Current_20_Find_20_Result_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPLProject_20_Info_20_List_2F_Get_20_Current_20_Find_20_Result_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Update_20_Find_20_Result_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Update_20_Find_20_Result_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Data,1,1,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Update_20_Find_20_Result_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Update_20_Find_20_Result_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Data,2,0,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Update_20_Find_20_Result_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Update_20_Find_20_Result_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLProject_20_Info_20_List_2F_Update_20_Find_20_Result_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_VPLProject_20_Info_20_List_2F_Update_20_Find_20_Result_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Update_20_Find_20_Result(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Find_20_Result,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_VPLProject_20_Info_20_List_2F_Update_20_Find_20_Result_case_1_local_3(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Dirty_3F_,TERMINAL(0),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Find_20_All_20_Results(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(1),TERMINAL(3),ROOT(4));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Create_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Find_20_Result_20_Data,1,1,NONE,ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Title,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_All_20_Results,1,1,TERMINAL(0),ROOT(6));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Results_20_List,4,0,TERMINAL(1),TERMINAL(5),TERMINAL(3),TERMINAL(6));

result = vpx_set(PARAMETERS,kVPXValue_Find_20_Result,TERMINAL(0),TERMINAL(1),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Register,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Update_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(1),TERMINAL(3),ROOT(4));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_All_20_Results,1,1,TERMINAL(0),ROOT(5));
FAILONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Register(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_View,2,0,TERMINAL(4),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_In_20_Message_20_Group_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_In_20_Message_20_Group_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"TRUE",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_In_20_Message_20_Group_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_In_20_Message_20_Group_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_In_20_Message_20_Group_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLProject_20_Info_20_List_2F_In_20_Message_20_Group_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_VPLProject_20_Info_20_List_2F_In_20_Message_20_Group_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Data_20_Message_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Data_20_Message_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Find_20_Result,1,1,TERMINAL(0),ROOT(2));
CONTINUEONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Data_20_Message_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Data_20_Message_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Find_20_Result,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(5));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Controller,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(7));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_To_20_All,2,0,TERMINAL(7),TERMINAL(1));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Data_20_Message_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Data_20_Message_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLProject_20_Info_20_List_2F_Data_20_Message_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLProject_20_Info_20_List_2F_Data_20_Message_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Data_20_Message(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Dirty_3F_,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_method_VPLProject_20_Info_20_List_2F_Data_20_Message_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Get_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_List_2F_Refresh_20_Result(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Find_20_Result,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(2),TERMINAL(4),ROOT(5));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(6),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(5),TERMINAL(7),ROOT(8));

result = kSuccess;

FOOTERSINGLECASE(9)
}

/* Stop Universals */



Nat4 VPLC_VPLProject_20_Info_20_Tools_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLProject_20_Info_20_Tools_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_VPLProject_20_Info_20_Tools_2F_Name,environment);
	tempAttribute = attribute_add("Title",tempClass,tempAttribute_VPLProject_20_Info_20_Tools_2F_Title,environment);
	tempAttribute = attribute_add("Helper Name",tempClass,tempAttribute_VPLProject_20_Info_20_Tools_2F_Helper_20_Name,environment);
	tempAttribute = attribute_add("Project Info",tempClass,NULL,environment);
	tempAttribute = attribute_add("List",tempClass,tempAttribute_VPLProject_20_Info_20_Tools_2F_List,environment);
	tempAttribute = attribute_add("Dirty?",tempClass,tempAttribute_VPLProject_20_Info_20_Tools_2F_Dirty_3F_,environment);
	tempAttribute = attribute_add("Find Result",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLProject Info List");
	return kNOERROR;
}

/* Start Universals: { 340 1137 }{ 264 313 } */
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Find_20_All_20_Results_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Find_20_All_20_Results_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Find_20_All_20_Results_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Find_20_All_20_Results_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"Tool",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Methods_20_With_20_Value,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Owner,LIST(3),ROOT(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTNULL(4,NULL)
ROOTEMPTY(5)
}

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Find_20_All_20_Results(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLProject_20_Info_20_Tools_2F_Find_20_All_20_Results_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPLProject_20_Info_20_Tools_2F_Find_20_All_20_Results_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Methods,2,0,TERMINAL(0),TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Tool_20_Set,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Tool",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools_case_2_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools_case_2_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools_case_2_local_3(PARAMETERS,LIST(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,5,6)
result = vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools_case_2_local_5(PARAMETERS,LOOP(0),LIST(3),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(6,TERMINAL(5))
}

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(4),TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(6),TERMINAL(5));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Tool_20_Set,1,0,TERMINAL(7));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Remove_20_Tools_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Remove_20_Tools_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Remove_20_Tools_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Remove_20_Tools_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Remove_20_Tools_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Remove_20_Tools_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLProject_20_Info_20_Tools_2F_Remove_20_Tools_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPLProject_20_Info_20_Tools_2F_Remove_20_Tools_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Remove_20_Tools_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Remove_20_Tools_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(1))
FOOTER(5)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Remove_20_Tools_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Remove_20_Tools_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Remove_20_Tools_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Remove_20_Tools_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLProject_20_Info_20_Tools_2F_Remove_20_Tools_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_VPLProject_20_Info_20_Tools_2F_Remove_20_Tools_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Remove_20_Tools(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_VPLProject_20_Info_20_Tools_2F_Remove_20_Tools_case_1_local_4(PARAMETERS,LIST(2),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,4,6)
result = vpx_method_VPLProject_20_Info_20_Tools_2F_Remove_20_Tools_case_1_local_5(PARAMETERS,LOOP(0),LIST(5),ROOT(6),ROOT(7));
LISTROOT(7,0)
REPEATFINISH
LISTROOTFINISH(7,0)
LISTROOTEND
} else {
ROOTNULL(6,TERMINAL(4))
ROOTEMPTY(7)
}

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(3),TERMINAL(6),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(6),TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Tool_20_Set,1,0,TERMINAL(8));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Unregister_20_Method,2,0,TERMINAL(8),LIST(7));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Update_20_Tool_20_Set_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Update_20_Tool_20_Set_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Dirty_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"/Update Menu",ROOT(3));

result = vpx_method_New_20_Callback(PARAMETERS,TERMINAL(3),TERMINAL(0),NONE,ROOT(4));

result = vpx_method_Execute_20_Callback_20_Deferred(PARAMETERS,TERMINAL(4),NONE,NONE,NONE,NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Update_20_Tool_20_Set(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Tool_20_Set(PARAMETERS,ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Dirty_3F_,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(3));
TERMINATEONFAILURE

result = vpx_method_VPLProject_20_Info_20_Tools_2F_Update_20_Tool_20_Set_case_1_local_6(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Close_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Close_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_View,2,0,TERMINAL(3),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Close_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Close_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Tools,2,0,TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_VPLProject_20_Info_20_Tools_2F_Close_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_VPLProject_20_Info_20_Tools_2F_Close_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Create_20_Data_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Create_20_Data_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_View,2,0,TERMINAL(3),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Create_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(10)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Find_20_Result_20_Data,1,1,NONE,ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Title,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_All_20_Results,1,1,TERMINAL(0),ROOT(6));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Results_20_List,4,0,TERMINAL(1),TERMINAL(5),TERMINAL(3),TERMINAL(6));

result = vpx_set(PARAMETERS,kVPXValue_Find_20_Result,TERMINAL(0),TERMINAL(1),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Register,1,0,TERMINAL(0));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Helper,LIST(6),ROOT(8),ROOT(9));
LISTROOT(9,0)
REPEATFINISH
LISTROOTFINISH(9,0)
LISTROOTEND
} else {
ROOTNULL(8,NULL)
ROOTEMPTY(9)
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Tools,2,0,TERMINAL(0),TERMINAL(9));

result = vpx_method_VPLProject_20_Info_20_Tools_2F_Create_20_Data_case_1_local_11(PARAMETERS,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(10)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Tool",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(1))
FOOTER(4)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Select_20_Name,1,1,TERMINAL(2),ROOT(3));

result = vpx_instantiate(PARAMETERS,kVPXClass_Key_20_Sort_20_Helper,1,1,NONE,ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Key,TERMINAL(4),TERMINAL(3),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Value,TERMINAL(4),TERMINAL(0),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_6_case_1_local_2(PARAMETERS,LIST(0),ROOT(1));
LISTROOT(1,0)
REPEATFINISH
LISTROOTFINISH(1,0)
LISTROOTEND
} else {
ROOTEMPTY(1)
}

result = vpx_method_Key_20_Sort_20_Helper_2F_Sort_20_Key_20_Helper_20_List(PARAMETERS,TERMINAL(1),NONE,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Name",ROOT(1));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_sort,3,1,TERMINAL(0),TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_3(PARAMETERS,LIST(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,5,6)
result = vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_5(PARAMETERS,LOOP(0),LIST(3),ROOT(6),ROOT(7));
LISTROOT(7,0)
REPEATFINISH
LISTROOTFINISH(7,0)
LISTROOTEND
} else {
ROOTNULL(6,TERMINAL(5))
ROOTEMPTY(7)
}

result = vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods_case_1_local_6(PARAMETERS,TERMINAL(6),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(4),TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(8),TERMINAL(5));
FAILONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Register_20_Method,2,0,TERMINAL(0),LIST(7));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Register_20_Method(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_View,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Unregister_20_Method(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_View,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_In_20_Message_20_Group_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_In_20_Message_20_Group_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"TRUE",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_In_20_Message_20_Group_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_In_20_Message_20_Group_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_In_20_Message_20_Group_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLProject_20_Info_20_Tools_2F_In_20_Message_20_Group_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_VPLProject_20_Info_20_Tools_2F_In_20_Message_20_Group_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Data_20_Message_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Data_20_Message_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Refresh",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Tool_20_Set,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Data_20_Message_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Data_20_Message_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Remove Self",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Data_20_Message_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Data_20_Message_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Tools_2F_Data_20_Message(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLProject_20_Info_20_Tools_2F_Data_20_Message_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_VPLProject_20_Info_20_Tools_2F_Data_20_Message_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLProject_20_Info_20_Tools_2F_Data_20_Message_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_VPLProject_20_Info_20_Messages_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLProject_20_Info_20_Messages_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_VPLProject_20_Info_20_Messages_2F_Name,environment);
	tempAttribute = attribute_add("Title",tempClass,tempAttribute_VPLProject_20_Info_20_Messages_2F_Title,environment);
	tempAttribute = attribute_add("Helper Name",tempClass,tempAttribute_VPLProject_20_Info_20_Messages_2F_Helper_20_Name,environment);
	tempAttribute = attribute_add("Project Info",tempClass,NULL,environment);
	tempAttribute = attribute_add("List",tempClass,tempAttribute_VPLProject_20_Info_20_Messages_2F_List,environment);
	tempAttribute = attribute_add("Dirty?",tempClass,tempAttribute_VPLProject_20_Info_20_Messages_2F_Dirty_3F_,environment);
	tempAttribute = attribute_add("Find Result",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLProject Info List");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_VPLProject_20_Info_20_Messages_2F_Find_20_All_20_Results_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLProject_20_Info_20_Messages_2F_Find_20_All_20_Results_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"(  )",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Messages_2F_Find_20_All_20_Results_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLProject_20_Info_20_Messages_2F_Find_20_All_20_Results_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Messages",ROOT(1));

result = vpx_constant(PARAMETERS,"No Errors",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Messages_2F_Find_20_All_20_Results_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLProject_20_Info_20_Messages_2F_Find_20_All_20_Results_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLProject_20_Info_20_Messages_2F_Find_20_All_20_Results_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_VPLProject_20_Info_20_Messages_2F_Find_20_All_20_Results_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Messages_2F_Find_20_All_20_Results_case_1_local_6_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Messages_2F_Find_20_All_20_Results_case_1_local_6_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\n",ROOT(2));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(3));

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,3,1,TERMINAL(0),TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_method__28_To_20_String_29_(PARAMETERS,TERMINAL(5),TERMINAL(2),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Messages_2F_Find_20_All_20_Results_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_Info_20_Messages_2F_Find_20_All_20_Results_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Documentation_20_Data,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_method_VPLProject_20_Info_20_Messages_2F_Find_20_All_20_Results_case_1_local_6_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Text,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(6),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(2),TERMINAL(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_VPLProject_20_Info_20_Messages_2F_Find_20_All_20_Results(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Errors,1,1,TERMINAL(3),ROOT(4));

result = vpx_method_VPLProject_20_Info_20_Messages_2F_Find_20_All_20_Results_case_1_local_5(PARAMETERS,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_method_VPLProject_20_Info_20_Messages_2F_Find_20_All_20_Results_case_1_local_6(PARAMETERS,TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

/* Stop Universals */



Nat4 VPLC_Recents_20_Menu_20_Service_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Recents_20_Menu_20_Service_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 618 855 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Recents_20_Menu_20_Service_2F_Name,environment);
	tempAttribute = attribute_add("Required Services",tempClass,tempAttribute_Recents_20_Menu_20_Service_2F_Required_20_Services,environment);
	tempAttribute = attribute_add("Initial?",tempClass,tempAttribute_Recents_20_Menu_20_Service_2F_Initial_3F_,environment);
	tempAttribute = attribute_add("Active?",tempClass,tempAttribute_Recents_20_Menu_20_Service_2F_Active_3F_,environment);
	tempAttribute = attribute_add("Recent Projects",tempClass,tempAttribute_Recents_20_Menu_20_Service_2F_Recent_20_Projects,environment);
	tempAttribute = attribute_add("Projects Max",tempClass,tempAttribute_Recents_20_Menu_20_Service_2F_Projects_20_Max,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Service Abstract");
	return kNOERROR;
}

/* Start Universals: { 495 810 }{ 341 294 } */
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Initialize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Load_20_Projects,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Post_20_Update_20_Menu,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Menu_20_Visibility,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_2_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_2_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_2_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_2_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_2_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_2_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_2_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_2_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_2_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Recent Projects Max",ROOT(1));

result = vpx_method_CFPrefs_20_Get_20_App_20_Value(PARAMETERS,TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_2_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Projects_20_Max,TERMINAL(0),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Recent Projects List",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_alist_2D_pref,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_1_local_5(PARAMETERS,LIST(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = vpx_set(PARAMETERS,kVPXValue_Recent_20_Projects,TERMINAL(0),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"__CFData",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1_local_5_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1_local_5_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"unsigned char",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1_local_5_case_1_local_9_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1_local_5_case_1_local_9_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"AliasRecord",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1_local_5_case_1_local_9_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1_local_5_case_1_local_9_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1_local_5_case_1_local_9_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1_local_5_case_1_local_9_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1_local_5_case_1_local_9_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1_local_5_case_1_local_9_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1_local_5_case_1_local_9_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1_local_5_case_1_local_9_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1_local_5_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1_local_5_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1_local_5_case_1_local_9_case_1_local_3(PARAMETERS,TERMINAL(0));

PUTINTEGER(FSResolveAlias( GETCONSTPOINTER(FSRef,*,TERMINAL(1)),GETPOINTER(8,AliasRecord,**,ROOT(3),TERMINAL(0)),GETPOINTER(144,FSRef,*,ROOT(4),NONE),GETPOINTER(1,unsigned char,*,ROOT(5),NONE)),2);
result = kSuccess;

result = vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1_local_5_case_1_local_9_case_1_local_5(PARAMETERS,TERMINAL(2),TERMINAL(4),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1_local_5_case_1_local_2(PARAMETERS,TERMINAL(0));

PUTINTEGER(CFDataGetLength( GETCONSTPOINTER(__CFData,*,TERMINAL(0))),1);
result = kSuccess;

PUTPOINTER(char,**,NewHandle( GETINTEGER(TERMINAL(1))),2);
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_method_New_20_CFRange(PARAMETERS,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1_local_5_case_1_local_7(PARAMETERS,TERMINAL(2));

CFDataGetBytes( GETCONSTPOINTER(__CFData,*,TERMINAL(0)),GETSTRUCTURE(8,CFRange,TERMINAL(4)),GETPOINTER(1,unsigned char,*,ROOT(5),TERMINAL(2)));
result = kSuccess;

result = vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1_local_5_case_1_local_9(PARAMETERS,TERMINAL(2),ROOT(6));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(1),ROOT(2));

PUTPOINTER(void,*,CFArrayGetValueAtIndex( GETCONSTPOINTER(__CFArray,*,TERMINAL(0)),GETINTEGER(TERMINAL(2))),3);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1_local_5(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Recent Projects List",ROOT(1));

result = vpx_method_CFPrefs_20_Get_20_App_20_Value(PARAMETERS,TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(2),ROOT(3));

PUTINTEGER(CFArrayGetCount( GETCONSTPOINTER(__CFArray,*,TERMINAL(3))),4);
result = kSuccess;

result = vpx_method_Make_20_Count(PARAMETERS,TERMINAL(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2_local_8(PARAMETERS,TERMINAL(3),LIST(5),ROOT(6));
LISTROOT(6,0)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTEND
} else {
ROOTEMPTY(6)
}

result = vpx_set(PARAMETERS,kVPXValue_Recent_20_Projects,TERMINAL(0),TERMINAL(6),ROOT(7));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Projects_20_Max,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"Recent Projects Max",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(4));

result = vpx_method_CFPrefs_20_Set_20_App_20_Value(PARAMETERS,TERMINAL(3),TERMINAL(4));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Recent Projects List",ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Recent_20_Projects,TERMINAL(0),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,LIST(3),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_alist_2D_pref,2,0,TERMINAL(1),TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"( )",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_constant(PARAMETERS,"kCFTypeArrayCallBacks",ROOT(3));

result = vpx_constant(PARAMETERS,"com.apple.CoreFoundation",ROOT(4));

result = vpx_constant(PARAMETERS,"\"11\"",ROOT(5));

result = vpx_method_Get_20_Framework_20_Structure(PARAMETERS,TERMINAL(3),TERMINAL(4),TERMINAL(5),ROOT(6));
NEXTCASEONFAILURE

PUTPOINTER(__CFArray,*,CFArrayCreateMutable( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETINTEGER(TERMINAL(1)),GETCONSTPOINTER(CFArrayCallBacks,*,TERMINAL(6))),7);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Beep(PARAMETERS);

result = vpx_constant(PARAMETERS,"did not create cfcallbacks",ROOT(1));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(1));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

PUTINTEGER(FSNewAlias( GETCONSTPOINTER(FSRef,*,TERMINAL(2)),GETCONSTPOINTER(FSRef,*,TERMINAL(1)),GETPOINTER(8,AliasRecord,***,ROOT(4),NONE)),3);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"unsigned char",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_4_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_4_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_retain_2D_object,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_4_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_method_Block_20_Size(PARAMETERS,TERMINAL(2),ROOT(4));

result = vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_4_case_1_local_6(PARAMETERS,TERMINAL(2));

PUTPOINTER(__CFData,*,CFDataCreate( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(3)),GETCONSTPOINTER(unsigned char,*,TERMINAL(2)),GETINTEGER(TERMINAL(4))),5);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

CFArrayAppendValue( GETPOINTER(0,__CFArray,*,ROOT(6),TERMINAL(1)),GETCONSTPOINTER(void,*,TERMINAL(5)));
result = kSuccess;

result = vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_4_case_1_local_10(PARAMETERS,TERMINAL(5));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_Beep(PARAMETERS);

result = vpx_constant(PARAMETERS,"did not create cfdata",ROOT(2));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Recent Projects List",ROOT(1));

result = vpx_method_CFPrefs_20_Set_20_App_20_Value(PARAMETERS,TERMINAL(1),TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Beep(PARAMETERS);

result = vpx_constant(PARAMETERS,"did not save array pref",ROOT(1));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CF_20_Array_2F_New(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5_case_1_local_3(PARAMETERS,TERMINAL(1));

result = vpx_call_primitive(PARAMETERS,VPLP_retain_2D_object,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Recent Projects List",ROOT(1));

result = vpx_method_CFPrefs_20_Set_20_App_20_Value(PARAMETERS,TERMINAL(1),TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Beep(PARAMETERS);

result = vpx_constant(PARAMETERS,"did not save array pref",ROOT(1));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CF_20_Array_2F_New(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5_case_2_local_3(PARAMETERS,TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Recent_20_Projects,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_3(PARAMETERS,TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_4(PARAMETERS,LIST(2),TERMINAL(3));
REPEATFINISH
} else {
}

result = vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2_local_5(PARAMETERS,TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_method_CFPreferences_20_Synchronize(PARAMETERS,NONE);
NEXTCASEONFAILURE

result = kSuccess;

FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Close_20_Projects(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Recent_20_Projects,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,LIST(2));
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"( )",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Recent_20_Projects,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Save_20_Projects,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Projects,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_File,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(2),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Compare,2,0,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_4_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_4_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"( )",TERMINAL(0));
NEXTCASEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_4_case_1_local_3(PARAMETERS,LIST(0),TERMINAL(1),ROOT(2));
REPEATFINISH
} else {
ROOTNULL(2,NULL)
}

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method__28_Detach_20_Item_29_(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Recent_20_Projects,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(4));
TERMINATEONFAILURE

result = vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_4(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2_case_1_local_5(PARAMETERS,TERMINAL(3),TERMINAL(5),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Recent_20_Projects,TERMINAL(2),TERMINAL(6),ROOT(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Trim_20_Projects,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Save_20_Projects,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Menu,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Trim_20_Projects(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Projects_20_Max,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Recent_20_Projects,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method__28_Safe_20_Split_29_(PARAMETERS,TERMINAL(4),TERMINAL(2),ROOT(5),ROOT(6));
TERMINATEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Recent_20_Projects,TERMINAL(0),TERMINAL(5),ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,LIST(6));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Change_20_Projects_20_Max(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Projects_20_Max,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Trim_20_Projects,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Save_20_Projects,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Menu,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Menu_20_Visibility,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2224",ROOT(1));

PUTPOINTER(OpaqueMenuRef,*,GetMenuHandle( GETINTEGER(TERMINAL(1))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2_case_2_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2_case_2_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2_case_2_local_10_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2_case_2_local_10_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_extconstant(PARAMETERS,kMenuAttrHidden,ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(2),TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(0),TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(5),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2_case_2_local_10_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2_case_2_local_10_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_extconstant(PARAMETERS,kMenuItemAttrHidden,ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(2),TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(0),TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(5),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2_case_2_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2_case_2_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(16)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Projects_20_Max,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"0",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__213D_,2,1,TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2_case_2_local_10_case_2_local_5(PARAMETERS,TERMINAL(7),ROOT(8),ROOT(9));

PUTINTEGER(ChangeMenuAttributes( GETPOINTER(0,OpaqueMenuRef,*,ROOT(11),TERMINAL(0)),GETINTEGER(TERMINAL(8)),GETINTEGER(TERMINAL(9))),10);
result = kSuccess;

result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2_case_2_local_10_case_2_local_7(PARAMETERS,TERMINAL(7),ROOT(12),ROOT(13));

PUTINTEGER(ChangeMenuItemAttributes( GETPOINTER(0,OpaqueMenuRef,*,ROOT(15),TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(12)),GETINTEGER(TERMINAL(13))),14);
result = kSuccess;

result = kSuccess;

FOOTER(16)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2_case_2_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2_case_2_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(13)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_constant(PARAMETERS,"\'FlRM\'",ROOT(2));

result = vpx_constant(PARAMETERS,"1",ROOT(3));

PUTINTEGER(GetIndMenuItemWithCommandID( GETPOINTER(0,OpaqueMenuRef,*,ROOT(5),TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(3)),GETPOINTER(0,OpaqueMenuRef,**,ROOT(6),NONE),GETPOINTER(2,unsigned short,*,ROOT(7),NONE)),4);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_method_Get_20_UInt16(PARAMETERS,TERMINAL(7),NONE,ROOT(8),ROOT(9));

PUTINTEGER(GetMenuItemHierarchicalMenu( GETPOINTER(0,OpaqueMenuRef,*,ROOT(11),TERMINAL(6)),GETINTEGER(TERMINAL(9)),GETPOINTER(0,OpaqueMenuRef,**,ROOT(12),NONE)),10);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(10));
NEXTCASEONFAILURE

result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2_case_2_local_10(PARAMETERS,TERMINAL(12),TERMINAL(6),TERMINAL(9),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTERWITHNONE(13)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

PUTINTEGER(CountMenuItems( GETPOINTER(0,OpaqueMenuRef,*,ROOT(3),TERMINAL(0))),2);
result = kSuccess;

PUTINTEGER(DeleteMenuItems( GETPOINTER(0,OpaqueMenuRef,*,ROOT(5),TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2))),4);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_2_case_1_local_2_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_2_case_1_local_2_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\":\"",ROOT(1));

result = vpx_method__22_Parse_22_(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_reverse,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_2_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_2_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Display_20_Name,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_String,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Full_20_Path,1,1,TERMINAL(0),ROOT(3));
NEXTCASEONFAILURE

result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_2_case_1_local_2_case_1_local_7(PARAMETERS,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(0))
OUTPUT(2,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_2_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_2_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,NONE)
OUTPUT(2,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_2_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2))
vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_2_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(3)
REPEATBEGINWITHCOUNTER
result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_2_case_1_local_2(PARAMETERS,LIST(0),ROOT(1),ROOT(2),ROOT(3));
LISTROOT(1,0)
LISTROOT(2,1)
LISTROOT(3,2)
REPEATFINISH
LISTROOTFINISH(1,0)
LISTROOTFINISH(2,1)
LISTROOTFINISH(3,2)
LISTROOTEND
} else {
ROOTEMPTY(1)
ROOTEMPTY(2)
ROOTEMPTY(3)
}

result = vpx_method_Unique_20_Recents_20_Names(PARAMETERS,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_3_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_3_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Coerce_20_FSSpec,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

PUTINTEGER(GetIconRefFromFile( GETCONSTPOINTER(FSSpec,*,TERMINAL(1)),GETPOINTER(0,OpaqueIconRef,**,ROOT(3),NONE),GETPOINTER(2,short,*,ROOT(4),NONE)),2);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(3),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_3_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_3_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_3_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_3_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kMenuItemAttrIgnoreMeta,ROOT(2));

result = vpx_constant(PARAMETERS,"\'FlRp\'",ROOT(3));

result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_3_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(0),TERMINAL(2),TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"(  )",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"( \"Clear Menu\" 0 \'FlRC\' NULL )",ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,3,1,TERMINAL(0),TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( ( \"Clear Menu\" 1 \'FlRC\' NULL ) )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(0),ROOT(1),ROOT(2),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
OUTPUT(2,TERMINAL(3))
OUTPUT(3,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\'FlRp\'",ROOT(1));

result = vpx_extconstant(PARAMETERS,kMenuItemAttrIgnoreMeta,ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(2))
OUTPUT(2,TERMINAL(1))
OUTPUT(3,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2,root3))
vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2,root3);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_extconstant(PARAMETERS,kMenuIconRefType,ROOT(3));

PUTINTEGER(SetMenuItemIconHandle( GETPOINTER(0,OpaqueMenuRef,*,ROOT(5),TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(3)),GETPOINTER(1,char,**,ROOT(6),TERMINAL(2))),4);
result = kSuccess;

PUTINTEGER(ReleaseIconRef( GETPOINTER(0,OpaqueIconRef,*,ROOT(8),TERMINAL(2))),7);
result = kSuccess;

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_extconstant(PARAMETERS,kMenuIconRefType,ROOT(3));

result = vpx_constant(PARAMETERS,"2",ROOT(4));

result = vpx_method_New_20_UInt8(PARAMETERS,TERMINAL(2),TERMINAL(4),ROOT(5));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"char",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_pointer,1,1,TERMINAL(2),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(7),TERMINAL(6));

PUTINTEGER(SetMenuItemIconHandle( GETPOINTER(0,OpaqueMenuRef,*,ROOT(9),TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(3)),GETPOINTER(1,char,**,ROOT(10),TERMINAL(7))),8);
result = kSuccess;

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(5));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_extconstant(PARAMETERS,kMenuIconRefType,ROOT(3));

result = vpx_constant(PARAMETERS,"char",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(2),TERMINAL(4));

PUTINTEGER(SetMenuItemIconHandle( GETPOINTER(0,OpaqueMenuRef,*,ROOT(6),TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(3)),GETPOINTER(1,char,**,ROOT(7),TERMINAL(2))),5);
result = kSuccess;

result = vpx_constant(PARAMETERS,"OpaqueIconRef",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(2),TERMINAL(8));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_8_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_8_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_extconstant(PARAMETERS,kMenuIconRefType,ROOT(3));

result = vpx_constant(PARAMETERS,"char",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(2),TERMINAL(4));

PUTINTEGER(SetMenuItemIconHandle( GETPOINTER(0,OpaqueMenuRef,*,ROOT(6),TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(3)),GETPOINTER(1,char,**,ROOT(7),TERMINAL(2))),5);
result = kSuccess;

result = vpx_constant(PARAMETERS,"OpaqueIconRef",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(2),TERMINAL(8));

PUTINTEGER(ReleaseIconRef( GETPOINTER(0,OpaqueIconRef,*,ROOT(10),TERMINAL(2))),9);
result = kSuccess;

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_8_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_8_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_compiled_3F_,0,0);
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"\'vplP\'",ROOT(3));

result = vpx_constant(PARAMETERS,"\'mVPL\'",ROOT(4));

result = vpx_extconstant(PARAMETERS,kOnSystemDisk,ROOT(5));

PUTINTEGER(GetIconRef( GETINTEGER(TERMINAL(5)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(3)),GETPOINTER(0,OpaqueIconRef,**,ROOT(7),NONE)),6);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(6));
TERMINATEONFAILURE

result = vpx_extconstant(PARAMETERS,kMenuIconRefType,ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(7),ROOT(9));

PUTINTEGER(SetMenuItemIconHandle( GETPOINTER(0,OpaqueMenuRef,*,ROOT(11),TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(8)),GETPOINTER(1,char,**,ROOT(12),TERMINAL(9))),10);
result = kSuccess;

result = kSuccess;

FOOTERWITHNONE(13)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_8_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_8_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_8_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(2),ROOT(6));

PUTINTEGER(AppendMenuItemTextWithCFString( GETPOINTER(0,OpaqueMenuRef,*,ROOT(8),TERMINAL(0)),GETCONSTPOINTER(__CFString,*,TERMINAL(6)),GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(4)),GETPOINTER(2,unsigned short,*,ROOT(9),NONE)),7);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(6)));
result = kSuccess;

result = vpx_method_Get_20_UInt16(PARAMETERS,TERMINAL(9),NONE,ROOT(10),ROOT(11));

result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1_local_8(PARAMETERS,TERMINAL(0),TERMINAL(11),TERMINAL(5));

result = kSuccess;

FOOTERWITHNONE(12)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"-\"",ROOT(2));

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_extconstant(PARAMETERS,kMenuItemAttrDisabled,ROOT(5));

result = vpx_constant(PARAMETERS,"0",ROOT(6));

PUTINTEGER(AppendMenuItemTextWithCFString( GETPOINTER(0,OpaqueMenuRef,*,ROOT(8),TERMINAL(0)),GETCONSTPOINTER(__CFString,*,TERMINAL(3)),GETINTEGER(TERMINAL(5)),GETINTEGER(TERMINAL(6)),GETPOINTER(2,unsigned short,*,ROOT(9),TERMINAL(4))),7);
result = kSuccess;

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(2),TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_3(PARAMETERS,LIST(2),LIST(3),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_5(PARAMETERS,TERMINAL(4),ROOT(6));

result = vpx_constant(PARAMETERS,"( \"Projects\" 1 0 NULL )",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,3,1,TERMINAL(7),TERMINAL(5),TERMINAL(6),ROOT(8));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(8))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1_local_8(PARAMETERS,TERMINAL(1),LIST(8));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_2_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_2_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Coerce_20_FSSpec,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

PUTINTEGER(GetIconRefFromFile( GETCONSTPOINTER(FSSpec,*,TERMINAL(1)),GETPOINTER(0,OpaqueIconRef,**,ROOT(3),NONE),GETPOINTER(2,short,*,ROOT(4),NONE)),2);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(3),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_2_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_2_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_2_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_2_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_2_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_2_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Display_20_Name,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_String,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(1));

result = vpx_extconstant(PARAMETERS,kMenuItemAttrIgnoreMeta,ROOT(3));

result = vpx_constant(PARAMETERS,"\'FlRp\'",ROOT(4));

result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_2_case_1_local_8(PARAMETERS,TERMINAL(0),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"(  )",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"( \"Clear Menu\" 0 \'FlRC\' NULL )",ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,3,1,TERMINAL(0),TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( ( \"Clear Menu\" 1 \'FlRC\' NULL ) )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(0),ROOT(1),ROOT(2),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
OUTPUT(2,TERMINAL(3))
OUTPUT(3,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\'FlRp\'",ROOT(1));

result = vpx_extconstant(PARAMETERS,kMenuItemAttrIgnoreMeta,ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(2))
OUTPUT(2,TERMINAL(1))
OUTPUT(3,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2,root3))
vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2,root3);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_extconstant(PARAMETERS,kMenuIconRefType,ROOT(3));

PUTINTEGER(SetMenuItemIconHandle( GETPOINTER(0,OpaqueMenuRef,*,ROOT(5),TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(3)),GETPOINTER(1,char,**,ROOT(6),TERMINAL(2))),4);
result = kSuccess;

PUTINTEGER(ReleaseIconRef( GETPOINTER(0,OpaqueIconRef,*,ROOT(8),TERMINAL(2))),7);
result = kSuccess;

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_extconstant(PARAMETERS,kMenuIconRefType,ROOT(3));

result = vpx_constant(PARAMETERS,"2",ROOT(4));

result = vpx_method_New_20_UInt8(PARAMETERS,TERMINAL(2),TERMINAL(4),ROOT(5));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"char",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_pointer,1,1,TERMINAL(2),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(7),TERMINAL(6));

PUTINTEGER(SetMenuItemIconHandle( GETPOINTER(0,OpaqueMenuRef,*,ROOT(9),TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(3)),GETPOINTER(1,char,**,ROOT(10),TERMINAL(7))),8);
result = kSuccess;

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(5));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_extconstant(PARAMETERS,kMenuIconRefType,ROOT(3));

result = vpx_constant(PARAMETERS,"char",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(2),TERMINAL(4));

PUTINTEGER(SetMenuItemIconHandle( GETPOINTER(0,OpaqueMenuRef,*,ROOT(6),TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(3)),GETPOINTER(1,char,**,ROOT(7),TERMINAL(2))),5);
result = kSuccess;

result = vpx_constant(PARAMETERS,"OpaqueIconRef",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(2),TERMINAL(8));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_8_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_8_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_extconstant(PARAMETERS,kMenuIconRefType,ROOT(3));

result = vpx_constant(PARAMETERS,"char",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(2),TERMINAL(4));

PUTINTEGER(SetMenuItemIconHandle( GETPOINTER(0,OpaqueMenuRef,*,ROOT(6),TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(3)),GETPOINTER(1,char,**,ROOT(7),TERMINAL(2))),5);
result = kSuccess;

result = vpx_constant(PARAMETERS,"OpaqueIconRef",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(2),TERMINAL(8));

PUTINTEGER(ReleaseIconRef( GETPOINTER(0,OpaqueIconRef,*,ROOT(10),TERMINAL(2))),9);
result = kSuccess;

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_8_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_8_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_compiled_3F_,0,0);
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"\'vplP\'",ROOT(3));

result = vpx_constant(PARAMETERS,"\'mVPL\'",ROOT(4));

result = vpx_extconstant(PARAMETERS,kOnSystemDisk,ROOT(5));

PUTINTEGER(GetIconRef( GETINTEGER(TERMINAL(5)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(3)),GETPOINTER(0,OpaqueIconRef,**,ROOT(7),NONE)),6);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(6));
TERMINATEONFAILURE

result = vpx_extconstant(PARAMETERS,kMenuIconRefType,ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(7),ROOT(9));

PUTINTEGER(SetMenuItemIconHandle( GETPOINTER(0,OpaqueMenuRef,*,ROOT(11),TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(8)),GETPOINTER(1,char,**,ROOT(12),TERMINAL(9))),10);
result = kSuccess;

result = kSuccess;

FOOTERWITHNONE(13)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_8_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_8_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_8_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(2),ROOT(6));

PUTINTEGER(AppendMenuItemTextWithCFString( GETPOINTER(0,OpaqueMenuRef,*,ROOT(8),TERMINAL(0)),GETCONSTPOINTER(__CFString,*,TERMINAL(6)),GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(4)),GETPOINTER(2,unsigned short,*,ROOT(9),NONE)),7);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(6)));
result = kSuccess;

result = vpx_method_Get_20_UInt16(PARAMETERS,TERMINAL(9),NONE,ROOT(10),ROOT(11));

result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1_local_8(PARAMETERS,TERMINAL(0),TERMINAL(11),TERMINAL(5));

result = kSuccess;

FOOTERWITHNONE(12)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"-\"",ROOT(2));

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_extconstant(PARAMETERS,kMenuItemAttrDisabled,ROOT(5));

result = vpx_constant(PARAMETERS,"0",ROOT(6));

PUTINTEGER(AppendMenuItemTextWithCFString( GETPOINTER(0,OpaqueMenuRef,*,ROOT(8),TERMINAL(0)),GETCONSTPOINTER(__CFString,*,TERMINAL(3)),GETINTEGER(TERMINAL(5)),GETINTEGER(TERMINAL(6)),GETPOINTER(2,unsigned short,*,ROOT(9),TERMINAL(4))),7);
result = kSuccess;

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_2(PARAMETERS,LIST(0),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_4(PARAMETERS,TERMINAL(2),ROOT(4));

result = vpx_constant(PARAMETERS,"( \"Projects\" 1 0 NULL )",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,3,1,TERMINAL(5),TERMINAL(3),TERMINAL(4),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2_local_7(PARAMETERS,TERMINAL(1),LIST(6));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"No Recent Projects",ROOT(2));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_extconstant(PARAMETERS,kMenuItemAttrDisabled,ROOT(4));

result = vpx_constant(PARAMETERS,"0",ROOT(5));

result = vpx_constant(PARAMETERS,"NULL",ROOT(6));

PUTINTEGER(AppendMenuItemTextWithCFString( GETPOINTER(0,OpaqueMenuRef,*,ROOT(8),TERMINAL(1)),GETCONSTPOINTER(__CFString,*,TERMINAL(3)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(5)),GETPOINTER(2,unsigned short,*,ROOT(9),TERMINAL(6))),7);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(3)));
result = kSuccess;

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_3(PARAMETERS,TERMINAL(1));

result = vpx_get(PARAMETERS,kVPXValue_Recent_20_Projects,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1_local_5(PARAMETERS,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_20_Visibility_case_1_local_2_case_1_local_10_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_20_Visibility_case_1_local_2_case_1_local_10_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_extconstant(PARAMETERS,kMenuAttrHidden,ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(2),TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(0),TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(5),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_20_Visibility_case_1_local_2_case_1_local_10_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_20_Visibility_case_1_local_2_case_1_local_10_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_extconstant(PARAMETERS,kMenuItemAttrHidden,ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(2),TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(0),TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(5),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_20_Visibility_case_1_local_2_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_20_Visibility_case_1_local_2_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(16)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Projects_20_Max,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"0",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__213D_,2,1,TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_20_Visibility_case_1_local_2_case_1_local_10_case_1_local_5(PARAMETERS,TERMINAL(7),ROOT(8),ROOT(9));

PUTINTEGER(ChangeMenuAttributes( GETPOINTER(0,OpaqueMenuRef,*,ROOT(11),TERMINAL(0)),GETINTEGER(TERMINAL(8)),GETINTEGER(TERMINAL(9))),10);
result = kSuccess;

result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_20_Visibility_case_1_local_2_case_1_local_10_case_1_local_7(PARAMETERS,TERMINAL(7),ROOT(12),ROOT(13));

PUTINTEGER(ChangeMenuItemAttributes( GETPOINTER(0,OpaqueMenuRef,*,ROOT(15),TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(12)),GETINTEGER(TERMINAL(13))),14);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(16)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_20_Visibility_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_20_Visibility_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(13)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_constant(PARAMETERS,"\'FlRM\'",ROOT(2));

result = vpx_constant(PARAMETERS,"1",ROOT(3));

PUTINTEGER(GetIndMenuItemWithCommandID( GETPOINTER(0,OpaqueMenuRef,*,ROOT(5),TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(3)),GETPOINTER(0,OpaqueMenuRef,**,ROOT(6),NONE),GETPOINTER(2,unsigned short,*,ROOT(7),NONE)),4);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(4));
TERMINATEONFAILURE

result = vpx_method_Get_20_UInt16(PARAMETERS,TERMINAL(7),NONE,ROOT(8),ROOT(9));

PUTINTEGER(GetMenuItemHierarchicalMenu( GETPOINTER(0,OpaqueMenuRef,*,ROOT(11),TERMINAL(6)),GETINTEGER(TERMINAL(9)),GETPOINTER(0,OpaqueMenuRef,**,ROOT(12),NONE)),10);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(10));
TERMINATEONFAILURE

result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_20_Visibility_case_1_local_2_case_1_local_10(PARAMETERS,TERMINAL(12),TERMINAL(6),TERMINAL(9),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(13)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_20_Visibility(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_20_Visibility_case_1_local_2(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Clear_20_Projects(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Projects,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Save_20_Projects,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Post_20_Update_20_Menu(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"/Update Menu",ROOT(1));

result = vpx_method_New_20_Callback(PARAMETERS,TERMINAL(1),TERMINAL(0),NONE,ROOT(2));

result = vpx_method_Execute_20_Callback_20_Deferred(PARAMETERS,TERMINAL(2),NONE,NONE,NONE,NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Choose_20_Recent_20_Project(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Recent_20_Projects,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_evaluate(PARAMETERS,"A-2",1,1,TERMINAL(1),ROOT(4));

result = vpx_method__28_Safe_20_Get_29_(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"Open Project File",ROOT(6));

result = vpx_method_New_20_Callback(PARAMETERS,TERMINAL(6),TERMINAL(5),NONE,ROOT(7));

result = vpx_method_Execute_20_Callback_20_Deferred(PARAMETERS,TERMINAL(7),NONE,NONE,NONE,NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Choose_20_Clear_20_Menu(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Clear_20_Projects,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Menu,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Recents_20_Menu_20_Service_2F_Get_20_Projects_20_Max(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Projects_20_Max,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_VPLInfo_20_Page_20_Code_20_Checks_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLInfo_20_Page_20_Code_20_Checks_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Title",tempClass,tempAttribute_VPLInfo_20_Page_20_Code_20_Checks_2F_Title,environment);
	tempAttribute = attribute_add("Topical?",tempClass,tempAttribute_VPLInfo_20_Page_20_Code_20_Checks_2F_Topical_3F_,environment);
	tempAttribute = attribute_add("Standard List?",tempClass,tempAttribute_VPLInfo_20_Page_20_Code_20_Checks_2F_Standard_20_List_3F_,environment);
	tempAttribute = attribute_add("Standard Text?",tempClass,tempAttribute_VPLInfo_20_Page_20_Code_20_Checks_2F_Standard_20_Text_3F_,environment);
	tempAttribute = attribute_add("Search?",tempClass,tempAttribute_VPLInfo_20_Page_20_Code_20_Checks_2F_Search_3F_,environment);
	tempAttribute = attribute_add("Search Phrase",tempClass,tempAttribute_VPLInfo_20_Page_20_Code_20_Checks_2F_Search_20_Phrase,environment);
	tempAttribute = attribute_add("Helper Name",tempClass,tempAttribute_VPLInfo_20_Page_20_Code_20_Checks_2F_Helper_20_Name,environment);
	tempAttribute = attribute_add("List Index",tempClass,tempAttribute_VPLInfo_20_Page_20_Code_20_Checks_2F_List_20_Index,environment);
	tempAttribute = attribute_add("Data",tempClass,tempAttribute_VPLInfo_20_Page_20_Code_20_Checks_2F_Data,environment);
	tempAttribute = attribute_add("Window",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLInfo Page Description");
	return kNOERROR;
}

/* Start Universals: { 261 510 }{ 200 300 } */
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_3_case_1_local_5_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_3_case_1_local_5_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Case Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Next_20_Case_20_Check(PARAMETERS,LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check(PARAMETERS,LIST(4),ROOT(6));
LISTROOT(6,0)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTEND
} else {
ROOTEMPTY(6)
}

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Universals,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Methods,1,1,TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_3_case_1_local_5_case_1_local_6(PARAMETERS,LIST(5),ROOT(6),ROOT(7));
LISTROOT(6,0)
LISTROOT(7,1)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTFINISH(7,1)
LISTROOTEND
} else {
ROOTEMPTY(6)
ROOTEMPTY(7)
}

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Section Data",ROOT(1));

result = vpx_method_Helper_20_Data_2F_Get_20_List_20_Datum(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_3_case_1_local_5(PARAMETERS,LIST(4),ROOT(5),ROOT(6));
LISTROOT(5,0)
LISTROOT(6,1)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTFINISH(6,1)
LISTROOTEND
} else {
ROOTEMPTY(5)
ROOTEMPTY(6)
}

result = vpx_method_Lists_20_To_20_List(PARAMETERS,TERMINAL(5),ROOT(7));

result = vpx_method_Lists_20_To_20_List(PARAMETERS,TERMINAL(6),ROOT(8));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Owner,LIST(7),ROOT(9),ROOT(10));
LISTROOT(10,0)
REPEATFINISH
LISTROOTFINISH(10,0)
LISTROOTEND
} else {
ROOTNULL(9,NULL)
ROOTEMPTY(10)
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(8))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Owner,LIST(8),ROOT(11),ROOT(12));
LISTROOT(12,0)
REPEATFINISH
LISTROOTFINISH(12,0)
LISTROOTEND
} else {
ROOTNULL(11,NULL)
ROOTEMPTY(12)
}

result = kSuccess;

OUTPUT(0,TERMINAL(10))
OUTPUT(1,TERMINAL(12))
FOOTER(13)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_Find_20_Result_20_Data,1,1,NONE,ROOT(2));

result = vpx_constant(PARAMETERS,"No Next Case",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Results_20_List,4,0,TERMINAL(2),TERMINAL(3),TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_4_case_2_local_6_case_1_local_5_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_4_case_2_local_6_case_1_local_5_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Case Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Next_20_Case_20_Check(PARAMETERS,LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check(PARAMETERS,LIST(4),ROOT(6));
LISTROOT(6,0)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTEND
} else {
ROOTEMPTY(6)
}

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_4_case_2_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_4_case_2_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Universals,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Methods,1,1,TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_4_case_2_local_6_case_1_local_5_case_1_local_6(PARAMETERS,LIST(5),ROOT(6),ROOT(7));
LISTROOT(6,0)
LISTROOT(7,1)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTFINISH(7,1)
LISTROOTEND
} else {
ROOTEMPTY(6)
ROOTEMPTY(7)
}

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_4_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_4_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Section Data",ROOT(1));

result = vpx_method_Helper_20_Data_2F_Get_20_List_20_Datum(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_4_case_2_local_6_case_1_local_5(PARAMETERS,LIST(4),ROOT(5),ROOT(6));
LISTROOT(5,0)
LISTROOT(6,1)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTFINISH(6,1)
LISTROOTEND
} else {
ROOTEMPTY(5)
ROOTEMPTY(6)
}

result = vpx_method_Lists_20_To_20_List(PARAMETERS,TERMINAL(5),ROOT(7));

result = vpx_method_Lists_20_To_20_List(PARAMETERS,TERMINAL(6),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
OUTPUT(1,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_4_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_4_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_4_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_4_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_4_case_2_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_4_case_2_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(9)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(2));

result = vpx_instantiate(PARAMETERS,kVPXClass_Find_20_Result_20_Data,1,1,NONE,ROOT(3));

result = vpx_constant(PARAMETERS,"No Next Case",ROOT(4));

result = vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_4_case_2_local_6(PARAMETERS,TERMINAL(1),ROOT(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Owner,LIST(5),ROOT(7),ROOT(8));
LISTROOT(8,0)
REPEATFINISH
LISTROOTFINISH(8,0)
LISTROOTEND
} else {
ROOTNULL(7,NULL)
ROOTEMPTY(8)
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Results_20_List,4,0,TERMINAL(3),TERMINAL(4),TERMINAL(2),TERMINAL(8));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERWITHNONE(9)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Case Data",ROOT(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_Find_20_Result_20_Data,1,1,NONE,ROOT(2));

result = vpx_constant(PARAMETERS,"Unreachable",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Results_20_List,4,0,TERMINAL(2),TERMINAL(3),TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_5_case_2_local_6_case_1_local_5_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_5_case_2_local_6_case_1_local_5_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Case Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check(PARAMETERS,LIST(4),ROOT(5));
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

enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_5_case_2_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_5_case_2_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Universals,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Methods,1,1,TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_5_case_2_local_6_case_1_local_5_case_1_local_6(PARAMETERS,LIST(5),ROOT(6));
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

enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_5_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_5_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Section Data",ROOT(1));

result = vpx_method_Helper_20_Data_2F_Get_20_List_20_Datum(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_5_case_2_local_6_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
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

enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(9)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Case Data",ROOT(2));

result = vpx_instantiate(PARAMETERS,kVPXClass_Find_20_Result_20_Data,1,1,NONE,ROOT(3));

result = vpx_constant(PARAMETERS,"Unreachable",ROOT(4));

result = vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_5_case_2_local_6(PARAMETERS,TERMINAL(1),ROOT(5));

result = vpx_method_Lists_20_To_20_List(PARAMETERS,TERMINAL(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Owner,LIST(6),ROOT(7),ROOT(8));
LISTROOT(8,0)
REPEATFINISH
LISTROOTFINISH(8,0)
LISTROOTEND
} else {
ROOTNULL(7,NULL)
ROOTEMPTY(8)
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Results_20_List,4,0,TERMINAL(3),TERMINAL(4),TERMINAL(2),TERMINAL(8));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERWITHNONE(9)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(4));

result = vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4_case_1_local_5(PARAMETERS,TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(4),TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Window,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh_case_1_local_5(PARAMETERS,LIST(3),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = vpx_set(PARAMETERS,kVPXValue_Data,TERMINAL(0),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

/* Stop Universals */






Nat4	loadClasses_Info_20_Extras(V_Environment environment);
Nat4	loadClasses_Info_20_Extras(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("VPLInfo Page Contents",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLInfo_20_Page_20_Contents_class_load(result,environment);
	result = class_new("VPLProject Info Service",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLProject_20_Info_20_Service_class_load(result,environment);
	result = class_new("VPLProject Info",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLProject_20_Info_class_load(result,environment);
	result = class_new("VPLProject Info List",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLProject_20_Info_20_List_class_load(result,environment);
	result = class_new("VPLProject Info Tools",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLProject_20_Info_20_Tools_class_load(result,environment);
	result = class_new("VPLProject Info Messages",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLProject_20_Info_20_Messages_class_load(result,environment);
	result = class_new("Recents Menu Service",environment);
	if(result == NULL) return kERROR;
	VPLC_Recents_20_Menu_20_Service_class_load(result,environment);
	result = class_new("VPLInfo Page Code Checks",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLInfo_20_Page_20_Code_20_Checks_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Info_20_Extras(V_Environment environment);
Nat4	loadUniversals_Info_20_Extras(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Find Project Info",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Find_20_Project_20_Info,NULL);

	result = method_new("Find Project Info List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Find_20_Project_20_Info_20_List,NULL);

	result = method_new("Get Recents Service",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Recents_20_Service,NULL);

	result = method_new("Unique Recents Names",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Unique_20_Recents_20_Names,NULL);

	result = method_new("VPLInfo Page Contents/Refresh",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLInfo_20_Page_20_Contents_2F_Refresh,NULL);

	result = method_new("VPLProject Info Service/Open Project",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_Service_2F_Open_20_Project,NULL);

	result = method_new("VPLProject Info Service/Find Project Info",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_Service_2F_Find_20_Project_20_Info,NULL);

	result = method_new("VPLProject Info Service/Close Project",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_Service_2F_Close_20_Project,NULL);

	result = method_new("VPLProject Info/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_2F_New,NULL);

	result = method_new("VPLProject Info/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_2F_Open,NULL);

	result = method_new("VPLProject Info/Open Lists",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_2F_Open_20_Lists,NULL);

	result = method_new("VPLProject Info/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_2F_Close,NULL);

	result = method_new("VPLProject Info/Close Lists",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_2F_Close_20_Lists,NULL);

	result = method_new("VPLProject Info/Get Initial Lists",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_2F_Get_20_Initial_20_Lists,NULL);

	result = method_new("VPLProject Info/Get Project Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_2F_Get_20_Project_20_Data,NULL);

	result = method_new("VPLProject Info/Get Current Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_2F_Get_20_Current_20_Data,NULL);

	result = method_new("VPLProject Info/Find List Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_2F_Find_20_List_20_Name,NULL);

	result = method_new("VPLProject Info List/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_List_2F_Open,NULL);

	result = method_new("VPLProject Info List/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_List_2F_Close,NULL);

	result = method_new("VPLProject Info List/Get Project Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_List_2F_Get_20_Project_20_Data,NULL);

	result = method_new("VPLProject Info List/Get Current Find Result",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_List_2F_Get_20_Current_20_Find_20_Result,NULL);

	result = method_new("VPLProject Info List/Update Find Result",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_List_2F_Update_20_Find_20_Result,NULL);

	result = method_new("VPLProject Info List/Find All Results",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_List_2F_Find_20_All_20_Results,NULL);

	result = method_new("VPLProject Info List/Create Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_List_2F_Create_20_Data,NULL);

	result = method_new("VPLProject Info List/Update Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_List_2F_Update_20_Data,NULL);

	result = method_new("VPLProject Info List/Register",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_List_2F_Register,NULL);

	result = method_new("VPLProject Info List/In Message Group?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_List_2F_In_20_Message_20_Group_3F_,NULL);

	result = method_new("VPLProject Info List/Data Message",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_List_2F_Data_20_Message,NULL);

	result = method_new("VPLProject Info List/Get List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_List_2F_Get_20_List,NULL);

	result = method_new("VPLProject Info List/Refresh Result",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_List_2F_Refresh_20_Result,NULL);

	result = method_new("VPLProject Info Tools/Find All Results",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_Tools_2F_Find_20_All_20_Results,NULL);

	result = method_new("VPLProject Info Tools/Install Tools",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_Tools_2F_Install_20_Tools,NULL);

	result = method_new("VPLProject Info Tools/Remove Tools",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_Tools_2F_Remove_20_Tools,NULL);

	result = method_new("VPLProject Info Tools/Update Tool Set",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_Tools_2F_Update_20_Tool_20_Set,NULL);

	result = method_new("VPLProject Info Tools/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_Tools_2F_Close,NULL);

	result = method_new("VPLProject Info Tools/Create Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_Tools_2F_Create_20_Data,NULL);

	result = method_new("VPLProject Info Tools/Add Methods",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_Tools_2F_Add_20_Methods,NULL);

	result = method_new("VPLProject Info Tools/Register Method",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_Tools_2F_Register_20_Method,NULL);

	result = method_new("VPLProject Info Tools/Unregister Method",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_Tools_2F_Unregister_20_Method,NULL);

	result = method_new("VPLProject Info Tools/In Message Group?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_Tools_2F_In_20_Message_20_Group_3F_,NULL);

	result = method_new("VPLProject Info Tools/Data Message",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_Tools_2F_Data_20_Message,NULL);

	result = method_new("VPLProject Info Messages/Find All Results",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_Info_20_Messages_2F_Find_20_All_20_Results,NULL);

	result = method_new("Recents Menu Service/Initialize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Recents_20_Menu_20_Service_2F_Initialize,NULL);

	result = method_new("Recents Menu Service/Load Projects",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Recents_20_Menu_20_Service_2F_Load_20_Projects,NULL);

	result = method_new("Recents Menu Service/Save Projects",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Recents_20_Menu_20_Service_2F_Save_20_Projects,NULL);

	result = method_new("Recents Menu Service/Close Projects",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Recents_20_Menu_20_Service_2F_Close_20_Projects,NULL);

	result = method_new("Recents Menu Service/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Recents_20_Menu_20_Service_2F_Close,NULL);

	result = method_new("Recents Menu Service/Add Project",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Recents_20_Menu_20_Service_2F_Add_20_Project,NULL);

	result = method_new("Recents Menu Service/Trim Projects",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Recents_20_Menu_20_Service_2F_Trim_20_Projects,NULL);

	result = method_new("Recents Menu Service/Change Projects Max",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Recents_20_Menu_20_Service_2F_Change_20_Projects_20_Max,NULL);

	result = method_new("Recents Menu Service/Update Menu",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu,NULL);

	result = method_new("Recents Menu Service/Update Menu Visibility",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Recents_20_Menu_20_Service_2F_Update_20_Menu_20_Visibility,NULL);

	result = method_new("Recents Menu Service/Clear Projects",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Recents_20_Menu_20_Service_2F_Clear_20_Projects,NULL);

	result = method_new("Recents Menu Service/Post Update Menu",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Recents_20_Menu_20_Service_2F_Post_20_Update_20_Menu,NULL);

	result = method_new("Recents Menu Service/Choose Recent Project",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Recents_20_Menu_20_Service_2F_Choose_20_Recent_20_Project,NULL);

	result = method_new("Recents Menu Service/Choose Clear Menu",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Recents_20_Menu_20_Service_2F_Choose_20_Clear_20_Menu,NULL);

	result = method_new("Recents Menu Service/Get Projects Max",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Recents_20_Menu_20_Service_2F_Get_20_Projects_20_Max,NULL);

	result = method_new("VPLInfo Page Code Checks/Refresh",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLInfo_20_Page_20_Code_20_Checks_2F_Refresh,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_Info_20_Extras(V_Environment environment);
Nat4	loadPersistents_Info_20_Extras(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_Info_20_Extras(V_Environment environment);
Nat4	load_Info_20_Extras(V_Environment environment)
{

	loadClasses_Info_20_Extras(environment);
	loadUniversals_Info_20_Extras(environment);
	loadPersistents_Info_20_Extras(environment);
	return kNOERROR;

}

