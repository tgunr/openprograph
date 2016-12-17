/* A VPL Section File */
/*

Media Reference.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_New_20_Folder_20_FSRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_MacOS_20_File_20_Reference,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_FSRef,2,0,TERMINAL(1),TERMINAL(0));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_New_20_FSRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_MacOS_20_File_20_Reference,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_FSRef,2,0,TERMINAL(1),TERMINAL(0));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_New_20_FSRef_20_From_20_Alias(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_MacOS_20_File_20_Reference,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_Alias,2,0,TERMINAL(1),TERMINAL(0));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_New_20_FSSpec(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Find_20_Media_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Media_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"apple",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kAppleMenuFolderType,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Find_20_Media_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Media_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"controls",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kControlPanelFolderType,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Find_20_Media_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Media_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"desk",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kDesktopFolderType,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Find_20_Media_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Media_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"extensions",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kExtensionFolderType,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Find_20_Media_case_1_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Media_case_1_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"prefs",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kPreferencesFolderType,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Find_20_Media_case_1_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Media_case_1_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"pmonitor",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kPrintMonitorDocsFolderType,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Find_20_Media_case_1_local_2_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Media_case_1_local_2_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"nettrash",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kWhereToEmptyTrashFolderType,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Find_20_Media_case_1_local_2_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Media_case_1_local_2_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"trash",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kTrashFolderType,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Find_20_Media_case_1_local_2_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Media_case_1_local_2_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"startup",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kStartupFolderType,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Find_20_Media_case_1_local_2_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Media_case_1_local_2_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"system",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kSystemFolderType,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Find_20_Media_case_1_local_2_case_11(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Media_case_1_local_2_case_11(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"temp",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kTemporaryFolderType,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Find_20_Media_case_1_local_2_case_12(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Media_case_1_local_2_case_12(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(0));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Find_20_Media_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Media_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Find_20_Media_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Find_20_Media_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Find_20_Media_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Find_20_Media_case_1_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Find_20_Media_case_1_local_2_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Find_20_Media_case_1_local_2_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Find_20_Media_case_1_local_2_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Find_20_Media_case_1_local_2_case_8(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Find_20_Media_case_1_local_2_case_9(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Find_20_Media_case_1_local_2_case_10(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Find_20_Media_case_1_local_2_case_11(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Find_20_Media_case_1_local_2_case_12(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Find_20_Media(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Find_20_Media_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_extconstant(PARAMETERS,kOnSystemDisk,ROOT(2));

PUTINTEGER(FSFindFolder( GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(1)),GETINTEGER(NONE),GETPOINTER(144,FSRef,*,ROOT(4),NONE)),3);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = vpx_method_New_20_Folder_20_FSRef(PARAMETERS,TERMINAL(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_Find_20_Folder_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Find_20_Folder_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kLocalDomain,ROOT(2));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Find_20_Folder_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Find_20_Folder_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Find_20_Folder_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Find_20_Folder_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Find_20_Folder_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Find_20_Folder_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Find_20_Folder_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Find_20_Folder_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Find_20_Folder_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Find_20_Folder_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Find_20_Folder_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(2),ROOT(4));

PUTINTEGER(FSFindFolder( GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(4)),GETPOINTER(144,FSRef,*,ROOT(6),NONE)),5);
result = kSuccess;

result = vpx_method_Find_20_Folder_case_1_local_6(PARAMETERS,TERMINAL(5),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(7))
FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_Find_20_Folder_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Find_20_Folder_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Find_20_Folder(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Find_20_Folder_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method_Find_20_Folder_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Find_20_Users_20_Folder_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Users_20_Folder_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kDomainTopLevelFolderType,ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Find_20_Users_20_Folder(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kUserDomain,ROOT(2));

result = vpx_method_Find_20_Users_20_Folder_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_method_Find_20_Folder(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Formalize_20_POSIX_20_Path_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Formalize_20_POSIX_20_Path_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(2)
result = kSuccess;

result = vpx_method_Find_20_Users_20_Folder(PARAMETERS,NONE,NONE,ROOT(0));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Full_20_Path,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Formalize_20_POSIX_20_Path_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Formalize_20_POSIX_20_Path_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"\"~\"",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_Formalize_20_POSIX_20_Path_case_1_local_5(PARAMETERS,ROOT(4));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(3),ROOT(5));

result = vpx_method_Formalize_20_POSIX_20_Path(PARAMETERS,TERMINAL(5),ROOT(6));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Formalize_20_POSIX_20_Path_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Formalize_20_POSIX_20_Path_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Formalize_20_POSIX_20_Path(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Formalize_20_POSIX_20_Path_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Formalize_20_POSIX_20_Path_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}




	Nat4 tempAttribute_MacOS_20_File_20_Reference_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MacOS_20_File_20_Reference_2F_Additional_20_Data[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MacOS_20_Folder_20_Reference_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MacOS_20_Folder_20_Reference_2F_Additional_20_Data[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MacOS_20_Volume_20_Reference_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MacOS_20_Volume_20_Reference_2F_Additional_20_Data[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MacOS_20_File_20_Iterator_2F_Depth_20_Flag[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MacOS_20_File_20_Iterator_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MacOS_20_File_20_Iterator_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Folder_20_Search_2F_Search_20_Folders[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Folder_20_Search_2F_Search_20_Items[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Folder_20_Search_2F_Found_20_Items[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Folder_20_Search_2F_Found_20_Callback[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Folder_20_Search_2F_Completion_20_Callback[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Folder_20_Search_2F_Completed_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Folder_20_Search_2F_Subfolders_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Folder_20_Search_2F_Errors[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Folder_20_Search_2F_Current_20_Subfolders[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_File_20_Process_2F_ID[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_File_20_Process_2F_Permission[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000003
	};
	Nat4 tempAttribute_File_20_Process_2F_Position_20_Mode[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_File_20_Process_2F_Position_20_Offset[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_File_20_Process_2F_Verify_20_Reads_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_File_20_Process_2F_New_20_Line_20_Mode_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_File_20_Process_2F_New_20_Line_20_Char[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000000D
	};
	Nat4 tempAttribute_File_20_Process_2F_Status[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MacOS_20_Bundle_20_Reference_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MacOS_20_Bundle_20_Reference_2F_Additional_20_Data[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_MacOS_20_File_20_Reference_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_MacOS_20_File_20_Reference_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("FS Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Alias Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent URL",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_MacOS_20_File_20_Reference_2F_Error,environment);
	tempAttribute = attribute_add("Additional Data",tempClass,tempAttribute_MacOS_20_File_20_Reference_2F_Additional_20_Data,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 44 794 }{ 852 317 } */
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Close_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Close_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Reference,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Close_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Close_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Reference,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Close_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Close_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Close_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_MacOS_20_File_20_Reference_2F_Close_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Close_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Close_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Name,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_MacOS_20_File_20_Reference_2F_Close_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Alias,1,0,TERMINAL(0));

result = vpx_method_MacOS_20_File_20_Reference_2F_Close_case_1_local_4(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Close_20_Alias_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Close_20_Alias_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Alias_20_Record,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Alias_20_Record,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Close_20_Alias_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Close_20_Alias_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Close_20_Alias(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Close_20_Alias_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_MacOS_20_File_20_Reference_2F_Close_20_Alias_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Coerce_20_FSRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Coerce_20_FSSpec(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSSpec,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Compare(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

PUTINTEGER(FSCompareFSRefs( GETCONSTPOINTER(FSRef,*,TERMINAL(3)),GETCONSTPOINTER(FSRef,*,TERMINAL(2))),4);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(4));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Create_20_Alias(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

PUTINTEGER(FSNewAliasMinimal( GETCONSTPOINTER(FSRef,*,TERMINAL(1)),GETPOINTER(8,AliasRecord,***,ROOT(3),NONE)),2);
result = kSuccess;

result = vpx_constant(PARAMETERS,"FSNewAliasMinimal",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(0),TERMINAL(4),TERMINAL(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Alias,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Alias_20_Record,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Delete_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Delete_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"FSDeleteObject",ROOT(2));

PUTINTEGER(FSDeleteObject( GETCONSTPOINTER(FSRef,*,TERMINAL(1))),3);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Delete_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Delete_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MacOS FileRef/Delete Object",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E7E_Param_20_Error,2,0,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Delete(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Delete_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_MacOS_20_File_20_Reference_2F_Delete_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Error_20_Debug_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Error_20_Debug_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Error_20_Debug(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Error,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(1),TERMINAL(2));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_method_MacOS_20_File_20_Reference_2F_Error_20_Debug_case_1_local_5(PARAMETERS,TERMINAL(1),TERMINAL(3));

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Exchange_20_Objects_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Exchange_20_Objects_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(2))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Exchange_20_Objects_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Exchange_20_Objects_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FSMoveObject",ROOT(2));

result = vpx_method_MacOS_20_File_20_Reference_2F_Exchange_20_Objects_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3),ROOT(4));
NEXTCASEONFAILURE

PUTINTEGER(FSExchangeObjects( GETCONSTPOINTER(FSRef,*,TERMINAL(3)),GETCONSTPOINTER(FSRef,*,TERMINAL(4))),5);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(5));
FAILONFAILURE

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Exchange_20_Objects_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Exchange_20_Objects_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MacOS FileRef/Exchange Objects",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E7E_Param_20_Error,2,0,TERMINAL(0),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Exchange_20_Objects(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Exchange_20_Objects_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_MacOS_20_File_20_Reference_2F_Exchange_20_Objects_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Alias_20_Record(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Alias_20_Record,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Display_20_Name_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Display_20_Name_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"LSCopyDisplayNameForRef",ROOT(1));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Display_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Display_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(LSCopyDisplayNameForRef( GETCONSTPOINTER(FSRef,*,TERMINAL(1)),GETPOINTER(0,__CFString,**,ROOT(3),NONE)),2);
result = kSuccess;

result = vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Display_20_Name_case_1_local_5(PARAMETERS,TERMINAL(2));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_CF_20_String_2F_New(PARAMETERS,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Display_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Display_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Clone,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Display_20_Name_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Display_20_Name_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Display_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Display_20_Name_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Display_20_Name_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Display_20_Name_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Error(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Error,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_FSRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_FSSpec_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_FSSpec_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_FSGetCatalogInfo,5,4,TERMINAL(0),NONE,NONE,TERMINAL(1),NONE,ROOT(2),ROOT(3),ROOT(4),ROOT(5));
NEXTCASEONFAILURE

result = vpx_method_New_20_FSSpec(PARAMETERS,TERMINAL(4),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_FSSpec_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_FSSpec_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_FSSpec(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Get_20_FSSpec_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Get_20_FSSpec_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Full_20_Path(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Full_20_Path_20_CFString,2,1,TERMINAL(0),NONE,ROOT(1));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_String,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(1));

result = vpx_match(PARAMETERS,"\"\"",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Full_20_Path_20_CFString(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Full_20_Path_20_CFURL,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Copy_20_File_20_System_20_Path,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Full_20_Path_20_CFURL(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_URL,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_FSRef,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Name_20_As_20_String_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Name_20_As_20_String_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_String,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Name_20_As_20_String_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Name_20_As_20_String_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Name_20_As_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Name_20_As_20_String_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Name_20_As_20_String_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Name_20_As_20_Unicode_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Name_20_As_20_Unicode_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UniChar,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Name_20_As_20_Unicode_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Name_20_As_20_Unicode_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Name_20_As_20_Unicode(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Name_20_As_20_Unicode_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Name_20_As_20_Unicode_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Parent_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Parent_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_FSGetCatalogInfo,5,4,TERMINAL(0),NONE,NONE,NONE,TERMINAL(1),ROOT(2),ROOT(3),ROOT(4),ROOT(5));
NEXTCASEONFAILURE

result = vpx_method_MacOS_20_Folder_20_Reference_2F_New(PARAMETERS,TERMINAL(5),ROOT(6));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Parent_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Parent_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Parent(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Parent_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Parent_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Parent_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kFSCatInfoParentDirID,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_FSGetCatalogInfo,5,4,TERMINAL(0),TERMINAL(1),NONE,NONE,NONE,ROOT(2),ROOT(3),ROOT(4),ROOT(5));
FAILONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_extget(PARAMETERS,"parentDirID",1,2,TERMINAL(2),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Reference(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_FS_20_Reference,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Specification_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Specification_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSSpec,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Specification,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Specification_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Specification_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Specification(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Specification_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Specification_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_Desktop_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_Desktop_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parent_20_ID,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_extmatch(PARAMETERS,fsRtParID,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_Desktop_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_Desktop_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_Desktop_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Is_20_Desktop_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Is_20_Desktop_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_Folder_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_Folder_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kFSNodeIsDirectoryBit,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_FSGetCatalogInfo_20_NodeFlag,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_Folder_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_Folder_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_Folder_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Is_20_Folder_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Is_20_Folder_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_In_20_Trash_3F__case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_In_20_Trash_3F__case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Is_20_Desktop_3F_,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_In_20_Trash_3F__case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_In_20_Trash_3F__case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Compare,2,0,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_In_20_Trash_3F__case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_In_20_Trash_3F__case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parent,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_In_20_Trash_3F__case_1_local_5_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_In_20_Trash_3F__case_1_local_5_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_In_20_Trash_3F__case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_In_20_Trash_3F__case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Is_20_In_20_Trash_3F__case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
if(vpx_method_MacOS_20_File_20_Reference_2F_Is_20_In_20_Trash_3F__case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
if(vpx_method_MacOS_20_File_20_Reference_2F_Is_20_In_20_Trash_3F__case_1_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_MacOS_20_File_20_Reference_2F_Is_20_In_20_Trash_3F__case_1_local_5_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_In_20_Trash_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_In_20_Trash_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"trash\"",ROOT(1));

result = vpx_method_Find_20_Media(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,3)
result = vpx_method_MacOS_20_File_20_Reference_2F_Is_20_In_20_Trash_3F__case_1_local_5(PARAMETERS,LOOP(0),TERMINAL(2),ROOT(3),ROOT(4));
NEXTCASEONFAILURE
REPEATFINISH

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_In_20_Trash_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_In_20_Trash_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Is_20_In_20_Trash_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Is_20_In_20_Trash_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Is_20_In_20_Trash_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Move_20_To_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Move_20_To_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(2))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Move_20_To_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Move_20_To_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FSMoveObject",ROOT(2));

result = vpx_method_MacOS_20_File_20_Reference_2F_Move_20_To_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3),ROOT(4));
NEXTCASEONFAILURE

PUTINTEGER(FSMoveObject( GETCONSTPOINTER(FSRef,*,TERMINAL(3)),GETCONSTPOINTER(FSRef,*,TERMINAL(4)),GETPOINTER(144,FSRef,*,ROOT(6),NONE)),5);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(5));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Reference,2,0,TERMINAL(0),TERMINAL(6));

result = kSuccess;

FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Move_20_To_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Move_20_To_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MacOS FileRef/Move Object",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E7E_Param_20_Error,2,0,TERMINAL(0),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Move_20_To(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Move_20_To_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_MacOS_20_File_20_Reference_2F_Move_20_To_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_MacOS_20_File_20_Reference,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_FSRef,2,0,TERMINAL(1),TERMINAL(0));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Alias(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_constant(PARAMETERS,"FSResolveAlias",ROOT(3));

PUTINTEGER(FSResolveAlias( GETCONSTPOINTER(FSRef,*,TERMINAL(2)),GETPOINTER(8,AliasRecord,**,ROOT(5),TERMINAL(1)),GETPOINTER(144,FSRef,*,ROOT(6),NONE),GETPOINTER(1,unsigned char,*,ROOT(7),NONE)),4);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(0),TERMINAL(3),TERMINAL(4));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Alias_20_Record,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_FSRef,2,0,TERMINAL(0),TERMINAL(6));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_CFString(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_URL,1,1,NONE,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_String,3,0,TERMINAL(3),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_CFURL,2,0,TERMINAL(0),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_CFURL_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_CFURL_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_FSRef,2,0,TERMINAL(0),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_CFURL_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_CFURL_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Copy_20_Last_20_Path_20_Component,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Copy_20_Deleting_20_Last_20_Path_20_Component,1,1,TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parent_20_URL,2,0,TERMINAL(0),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Name,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_CFURL(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_CFURL_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_CFURL_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_FSRef_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_FSRef_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_FSRef_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_FSRef_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_FSRef_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_FSRef_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_FSRef_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_FSRef_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_FSRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_FSRef_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_FSRef,1,0,TERMINAL(0));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_FSSpec(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_FSpMakeFSRef,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_FSRef,2,0,TERMINAL(0),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Path_20_String_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Path_20_String_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_URL,1,1,NONE,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_File_20_System_20_Path,4,1,TERMINAL(3),TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Path_20_String_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Path_20_String_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_CFURL,2,0,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Path_20_String_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Path_20_String_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(1));

result = kSuccess;
FAILONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Path_20_String_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Path_20_String_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Path_20_String_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Path_20_String_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Path_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Path_20_String_case_1_local_2(PARAMETERS,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Path_20_String_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(4));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Unicode_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Unicode_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(1),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

PUTINTEGER(FSMakeFSRefUnicode( GETCONSTPOINTER(FSRef,*,TERMINAL(5)),GETINTEGER(TERMINAL(3)),GETCONSTPOINTER(unsigned short,*,TERMINAL(2)),GETINTEGER(TERMINAL(4)),GETPOINTER(144,FSRef,*,ROOT(7),NONE)),6);
result = kSuccess;

result = vpx_constant(PARAMETERS,"FSMakeFSRefUnicode",ROOT(8));

result = vpx_extconstant(PARAMETERS,fnfErr,ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Accept,4,0,TERMINAL(0),TERMINAL(8),TERMINAL(6),TERMINAL(9));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Reference,2,0,TERMINAL(0),TERMINAL(7));

result = kSuccess;

FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Unicode_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Unicode_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MacOS FileRef/New From Unicode",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E7E_Param_20_Error,2,0,TERMINAL(0),TERMINAL(5));
FAILONFAILURE

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Unicode(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Unicode_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4))
vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Unicode_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Reference,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Open_20_Update(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_All,1,0,TERMINAL(0));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Rename_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Rename_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_String,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_String,3,0,TERMINAL(2),TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UniChar,1,2,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Length,1,1,TERMINAL(2),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Rename(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MacOS FileRef/Rename",ROOT(2));

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUTF8,ROOT(3));

result = vpx_method_MacOS_20_File_20_Reference_2F_Rename_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Rename_20_Unicode,4,1,TERMINAL(0),TERMINAL(4),TERMINAL(5),TERMINAL(3),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(6));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_CFString_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_CFString_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UniChar,1,2,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Length,1,1,TERMINAL(1),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"MacOS FileRef/Rename CFString",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Rename_20_Unicode,4,1,TERMINAL(0),TERMINAL(3),TERMINAL(5),TERMINAL(2),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(0),TERMINAL(6),TERMINAL(7));
FAILONFAILURE

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_CFString_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_CFString_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MacOS FileRef/Rename CFString",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E7E_Param_20_Error,2,0,TERMINAL(0),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_CFString(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_CFString_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_CFString_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_Unicode_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_Unicode_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(1));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_Unicode_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_Unicode_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_FSRef,2,0,TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_Unicode_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_Unicode_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Error,1,1,TERMINAL(0),ROOT(3));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_Unicode_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_Unicode_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_Unicode_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_Unicode_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_Unicode_case_1_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_Unicode_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_Unicode_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(0),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

PUTINTEGER(FSRenameUnicode( GETCONSTPOINTER(FSRef,*,TERMINAL(4)),GETINTEGER(TERMINAL(2)),GETCONSTPOINTER(unsigned short,*,TERMINAL(1)),GETINTEGER(TERMINAL(3)),GETPOINTER(144,FSRef,*,ROOT(6),NONE)),5);
result = kSuccess;

result = vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_Unicode_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(5),TERMINAL(6),ROOT(7));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_Unicode_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_Unicode_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_Unicode(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_Unicode_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_Unicode_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File_case_1_local_8_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File_case_1_local_8_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_New_20_Folder_20_FSRef(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File_case_1_local_8_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File_case_1_local_8_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File_case_1_local_8_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File_case_1_local_8_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File_case_1_local_8_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File_case_1_local_8_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File_case_1_local_8_case_1_local_3(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"FSResolveAliasFile",ROOT(3));

result = vpx_method_Default_20_TRUE(PARAMETERS,TERMINAL(1),ROOT(4));

PUTINTEGER(FSResolveAliasFile( GETPOINTER(144,FSRef,*,ROOT(6),TERMINAL(2)),GETINTEGER(TERMINAL(4)),GETPOINTER(1,unsigned char,*,ROOT(7),NONE),GETPOINTER(1,unsigned char,*,ROOT(8),NONE)),5);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(0),TERMINAL(3),TERMINAL(5));
FAILONFAILURE

result = vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File_case_1_local_8(PARAMETERS,TERMINAL(0),TERMINAL(6),TERMINAL(7),TERMINAL(8),ROOT(9));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(9))
OUTPUT(1,TERMINAL(7))
OUTPUT(2,TERMINAL(8))
FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FSResolveAliasFile",ROOT(2));

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,NONE)
OUTPUT(2,NONE)
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1,root2))
vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Alias_20_Record(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Alias_20_Record,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Name_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Name_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Name_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Name_20_As_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_String,1,1,NONE,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_String,3,0,TERMINAL(3),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Name,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Name_20_As_20_Unicode(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_String,1,1,NONE,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_UniChar,3,0,TERMINAL(3),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Name,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Parent_20_URL(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Parent_20_URL,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Reference_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Reference_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"FSRef",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Reference(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_FS_20_Reference,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Reference_case_1_local_3(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Update_20_Alias_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Update_20_Alias_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Alias_20_Record,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Alias,1,0,TERMINAL(0));
FAILONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Update_20_Alias_case_2_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Update_20_Alias_case_2_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Reference,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_FSRef,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Update_20_Alias_case_2_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Update_20_Alias_case_2_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Reference,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;
FAILONSUCCESS

FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Update_20_Alias_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Update_20_Alias_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Update_20_Alias_case_2_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_MacOS_20_File_20_Reference_2F_Update_20_Alias_case_2_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Update_20_Alias_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Update_20_Alias_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(11)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Alias_20_Record,1,1,TERMINAL(0),ROOT(2));

PUTINTEGER(FSResolveAlias( GETCONSTPOINTER(FSRef,*,TERMINAL(1)),GETPOINTER(8,AliasRecord,**,ROOT(4),TERMINAL(2)),GETPOINTER(144,FSRef,*,ROOT(5),NONE),GETPOINTER(1,unsigned char,*,ROOT(6),NONE)),3);
result = kSuccess;

result = vpx_constant(PARAMETERS,"FSResolveAlias",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(0),TERMINAL(7),TERMINAL(3));
FAILONFAILURE

result = vpx_method_Get_20_SInt8(PARAMETERS,TERMINAL(6),NONE,ROOT(8),ROOT(9));

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(9),ROOT(10));

result = vpx_method_MacOS_20_File_20_Reference_2F_Update_20_Alias_case_2_local_9(PARAMETERS,TERMINAL(0),TERMINAL(5),TERMINAL(10));
FAILONFAILURE

result = kSuccess;

FOOTERWITHNONE(11)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Update_20_Alias(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Update_20_Alias_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_MacOS_20_File_20_Reference_2F_Update_20_Alias_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Update_20_All(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Alias,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_FSRef,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_FSCatInfo,1,0,TERMINAL(0));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Update_20_FSCatInfo_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Update_20_FSCatInfo_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Update_20_FSCatInfo_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Update_20_FSCatInfo_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kFSCatInfoGettableInfo,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_FSGetCatalogInfo,5,4,TERMINAL(0),TERMINAL(1),NONE,NONE,NONE,ROOT(2),ROOT(3),ROOT(4),ROOT(5));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E7E_Extract_20_FSCatInfo,2,0,TERMINAL(0),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Update_20_FSCatInfo(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Update_20_FSCatInfo_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_MacOS_20_File_20_Reference_2F_Update_20_FSCatInfo_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Update_20_FSRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Name,1,0,TERMINAL(0));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Update_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(10)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_FSGetCatalogInfo,5,4,TERMINAL(0),NONE,TERMINAL(1),NONE,NONE,ROOT(2),ROOT(3),ROOT(4),ROOT(5));
FAILONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_extget(PARAMETERS,"unicode",1,2,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_extget(PARAMETERS,"length",1,2,TERMINAL(3),ROOT(8),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Name_20_As_20_Unicode,3,0,TERMINAL(0),TERMINAL(7),TERMINAL(9));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(10)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FNNotify_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FNNotify_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_extconstant(PARAMETERS,kFNDirectoryModifiedMessage,ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FNNotify_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FNNotify_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FNNotify_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FNNotify_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F7E_FNNotify_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F7E_FNNotify_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FNNotify_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FNNotify_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_MacOS_20_File_20_Reference_2F7E_FNNotify_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"~FNNotify",ROOT(4));

result = vpx_constant(PARAMETERS,"0",ROOT(5));

PUTINTEGER(FNNotify( GETCONSTPOINTER(FSRef,*,TERMINAL(3)),GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(5))),6);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(0),TERMINAL(4),TERMINAL(6));
FAILONFAILURE

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FNNotify_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FNNotify_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"~FNNotify",ROOT(2));

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FNNotify(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F7E_FNNotify_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_MacOS_20_File_20_Reference_2F7E_FNNotify_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"HFSUniStr255",ROOT(1));

result = vpx_constant(PARAMETERS,"512",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FSSpec",ROOT(1));

result = vpx_constant(PARAMETERS,"72",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FSRef",ROOT(1));

result = vpx_constant(PARAMETERS,"80",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kFSCatInfoNone,ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_extmatch(PARAMETERS,kFSCatInfoNone,TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"FSCatalogInfo",ROOT(3));

result = vpx_constant(PARAMETERS,"148",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_extconstant(PARAMETERS,kFSCatInfoNone,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(17)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(0),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"FSGetCatalogInfo",ROOT(6));

result = vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_5(PARAMETERS,TERMINAL(2),ROOT(7));

result = vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_6(PARAMETERS,TERMINAL(3),ROOT(8));

result = vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_7(PARAMETERS,TERMINAL(4),ROOT(9));

result = vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1_local_8(PARAMETERS,TERMINAL(1),ROOT(10),ROOT(11));

PUTINTEGER(FSGetCatalogInfo( GETCONSTPOINTER(FSRef,*,TERMINAL(5)),GETINTEGER(TERMINAL(10)),GETPOINTER(148,FSCatalogInfo,*,ROOT(13),TERMINAL(11)),GETPOINTER(512,HFSUniStr255,*,ROOT(14),TERMINAL(7)),GETPOINTER(72,FSSpec,*,ROOT(15),TERMINAL(8)),GETPOINTER(144,FSRef,*,ROOT(16),TERMINAL(9))),12);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(0),TERMINAL(6),TERMINAL(12));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(13))
OUTPUT(1,TERMINAL(14))
OUTPUT(2,TERMINAL(15))
OUTPUT(3,TERMINAL(16))
FOOTER(17)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"~FSGetCatalogInfo",ROOT(5));

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(0),TERMINAL(5),TERMINAL(6));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,NONE)
OUTPUT(2,NONE)
OUTPUT(3,NONE)
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,root0,root1,root2,root3))
vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,root0,root1,root2,root3);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_20_NodeFlag(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kFSCatInfoNodeFlags,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_FSGetCatalogInfo,5,4,TERMINAL(0),TERMINAL(2),NONE,NONE,NONE,ROOT(3),ROOT(4),ROOT(5),ROOT(6));
FAILONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_extget(PARAMETERS,"nodeFlags",1,2,TERMINAL(3),ROOT(7),ROOT(8));

result = vpx_method_test_2D_bit_3F_(PARAMETERS,TERMINAL(8),TERMINAL(1),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASEWITHNONE(10)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSpMakeFSRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTINTEGER(FSpMakeFSRef( GETCONSTPOINTER(FSSpec,*,TERMINAL(1)),GETPOINTER(144,FSRef,*,ROOT(3),NONE)),2);
result = kSuccess;

result = vpx_constant(PARAMETERS,"FSpMakeFSRef",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(0),TERMINAL(4),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_LSOpenFSRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_LSOpenFSRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"LSOpenFSRef",ROOT(2));

PUTINTEGER(LSOpenFSRef( GETCONSTPOINTER(FSRef,*,TERMINAL(1)),GETPOINTER(144,FSRef,*,ROOT(4),NONE)),3);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_LSOpenFSRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_LSOpenFSRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_LSOpenFSRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F7E_LSOpenFSRef_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_MacOS_20_File_20_Reference_2F7E_LSOpenFSRef_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E7E_Extract_20_FSCatInfo(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E7E_Param_20_Error(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E7E_Update_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Additional_20_Data,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method__28_Set_20_Setting_29_(PARAMETERS,TERMINAL(4),TERMINAL(1),TERMINAL(2),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Additional_20_Data,TERMINAL(0),TERMINAL(5),ROOT(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Directory_20_Items_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Directory_20_Items_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"10",ROOT(3));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Bulk_20_Pass,6,5,TERMINAL(0),TERMINAL(3),NONE,TERMINAL(4),NONE,NONE,ROOT(5),ROOT(6),ROOT(7),ROOT(8),ROOT(9));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(5));
FINISHONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(2),TERMINAL(7),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASEWITHNONE(11)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Directory_20_Items(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_MacOS_20_File_20_Iterator,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(1),TERMINAL(0));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"(  )",ROOT(2));

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,2,3)
result = vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Directory_20_Items_case_1_local_5(PARAMETERS,TERMINAL(1),TERMINAL(0),LOOP(0),ROOT(3));
REPEATFINISH

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_20_FInfo(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(9)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kFSCatInfoFinderInfo,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_FSGetCatalogInfo,5,4,TERMINAL(0),TERMINAL(1),NONE,NONE,NONE,ROOT(2),ROOT(3),ROOT(4),ROOT(5));
FAILONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_extget(PARAMETERS,"finderInfo",1,2,TERMINAL(2),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"FInfo",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(7),TERMINAL(8));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Finder_20_Info_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Finder_20_Info_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Is_20_Folder_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Bundle,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_FSRef,2,0,TERMINAL(2),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Package_20_Info,1,2,TERMINAL(2),ROOT(3),ROOT(4));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"0",ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
OUTPUT(2,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Finder_20_Info_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Finder_20_Info_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_FSGetCatalogInfo_20_FInfo,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_extget(PARAMETERS,"fdType",1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_extget(PARAMETERS,"fdCreator",1,2,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_extget(PARAMETERS,"fdFlags",1,2,TERMINAL(1),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(5))
OUTPUT(2,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Finder_20_Info(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Finder_20_Info_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2))
vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Finder_20_Info_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Coerce_20_FSSpec,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_open_2D_file,1,1,TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_read_2D_object,1,1,TERMINAL(2),ROOT(3));
CONTINUEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_close_2D_file,1,0,TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(16)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTINTEGER(FSGetDataForkName( GETPOINTER(512,HFSUniStr255,*,ROOT(3),NONE)),2);
result = kSuccess;

result = vpx_extconstant(PARAMETERS,fsRdPerm,ROOT(4));

result = vpx_constant(PARAMETERS,"1",ROOT(5));

result = vpx_method_New_20_UInt16(PARAMETERS,NONE,TERMINAL(5),ROOT(6));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(0),ROOT(7));

result = vpx_extget(PARAMETERS,"unicode",1,2,TERMINAL(3),ROOT(8),ROOT(9));

result = vpx_extget(PARAMETERS,"length",1,2,TERMINAL(3),ROOT(10),ROOT(11));

PUTINTEGER(FSOpenFork( GETCONSTPOINTER(FSRef,*,TERMINAL(7)),GETINTEGER(TERMINAL(11)),GETCONSTPOINTER(unsigned short,*,TERMINAL(9)),GETINTEGER(TERMINAL(1)),GETPOINTER(2,short,*,ROOT(13),TERMINAL(6))),12);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(12));
FAILONFAILURE

result = vpx_method_Get_20_SInt16(PARAMETERS,TERMINAL(13),NONE,ROOT(14),ROOT(15));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(6));

result = kSuccess;

OUTPUT(0,TERMINAL(15))
FOOTERSINGLECASEWITHNONE(16)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(0));

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_constant(PARAMETERS,"long long int",ROOT(2));

result = vpx_method_New_20_Integer_20_Block_20_Type(PARAMETERS,NONE,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_1_local_3_case_1_local_2(PARAMETERS,ROOT(1));
FAILONFAILURE

PUTINTEGER(FSGetForkSize( GETINTEGER(TERMINAL(0)),GETPOINTER(4,long long int,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_1_local_4_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_1_local_4_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_method_Block_20_Copy(PARAMETERS,TERMINAL(1),NONE,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_archive_2D_to_2D_object,1,1,TERMINAL(3),ROOT(4));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_1_local_4_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_1_local_4_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_1_local_4_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_1_local_4_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_1_local_4_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_1_local_4_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(14)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,fsFromStart,ROOT(3));

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_method_Block_20_Allocate(PARAMETERS,TERMINAL(2),TERMINAL(4),ROOT(5));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"1",ROOT(6));

result = vpx_method_New_20_UInt32(PARAMETERS,NONE,TERMINAL(6),ROOT(7));
FAILONFAILURE

result = vpx_extconstant(PARAMETERS,pleaseCacheMask,ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(3),TERMINAL(8),ROOT(9));

PUTINTEGER(FSReadFork( GETINTEGER(TERMINAL(0)),GETINTEGER(TERMINAL(9)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETPOINTER(0,void,*,ROOT(11),TERMINAL(5)),GETPOINTER(4,unsigned long,*,ROOT(12),TERMINAL(7))),10);
result = kSuccess;

result = vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_1_local_4_case_1_local_10(PARAMETERS,TERMINAL(10),TERMINAL(11),ROOT(13));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(5));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(7));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
FOOTERSINGLECASEWITHNONE(14)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(0));

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_constant(PARAMETERS,"long long int",ROOT(2));

result = vpx_method_New_20_Integer_20_Block_20_Type(PARAMETERS,NONE,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_3_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_3_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_archive_2D_to_2D_object,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_3_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_3_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_3_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_3_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_3_local_13_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_3_local_13_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(15)
INPUT(0,0)
result = kSuccess;

result = vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_3_local_2(PARAMETERS,ROOT(1));
NEXTCASEONFAILURE

PUTINTEGER(FSGetForkSize( GETINTEGER(TERMINAL(0)),GETPOINTER(4,long long int,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,fsFromStart,ROOT(4));

result = vpx_constant(PARAMETERS,"0",ROOT(5));

result = vpx_constant(PARAMETERS,"0",ROOT(6));

result = vpx_constant(PARAMETERS,"1",ROOT(7));

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(3),TERMINAL(6),ROOT(8),ROOT(9));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(1));

result = vpx_method_Block_20_Allocate(PARAMETERS,TERMINAL(9),TERMINAL(7),ROOT(10));
NEXTCASEONFAILURE

PUTINTEGER(FSReadFork( GETINTEGER(TERMINAL(0)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(5)),GETINTEGER(TERMINAL(9)),GETPOINTER(0,void,*,ROOT(12),TERMINAL(10)),GETPOINTER(4,unsigned long,*,ROOT(13),NONE)),11);
result = kSuccess;

result = vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_3_local_13(PARAMETERS,TERMINAL(11),TERMINAL(12),ROOT(14));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(10));

result = kSuccess;

OUTPUT(0,TERMINAL(14))
FOOTERWITHNONE(15)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,fsRdPerm,ROOT(1));

result = vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2_local_4(PARAMETERS,TERMINAL(2),ROOT(3));

PUTINTEGER(FSCloseFork( GETINTEGER(TERMINAL(2))),4);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Coerce_20_FSSpec,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_open_2D_file,1,1,TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_read_2D_text,1,1,TERMINAL(2),ROOT(3));
CONTINUEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_close_2D_file,1,0,TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(15)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTINTEGER(FSGetDataForkName( GETPOINTER(512,HFSUniStr255,*,ROOT(3),NONE)),2);
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_method_New_20_UInt16(PARAMETERS,NONE,TERMINAL(4),ROOT(5));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(0),ROOT(6));

result = vpx_extget(PARAMETERS,"unicode",1,2,TERMINAL(3),ROOT(7),ROOT(8));

result = vpx_extget(PARAMETERS,"length",1,2,TERMINAL(3),ROOT(9),ROOT(10));

PUTINTEGER(FSOpenFork( GETCONSTPOINTER(FSRef,*,TERMINAL(6)),GETINTEGER(TERMINAL(10)),GETCONSTPOINTER(unsigned short,*,TERMINAL(8)),GETINTEGER(TERMINAL(1)),GETPOINTER(2,short,*,ROOT(12),TERMINAL(5))),11);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(11));
FAILONFAILURE

result = vpx_method_Get_20_SInt16(PARAMETERS,TERMINAL(12),NONE,ROOT(13),ROOT(14));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(5));

result = kSuccess;

OUTPUT(0,TERMINAL(14))
FOOTERSINGLECASEWITHNONE(15)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(0));

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_constant(PARAMETERS,"long long int",ROOT(2));

result = vpx_method_New_20_Integer_20_Block_20_Type(PARAMETERS,NONE,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
result = kSuccess;

result = vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1_local_3_case_1_local_2(PARAMETERS,ROOT(1));
FAILONFAILURE

PUTINTEGER(FSGetForkSize( GETINTEGER(TERMINAL(0)),GETPOINTER(4,long long int,*,ROOT(3),NONE)),2);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(3));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1_local_4_case_2_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1_local_4_case_2_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(1),TERMINAL(3),TERMINAL(2),ROOT(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1_local_4_case_2_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1_local_4_case_2_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1_local_4_case_2_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1_local_4_case_2_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1_local_4_case_2_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1_local_4_case_2_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(16)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,fsFromStart,ROOT(3));

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_method_Block_20_Allocate(PARAMETERS,TERMINAL(2),TERMINAL(4),ROOT(5));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"1",ROOT(6));

result = vpx_method_New_20_UInt32(PARAMETERS,NONE,TERMINAL(6),ROOT(7));
FAILONFAILURE

result = vpx_extconstant(PARAMETERS,pleaseCacheMask,ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(3),TERMINAL(8),ROOT(9));

PUTINTEGER(FSReadFork( GETINTEGER(TERMINAL(0)),GETINTEGER(TERMINAL(9)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETPOINTER(0,void,*,ROOT(11),TERMINAL(5)),GETPOINTER(4,unsigned long,*,ROOT(12),TERMINAL(7))),10);
result = kSuccess;

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(12),NONE,ROOT(13),ROOT(14));

result = vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1_local_4_case_2_local_11(PARAMETERS,TERMINAL(10),TERMINAL(11),TERMINAL(14),ROOT(15));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(5));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(7));

result = kSuccess;

OUTPUT(0,TERMINAL(15))
FOOTERWITHNONE(16)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,fsRdPerm,ROOT(1));

result = vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2_local_4(PARAMETERS,TERMINAL(2),ROOT(3));

PUTINTEGER(FSCloseFork( GETINTEGER(TERMINAL(2))),4);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_20_FXInfo(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(9)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kFSCatInfoFinderXInfo,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_FSGetCatalogInfo,5,4,TERMINAL(0),TERMINAL(1),NONE,NONE,NONE,ROOT(2),ROOT(3),ROOT(4),ROOT(5));
FAILONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_extget(PARAMETERS,"extFinderInfo",1,2,TERMINAL(2),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"FXInfo",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(7),TERMINAL(8));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_FX_20_ScriptCode(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_FSGetCatalogInfo_20_FXInfo,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_extget(PARAMETERS,"fdScript",1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Create_20_File_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Create_20_File_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FSCreateFileUnicode",ROOT(1));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Create_20_File_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Create_20_File_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Create_20_File_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Create_20_File_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Create_20_File_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Create_20_File_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Create_20_File_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Create_20_File_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Create_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UniChar,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_extconstant(PARAMETERS,kFSCatInfoNone,ROOT(6));

result = vpx_constant(PARAMETERS,"NULL",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Length,1,1,TERMINAL(3),ROOT(8));

PUTINTEGER(FSCreateFileUnicode( GETCONSTPOINTER(FSRef,*,TERMINAL(2)),GETINTEGER(TERMINAL(8)),GETCONSTPOINTER(unsigned short,*,TERMINAL(4)),GETINTEGER(TERMINAL(6)),GETCONSTPOINTER(FSCatalogInfo,*,TERMINAL(7)),GETPOINTER(144,FSRef,*,ROOT(10),NONE),GETPOINTER(72,FSSpec,*,ROOT(11),TERMINAL(7))),9);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(3));

result = vpx_method_MacOS_20_File_20_Reference_2F_Create_20_File_case_1_local_10(PARAMETERS,TERMINAL(9));

result = vpx_method_MacOS_20_File_20_Reference_2F_Create_20_File_case_1_local_11(PARAMETERS,TERMINAL(9),TERMINAL(10),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
OUTPUT(1,TERMINAL(12))
FOOTERSINGLECASEWITHNONE(13)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Create_20_Directory_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Create_20_Directory_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FSCreateDirectoryUnicode",ROOT(1));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Create_20_Directory_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Create_20_Directory_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Create_20_Directory_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Create_20_Directory_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Create_20_Directory_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Create_20_Directory_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Create_20_Directory_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Create_20_Directory_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Create_20_Directory(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(14)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UniChar,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_extconstant(PARAMETERS,kFSCatInfoNone,ROOT(6));

result = vpx_constant(PARAMETERS,"NULL",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Length,1,1,TERMINAL(3),ROOT(8));

PUTINTEGER(FSCreateDirectoryUnicode( GETCONSTPOINTER(FSRef,*,TERMINAL(2)),GETINTEGER(TERMINAL(8)),GETCONSTPOINTER(unsigned short,*,TERMINAL(4)),GETINTEGER(TERMINAL(6)),GETCONSTPOINTER(FSCatalogInfo,*,TERMINAL(7)),GETPOINTER(144,FSRef,*,ROOT(10),NONE),GETPOINTER(72,FSSpec,*,ROOT(11),TERMINAL(7)),GETPOINTER(4,unsigned int,*,ROOT(12),TERMINAL(7))),9);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(3));

result = vpx_method_MacOS_20_File_20_Reference_2F_Create_20_Directory_case_1_local_10(PARAMETERS,TERMINAL(9));

result = vpx_method_MacOS_20_File_20_Reference_2F_Create_20_Directory_case_1_local_11(PARAMETERS,TERMINAL(9),TERMINAL(10),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
OUTPUT(1,TERMINAL(13))
FOOTERSINGLECASEWITHNONE(14)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_LSCopyItemInfo_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_LSCopyItemInfo_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kLSRequestBasicFlagsOnly,ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_LSCopyItemInfo(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"FSGetCatalogInfo",ROOT(3));

result = vpx_method_MacOS_20_File_20_Reference_2F7E_LSCopyItemInfo_case_1_local_5(PARAMETERS,TERMINAL(1),ROOT(4));

PUTINTEGER(LSCopyItemInfoForRef( GETCONSTPOINTER(FSRef,*,TERMINAL(2)),GETINTEGER(TERMINAL(4)),GETPOINTER(24,LSItemInfoRecord,*,ROOT(6),NONE)),5);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(0),TERMINAL(3),TERMINAL(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Bundle_20_Resource_20_FSRef_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Bundle_20_Resource_20_FSRef_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

PUTPOINTER(__CFURL,*,CFURLCreateFromFSRef( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(3)),GETCONSTPOINTER(FSRef,*,TERMINAL(0))),4);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

PUTPOINTER(__CFBundle,*,CFBundleCreate( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(3)),GETCONSTPOINTER(__CFURL,*,TERMINAL(4))),5);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(4)));
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
FAILONSUCCESS

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(1),ROOT(6));

PUTPOINTER(__CFURL,*,CFBundleCopyResourceURL( GETPOINTER(0,__CFBundle,*,ROOT(8),TERMINAL(5)),GETCONSTPOINTER(__CFString,*,TERMINAL(6)),GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(2))),7);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(6)));
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
FAILONSUCCESS

PUTINTEGER(CFURLGetFSRef( GETCONSTPOINTER(__CFURL,*,TERMINAL(7)),GETPOINTER(144,FSRef,*,ROOT(10),NONE)),9);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(7)));
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(9));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASEWITHNONE(11)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Bundle_20_Resource_20_FSRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Bundle_20_Resource_20_FSRef_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));
FAILONFAILURE

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(3),ROOT(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSSetCatalogInfo_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSSetCatalogInfo_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"FSSetCatalogInfo",ROOT(4));

PUTINTEGER(FSSetCatalogInfo( GETCONSTPOINTER(FSRef,*,TERMINAL(3)),GETINTEGER(TERMINAL(1)),GETCONSTPOINTER(FSCatalogInfo,*,TERMINAL(2))),5);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(0),TERMINAL(4),TERMINAL(5));
CONTINUEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSSetCatalogInfo_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSSetCatalogInfo_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FSSetCatalogInfo",ROOT(3));

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(0),TERMINAL(3),TERMINAL(4));
CONTINUEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F7E_FSSetCatalogInfo(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F7E_FSSetCatalogInfo_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_MacOS_20_File_20_Reference_2F7E_FSSetCatalogInfo_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(9)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kFSCatInfoFinderInfo,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_FSGetCatalogInfo,5,4,TERMINAL(0),TERMINAL(1),NONE,NONE,NONE,ROOT(2),ROOT(3),ROOT(4),ROOT(5));
FAILONFAILURE

result = vpx_extget(PARAMETERS,"finderInfo",1,2,TERMINAL(2),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"FInfo",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(7),TERMINAL(8));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_to_2D_integer,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_3_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_3_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_3_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_to_2D_integer,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_5_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_5_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_5_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(1),TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(18)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_extget(PARAMETERS,"fdType",1,2,TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_3(PARAMETERS,TERMINAL(6),TERMINAL(2),ROOT(7));

result = vpx_extget(PARAMETERS,"fdCreator",1,2,TERMINAL(1),ROOT(8),ROOT(9));

result = vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_5(PARAMETERS,TERMINAL(9),TERMINAL(3),ROOT(10));

result = vpx_extget(PARAMETERS,"fdFlags",1,2,TERMINAL(1),ROOT(11),ROOT(12));

result = vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1_local_7(PARAMETERS,TERMINAL(12),TERMINAL(4),ROOT(13));

result = vpx_constant(PARAMETERS,"72",ROOT(14));

result = vpx_method_Put_20_UInt32(PARAMETERS,TERMINAL(0),TERMINAL(14),TERMINAL(7),ROOT(15));

result = vpx_method_Put_20_UInt32(PARAMETERS,TERMINAL(0),TERMINAL(15),TERMINAL(10),ROOT(16));

result = vpx_method_Put_20_UInt16(PARAMETERS,TERMINAL(0),TERMINAL(16),TERMINAL(13),ROOT(17));

result = kSuccess;

FOOTER(18)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_to_2D_integer,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_3_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_3_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_3_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_to_2D_integer,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_6_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_6_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_6_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(1),TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(17)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_extget(PARAMETERS,"fdType",1,2,TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_3(PARAMETERS,TERMINAL(6),TERMINAL(2),ROOT(7));

result = vpx_extset(PARAMETERS,"fdType",2,1,TERMINAL(1),TERMINAL(7),ROOT(8));

result = vpx_extget(PARAMETERS,"fdCreator",1,2,TERMINAL(1),ROOT(9),ROOT(10));

result = vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_6(PARAMETERS,TERMINAL(10),TERMINAL(3),ROOT(11));

result = vpx_extset(PARAMETERS,"fdCreator",2,1,TERMINAL(8),TERMINAL(11),ROOT(12));

result = vpx_extget(PARAMETERS,"fdFlags",1,2,TERMINAL(1),ROOT(13),ROOT(14));

result = vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2_local_9(PARAMETERS,TERMINAL(14),TERMINAL(4),ROOT(15));

result = vpx_extset(PARAMETERS,"fdFlags",2,1,TERMINAL(12),TERMINAL(15),ROOT(16));

result = kSuccess;

FOOTER(17)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4))
vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kFSCatInfoFinderInfo,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_FSSetCatalogInfo,3,1,TERMINAL(0),TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(4),ROOT(5));
FAILONFAILURE

result = vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_3(PARAMETERS,TERMINAL(4),TERMINAL(5),TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(4));
FAILONFAILURE

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(9)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kFSCatInfoFinderInfo,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_FSGetCatalogInfo,5,4,TERMINAL(0),TERMINAL(1),NONE,NONE,NONE,ROOT(2),ROOT(3),ROOT(4),ROOT(5));
FAILONFAILURE

result = vpx_extget(PARAMETERS,"&finderInfo",1,2,TERMINAL(2),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"FInfo",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(7),TERMINAL(8));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
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

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_to_2D_integer,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_3_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_3_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_3_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_to_2D_integer,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_6_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_6_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_6_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(1),TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(16)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extget(PARAMETERS,"fdType",1,2,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_3(PARAMETERS,TERMINAL(5),TERMINAL(1),ROOT(6));

result = vpx_extset(PARAMETERS,"fdType",2,1,TERMINAL(0),TERMINAL(6),ROOT(7));

result = vpx_extget(PARAMETERS,"fdCreator",1,2,TERMINAL(0),ROOT(8),ROOT(9));

result = vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_6(PARAMETERS,TERMINAL(9),TERMINAL(2),ROOT(10));

result = vpx_extset(PARAMETERS,"fdCreator",2,1,TERMINAL(7),TERMINAL(10),ROOT(11));

result = vpx_extget(PARAMETERS,"fdFlags",1,2,TERMINAL(0),ROOT(12),ROOT(13));

result = vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2_local_9(PARAMETERS,TERMINAL(13),TERMINAL(3),ROOT(14));

result = vpx_extset(PARAMETERS,"fdFlags",2,1,TERMINAL(11),TERMINAL(14),ROOT(15));

result = kSuccess;

FOOTER(16)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kFSCatInfoFinderInfo,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_FSSetCatalogInfo,3,1,TERMINAL(0),TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_2(PARAMETERS,TERMINAL(0),ROOT(4),ROOT(5));
FAILONFAILURE

result = vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_3(PARAMETERS,TERMINAL(5),TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2_local_4(PARAMETERS,TERMINAL(0),TERMINAL(4));
FAILONFAILURE

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Item_20_UTI_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Item_20_UTI_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = vpx_extconstant(PARAMETERS,kLSRequestExtension,ROOT(2));

result = vpx_extconstant(PARAMETERS,kLSRequestTypeCreator,ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_bit_2D_or,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"LSItemInfoRecord",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_sizeof,1,1,TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(5),TERMINAL(6),ROOT(7));

PUTINTEGER(LSCopyItemInfoForRef( GETCONSTPOINTER(FSRef,*,TERMINAL(1)),GETINTEGER(TERMINAL(4)),GETPOINTER(24,LSItemInfoRecord,*,ROOT(9),TERMINAL(7))),8);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(8));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Item_20_UTI_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Item_20_UTI_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extget(PARAMETERS,"extension",1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Item_20_UTI_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Item_20_UTI_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_extget(PARAMETERS,"filetype",1,2,TERMINAL(0),ROOT(1),ROOT(2));

PUTPOINTER(__CFString,*,UTCreateStringForOSType( GETINTEGER(TERMINAL(2))),3);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Item_20_UTI_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Item_20_UTI_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Item_20_UTI_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Item_20_UTI_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Item_20_UTI_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Item_20_UTI_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(1));

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(0)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Item_20_UTI_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Item_20_UTI_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Item_20_UTI_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Item_20_UTI_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Item_20_UTI_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Item_20_UTI_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Item_20_UTI(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(9)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_constant(PARAMETERS,"kUTTagClassFilenameExtension",ROOT(2));

result = vpx_constant(PARAMETERS,"__CFString",ROOT(3));

result = vpx_method_Get_20_Framework_20_Constant(PARAMETERS,TERMINAL(2),NONE,TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Item_20_UTI_case_1_local_6(PARAMETERS,TERMINAL(0),ROOT(5));
NEXTCASEONFAILURE

result = vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Item_20_UTI_case_1_local_7(PARAMETERS,TERMINAL(5),ROOT(6));

PUTPOINTER(__CFString,*,UTTypeCreatePreferredIdentifierForTag( GETCONSTPOINTER(__CFString,*,TERMINAL(4)),GETCONSTPOINTER(__CFString,*,TERMINAL(6)),GETCONSTPOINTER(__CFString,*,TERMINAL(1))),7);
result = kSuccess;

result = vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Item_20_UTI_case_1_local_9(PARAMETERS,TERMINAL(7),ROOT(8));

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(6)));
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(8));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_MacOS_20_File_20_Reference_2F_Error_20_Accept(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Error,TERMINAL(0),TERMINAL(2),ROOT(4));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(5),TERMINAL(2),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(6));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(4),TERMINAL(1),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(7)
}

/* Stop Universals */



Nat4 VPLC_MacOS_20_Folder_20_Reference_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_MacOS_20_Folder_20_Reference_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("FS Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Alias Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent URL",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_MacOS_20_Folder_20_Reference_2F_Error,environment);
	tempAttribute = attribute_add("Additional Data",tempClass,tempAttribute_MacOS_20_Folder_20_Reference_2F_Additional_20_Data,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"MacOS File Reference");
	return kNOERROR;
}

/* Start Universals: { 223 595 }{ 200 300 } */
enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_App_20_Folder_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_App_20_Folder_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERSINGLECASEWITHNONE(1)
}

enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_App_20_Folder(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_App_20_Folder_case_1_local_2(PARAMETERS,ROOT(1));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parent,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Update,2,0,TERMINAL(0),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"apple",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kAppleMenuFolderType,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"controls",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kControlPanelFolderType,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"desk",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kDesktopFolderType,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"extensions",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kExtensionFolderType,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"prefs",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kPreferencesFolderType,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"pmonitor",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kPrintMonitorDocsFolderType,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"nettrash",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kWhereToEmptyTrashFolderType,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"trash",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kTrashFolderType,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"startup",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kStartupFolderType,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"system",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kSystemFolderType,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_11(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_11(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"temp",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kTemporaryFolderType,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_12(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_12(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(0));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_8(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_9(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_10(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_11(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2_case_12(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(3));
FAILONFAILURE

result = vpx_extconstant(PARAMETERS,kOnSystemDisk,ROOT(4));

PUTINTEGER(FSFindFolder( GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(2)),GETPOINTER(144,FSRef,*,ROOT(6),NONE)),5);
result = kSuccess;

result = vpx_constant(PARAMETERS,"FSFindFolder",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(0),TERMINAL(7),TERMINAL(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Update,2,0,TERMINAL(0),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Path_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Path_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

PUTINTEGER(FSMakeFSSpec( GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(2)),GETCONSTPOINTER(unsigned char,*,TERMINAL(1)),GETPOINTER(72,FSSpec,*,ROOT(4),NONE)),3);
result = kSuccess;

result = vpx_constant(PARAMETERS,"MacOS FolderRef/Capture Path",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(0),TERMINAL(5),TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_FSSpec,2,0,TERMINAL(0),TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Path_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Path_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(1));

result = kSuccess;
FAILONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Path(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Path_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Path_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_Folder_20_Reference_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_MacOS_20_Folder_20_Reference,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_FSRef,2,0,TERMINAL(1),TERMINAL(0));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

/* Stop Universals */



Nat4 VPLC_MacOS_20_Volume_20_Reference_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_MacOS_20_Volume_20_Reference_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("FS Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Alias Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent URL",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_MacOS_20_Volume_20_Reference_2F_Error,environment);
	tempAttribute = attribute_add("Additional Data",tempClass,tempAttribute_MacOS_20_Volume_20_Reference_2F_Additional_20_Data,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"MacOS Folder Reference");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
/* Stop Universals */



Nat4 VPLC_MacOS_20_File_20_Iterator_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_MacOS_20_File_20_Iterator_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Folder",tempClass,NULL,environment);
	tempAttribute = attribute_add("Depth Flag",tempClass,tempAttribute_MacOS_20_File_20_Iterator_2F_Depth_20_Flag,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_MacOS_20_File_20_Iterator_2F_Error,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_MacOS_20_File_20_Iterator_2F_Finished_3F_,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 186 33 }{ 200 300 } */
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Close_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Close_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_constant(PARAMETERS,"FSCloseIterator",ROOT(3));

PUTINTEGER(FSCloseIterator( GETPOINTER(0,OpaqueFSIterator,*,ROOT(5),TERMINAL(1))),4);
result = kSuccess;

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(3),TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Reference,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_method_MacOS_20_File_20_Iterator_2F_Close_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Folder,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Get_20_Depth_20_Flag(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Depth_20_Flag,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Get_20_Folder(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Folder,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Get_20_Reference(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Reference,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Open_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Open_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Depth_20_Flag,1,1,TERMINAL(0),ROOT(3));

PUTINTEGER(FSOpenIterator( GETCONSTPOINTER(FSRef,*,TERMINAL(2)),GETINTEGER(TERMINAL(3)),GETPOINTER(0,OpaqueFSIterator,**,ROOT(5),NONE)),4);
result = kSuccess;

result = vpx_constant(PARAMETERS,"FSOpenIterator",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(1),TERMINAL(6),TERMINAL(4));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Reference,2,0,TERMINAL(0),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_MacOS_20_File_20_Iterator_2F_Open_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Folder,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Set_20_Folder(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Folder,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Set_20_Reference(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Reference,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"HFSUniStr255",ROOT(2));

result = vpx_method_Block_20_Array_20_New(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FSSpec",ROOT(2));

result = vpx_method_Block_20_Array_20_New(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FSRef",ROOT(2));

result = vpx_method_Block_20_Array_20_New(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kFSCatInfoNone,ROOT(2));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_extmatch(PARAMETERS,kFSCatInfoNone,TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"FSCatalogInfo",ROOT(4));

result = vpx_method_Block_20_Array_20_New(PARAMETERS,TERMINAL(4),TERMINAL(1),ROOT(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_extconstant(PARAMETERS,kFSCatInfoNone,ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(8)
result = kSuccess;

result = vpx_constant(PARAMETERS,"unsigned long",ROOT(0));

result = vpx_constant(PARAMETERS,"4",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_constant(PARAMETERS,"0",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(5),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FSCatalogInfo",ROOT(2));

result = vpx_method_Block_20_Array_20_To_20_List(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_12_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_12_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_12_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_12_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_12_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_12_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_12_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_12_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FSRef",ROOT(2));

result = vpx_method_Block_20_Array_20_To_20_List(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(0));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_12_case_1_local_5(PARAMETERS,LIST(3),ROOT(4));
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

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FSSpec",ROOT(2));

result = vpx_method_Block_20_Array_20_To_20_List(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_14_case_1_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_14_case_1_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_String,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_UniChar,3,0,TERMINAL(2),TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_String,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_14_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_14_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_extget(PARAMETERS,"unicode",1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_extget(PARAMETERS,"length",1,2,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_14_case_1_local_5_case_1_local_4(PARAMETERS,TERMINAL(2),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"HFSUniStr255",ROOT(2));

result = vpx_method_Block_20_Array_20_To_20_List(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(0));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_14_case_1_local_5(PARAMETERS,LIST(3),ROOT(4));
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

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3,V_Object *root4);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3,V_Object *root4)
{
HEADERWITHNONE(26)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
INPUT(5,5)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(0),ROOT(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
NEXTCASEONSUCCESS

result = vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_4(PARAMETERS,TERMINAL(5),TERMINAL(1),ROOT(7));

result = vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_5(PARAMETERS,TERMINAL(4),TERMINAL(1),ROOT(8));

result = vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_6(PARAMETERS,TERMINAL(3),TERMINAL(1),ROOT(9));

result = vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_7(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(10),ROOT(11));

result = vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_8(PARAMETERS,ROOT(12));

PUTINTEGER(FSGetCatalogInfoBulk( GETPOINTER(0,OpaqueFSIterator,*,ROOT(14),TERMINAL(6)),GETINTEGER(TERMINAL(1)),GETPOINTER(4,unsigned long,*,ROOT(15),TERMINAL(12)),GETPOINTER(1,unsigned char,*,ROOT(16),NONE),GETINTEGER(TERMINAL(10)),GETPOINTER(148,FSCatalogInfo,*,ROOT(17),TERMINAL(11)),GETPOINTER(144,FSRef,*,ROOT(18),TERMINAL(9)),GETPOINTER(72,FSSpec,*,ROOT(19),TERMINAL(8)),GETPOINTER(512,HFSUniStr255,*,ROOT(20),TERMINAL(7))),13);
result = kSuccess;

result = vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_10(PARAMETERS,TERMINAL(15),ROOT(21));

result = vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_11(PARAMETERS,TERMINAL(17),TERMINAL(21),ROOT(22));

result = vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_12(PARAMETERS,TERMINAL(18),TERMINAL(21),ROOT(23));

result = vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_13(PARAMETERS,TERMINAL(19),TERMINAL(21),ROOT(24));

result = vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1_local_14(PARAMETERS,TERMINAL(20),TERMINAL(21),ROOT(25));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
OUTPUT(1,TERMINAL(22))
OUTPUT(2,TERMINAL(23))
OUTPUT(3,TERMINAL(24))
OUTPUT(4,TERMINAL(25))
FOOTERWITHNONE(26)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3,V_Object *root4);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3,V_Object *root4)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
INPUT(5,5)
result = kSuccess;

result = vpx_constant(PARAMETERS,"~FSGetCatalogInfo",ROOT(6));

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(0),TERMINAL(6),TERMINAL(7));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,NONE)
OUTPUT(2,NONE)
OUTPUT(3,NONE)
OUTPUT(4,NONE)
FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3,V_Object *root4)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,terminal5,root0,root1,root2,root3,root4))
vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,terminal5,root0,root1,root2,root3,root4);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Bulk_20_Pass_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Bulk_20_Pass_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,errFSNoMoreItems,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Bulk_20_Pass_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Bulk_20_Pass_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FSGetCatalogInfoBulk",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Folder,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_20_Debug,3,0,TERMINAL(3),TERMINAL(2),TERMINAL(0));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Bulk_20_Pass_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Bulk_20_Pass_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Iterator_2F_Bulk_20_Pass_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_MacOS_20_File_20_Iterator_2F_Bulk_20_Pass_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Bulk_20_Pass_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3,V_Object *root4);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Bulk_20_Pass_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3,V_Object *root4)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
INPUT(5,5)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_FSGetCatalogInfoBulk,6,5,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(5),ROOT(6),ROOT(7),ROOT(8),ROOT(9),ROOT(10));
NEXTCASEONFAILURE

result = vpx_method_MacOS_20_File_20_Iterator_2F_Bulk_20_Pass_case_1_local_3(PARAMETERS,TERMINAL(6),TERMINAL(0),ROOT(11));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(11))
OUTPUT(1,TERMINAL(7))
OUTPUT(2,TERMINAL(8))
OUTPUT(3,TERMINAL(9))
OUTPUT(4,TERMINAL(10))
FOOTER(12)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Bulk_20_Pass_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3,V_Object *root4);
enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Bulk_20_Pass_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3,V_Object *root4)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
INPUT(5,5)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(6));

result = vpx_constant(PARAMETERS,"(  )",ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(7))
OUTPUT(2,TERMINAL(7))
OUTPUT(3,TERMINAL(7))
OUTPUT(4,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_MacOS_20_File_20_Iterator_2F_Bulk_20_Pass(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3,V_Object *root4)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_File_20_Iterator_2F_Bulk_20_Pass_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,terminal5,root0,root1,root2,root3,root4))
vpx_method_MacOS_20_File_20_Iterator_2F_Bulk_20_Pass_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,terminal5,root0,root1,root2,root3,root4);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Folder_20_Search_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Folder_20_Search_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Progress",tempClass,NULL,environment);
	tempAttribute = attribute_add("Search Folders",tempClass,tempAttribute_Folder_20_Search_2F_Search_20_Folders,environment);
	tempAttribute = attribute_add("Search Items",tempClass,tempAttribute_Folder_20_Search_2F_Search_20_Items,environment);
	tempAttribute = attribute_add("Current Search",tempClass,NULL,environment);
	tempAttribute = attribute_add("Found Items",tempClass,tempAttribute_Folder_20_Search_2F_Found_20_Items,environment);
	tempAttribute = attribute_add("Found Callback",tempClass,tempAttribute_Folder_20_Search_2F_Found_20_Callback,environment);
	tempAttribute = attribute_add("Completion Callback",tempClass,tempAttribute_Folder_20_Search_2F_Completion_20_Callback,environment);
	tempAttribute = attribute_add("Completed?",tempClass,tempAttribute_Folder_20_Search_2F_Completed_3F_,environment);
	tempAttribute = attribute_add("Subfolders?",tempClass,tempAttribute_Folder_20_Search_2F_Subfolders_3F_,environment);
	tempAttribute = attribute_add("Errors",tempClass,tempAttribute_Folder_20_Search_2F_Errors,environment);
	tempAttribute = attribute_add("Current Subfolders",tempClass,tempAttribute_Folder_20_Search_2F_Current_20_Subfolders,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 135 115 }{ 200 300 } */
enum opTrigger vpx_method_Folder_20_Search_2F_Setup_20_Search_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Folder_20_Search_2F_Setup_20_Search_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Set Search List",ROOT(2));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Setup_20_Search_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Folder_20_Search_2F_Setup_20_Search_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Set Search Items",ROOT(2));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Setup_20_Search(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Search_20_Folders,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(2),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Search_20_Items,TERMINAL(4),TERMINAL(5),ROOT(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Search_20_Items,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Completed_3F_,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Current_20_Search,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Search_20_Folders,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Search_20_Folders,TERMINAL(1),TERMINAL(4),ROOT(5));

result = vpx_instantiate(PARAMETERS,kVPXClass_MacOS_20_File_20_Iterator,1,1,NONE,ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(6),TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Current_20_Search,TERMINAL(5),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Completed_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_5_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_5_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Is_20_Folder_3F_,1,1,TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Valid_20_Subfolder_3F_,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(4)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_5_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_5_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_5_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_5_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Subfolders_3F_,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(4));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Current_20_Subfolders,TERMINAL(0),ROOT(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(1),TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_5_case_1_local_5(PARAMETERS,TERMINAL(0),LIST(1),LIST(2),ROOT(7));
LISTROOT(7,0)
REPEATFINISH
LISTROOTFINISH(7,0)
LISTROOTEND
} else {
ROOTEMPTY(7)
}

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Current_20_Subfolders,TERMINAL(5),TERMINAL(8),ROOT(9));

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"Search Items",ROOT(4));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(4),TERMINAL(3));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(5));

result = vpx_constant(PARAMETERS,"Bulk Names",ROOT(6));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(6),TERMINAL(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name_20_As_20_String,1,1,LIST(1),ROOT(7));
LISTROOT(7,0)
REPEATFINISH
LISTROOTFINISH(7,0)
LISTROOTEND
} else {
ROOTEMPTY(7)
}

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(7),ROOT(8));

result = vpx_constant(PARAMETERS,"Bulk Ref Names",ROOT(9));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(9),TERMINAL(8));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(7),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(2),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,1,TERMINAL(10),TERMINAL(11),ROOT(12));

result = vpx_constant(PARAMETERS,"Ref = Names",ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(12),ROOT(14));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(13),TERMINAL(14));

result = kSuccess;

FOOTER(15)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_6_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_6_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_6_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_6_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,TERMINAL(4))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_6_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_6_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,NONE)
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_6_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_6_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_6_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_6_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Search_20_Items,TERMINAL(0),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_6_case_1_local_4(PARAMETERS,TERMINAL(2),LIST(4),TERMINAL(1),ROOT(5),ROOT(6));
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

result = vpx_set(PARAMETERS,kVPXValue_Search_20_Items,TERMINAL(3),TERMINAL(5),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Collect_20_Found,2,0,TERMINAL(7),TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Search_20_Items,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Completed_3F_,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Bulk_20_Count,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Bulk_20_Pass,6,5,TERMINAL(1),TERMINAL(3),NONE,TERMINAL(2),NONE,TERMINAL(2),ROOT(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(6),TERMINAL(8));

result = vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(6),TERMINAL(8));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1_local_8(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTERWITHNONE(9)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_2_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_2_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Completed_3F_,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Search_20_Folders,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(1),TERMINAL(5),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Search_20_Folders,TERMINAL(4),TERMINAL(6),ROOT(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Subfolders_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Current_20_Subfolders,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_2_local_5_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(4));

result = vpx_constant(PARAMETERS,"(  )",ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Current_20_Subfolders,TERMINAL(3),TERMINAL(5),ROOT(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Current_20_Search,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_2_local_5(PARAMETERS,TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Completed_3F_,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Completed_3F_,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Pass(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Folder_20_Search_2F_Search_20_Pass_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Folder_20_Search_2F_Search_20_Pass_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Folder_20_Search_2F_Collect_20_Found(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"(  )",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Found_20_Items,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Found_20_Items,TERMINAL(2),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Get_20_Completed_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Completed_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Dispose(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Sync_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Sync_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Search_20_Pass,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
FINISHONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Search_20_Sync(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Search,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));

REPEATBEGIN
result = vpx_method_Folder_20_Search_2F_Search_20_Sync_case_1_local_3(PARAMETERS,TERMINAL(0));
REPEATFINISH

result = vpx_get(PARAMETERS,kVPXValue_Found_20_Items,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Search_20_Items,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Get_20_Bulk_20_Count(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"20",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Valid_20_Subfolder_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Folder_20_Search_2F_Valid_20_Subfolder_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"\"(\"",TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(5),TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"\")\"",TERMINAL(7));
NEXTCASEONFAILURE

result = kSuccess;
FAILONSUCCESS

FOOTER(8)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Valid_20_Subfolder_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Folder_20_Search_2F_Valid_20_Subfolder_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_LSCopyItemInfo,2,1,TERMINAL(1),NONE,ROOT(3));
NEXTCASEONFAILURE

result = vpx_extget(PARAMETERS,"flags",1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_extconstant(PARAMETERS,kLSItemInfoIsApplication,ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_test_2D_one_3F_,2,1,TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(7));
NEXTCASEONFAILURE

result = kSuccess;
FAILONSUCCESS

FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Valid_20_Subfolder_3F__case_3_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Folder_20_Search_2F_Valid_20_Subfolder_3F__case_3_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFURLPOSIXPathStyle,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Full_20_Path_20_CFString,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_String,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Valid_20_Subfolder_3F__case_3_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Folder_20_Search_2F_Valid_20_Subfolder_3F__case_3_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Valid_20_Subfolder_3F__case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Folder_20_Search_2F_Valid_20_Subfolder_3F__case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Folder_20_Search_2F_Valid_20_Subfolder_3F__case_3_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Folder_20_Search_2F_Valid_20_Subfolder_3F__case_3_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Folder_20_Search_2F_Valid_20_Subfolder_3F__case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Folder_20_Search_2F_Valid_20_Subfolder_3F__case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Folder_20_Search_2F_Valid_20_Subfolder_3F__case_3_local_2(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"\"/System/Library/Frameworks\"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
FAILONFAILURE

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Valid_20_Subfolder_3F__case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Folder_20_Search_2F_Valid_20_Subfolder_3F__case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Folder_20_Search_2F_Valid_20_Subfolder_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Folder_20_Search_2F_Valid_20_Subfolder_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Folder_20_Search_2F_Valid_20_Subfolder_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Folder_20_Search_2F_Valid_20_Subfolder_3F__case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Folder_20_Search_2F_Valid_20_Subfolder_3F__case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_File_20_Process_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_File_20_Process_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 368 149 }{ 251 322 } */
	tempAttribute = attribute_add("Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("ID",tempClass,tempAttribute_File_20_Process_2F_ID,environment);
	tempAttribute = attribute_add("Permission",tempClass,tempAttribute_File_20_Process_2F_Permission,environment);
	tempAttribute = attribute_add("Position Mode",tempClass,tempAttribute_File_20_Process_2F_Position_20_Mode,environment);
	tempAttribute = attribute_add("Position Offset",tempClass,tempAttribute_File_20_Process_2F_Position_20_Offset,environment);
	tempAttribute = attribute_add("Cache Mode",tempClass,NULL,environment);
	tempAttribute = attribute_add("Verify Reads?",tempClass,tempAttribute_File_20_Process_2F_Verify_20_Reads_3F_,environment);
	tempAttribute = attribute_add("New Line Mode?",tempClass,tempAttribute_File_20_Process_2F_New_20_Line_20_Mode_3F_,environment);
	tempAttribute = attribute_add("New Line Char",tempClass,tempAttribute_File_20_Process_2F_New_20_Line_20_Char,environment);
	tempAttribute = attribute_add("Status",tempClass,tempAttribute_File_20_Process_2F_Status,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 58 833 }{ 780 304 } */
enum opTrigger vpx_method_File_20_Process_2F_Create_20_File_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_File_20_Process_2F_Create_20_File_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_MacOS_20_File_20_Reference,1,1,NONE,ROOT(2));

result = vpx_extconstant(PARAMETERS,kCFURLPOSIXPathStyle,ROOT(3));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(1),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_Path_20_String,4,0,TERMINAL(2),TERMINAL(5),TERMINAL(3),TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Delete,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;
NEXTCASEONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_File_20_Process_2F_Create_20_File_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_File_20_Process_2F_Create_20_File_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_MacOS_20_File_20_Reference,1,1,NONE,ROOT(2));

result = vpx_extconstant(PARAMETERS,kCFURLPOSIXPathStyle,ROOT(3));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_Path_20_String,4,0,TERMINAL(2),TERMINAL(0),TERMINAL(3),TERMINAL(4));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_File,2,2,TERMINAL(2),TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"-48",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(6));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_File_20_Process_2F_Create_20_File_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_File_20_Process_2F_Create_20_File_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_MacOS_20_File_20_Reference,1,1,NONE,ROOT(2));

result = vpx_extconstant(PARAMETERS,kCFURLPOSIXPathStyle,ROOT(3));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(1),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_Path_20_String,4,0,TERMINAL(2),TERMINAL(5),TERMINAL(3),TERMINAL(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_File_20_Process_2F_Create_20_File_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_File_20_Process_2F_Create_20_File_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_File_20_Process_2F_Create_20_File_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_File_20_Process_2F_Create_20_File_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_File_20_Process_2F_Create_20_File_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_File_20_Process_2F_Create_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_File_20_Process_2F_Create_20_File_case_1_local_2(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Reference,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_File_20_Process_2F_Locate_20_File_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_File_20_Process_2F_Locate_20_File_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_MacOS_20_File_20_Reference,1,1,NONE,ROOT(2));

result = vpx_extconstant(PARAMETERS,kCFURLPOSIXPathStyle,ROOT(3));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(1),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_Path_20_String,4,0,TERMINAL(2),TERMINAL(5),TERMINAL(3),TERMINAL(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_File_20_Process_2F_Locate_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_File_20_Process_2F_Locate_20_File_case_1_local_2(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Reference,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_File_20_Process_2F_Open_20_Data_20_Fork_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_File_20_Process_2F_Open_20_Data_20_Fork_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTINTEGER(FSGetDataForkName( GETPOINTER(512,HFSUniStr255,*,ROOT(3),NONE)),2);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(0),ROOT(4));

result = vpx_extget(PARAMETERS,"unicode",1,2,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_extget(PARAMETERS,"length",1,2,TERMINAL(3),ROOT(7),ROOT(8));

PUTINTEGER(FSOpenFork( GETCONSTPOINTER(FSRef,*,TERMINAL(4)),GETINTEGER(TERMINAL(8)),GETCONSTPOINTER(unsigned short,*,TERMINAL(6)),GETINTEGER(TERMINAL(1)),GETPOINTER(2,short,*,ROOT(10),NONE)),9);
result = kSuccess;

result = vpx_method_Get_20_SInt16(PARAMETERS,TERMINAL(10),NONE,ROOT(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
OUTPUT(1,TERMINAL(12))
FOOTERSINGLECASEWITHNONE(13)
}

enum opTrigger vpx_method_File_20_Process_2F_Open_20_Data_20_Fork(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Permission,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_File_20_Process_2F_Open_20_Data_20_Fork_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Status,2,0,TERMINAL(0),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_ID,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_File_20_Process_2F_Write_20_To_20_Fork_case_1_local_2_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_File_20_Process_2F_Write_20_To_20_Fork_case_1_local_2_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"char",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_File_20_Process_2F_Write_20_To_20_Fork_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_File_20_Process_2F_Write_20_To_20_Fork_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(23)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_ID,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Position_20_Mode,1,1,TERMINAL(0),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Position_20_Offset,1,1,TERMINAL(0),ROOT(5));

result = vpx_constant(PARAMETERS,"FSForkIOParam",ROOT(6));

result = vpx_constant(PARAMETERS,"92",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_extset(PARAMETERS,"forkRefNum",2,1,TERMINAL(8),TERMINAL(3),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Write_20_Cache_20_Mode,1,1,TERMINAL(0),ROOT(10));

result = vpx_call_evaluate(PARAMETERS,"A | B",2,1,TERMINAL(4),TERMINAL(10),ROOT(11));

result = vpx_extset(PARAMETERS,"positionMode",2,1,TERMINAL(9),TERMINAL(11),ROOT(12));

result = vpx_extset(PARAMETERS,"positionOffset",2,1,TERMINAL(12),TERMINAL(5),ROOT(13));

result = vpx_extset(PARAMETERS,"requestCount",2,1,TERMINAL(13),TERMINAL(1),ROOT(14));

result = vpx_method_File_20_Process_2F_Write_20_To_20_Fork_case_1_local_2_case_1_local_14(PARAMETERS,TERMINAL(2));

result = vpx_extset(PARAMETERS,"buffer",2,1,TERMINAL(14),TERMINAL(2),ROOT(15));

result = vpx_constant(PARAMETERS,"0",ROOT(16));

result = vpx_constant(PARAMETERS,"4",ROOT(17));

result = vpx_constant(PARAMETERS,"46",ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(15),TERMINAL(18),TERMINAL(17),TERMINAL(16),ROOT(19),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(19),TERMINAL(20),TERMINAL(17),TERMINAL(5),ROOT(21),ROOT(22));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(23)
}

enum opTrigger vpx_method_File_20_Process_2F_Write_20_To_20_Fork(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_File_20_Process_2F_Write_20_To_20_Fork_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

PUTINTEGER(PBWriteForkSync( GETPOINTER(100,FSForkIOParam,*,ROOT(5),TERMINAL(3))),4);
result = kSuccess;

result = vpx_extget(PARAMETERS,"actualCount",1,2,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Status,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_File_20_Process_2F_Write_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_byte_2D_length,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_to_2D_pointer,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Write_20_To_20_Fork,3,1,TERMINAL(0),TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,1,TERMINAL(4),TERMINAL(2),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(4))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_File_20_Process_2F_Read_20_From_20_Fork_case_1_local_2_case_1_local_16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_File_20_Process_2F_Read_20_From_20_Fork_case_1_local_2_case_1_local_16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"char",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_File_20_Process_2F_Read_20_From_20_Fork_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_File_20_Process_2F_Read_20_From_20_Fork_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(25)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_ID,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Position_20_Mode,1,1,TERMINAL(0),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Position_20_Offset,1,1,TERMINAL(0),ROOT(5));

result = vpx_constant(PARAMETERS,"FSForkIOParam",ROOT(6));

result = vpx_constant(PARAMETERS,"92",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_extset(PARAMETERS,"forkRefNum",2,1,TERMINAL(8),TERMINAL(3),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Read_20_Cache_20_Mode,1,1,TERMINAL(0),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Read_20_Verify_20_Mode,1,1,TERMINAL(0),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Read_20_Line_20_Mode,1,1,TERMINAL(0),ROOT(12));

result = vpx_call_evaluate(PARAMETERS,"A | B | C | D",4,1,TERMINAL(4),TERMINAL(10),TERMINAL(11),TERMINAL(12),ROOT(13));

result = vpx_extset(PARAMETERS,"positionMode",2,1,TERMINAL(9),TERMINAL(13),ROOT(14));

result = vpx_extset(PARAMETERS,"positionOffset",2,1,TERMINAL(14),TERMINAL(5),ROOT(15));

result = vpx_extset(PARAMETERS,"requestCount",2,1,TERMINAL(15),TERMINAL(1),ROOT(16));

result = vpx_method_File_20_Process_2F_Read_20_From_20_Fork_case_1_local_2_case_1_local_16(PARAMETERS,TERMINAL(2));

result = vpx_extset(PARAMETERS,"buffer",2,1,TERMINAL(16),TERMINAL(2),ROOT(17));

result = vpx_constant(PARAMETERS,"0",ROOT(18));

result = vpx_constant(PARAMETERS,"4",ROOT(19));

result = vpx_constant(PARAMETERS,"46",ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(17),TERMINAL(20),TERMINAL(19),TERMINAL(18),ROOT(21),ROOT(22));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(21),TERMINAL(22),TERMINAL(19),TERMINAL(5),ROOT(23),ROOT(24));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(25)
}

enum opTrigger vpx_method_File_20_Process_2F_Read_20_From_20_Fork(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_File_20_Process_2F_Read_20_From_20_Fork_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

PUTINTEGER(PBReadForkSync( GETPOINTER(100,FSForkIOParam,*,ROOT(5),TERMINAL(3))),4);
result = kSuccess;

result = vpx_extget(PARAMETERS,"actualCount",1,2,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Status,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_File_20_Process_2F_Read_20_String_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_File_20_Process_2F_Read_20_String_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"8192",ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_File_20_Process_2F_Read_20_String_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_File_20_Process_2F_Read_20_String_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3E_,2,0,TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(1),TERMINAL(3),TERMINAL(0),ROOT(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_File_20_Process_2F_Read_20_String_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_File_20_Process_2F_Read_20_String_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_File_20_Process_2F_Read_20_String_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_File_20_Process_2F_Read_20_String_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_File_20_Process_2F_Read_20_String_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_File_20_Process_2F_Read_20_String_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_File_20_Process_2F_Read_20_String_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_File_20_Process_2F_Read_20_String_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Status,1,1,TERMINAL(0),ROOT(1));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__213D_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_File_20_Process_2F_Read_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_File_20_Process_2F_Read_20_String_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(2));

PUTPOINTER(char,*,NewPtr( GETINTEGER(TERMINAL(2))),3);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Read_20_From_20_Fork,3,1,TERMINAL(0),TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_method_File_20_Process_2F_Read_20_String_case_1_local_5(PARAMETERS,TERMINAL(4),TERMINAL(3),ROOT(5));

DisposePtr( GETPOINTER(1,char,*,ROOT(6),TERMINAL(3)));
result = kSuccess;

result = vpx_method_File_20_Process_2F_Read_20_String_case_1_local_7(PARAMETERS,TERMINAL(0),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
OUTPUT(1,TERMINAL(5))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_File_20_Process_2F_Close_20_Fork(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_ID,1,1,TERMINAL(0),ROOT(1));

PUTINTEGER(FSCloseFork( GETINTEGER(TERMINAL(1))),2);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Status,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_ID,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_File_20_Process_2F_Save_20_String_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_File_20_Process_2F_Save_20_String_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Data_20_Fork,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Write_20_String,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Fork,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_File_20_Process_2F_Save_20_String_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_File_20_Process_2F_Save_20_String_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_File_20_Process_2F_Save_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_File_20_Process_2F_Save_20_String_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_File_20_Process_2F_Save_20_String_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_File_20_Process_2F_Load_20_String_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_File_20_Process_2F_Load_20_String_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Read_20_String,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
FINISHONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_File_20_Process_2F_Load_20_String_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_File_20_Process_2F_Load_20_String_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(2))
OUTPUT(1,NONE)
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_File_20_Process_2F_Load_20_String_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_File_20_Process_2F_Load_20_String_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_File_20_Process_2F_Load_20_String_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_File_20_Process_2F_Load_20_String_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_File_20_Process_2F_Load_20_String_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_File_20_Process_2F_Load_20_String_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Data_20_Fork,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

LISTROOTBEGIN(1)
REPEATBEGIN
result = vpx_method_File_20_Process_2F_Load_20_String_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Fork,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_File_20_Process_2F_Load_20_String_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_File_20_Process_2F_Load_20_String_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = vpx_constant(PARAMETERS,"( )",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_File_20_Process_2F_Load_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_File_20_Process_2F_Load_20_String_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_File_20_Process_2F_Load_20_String_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_File_20_Process_2F_Error_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Status,1,1,TERMINAL(0),ROOT(1));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_File_20_Process_2F_Open_20_Reference(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_LSOpenFSRef,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_File_20_Process_2F_Get_20_Cache_20_Mode(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Cache_20_Mode,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_File_20_Process_2F_Get_20_Reference(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Reference,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_File_20_Process_2F_Get_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_ID,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_File_20_Process_2F_Get_20_New_20_Line_20_Char(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_New_20_Line_20_Char,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_File_20_Process_2F_Get_20_New_20_Line_20_Mode_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_New_20_Line_20_Mode_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_File_20_Process_2F_Get_20_Permission(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Permission,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_File_20_Process_2F_Get_20_Position_20_Mode(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Position_20_Mode,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_File_20_Process_2F_Get_20_Position_20_Offset(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Position_20_Offset,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_File_20_Process_2F_Get_20_Status(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Status,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_File_20_Process_2F_Get_20_Verify_20_Reads_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Verify_20_Reads_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_File_20_Process_2F_Set_20_Cache_20_Mode(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Cache_20_Mode,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_File_20_Process_2F_Set_20_Reference(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Reference,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_File_20_Process_2F_Set_20_New_20_Line_20_Char(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_New_20_Line_20_Char,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_File_20_Process_2F_Set_20_New_20_Line_20_Mode_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_New_20_Line_20_Mode_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_File_20_Process_2F_Set_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_ID,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_File_20_Process_2F_Set_20_Permission(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Permission,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_File_20_Process_2F_Set_20_Position_20_Mode(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Position_20_Mode,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_File_20_Process_2F_Set_20_Position_20_Offset(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Position_20_Offset,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_File_20_Process_2F_Set_20_Status(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Status,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_File_20_Process_2F_Set_20_Verify_20_Reads_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Verify_20_Reads_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_File_20_Process_2F_Get_20_Write_20_Cache_20_Mode_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_File_20_Process_2F_Get_20_Write_20_Cache_20_Mode_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Cache_20_Mode,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_boolean_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,pleaseCacheMask,ROOT(2));

result = vpx_extconstant(PARAMETERS,noCacheMask,ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_File_20_Process_2F_Get_20_Write_20_Cache_20_Mode_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_File_20_Process_2F_Get_20_Write_20_Cache_20_Mode_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_File_20_Process_2F_Get_20_Write_20_Cache_20_Mode(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_File_20_Process_2F_Get_20_Write_20_Cache_20_Mode_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_File_20_Process_2F_Get_20_Write_20_Cache_20_Mode_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_File_20_Process_2F_Get_20_Read_20_Cache_20_Mode_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_File_20_Process_2F_Get_20_Read_20_Cache_20_Mode_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Cache_20_Mode,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_boolean_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,pleaseCacheMask,ROOT(2));

result = vpx_extconstant(PARAMETERS,noCacheMask,ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_File_20_Process_2F_Get_20_Read_20_Cache_20_Mode_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_File_20_Process_2F_Get_20_Read_20_Cache_20_Mode_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_File_20_Process_2F_Get_20_Read_20_Cache_20_Mode(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_File_20_Process_2F_Get_20_Read_20_Cache_20_Mode_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_File_20_Process_2F_Get_20_Read_20_Cache_20_Mode_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_File_20_Process_2F_Get_20_Read_20_Verify_20_Mode_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_File_20_Process_2F_Get_20_Read_20_Verify_20_Mode_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Verify_20_Reads_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_boolean_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,rdVerifyMask,ROOT(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_File_20_Process_2F_Get_20_Read_20_Verify_20_Mode_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_File_20_Process_2F_Get_20_Read_20_Verify_20_Mode_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_File_20_Process_2F_Get_20_Read_20_Verify_20_Mode(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_File_20_Process_2F_Get_20_Read_20_Verify_20_Mode_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_File_20_Process_2F_Get_20_Read_20_Verify_20_Mode_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_File_20_Process_2F_Get_20_Read_20_Line_20_Mode_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_File_20_Process_2F_Get_20_Read_20_Line_20_Mode_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_New_20_Line_20_Mode_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,newLineMask,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_New_20_Line_20_Char,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_evaluate(PARAMETERS,"A << 8",1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(4),TERMINAL(2),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_File_20_Process_2F_Get_20_Read_20_Line_20_Mode_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_File_20_Process_2F_Get_20_Read_20_Line_20_Mode_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_File_20_Process_2F_Get_20_Read_20_Line_20_Mode(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_File_20_Process_2F_Get_20_Read_20_Line_20_Mode_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_File_20_Process_2F_Get_20_Read_20_Line_20_Mode_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_MacOS_20_Bundle_20_Reference_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_MacOS_20_Bundle_20_Reference_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("FS Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Alias Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent URL",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_MacOS_20_Bundle_20_Reference_2F_Error,environment);
	tempAttribute = attribute_add("Additional Data",tempClass,tempAttribute_MacOS_20_Bundle_20_Reference_2F_Additional_20_Data,environment);
	tempAttribute = attribute_add("Bundle",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"MacOS File Reference");
	return kNOERROR;
}

/* Start Universals: { 474 636 }{ 200 300 } */
enum opTrigger vpx_method_MacOS_20_Bundle_20_Reference_2F_Get_20_Bundle(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Bundle,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_Bundle_20_Reference_2F_Set_20_Bundle(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Bundle,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MacOS_20_Bundle_20_Reference_2F_Update_20_Bundle(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Bundle,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Bundle,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_FSRef,2,0,TERMINAL(2),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Bundle,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_MacOS_20_Bundle_20_Reference_2F_Get_20_Bundle_20_Resource_20_FSRef_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Reference_2F_Get_20_Bundle_20_Resource_20_FSRef_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_Bundle_20_Reference_2F_Get_20_Bundle_20_Resource_20_FSRef_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Reference_2F_Get_20_Bundle_20_Resource_20_FSRef_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_MacOS_20_Bundle_20_Reference_2F_Get_20_Bundle_20_Resource_20_FSRef_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MacOS_20_Bundle_20_Reference_2F_Get_20_Bundle_20_Resource_20_FSRef_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_Bundle_20_Reference_2F_Get_20_Bundle_20_Resource_20_FSRef_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MacOS_20_Bundle_20_Reference_2F_Get_20_Bundle_20_Resource_20_FSRef_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_Bundle_20_Reference_2F_Get_20_Bundle_20_Resource_20_FSRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Bundle,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Copy_20_Resource_20_URL,4,1,TERMINAL(2),TERMINAL(1),TERMINAL(3),TERMINAL(3),ROOT(4));
FAILONFAILURE

result = vpx_method_MacOS_20_Bundle_20_Reference_2F_Get_20_Bundle_20_Resource_20_FSRef_case_1_local_6(PARAMETERS,TERMINAL(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_MacOS_20_Bundle_20_Reference_2F_Update_20_FSRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Update_20_FSRef,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Bundle,1,0,TERMINAL(0));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(1)
}

/* Stop Universals */






Nat4	loadClasses_Media_20_Reference(V_Environment environment);
Nat4	loadClasses_Media_20_Reference(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("MacOS File Reference",environment);
	if(result == NULL) return kERROR;
	VPLC_MacOS_20_File_20_Reference_class_load(result,environment);
	result = class_new("MacOS Folder Reference",environment);
	if(result == NULL) return kERROR;
	VPLC_MacOS_20_Folder_20_Reference_class_load(result,environment);
	result = class_new("MacOS Volume Reference",environment);
	if(result == NULL) return kERROR;
	VPLC_MacOS_20_Volume_20_Reference_class_load(result,environment);
	result = class_new("MacOS File Iterator",environment);
	if(result == NULL) return kERROR;
	VPLC_MacOS_20_File_20_Iterator_class_load(result,environment);
	result = class_new("Folder Search",environment);
	if(result == NULL) return kERROR;
	VPLC_Folder_20_Search_class_load(result,environment);
	result = class_new("File Process",environment);
	if(result == NULL) return kERROR;
	VPLC_File_20_Process_class_load(result,environment);
	result = class_new("MacOS Bundle Reference",environment);
	if(result == NULL) return kERROR;
	VPLC_MacOS_20_Bundle_20_Reference_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Media_20_Reference(V_Environment environment);
Nat4	loadUniversals_Media_20_Reference(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("New Folder FSRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_New_20_Folder_20_FSRef,NULL);

	result = method_new("New FSRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_New_20_FSRef,NULL);

	result = method_new("New FSRef From Alias",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_New_20_FSRef_20_From_20_Alias,NULL);

	result = method_new("New FSSpec",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_New_20_FSSpec,NULL);

	result = method_new("Find Media",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Find_20_Media,NULL);

	result = method_new("Find Folder",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Find_20_Folder,NULL);

	result = method_new("Find Users Folder",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Find_20_Users_20_Folder,NULL);

	result = method_new("Formalize POSIX Path",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Formalize_20_POSIX_20_Path,NULL);

	result = method_new("MacOS File Reference/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Close,NULL);

	result = method_new("MacOS File Reference/Close Alias",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Close_20_Alias,NULL);

	result = method_new("MacOS File Reference/Coerce FSRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Coerce_20_FSRef,NULL);

	result = method_new("MacOS File Reference/Coerce FSSpec",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Coerce_20_FSSpec,NULL);

	result = method_new("MacOS File Reference/Compare",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Compare,NULL);

	result = method_new("MacOS File Reference/Create Alias",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Create_20_Alias,NULL);

	result = method_new("MacOS File Reference/Delete",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Delete,NULL);

	result = method_new("MacOS File Reference/Error Debug",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Error_20_Debug,NULL);

	result = method_new("MacOS File Reference/Exchange Objects",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Exchange_20_Objects,NULL);

	result = method_new("MacOS File Reference/Get Alias Record",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Alias_20_Record,NULL);

	result = method_new("MacOS File Reference/Get Display Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Display_20_Name,NULL);

	result = method_new("MacOS File Reference/Get Error",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Error,NULL);

	result = method_new("MacOS File Reference/Get FSRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Get_20_FSRef,NULL);

	result = method_new("MacOS File Reference/Get FSSpec",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Get_20_FSSpec,NULL);

	result = method_new("MacOS File Reference/Get Full Path",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Full_20_Path,NULL);

	result = method_new("MacOS File Reference/Get Full Path CFString",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Full_20_Path_20_CFString,NULL);

	result = method_new("MacOS File Reference/Get Full Path CFURL",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Full_20_Path_20_CFURL,NULL);

	result = method_new("MacOS File Reference/Get Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Name,NULL);

	result = method_new("MacOS File Reference/Get Name As String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Name_20_As_20_String,NULL);

	result = method_new("MacOS File Reference/Get Name As Unicode",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Name_20_As_20_Unicode,NULL);

	result = method_new("MacOS File Reference/Get Parent",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Parent,NULL);

	result = method_new("MacOS File Reference/Get Parent ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Parent_20_ID,NULL);

	result = method_new("MacOS File Reference/Get Reference",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Reference,NULL);

	result = method_new("MacOS File Reference/Get Specification",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Specification,NULL);

	result = method_new("MacOS File Reference/Is Desktop?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Is_20_Desktop_3F_,NULL);

	result = method_new("MacOS File Reference/Is Folder?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Is_20_Folder_3F_,NULL);

	result = method_new("MacOS File Reference/Is In Trash?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Is_20_In_20_Trash_3F_,NULL);

	result = method_new("MacOS File Reference/Move To",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Move_20_To,NULL);

	result = method_new("MacOS File Reference/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_New,NULL);

	result = method_new("MacOS File Reference/New From Alias",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Alias,NULL);

	result = method_new("MacOS File Reference/New From CFString",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_CFString,NULL);

	result = method_new("MacOS File Reference/New From CFURL",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_CFURL,NULL);

	result = method_new("MacOS File Reference/New From FSRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_FSRef,NULL);

	result = method_new("MacOS File Reference/New From FSSpec",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_FSSpec,NULL);

	result = method_new("MacOS File Reference/New From Path String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Path_20_String,NULL);

	result = method_new("MacOS File Reference/New From Unicode",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_New_20_From_20_Unicode,NULL);

	result = method_new("MacOS File Reference/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Open,NULL);

	result = method_new("MacOS File Reference/Open Update",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Open_20_Update,NULL);

	result = method_new("MacOS File Reference/Rename",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Rename,NULL);

	result = method_new("MacOS File Reference/Rename CFString",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_CFString,NULL);

	result = method_new("MacOS File Reference/Rename Unicode",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Rename_20_Unicode,NULL);

	result = method_new("MacOS File Reference/Resolve Alias File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Resolve_20_Alias_20_File,NULL);

	result = method_new("MacOS File Reference/Set Alias Record",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Alias_20_Record,NULL);

	result = method_new("MacOS File Reference/Set Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Name,NULL);

	result = method_new("MacOS File Reference/Set Name As String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Name_20_As_20_String,NULL);

	result = method_new("MacOS File Reference/Set Name As Unicode",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Name_20_As_20_Unicode,NULL);

	result = method_new("MacOS File Reference/Set Parent URL",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Parent_20_URL,NULL);

	result = method_new("MacOS File Reference/Set Reference",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Reference,NULL);

	result = method_new("MacOS File Reference/Update Alias",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Update_20_Alias,NULL);

	result = method_new("MacOS File Reference/Update All",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Update_20_All,NULL);

	result = method_new("MacOS File Reference/Update FSCatInfo",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Update_20_FSCatInfo,NULL);

	result = method_new("MacOS File Reference/Update FSRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Update_20_FSRef,NULL);

	result = method_new("MacOS File Reference/Update Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Update_20_Name,NULL);

	result = method_new("MacOS File Reference/~FNNotify",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F7E_FNNotify,NULL);

	result = method_new("MacOS File Reference/~FSGetCatalogInfo",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo,NULL);

	result = method_new("MacOS File Reference/~FSGetCatalogInfo NodeFlag",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_20_NodeFlag,NULL);

	result = method_new("MacOS File Reference/~FSpMakeFSRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F7E_FSpMakeFSRef,NULL);

	result = method_new("MacOS File Reference/~LSOpenFSRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F7E_LSOpenFSRef,NULL);

	result = method_new("MacOS File Reference/~~Extract FSCatInfo",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F7E7E_Extract_20_FSCatInfo,NULL);

	result = method_new("MacOS File Reference/~~Param Error",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F7E7E_Param_20_Error,NULL);

	result = method_new("MacOS File Reference/~~Update Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F7E7E_Update_20_Data,NULL);

	result = method_new("MacOS File Reference/Get Directory Items",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Directory_20_Items,NULL);

	result = method_new("MacOS File Reference/~FSGetCatalogInfo FInfo",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_20_FInfo,NULL);

	result = method_new("MacOS File Reference/Get Finder Info",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Finder_20_Info,NULL);

	result = method_new("MacOS File Reference/Read Object File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Object_20_File,NULL);

	result = method_new("MacOS File Reference/Read Text File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Read_20_Text_20_File,NULL);

	result = method_new("MacOS File Reference/~FSGetCatalogInfo FXInfo",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F7E_FSGetCatalogInfo_20_FXInfo,NULL);

	result = method_new("MacOS File Reference/Get FX ScriptCode",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Get_20_FX_20_ScriptCode,NULL);

	result = method_new("MacOS File Reference/Create File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Create_20_File,NULL);

	result = method_new("MacOS File Reference/Create Directory",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Create_20_Directory,NULL);

	result = method_new("MacOS File Reference/~LSCopyItemInfo",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F7E_LSCopyItemInfo,NULL);

	result = method_new("MacOS File Reference/Get Bundle Resource FSRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Bundle_20_Resource_20_FSRef,NULL);

	result = method_new("MacOS File Reference/~FSSetCatalogInfo",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F7E_FSSetCatalogInfo,NULL);

	result = method_new("MacOS File Reference/Set Finder Info",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Set_20_Finder_20_Info,NULL);

	result = method_new("MacOS File Reference/Get Item UTI",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Get_20_Item_20_UTI,NULL);

	result = method_new("MacOS File Reference/Error Accept",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Reference_2F_Error_20_Accept,NULL);

	result = method_new("MacOS Folder Reference/Capture App Folder",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_App_20_Folder,NULL);

	result = method_new("MacOS Folder Reference/Capture Folder Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Folder_20_Type,NULL);

	result = method_new("MacOS Folder Reference/Capture Path",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Folder_20_Reference_2F_Capture_20_Path,NULL);

	result = method_new("MacOS Folder Reference/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Folder_20_Reference_2F_New,NULL);

	result = method_new("MacOS File Iterator/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Iterator_2F_Close,NULL);

	result = method_new("MacOS File Iterator/Get Depth Flag",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Iterator_2F_Get_20_Depth_20_Flag,NULL);

	result = method_new("MacOS File Iterator/Get Folder",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Iterator_2F_Get_20_Folder,NULL);

	result = method_new("MacOS File Iterator/Get Reference",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Iterator_2F_Get_20_Reference,NULL);

	result = method_new("MacOS File Iterator/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Iterator_2F_Open,NULL);

	result = method_new("MacOS File Iterator/Set Folder",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Iterator_2F_Set_20_Folder,NULL);

	result = method_new("MacOS File Iterator/Set Reference",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Iterator_2F_Set_20_Reference,NULL);

	result = method_new("MacOS File Iterator/~FSGetCatalogInfoBulk",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Iterator_2F7E_FSGetCatalogInfoBulk,NULL);

	result = method_new("MacOS File Iterator/Bulk Pass",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_File_20_Iterator_2F_Bulk_20_Pass,NULL);

	result = method_new("Folder Search/Setup Search",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Folder_20_Search_2F_Setup_20_Search,NULL);

	result = method_new("Folder Search/Search Pass",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Folder_20_Search_2F_Search_20_Pass,NULL);

	result = method_new("Folder Search/Collect Found",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Folder_20_Search_2F_Collect_20_Found,NULL);

	result = method_new("Folder Search/Get Completed?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Folder_20_Search_2F_Get_20_Completed_3F_,NULL);

	result = method_new("Folder Search/Dispose",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Folder_20_Search_2F_Dispose,NULL);

	result = method_new("Folder Search/Search Sync",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Folder_20_Search_2F_Search_20_Sync,NULL);

	result = method_new("Folder Search/Get Bulk Count",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Folder_20_Search_2F_Get_20_Bulk_20_Count,NULL);

	result = method_new("Folder Search/Valid Subfolder?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Folder_20_Search_2F_Valid_20_Subfolder_3F_,NULL);

	result = method_new("File Process/Create File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Create_20_File,NULL);

	result = method_new("File Process/Locate File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Locate_20_File,NULL);

	result = method_new("File Process/Open Data Fork",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Open_20_Data_20_Fork,NULL);

	result = method_new("File Process/Write To Fork",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Write_20_To_20_Fork,NULL);

	result = method_new("File Process/Write String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Write_20_String,NULL);

	result = method_new("File Process/Read From Fork",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Read_20_From_20_Fork,NULL);

	result = method_new("File Process/Read String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Read_20_String,NULL);

	result = method_new("File Process/Close Fork",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Close_20_Fork,NULL);

	result = method_new("File Process/Save String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Save_20_String,NULL);

	result = method_new("File Process/Load String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Load_20_String,NULL);

	result = method_new("File Process/Error?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Error_3F_,NULL);

	result = method_new("File Process/Open Reference",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Open_20_Reference,NULL);

	result = method_new("File Process/Get Cache Mode",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Get_20_Cache_20_Mode,NULL);

	result = method_new("File Process/Get Reference",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Get_20_Reference,NULL);

	result = method_new("File Process/Get ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Get_20_ID,NULL);

	result = method_new("File Process/Get New Line Char",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Get_20_New_20_Line_20_Char,NULL);

	result = method_new("File Process/Get New Line Mode?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Get_20_New_20_Line_20_Mode_3F_,NULL);

	result = method_new("File Process/Get Permission",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Get_20_Permission,NULL);

	result = method_new("File Process/Get Position Mode",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Get_20_Position_20_Mode,NULL);

	result = method_new("File Process/Get Position Offset",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Get_20_Position_20_Offset,NULL);

	result = method_new("File Process/Get Status",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Get_20_Status,NULL);

	result = method_new("File Process/Get Verify Reads?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Get_20_Verify_20_Reads_3F_,NULL);

	result = method_new("File Process/Set Cache Mode",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Set_20_Cache_20_Mode,NULL);

	result = method_new("File Process/Set Reference",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Set_20_Reference,NULL);

	result = method_new("File Process/Set New Line Char",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Set_20_New_20_Line_20_Char,NULL);

	result = method_new("File Process/Set New Line Mode?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Set_20_New_20_Line_20_Mode_3F_,NULL);

	result = method_new("File Process/Set ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Set_20_ID,NULL);

	result = method_new("File Process/Set Permission",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Set_20_Permission,NULL);

	result = method_new("File Process/Set Position Mode",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Set_20_Position_20_Mode,NULL);

	result = method_new("File Process/Set Position Offset",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Set_20_Position_20_Offset,NULL);

	result = method_new("File Process/Set Status",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Set_20_Status,NULL);

	result = method_new("File Process/Set Verify Reads?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Set_20_Verify_20_Reads_3F_,NULL);

	result = method_new("File Process/Get Write Cache Mode",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Get_20_Write_20_Cache_20_Mode,NULL);

	result = method_new("File Process/Get Read Cache Mode",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Get_20_Read_20_Cache_20_Mode,NULL);

	result = method_new("File Process/Get Read Verify Mode",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Get_20_Read_20_Verify_20_Mode,NULL);

	result = method_new("File Process/Get Read Line Mode",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Process_2F_Get_20_Read_20_Line_20_Mode,NULL);

	result = method_new("MacOS Bundle Reference/Get Bundle",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Bundle_20_Reference_2F_Get_20_Bundle,NULL);

	result = method_new("MacOS Bundle Reference/Set Bundle",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Bundle_20_Reference_2F_Set_20_Bundle,NULL);

	result = method_new("MacOS Bundle Reference/Update Bundle",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Bundle_20_Reference_2F_Update_20_Bundle,NULL);

	result = method_new("MacOS Bundle Reference/Get Bundle Resource FSRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Bundle_20_Reference_2F_Get_20_Bundle_20_Resource_20_FSRef,NULL);

	result = method_new("MacOS Bundle Reference/Update FSRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_Bundle_20_Reference_2F_Update_20_FSRef,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_Media_20_Reference(V_Environment environment);
Nat4	loadPersistents_Media_20_Reference(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_Media_20_Reference(V_Environment environment);
Nat4	load_Media_20_Reference(V_Environment environment)
{

	loadClasses_Media_20_Reference(environment);
	loadUniversals_Media_20_Reference(environment);
	loadPersistents_Media_20_Reference(environment);
	return kNOERROR;

}

