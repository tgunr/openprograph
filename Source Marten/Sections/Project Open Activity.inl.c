/* A VPL Section File */
/*

Project Open Activity.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

PUTINTEGER(FSFindFolder( GETINTEGER(TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETPOINTER(144,FSRef,*,ROOT(4),NONE)),3);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_3_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_3_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_3_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_3_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_3_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_3_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_3_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_3_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kUserDomain,ROOT(1));

result = vpx_extconstant(PARAMETERS,kDomainLibraryFolderType,ROOT(2));

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_3_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Full_20_Path_20_CFURL,1,1,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

result = vpx_constant(PARAMETERS,"Marten",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Copy_20_Appending_20_Path_20_Component,3,1,TERMINAL(4),TERMINAL(6),TERMINAL(5),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
NEXTCASEONSUCCESS

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_3_case_1_local_11(PARAMETERS,TERMINAL(7),ROOT(8));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

PUTINTEGER(FSFindFolder( GETINTEGER(TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETPOINTER(144,FSRef,*,ROOT(4),NONE)),3);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_4_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_4_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_4_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_4_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_4_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_4_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_4_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_4_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kLocalDomain,ROOT(1));

result = vpx_extconstant(PARAMETERS,kDomainLibraryFolderType,ROOT(2));

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Full_20_Path_20_CFURL,1,1,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

result = vpx_constant(PARAMETERS,"Marten",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Copy_20_Appending_20_Path_20_Component,3,1,TERMINAL(4),TERMINAL(6),TERMINAL(5),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
NEXTCASEONSUCCESS

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_4_case_1_local_11(PARAMETERS,TERMINAL(7),ROOT(8));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

PUTINTEGER(FSFindFolder( GETINTEGER(TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETPOINTER(144,FSRef,*,ROOT(4),NONE)),3);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_5_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_5_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_5_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_5_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_5_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_5_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_5_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_5_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kNetworkDomain,ROOT(1));

result = vpx_extconstant(PARAMETERS,kDomainLibraryFolderType,ROOT(2));

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_5_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Full_20_Path_20_CFURL,1,1,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

result = vpx_constant(PARAMETERS,"Marten",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Copy_20_Appending_20_Path_20_Component,3,1,TERMINAL(4),TERMINAL(6),TERMINAL(5),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
NEXTCASEONSUCCESS

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_5_case_1_local_11(PARAMETERS,TERMINAL(7),ROOT(8));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_6_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_6_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

PUTINTEGER(FSFindFolder( GETINTEGER(TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETPOINTER(144,FSRef,*,ROOT(4),NONE)),3);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_6_case_2_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_6_case_2_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_6_case_2_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_6_case_2_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_6_case_2_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_6_case_2_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_6_case_2_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_6_case_2_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kSystemDomain,ROOT(1));

result = vpx_extconstant(PARAMETERS,kDomainLibraryFolderType,ROOT(2));

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_6_case_2_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Full_20_Path_20_CFURL,1,1,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

result = vpx_constant(PARAMETERS,"Marten",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Copy_20_Appending_20_Path_20_Component,3,1,TERMINAL(4),TERMINAL(6),TERMINAL(5),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
NEXTCASEONSUCCESS

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_6_case_2_local_11(PARAMETERS,TERMINAL(7),ROOT(8));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_6_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

PUTINTEGER(FSFindFolder( GETINTEGER(TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETPOINTER(144,FSRef,*,ROOT(4),NONE)),3);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kUserDomain,ROOT(1));

result = vpx_extconstant(PARAMETERS,kFrameworksFolderType,ROOT(2));

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_7_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_8_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_8_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

PUTINTEGER(FSFindFolder( GETINTEGER(TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETPOINTER(144,FSRef,*,ROOT(4),NONE)),3);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kLocalDomain,ROOT(1));

result = vpx_extconstant(PARAMETERS,kFrameworksFolderType,ROOT(2));

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_8_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_9_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_9_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

PUTINTEGER(FSFindFolder( GETINTEGER(TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETPOINTER(144,FSRef,*,ROOT(4),NONE)),3);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kNetworkDomain,ROOT(1));

result = vpx_extconstant(PARAMETERS,kFrameworksFolderType,ROOT(2));

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_9_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_10_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_10_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

PUTINTEGER(FSFindFolder( GETINTEGER(TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETPOINTER(144,FSRef,*,ROOT(4),NONE)),3);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kSystemDomain,ROOT(1));

result = vpx_extconstant(PARAMETERS,kFrameworksFolderType,ROOT(2));

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_10_case_2_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_5(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_6(PARAMETERS,TERMINAL(4),ROOT(5));

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_7(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_8(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_9(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_1_local_10(PARAMETERS,TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

PUTINTEGER(FSFindFolder( GETINTEGER(TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETPOINTER(144,FSRef,*,ROOT(4),NONE)),3);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_3_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_3_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_3_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_3_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_3_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_3_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_3_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_3_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kUserDomain,ROOT(1));

result = vpx_extconstant(PARAMETERS,kDomainLibraryFolderType,ROOT(2));

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_3_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Full_20_Path_20_CFURL,1,1,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

result = vpx_constant(PARAMETERS,"Marten",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Copy_20_Appending_20_Path_20_Component,3,1,TERMINAL(4),TERMINAL(6),TERMINAL(5),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
NEXTCASEONSUCCESS

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_3_case_1_local_11(PARAMETERS,TERMINAL(7),ROOT(8));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

PUTINTEGER(FSFindFolder( GETINTEGER(TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETPOINTER(144,FSRef,*,ROOT(4),NONE)),3);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_4_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_4_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_4_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_4_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_4_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_4_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_4_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_4_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kLocalDomain,ROOT(1));

result = vpx_extconstant(PARAMETERS,kDomainLibraryFolderType,ROOT(2));

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_4_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Full_20_Path_20_CFURL,1,1,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

result = vpx_constant(PARAMETERS,"Marten",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Copy_20_Appending_20_Path_20_Component,3,1,TERMINAL(4),TERMINAL(6),TERMINAL(5),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
NEXTCASEONSUCCESS

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_4_case_1_local_11(PARAMETERS,TERMINAL(7),ROOT(8));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_3(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_2_local_4(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_3_local_2_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_3_local_2_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_3_local_2_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_3_local_2_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_3_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_3_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Add_20_Search_20_Locations_case_3_local_2_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_Add_20_Search_20_Locations_case_3_local_2_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_3_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_3_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(4)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_URL,1,1,NONE,ROOT(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Capture_20_Main_20_Bundle,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_3_local_2_case_1_local_4(PARAMETERS,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parent,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_3_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_3_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(0));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Add_20_Search_20_Locations_case_3_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,root0))
vpx_method_VPL_20_Add_20_Search_20_Locations_case_3_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_VPL_20_Add_20_Search_20_Locations_case_3_local_2(PARAMETERS,ROOT(1));

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_VPL_20_Add_20_Search_20_Locations(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Add_20_Search_20_Locations_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_VPL_20_Add_20_Search_20_Locations_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_Add_20_Search_20_Locations_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}




	Nat4 tempAttribute_Project_20_Open_20_Activity_2F_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X02340006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000000C, 0X4F70656E, 0X2050726F, 0X6A656374,
0000000000
	};
	Nat4 tempAttribute_Project_20_Open_20_Activity_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Open_20_Activity_2F_Completed_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Open_20_Activity_2F_Completion_20_Callback[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Open_20_Activity_2F_Attachments[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Open_20_Activity_2F_Progress[] = {
0000000000, 0X00000104, 0X00000040, 0X0000000B, 0X00000014, 0X00000088, 0X00000120, 0X00000084,
0X00000100, 0X00000080, 0X000000D8, 0X0000007C, 0X00000078, 0X00000074, 0X00000054, 0X0000005C,
0X00A70008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000074, 0X00000008, 0X00000060,
0X41637469, 0X76697479, 0X2050726F, 0X67726573, 0X73000000, 0X00000094, 0X000000AC, 0X000000C4,
0X000000EC, 0X0000010C, 0X0000012C, 0000000000, 0000000000, 0X02D30004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X0AC20004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X02D20006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000E0, 0X00000008,
0X556E7469, 0X746C6564, 0000000000, 0X02D30006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000108, 0000000000, 0000000000, 0X02D30006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000128, 0000000000, 0000000000, 0X02DD0004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000
	};
	Nat4 tempAttribute_Project_20_Open_20_Activity_2F_Stages[] = {
0000000000, 0X0000028C, 0X00000078, 0X00000019, 0X00000014, 0X000002E8, 0X000000C0, 0X000002B4,
0X000000BC, 0X00000284, 0X000000B8, 0X00000258, 0X000000B4, 0X00000224, 0X000000B0, 0X000001F4,
0X000000AC, 0X000001C0, 0X000000A8, 0X00000190, 0X000000A4, 0X00000160, 0X000000A0, 0X00000130,
0X0000009C, 0X00000104, 0X00000098, 0X000000D8, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X0000000C, 0X000000C4, 0X000000F0, 0X0000011C,
0X0000014C, 0X0000017C, 0X000001AC, 0X000001E0, 0X00000210, 0X00000244, 0X00000270, 0X000002A0,
0X000002D4, 0X023C0006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000E0, 0X0000000E,
0X504F4153, 0X204C6F61, 0X64204669, 0X6C650000, 0X023C0006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000010C, 0X0000000F, 0X504F4153, 0X2046696E, 0X64204669, 0X6C657300, 0X53650006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X00000012, 0X504F4153, 0X20526561,
0X64205365, 0X6374696F, 0X6E730000, 0X021B0006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000168, 0X00000011, 0X504F4153, 0X204F7065, 0X6E205072, 0X6F6A6563, 0X74000000, 0X09F30006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000198, 0X00000013, 0X504F4153, 0X20436F70,
0X79205265, 0X736F7572, 0X63657300, 0X50720006, 0000000000, 0000000000, 0000000000, 0000000000,
0X000001C8, 0X00000014, 0X504F4153, 0X20526561, 0X64205072, 0X696D6974, 0X69766573, 0000000000,
0X53650006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001FC, 0X00000012, 0X504F4153,
0X204F7065, 0X6E205365, 0X6374696F, 0X6E730000, 0X52650006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000022C, 0X00000017, 0X504F4153, 0X20526573, 0X6F6C7665, 0X20526566, 0X6572656E,
0X63657300, 0X023C0006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000260, 0X0000000E,
0X504F4153, 0X20506F73, 0X74204C6F, 0X61640000, 0X436C0006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000028C, 0X00000013, 0X504F4153, 0X20557064, 0X61746520, 0X436C6173, 0X73657300,
0X50650006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002BC, 0X00000017, 0X504F4153,
0X20557064, 0X61746520, 0X50657273, 0X69737465, 0X6E747300, 0X45640006, 0000000000, 0000000000,
0000000000, 0000000000, 0X000002F0, 0X00000010, 0X504F4153, 0X204F7065, 0X6E204564, 0X69746F72,
0000000000
	};
	Nat4 tempAttribute_Project_20_Open_20_Activity_2F_Completed_20_Stages[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Open_20_Activity_2F_Section_20_Files[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Open_20_Activity_2F_Primitive_20_Files[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Open_20_Activity_2F_Other_20_Files[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Open_20_Activity_2F_Items_20_To_20_Open[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X03950007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_File_20_Activity_20_Stage_2F_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000000E, 0X556E7469, 0X746C6564, 0X20537461,
0X67650000
	};
	Nat4 tempAttribute_Project_20_File_20_Activity_20_Stage_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_File_20_Activity_20_Stage_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Load_20_File_2F_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000000F, 0X4C6F6164, 0X696E6720, 0X50726F6A,
0X65637400
	};
	Nat4 tempAttribute_POAS_20_Load_20_File_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Load_20_File_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Find_20_Files_2F_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X02380006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000000D, 0X46696E64, 0X696E6720, 0X46696C65,
0X73000000
	};
	Nat4 tempAttribute_POAS_20_Find_20_Files_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Find_20_Files_2F_Folder_20_Search[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Find_20_Files_2F_Manual_20_Locations[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Find_20_Files_2F_Manual_20_Items[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Read_20_Primitives_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X4C690006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000011, 0X4C6F6164, 0X696E6720, 0X4C696272,
0X61726965, 0X73000000
	};
	Nat4 tempAttribute_POAS_20_Read_20_Primitives_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Read_20_Primitives_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Read_20_Sections_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X53650006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000010, 0X52656164, 0X696E6720, 0X53656374,
0X696F6E73, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Read_20_Sections_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Read_20_Sections_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Open_20_Project_2F_Name[] = {
0000000000, 0X00000034, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000017, 0X53746172, 0X74696E67, 0X2052756E,
0X74696D65, 0X20456E67, 0X696E6500
	};
	Nat4 tempAttribute_POAS_20_Open_20_Project_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Open_20_Project_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Open_20_Sections_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X039D0006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000012, 0X4F70656E, 0X696E6720, 0X436F6D70,
0X6F6E656E, 0X74730000
	};
	Nat4 tempAttribute_POAS_20_Open_20_Sections_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Open_20_Sections_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Open_20_Sections_2F_Open_20_Stack[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Resolve_20_References_2F_Name[] = {
0000000000, 0X00000034, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X52650006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000014, 0X5265736F, 0X6C76696E, 0X67205265,
0X66657265, 0X6E636573, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Resolve_20_References_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Resolve_20_References_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Resolve_20_References_2F_Class_20_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X02320007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Resolve_20_References_2F_Whole_20_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X02320007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Post_20_Load_2F_Name[] = {
0000000000, 0X00000034, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X50720006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000014, 0X506F7374, 0X204C6F61, 0X64205072,
0X6F636573, 0X73696E67, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Post_20_Load_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Post_20_Load_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Update_20_Classes_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X436C0006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000010, 0X55706461, 0X74696E67, 0X20436C61,
0X73736573, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Update_20_Classes_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Update_20_Classes_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Update_20_Classes_2F_Class_20_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X02320007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Update_20_Classes_2F_Whole_20_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X02320007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Update_20_Persistents_2F_Name[] = {
0000000000, 0X00000034, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X50650006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000014, 0X55706461, 0X74696E67, 0X20506572,
0X73697374, 0X656E7473, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Update_20_Persistents_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Update_20_Persistents_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Update_20_Persistents_2F_Class_20_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X02320007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Update_20_Persistents_2F_Whole_20_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X02320007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Install_20_Tools_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X546F0006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000010, 0X496E7374, 0X616C6C69, 0X6E672054,
0X6F6F6C73, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Install_20_Tools_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Install_20_Tools_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Copy_20_Resources_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X09930006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000012, 0X55706461, 0X74696E67, 0X20526573,
0X6F757263, 0X65730000
	};
	Nat4 tempAttribute_POAS_20_Copy_20_Resources_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Copy_20_Resources_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Open_20_Editor_2F_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000000E, 0X4F70656E, 0X696E6720, 0X45646974,
0X6F720000
	};
	Nat4 tempAttribute_POAS_20_Open_20_Editor_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Open_20_Editor_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Name_20_Application_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000010, 0X4E616D65, 0X20417070, 0X6C696361,
0X74696F6E, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Name_20_Application_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Name_20_Application_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Locate_20_Files_20_Manually_2F_Name[] = {
0000000000, 0X00000034, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000017, 0X5265736F, 0X6C76696E, 0X67204D69,
0X7373696E, 0X67204669, 0X6C657300
	};
	Nat4 tempAttribute_PFAS_20_Locate_20_Files_20_Manually_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Locate_20_Files_20_Manually_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Locate_20_Files_20_Manually_2F_Stack[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Event_20_Callback_20_Behavior[] = {
0000000000, 0X00000350, 0X000000A0, 0X00000023, 0X00000014, 0X00000100, 0X000003BC, 0X000000F4,
0X00000390, 0X000000F0, 0X00000364, 0X000000EC, 0X00000330, 0X000000E8, 0X000000E4, 0X000000E0,
0X000002B8, 0X000002C0, 0X00000194, 0X00000288, 0X00000264, 0X0000026C, 0X00000190, 0X00000234,
0X00000210, 0X00000218, 0X0000018C, 0X000001EC, 0X000001D4, 0X000001AC, 0X000001B4, 0X00000188,
0X00000180, 0X000000DC, 0X00000150, 0X000000D8, 0X00000118, 0X000000D0, 0X000000B4, 0X000000BC,
0X00190008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000D0, 0X0000000D, 0X000000C0,
0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000104, 0000000000, 0X0000013C, 0X0000016C,
0X000002E4, 0X00000300, 0X0000031C, 0X00000350, 0X0000037C, 0X000003A8, 0000000000, 0000000000,
0X000003D8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000120, 0X00000019,
0X4E617669, 0X67617469, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000158, 0X00000010, 0X2F4E6176, 0X4576656E,
0X74205369, 0X6D706C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000004, 0X00000198, 0X000001FC, 0X00000250, 0X000002A4, 0X00150008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D4, 0X00000001, 0X000001B8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000001D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0X00000005, 0X4F776E65, 0X72000000, 0X00170008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000234, 0X00000001, 0X0000021C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000238, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X00170008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000288, 0X00000001, 0X00000270, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X0000028C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X00150008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000338, 0X00000016, 0X2F446F20, 0X43616C6C,
0X6261636B, 0X204E6F20, 0X52657375, 0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0000000F, 0X4E617645, 0X76656E74, 0X50726F63, 0X50747200, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0000000E, 0X4E65774E, 0X61764576,
0X656E7455, 0X50500000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C4,
0X00000012, 0X44697370, 0X6F73654E, 0X61764576, 0X656E7455, 0X50500000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0000000B, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0000000C, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000013, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X00000013, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0000000E, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X00000007,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Last_20_Height[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Last_20_Width[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_Project_20_Open_20_Activity_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Project_20_Open_20_Activity_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 256 45 }{ 333 396 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Project_20_Open_20_Activity_2F_Name,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Project_20_Open_20_Activity_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Completed?",tempClass,tempAttribute_Project_20_Open_20_Activity_2F_Completed_3F_,environment);
	tempAttribute = attribute_add("Completion Callback",tempClass,tempAttribute_Project_20_Open_20_Activity_2F_Completion_20_Callback,environment);
	tempAttribute = attribute_add("Attachments",tempClass,tempAttribute_Project_20_Open_20_Activity_2F_Attachments,environment);
	tempAttribute = attribute_add("Progress",tempClass,tempAttribute_Project_20_Open_20_Activity_2F_Progress,environment);
	tempAttribute = attribute_add("Stages",tempClass,tempAttribute_Project_20_Open_20_Activity_2F_Stages,environment);
	tempAttribute = attribute_add("Current Stage",tempClass,NULL,environment);
	tempAttribute = attribute_add("Completed Stages",tempClass,tempAttribute_Project_20_Open_20_Activity_2F_Completed_20_Stages,environment);
	tempAttribute = attribute_add("Project File",tempClass,NULL,environment);
	tempAttribute = attribute_add("Project Data",tempClass,NULL,environment);
	tempAttribute = attribute_add("Section Files",tempClass,tempAttribute_Project_20_Open_20_Activity_2F_Section_20_Files,environment);
	tempAttribute = attribute_add("Primitive Files",tempClass,tempAttribute_Project_20_Open_20_Activity_2F_Primitive_20_Files,environment);
	tempAttribute = attribute_add("Other Files",tempClass,tempAttribute_Project_20_Open_20_Activity_2F_Other_20_Files,environment);
	tempAttribute = attribute_add("Items To Open",tempClass,tempAttribute_Project_20_Open_20_Activity_2F_Items_20_To_20_Open,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Activity Staged");
	return kNOERROR;
}

/* Start Universals: { 350 812 }{ 200 300 } */
enum opTrigger vpx_method_Project_20_Open_20_Activity_2F_Error(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Cancel,1,0,TERMINAL(0));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Open_20_Activity_2F_Get_20_Project_20_Helper(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Project_20_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Open_20_Activity_2F_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Run,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Synchronize,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Open_20_Activity_2F_Initialize_20_Progress_20_Window_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Open_20_Activity_2F_Initialize_20_Progress_20_Window_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Project_20_Data,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Title,2,0,TERMINAL(1),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Open_20_Activity_2F_Initialize_20_Progress_20_Window_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Open_20_Activity_2F_Initialize_20_Progress_20_Window_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Alias,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Alias_20_Record,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_Set_20_Proxy_20_Alias,2,0,TERMINAL(0),TERMINAL(2));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Open_20_Activity_2F_Initialize_20_Progress_20_Window_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Open_20_Activity_2F_Initialize_20_Progress_20_Window_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Project_20_File,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_method_Project_20_Open_20_Activity_2F_Initialize_20_Progress_20_Window_case_1_local_3_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Open_20_Activity_2F_Initialize_20_Progress_20_Window(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Open_20_Activity_2F_Initialize_20_Progress_20_Window_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_method_Project_20_Open_20_Activity_2F_Initialize_20_Progress_20_Window_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_Project_20_File_20_Activity_20_Stage_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Project_20_File_20_Activity_20_Stage_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Project_20_File_20_Activity_20_Stage_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_Project_20_File_20_Activity_20_Stage_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_Project_20_File_20_Activity_20_Stage_2F_Count_20_Completed,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Project_20_File_20_Activity_20_Stage_2F_Run_20_Begin(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Activity_20_Name,2,0,TERMINAL(1),TERMINAL(2));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Run_20_Begin,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Primary_20_Prompt,2,0,TERMINAL(1),TERMINAL(3));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Percent,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_File_20_Activity_20_Stage_2F_Update_20_Percent_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_File_20_Activity_20_Stage_2F_Update_20_Percent_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Count_20_Max,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Count_20_Completed,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_min,2,1,TERMINAL(4),TERMINAL(2),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(5),TERMINAL(2),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_File_20_Activity_20_Stage_2F_Update_20_Percent_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_File_20_Activity_20_Stage_2F_Update_20_Percent_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_File_20_Activity_20_Stage_2F_Update_20_Percent_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_File_20_Activity_20_Stage_2F_Update_20_Percent_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_File_20_Activity_20_Stage_2F_Update_20_Percent_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_File_20_Activity_20_Stage_2F_Update_20_Percent_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_File_20_Activity_20_Stage_2F_Update_20_Percent(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_File_20_Activity_20_Stage_2F_Update_20_Percent_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Progress_20_Percent,2,0,TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_File_20_Activity_20_Stage_2F_Up_20_Count_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_File_20_Activity_20_Stage_2F_Up_20_Count_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_File_20_Activity_20_Stage_2F_Up_20_Count_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_File_20_Activity_20_Stage_2F_Up_20_Count_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Project_20_File_20_Activity_20_Stage_2F_Up_20_Count_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_File_20_Activity_20_Stage_2F_Up_20_Count_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_File_20_Activity_20_Stage_2F_Up_20_Count_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_File_20_Activity_20_Stage_2F_Up_20_Count_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_File_20_Activity_20_Stage_2F_Up_20_Count(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Count_20_Completed,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method_Project_20_File_20_Activity_20_Stage_2F_Up_20_Count_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Count,3,0,TERMINAL(0),TERMINAL(6),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_File_20_Activity_20_Stage_2F_Set_20_Count(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Count_20_Completed,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Percent,2,0,TERMINAL(3),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

/* Stop Universals */



Nat4 VPLC_POAS_20_Load_20_File_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Load_20_File_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Load_20_File_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Load_20_File_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Load_20_File_2F_Count_20_Completed,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 145 719 }{ 200 300 } */
enum opTrigger vpx_method_POAS_20_Load_20_File_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Load_20_File_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Project_20_File,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Read_20_Object_20_File,1,1,TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Project_20_Data,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Helper,1,1,TERMINAL(5),ROOT(6));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_File,2,0,TERMINAL(6),TERMINAL(3));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_POAS_20_Load_20_File_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Load_20_File_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Could not load project file.",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Error,2,0,TERMINAL(1),TERMINAL(2));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_POAS_20_Load_20_File_2F_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Load_20_File_2F_Run_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_POAS_20_Load_20_File_2F_Run_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_POAS_20_Find_20_Files_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Find_20_Files_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 73 329 }{ 195 301 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Find_20_Files_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Find_20_Files_2F_Count_20_Completed,environment);
	tempAttribute = attribute_add("Folder Search",tempClass,tempAttribute_POAS_20_Find_20_Files_2F_Folder_20_Search,environment);
	tempAttribute = attribute_add("Manual Locations",tempClass,tempAttribute_POAS_20_Find_20_Files_2F_Manual_20_Locations,environment);
	tempAttribute = attribute_add("Manual Items",tempClass,tempAttribute_POAS_20_Find_20_Files_2F_Manual_20_Items,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 263 421 }{ 200 300 } */
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Folder_20_Search,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Search_20_Pass,1,1,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Find_20_Files_2F_Run_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_POAS_20_Find_20_Files_2F_Run_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Manual_20_Locations,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"( )",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Manual_20_Items,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"( )",TERMINAL(5));
TERMINATEONSUCCESS

result = vpx_instantiate(PARAMETERS,kVPXClass_Folder_20_Search,1,1,NONE,ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Search,3,0,TERMINAL(6),TERMINAL(3),TERMINAL(5));

result = vpx_set(PARAMETERS,kVPXValue_Folder_20_Search,TERMINAL(0),TERMINAL(6),ROOT(7));

result = kSuccess;

FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"section",ROOT(0));

result = vpx_method_Get_20_File_20_Type_20_Extension(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(0));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,root0))
vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( ( Carbon \"MartenUIAqua.framework\" ) ( System \"MartenSystem.framework\" ) ( Standard \"MartenStandard.framework\" ) ( Postgres \"MartenPostgres.framework\" ) ( WebKit \" MartenMacOSWebKit.framework\" ) ( OBJC \"MartenMacOSCocoa.framework\" ) ( MacOSX \"MartenMacOSCarbon.framework\" ) ( ABook \"MartenMacOSAddressBook.framework\" ) ( LibC \"MartenLibC.framework\" ) ( Interpreter \"MartenInterpreter.framework\" ) ( CGIC \"MartenCGIC.framework\" ) ( UNIX \"MartenBSD.framework\" ) )",ROOT(0));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"library",ROOT(0));

result = vpx_method_Get_20_File_20_Type_20_Extension(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_9_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_9_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(0));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,root0))
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,root0))
vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_9_case_3(environment, &outcome, inputRepeat, contextIndex,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_11_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_11_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method__28_Get_20_Setting_29_(PARAMETERS,TERMINAL(1),TERMINAL(0),ROOT(3));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Upgraded .bundle to .framework",ROOT(4));

result = vpx_constant(PARAMETERS,"0",ROOT(5));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(4),TERMINAL(0),TERMINAL(3),TERMINAL(5));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_11_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_11_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_11_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_11_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_11_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_11_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_11_case_1_local_3(PARAMETERS,TERMINAL(4),TERMINAL(1),TERMINAL(2),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,NONE)
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"app",ROOT(0));

result = vpx_method_Get_20_File_20_Type_20_Extension(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(0));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_14_case_1(environment, &outcome, inputRepeat, contextIndex,root0))
vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_14_case_2(environment, &outcome, inputRepeat, contextIndex,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_17_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_17_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_17_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_17_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(10)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"\"Resource File Data\"",ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(5),TERMINAL(7),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Lists,TERMINAL(3),TERMINAL(6),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(8),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_17_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_17_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_17_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_17_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_17_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_17_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_File,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_17_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_17_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_17_case_1_local_4_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_17(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_17(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_17_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(1),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_17_case_1_local_4(PARAMETERS,LIST(3),ROOT(4));
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

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_19_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_19_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_19_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_19_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Search List",ROOT(2));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_19(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_19(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_19_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_19_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_20(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_20(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(24)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
FAILONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,3,TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(8),ROOT(9));

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_7(PARAMETERS,ROOT(10));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_8(PARAMETERS,LIST(7),TERMINAL(10),ROOT(11));
LISTROOT(11,0)
REPEATFINISH
LISTROOTFINISH(11,0)
LISTROOTEND
} else {
ROOTEMPTY(11)
}

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_9(PARAMETERS,ROOT(12));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(13));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(9))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,13,15)
result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_11(PARAMETERS,LIST(9),TERMINAL(12),LOOP(0),ROOT(14),ROOT(15));
LISTROOT(14,0)
REPEATFINISH
LISTROOTFINISH(14,0)
LISTROOTEND
} else {
ROOTEMPTY(14)
ROOTNULL(15,TERMINAL(13))
}

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(16),ROOT(17));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application_20_Name,1,1,TERMINAL(17),ROOT(18));

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_14(PARAMETERS,ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(18),TERMINAL(19),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(20),ROOT(21));

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_17(PARAMETERS,TERMINAL(0),ROOT(22));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,4,1,TERMINAL(11),TERMINAL(14),TERMINAL(21),TERMINAL(22),ROOT(23));

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6_case_1_local_20(PARAMETERS,TERMINAL(15),TERMINAL(17));

result = kSuccess;

OUTPUT(0,TERMINAL(23))
FOOTERSINGLECASE(24)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_VPL_20_Add_20_Search_20_Locations(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

PUTINTEGER(FSFindFolder( GETINTEGER(TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETPOINTER(144,FSRef,*,ROOT(4),NONE)),3);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_3_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_3_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_3_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_3_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_3_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_3_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_3_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_3_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kUserDomain,ROOT(1));

result = vpx_extconstant(PARAMETERS,kDomainLibraryFolderType,ROOT(2));

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_3_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Full_20_Path_20_CFURL,1,1,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

result = vpx_constant(PARAMETERS,"Marten",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Copy_20_Appending_20_Path_20_Component,3,1,TERMINAL(4),TERMINAL(6),TERMINAL(5),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
NEXTCASEONSUCCESS

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_3_case_1_local_11(PARAMETERS,TERMINAL(7),ROOT(8));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

PUTINTEGER(FSFindFolder( GETINTEGER(TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETPOINTER(144,FSRef,*,ROOT(4),NONE)),3);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_4_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_4_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_4_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_4_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_4_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_4_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_4_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_4_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kLocalDomain,ROOT(1));

result = vpx_extconstant(PARAMETERS,kDomainLibraryFolderType,ROOT(2));

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_4_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Full_20_Path_20_CFURL,1,1,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

result = vpx_constant(PARAMETERS,"Marten",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Copy_20_Appending_20_Path_20_Component,3,1,TERMINAL(4),TERMINAL(6),TERMINAL(5),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
NEXTCASEONSUCCESS

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_4_case_1_local_11(PARAMETERS,TERMINAL(7),ROOT(8));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_3(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2_local_4(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_3_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_3_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_3_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_3_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_3_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_3_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_URL,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Capture_20_Main_20_Bundle,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_3_local_4(PARAMETERS,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parent,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Project_20_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Project_20_File,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parent,1,1,TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
TERMINATEONSUCCESS

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_6(PARAMETERS,TERMINAL(3),ROOT(7));
TERMINATEONFAILURE

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2_local_7(PARAMETERS,TERMINAL(6),ROOT(8));

result = vpx_instantiate(PARAMETERS,kVPXClass_Folder_20_Search,1,1,NONE,ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Search,3,0,TERMINAL(9),TERMINAL(8),TERMINAL(7));

result = vpx_set(PARAMETERS,kVPXValue_Folder_20_Search,TERMINAL(0),TERMINAL(9),ROOT(10));

result = kSuccess;

FOOTERWITHNONE(11)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Run_20_Begin,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Helper,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"\".app\"",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application_20_Name,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(0),TERMINAL(1));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"( )",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_instantiate(PARAMETERS,kVPXClass_PFAS_20_Locate_20_Files_20_Manually,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Stack,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Push_20_Next_20_Stage,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Search_20_Items,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"Did not find file",ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(5),LIST(4));
REPEATFINISH
} else {
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_5(PARAMETERS,LIST(4),TERMINAL(2),ROOT(6));
LISTROOT(6,0)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTEND
} else {
ROOTEMPTY(6)
}

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_4_case_1_local_6(PARAMETERS,TERMINAL(1),TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'vplS\'",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,NONE)
OUTPUT(2,NONE)
OUTPUT(3,NONE)
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'vplB\'",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,TERMINAL(0))
OUTPUT(2,NONE)
OUTPUT(3,NONE)
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'APPL\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name_20_As_20_String,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(3),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,NONE)
OUTPUT(2,TERMINAL(0))
OUTPUT(3,NONE)
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_1_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_1_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'FMWK\'",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,TERMINAL(0))
OUTPUT(2,NONE)
OUTPUT(3,NONE)
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_1_local_3_case_5_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_1_local_3_case_5_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_2D_to_2D_string,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"Unknown Type",ROOT(3));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(3),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name_20_As_20_String,1,1,TERMINAL(1),ROOT(4));

result = vpx_constant(PARAMETERS,"Unknown File",ROOT(5));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(5),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_1_local_3_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_1_local_3_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,NONE)
OUTPUT(2,NONE)
OUTPUT(3,TERMINAL(0))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_1_local_3_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_1_local_3_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Finder_20_Info,1,3,TERMINAL(0),ROOT(2),ROOT(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(1),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
OUTPUT(2,TERMINAL(7))
OUTPUT(3,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,NONE)
OUTPUT(2,NONE)
OUTPUT(3,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1,root2,root3))
vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1,root2,root3);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Manual_20_Items,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
NEXTCASEONSUCCESS

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"__CFString",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Bundle,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_FSRef,2,0,TERMINAL(2),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5_case_1_local_3_case_1_local_7(PARAMETERS,TERMINAL(3));

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"1.0\"",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5_case_1_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5_case_1_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"__CFString",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

PUTPOINTER(__CFBundle,*,CFBundleGetMainBundle(),1);
result = kSuccess;

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(0),ROOT(2));

PUTPOINTER(void,*,CFBundleGetValueForInfoDictionaryKey( GETPOINTER(0,__CFBundle,*,ROOT(4),TERMINAL(1)),GETCONSTPOINTER(__CFString,*,TERMINAL(2))),3);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5_case_1_local_4_case_1_local_6(PARAMETERS,TERMINAL(3));

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(3),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Interpreter_20_Version,0,1,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MartenInterpreterVersion",ROOT(1));

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"Upgrading Interpreter From",ROOT(4));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(4),TERMINAL(2));

result = vpx_constant(PARAMETERS,"New Interpreter Version",ROOT(5));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(5),TERMINAL(3));

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Helper,1,1,TERMINAL(1),ROOT(3));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(2),ROOT(4));

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2_local_5(PARAMETERS,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSSpec,1,1,TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_instantiate(PARAMETERS,kVPXClass_Interpreter,1,1,NONE,ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_File,TERMINAL(6),TERMINAL(5),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Environment,TERMINAL(3),TERMINAL(6),ROOT(8));

result = kSuccess;

FOOTERWITHNONE(9)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_POAS_20_Name_20_Application,1,1,NONE,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Push_20_Next_20_Stage,2,0,TERMINAL(1),TERMINAL(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(16)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Section_20_Files,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Primitive_20_Files,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Other_20_Files,TERMINAL(6),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(5),TERMINAL(1),ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Section_20_Files,TERMINAL(8),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(7),TERMINAL(2),ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Primitive_20_Files,TERMINAL(11),TERMINAL(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(9),TERMINAL(3),ROOT(14));

result = vpx_set(PARAMETERS,kVPXValue_Other_20_Files,TERMINAL(13),TERMINAL(14),ROOT(15));

result = kSuccess;

FOOTER(16)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Section_20_Files,TERMINAL(0),TERMINAL(1),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Primitive_20_Files,TERMINAL(4),TERMINAL(2),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Other_20_Files,TERMINAL(5),TERMINAL(3),ROOT(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_2(PARAMETERS,TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Found_20_Items,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),TERMINAL(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(4)
REPEATBEGINWITHCOUNTER
result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_5(PARAMETERS,LIST(5),TERMINAL(3),ROOT(6),ROOT(7),ROOT(8),ROOT(9));
LISTROOT(6,0)
LISTROOT(7,1)
LISTROOT(8,2)
LISTROOT(9,3)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTFINISH(7,1)
LISTROOTFINISH(8,2)
LISTROOTFINISH(9,3)
LISTROOTEND
} else {
ROOTEMPTY(6)
ROOTEMPTY(7)
ROOTEMPTY(8)
ROOTEMPTY(9)
}

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(8));

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4_case_1_local_7(PARAMETERS,TERMINAL(2),TERMINAL(6),TERMINAL(7),TERMINAL(9));

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Folder_20_Search,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
TERMINATEONFAILURE

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(3),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Folder_20_Search,TERMINAL(2),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Manual_20_Locations,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"( )",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Manual_20_Items,TERMINAL(0),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_POAS_20_Find_20_Files_2F_Run_20_End(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Run_20_End,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_POAS_20_Find_20_Files_2F_Run_20_End_case_1_local_4(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_POAS_20_Read_20_Primitives_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Read_20_Primitives_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Read_20_Primitives_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Read_20_Primitives_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Read_20_Primitives_2F_Count_20_Completed,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 103 429 }{ 200 300 } */
enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run_case_1_local_8_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run_case_1_local_8_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_instantiate(PARAMETERS,kVPXClass_Primitives_20_Data,1,1,NONE,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_FSRef,3,1,TERMINAL(4),TERMINAL(1),TERMINAL(3),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run_case_1_local_8_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run_case_1_local_8_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(1),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run_case_1_local_8_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run_case_1_local_8_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Full_20_Path,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"Loaded Library",ROOT(2));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Helper,1,1,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Primitives Data",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_method_POAS_20_Read_20_Primitives_2F_Run_case_1_local_8_case_1_local_5(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(5));
NEXTCASEONFAILURE

result = vpx_method_POAS_20_Read_20_Primitives_2F_Run_case_1_local_8_case_1_local_6(PARAMETERS,TERMINAL(4),TERMINAL(5));

result = vpx_method_POAS_20_Read_20_Primitives_2F_Run_case_1_local_8_case_1_local_7(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name_20_As_20_String,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"Trouble reading library",ROOT(3));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(3),TERMINAL(2));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Read_20_Primitives_2F_Run_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_POAS_20_Read_20_Primitives_2F_Run_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Primitive_20_Files,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Primitive_20_Files,TERMINAL(2),TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Up_20_Count,3,0,TERMINAL(0),NONE,TERMINAL(1));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(7));

result = vpx_method_POAS_20_Read_20_Primitives_2F_Run_case_1_local_8(PARAMETERS,TERMINAL(1),TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Next_20_Name,2,0,TERMINAL(0),TERMINAL(6));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Read_20_Primitives_2F_Run_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_POAS_20_Read_20_Primitives_2F_Run_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run_20_Begin_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run_20_Begin_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Primitive_20_Files,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(3),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Count_20_Max,TERMINAL(0),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run_20_Begin_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run_20_Begin_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,LIST(2));
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"(  )",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run_20_Begin_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run_20_Begin_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Primitives Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Helper,1,1,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));
TERMINATEONFAILURE

result = vpx_method_POAS_20_Read_20_Primitives_2F_Run_20_Begin_case_1_local_3_case_1_local_5(PARAMETERS,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Run_20_Begin(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_POAS_20_Read_20_Primitives_2F_Run_20_Begin_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_method_POAS_20_Read_20_Primitives_2F_Run_20_Begin_case_1_local_3(PARAMETERS,TERMINAL(1));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Run_20_Begin,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Next_20_Name,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2_case_1_local_6_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2_case_1_local_6_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"library",ROOT(0));

result = vpx_method_Get_20_File_20_Type_20_Extension(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2_case_1_local_6_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2_case_1_local_6_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(0));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2_case_1_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2_case_1_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2_case_1_local_6_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,root0))
vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2_case_1_local_6_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2_case_1_local_6_case_1_local_2(PARAMETERS,ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_minus_2D_one,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(3),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(6)
}

enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Primitive_20_Files,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name_20_As_20_String,1,1,TERMINAL(3),ROOT(5));

result = vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2_case_1_local_6(PARAMETERS,TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Primary_20_Prompt,2,0,TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_POAS_20_Read_20_Sections_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Read_20_Sections_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Read_20_Sections_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Read_20_Sections_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Read_20_Sections_2F_Count_20_Completed,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_case_1_local_11_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_case_1_local_11_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(3),TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(5)
}

enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_case_1_local_11_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_case_1_local_11_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_case_1_local_11_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_case_1_local_11_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Read_20_Sections_2F_Run_case_1_local_11_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_POAS_20_Read_20_Sections_2F_Run_case_1_local_11_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Read_20_Object_20_File,1,1,TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_POAS_20_Read_20_Sections_2F_Run_case_1_local_11_case_1_local_5(PARAMETERS,LIST(5),TERMINAL(3),ROOT(6));
LISTROOT(6,0)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTEND
} else {
ROOTEMPTY(6)
}

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(4),TERMINAL(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(3),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Primary_20_Prompt,2,0,TERMINAL(2),TERMINAL(8));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(3),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_File,2,0,TERMINAL(10),TERMINAL(1));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Full_20_Path,1,1,TERMINAL(1),ROOT(3));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"Error reading section",ROOT(4));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(4),TERMINAL(3));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Read_20_Sections_2F_Run_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_POAS_20_Read_20_Sections_2F_Run_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Section_20_Files,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Section_20_Files,TERMINAL(2),TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"1",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Up_20_Count,3,0,TERMINAL(0),TERMINAL(7),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Helper,1,1,TERMINAL(1),ROOT(8));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"Section Data",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(8),TERMINAL(9),ROOT(10));
NEXTCASEONFAILURE

result = vpx_method_POAS_20_Read_20_Sections_2F_Run_case_1_local_11(PARAMETERS,TERMINAL(10),TERMINAL(4),TERMINAL(1));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Read_20_Sections_2F_Run_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_POAS_20_Read_20_Sections_2F_Run_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_20_Begin_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_20_Begin_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Section_20_Files,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(3),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Count_20_Max,TERMINAL(0),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_20_Begin(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_POAS_20_Read_20_Sections_2F_Run_20_Begin_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Run_20_Begin,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_20_End_case_1_local_2_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_20_End_case_1_local_2_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_20_End_case_1_local_2_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_20_End_case_1_local_2_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_20_End_case_1_local_2_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_20_End_case_1_local_2_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Read_20_Sections_2F_Run_20_End_case_1_local_2_case_1_local_5_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_POAS_20_Read_20_Sections_2F_Run_20_End_case_1_local_2_case_1_local_5_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_20_End_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_20_End_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_POAS_20_Read_20_Sections_2F_Run_20_End_case_1_local_2_case_1_local_5_case_1_local_3(PARAMETERS,LIST(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_20_End_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_20_End_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Section Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Helper,1,1,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));
TERMINATEONFAILURE

result = vpx_method_POAS_20_Read_20_Sections_2F_Run_20_End_case_1_local_2_case_1_local_5(PARAMETERS,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_POAS_20_Read_20_Sections_2F_Run_20_End(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_POAS_20_Read_20_Sections_2F_Run_20_End_case_1_local_2(PARAMETERS,TERMINAL(1));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Run_20_End,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_POAS_20_Open_20_Project_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Open_20_Project_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 137 470 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Open_20_Project_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Open_20_Project_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Open_20_Project_2F_Count_20_Completed,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_POAS_20_Open_20_Project_2F_Run_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Open_20_Project_2F_Run_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(11)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_VPL_20_Data(PARAMETERS,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Helper,1,1,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(6),TERMINAL(4),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(5),TERMINAL(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stack_20_Open,2,1,TERMINAL(4),TERMINAL(8),ROOT(9));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stack_20_Opened,1,0,TERMINAL(4));

result = vpx_set(PARAMETERS,kVPXValue_Items_20_To_20_Open,TERMINAL(0),TERMINAL(9),ROOT(10));

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_POAS_20_Open_20_Project_2F_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = vpx_method_POAS_20_Open_20_Project_2F_Run_case_1_local_3(PARAMETERS,TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_POAS_20_Open_20_Sections_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Open_20_Sections_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 179 409 }{ 117 402 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Open_20_Sections_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Open_20_Sections_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Open_20_Sections_2F_Count_20_Completed,environment);
	tempAttribute = attribute_add("Open Stack",tempClass,tempAttribute_POAS_20_Open_20_Sections_2F_Open_20_Stack,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 299 762 }{ 200 300 } */
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_1_local_8_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_1_local_8_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Section Data",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"Primitives Data",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"Resource File Data",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"Class Data",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_1_local_8_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_1_local_8_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Progress,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Now,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_1_local_8_case_1_local_5(PARAMETERS,TERMINAL(5));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(4),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Primary_20_Prompt,2,0,TERMINAL(1),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Synchronize,1,0,TERMINAL(1));

result = vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_1_local_8_case_1_local_9(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_1_local_8_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_1_local_8_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Progress,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Now,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"Section Data",TERMINAL(5));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(4),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Primary_20_Prompt,2,0,TERMINAL(1),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Synchronize,1,0,TERMINAL(1));

result = vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_1_local_8_case_2_local_9(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"Item Open",TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"Item Opened",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(8),TERMINAL(6),TERMINAL(7),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(9),TERMINAL(1),ROOT(10));

result = vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_1_local_8(PARAMETERS,TERMINAL(6),TERMINAL(2),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stack_20_Open,2,1,TERMINAL(6),TERMINAL(7),ROOT(11));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(10))
OUTPUT(1,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_2_local_7_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_2_local_7_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Class Data",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_2_local_7_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_2_local_7_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Section Data",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"Primitives Data",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"Resource File Data",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_2_local_7_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_2_local_7_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_2_local_7_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_2_local_7_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_2_local_7_case_1_local_5(PARAMETERS,TERMINAL(5));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Up_20_Count,3,0,TERMINAL(2),NONE,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"Item Opened",TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( )",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stack_20_Opened,1,0,TERMINAL(7));

result = vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_2_local_7(PARAMETERS,TERMINAL(7),TERMINAL(2),TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(6))
FOOTER(9)
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_3_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_3_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stack_20_Open,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_3_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_3_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"(  )",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_3_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_3_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_3_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_3_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"List Open",TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_3_local_5(PARAMETERS,TERMINAL(6),TERMINAL(7),TERMINAL(1),ROOT(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"(  )",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1))
if(vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1))
if(vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1))
vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Open_20_Stack,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1_local_5(PARAMETERS,TERMINAL(4),TERMINAL(5),TERMINAL(1),TERMINAL(0),ROOT(6),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Open_20_Stack,TERMINAL(2),TERMINAL(6),ROOT(8));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Push_20_On_20_Stack,2,0,TERMINAL(8),TERMINAL(7));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Open_20_Sections_2F_Run_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_POAS_20_Open_20_Sections_2F_Run_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_20_Begin_case_1_local_2_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_20_Begin_case_1_local_2_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Class Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(6),TERMINAL(1),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_20_Begin_case_1_local_2_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_20_Begin_case_1_local_2_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_20_Begin_case_1_local_2_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_20_Begin_case_1_local_2_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Open_20_Sections_2F_Run_20_Begin_case_1_local_2_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_POAS_20_Open_20_Sections_2F_Run_20_Begin_case_1_local_2_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_20_Begin_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_20_Begin_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Items_20_To_20_Open,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Push_20_On_20_Stack,2,0,TERMINAL(1),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Helper,1,1,TERMINAL(0),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Section_20_Items,1,1,TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"0",ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,6,7)
result = vpx_method_POAS_20_Open_20_Sections_2F_Run_20_Begin_case_1_local_2_case_1_local_7(PARAMETERS,LIST(5),LOOP(0),ROOT(7));
REPEATFINISH
} else {
ROOTNULL(7,TERMINAL(6))
}

result = vpx_set(PARAMETERS,kVPXValue_Count_20_Max,TERMINAL(1),TERMINAL(7),ROOT(8));

result = vpx_constant(PARAMETERS,"( )",ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Items_20_To_20_Open,TERMINAL(0),TERMINAL(9),ROOT(10));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_20_Begin_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_20_Begin_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(16)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Get_20_VPL_20_Data(PARAMETERS,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Helper,1,1,TERMINAL(0),ROOT(3));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(7),TERMINAL(5),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(6),TERMINAL(8),ROOT(9));

result = vpx_constant(PARAMETERS,"Item Open",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(10),TERMINAL(5),TERMINAL(9),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(11),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Push_20_On_20_Stack,2,0,TERMINAL(1),TERMINAL(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Section_20_Items,1,1,TERMINAL(3),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(13),ROOT(14));

result = vpx_set(PARAMETERS,kVPXValue_Count_20_Max,TERMINAL(1),TERMINAL(14),ROOT(15));

result = kSuccess;

FOOTER(16)
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_20_Begin_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_20_Begin_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Open_20_Sections_2F_Run_20_Begin_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_POAS_20_Open_20_Sections_2F_Run_20_Begin_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_20_Begin_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_20_Begin_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Helper,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"Project Info",ROOT(2));

result = vpx_method_Find_20_Service(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Project,2,0,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_20_Begin(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_POAS_20_Open_20_Sections_2F_Run_20_Begin_case_1_local_2(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Run_20_Begin,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_POAS_20_Open_20_Sections_2F_Run_20_Begin_case_1_local_4(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_20_End_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_20_End_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Get_20_VPL_20_Data(PARAMETERS,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Helper,1,1,TERMINAL(0),ROOT(3));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_List_20_Data,2,0,TERMINAL(3),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Run_20_End(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_POAS_20_Open_20_Sections_2F_Run_20_End_case_1_local_2(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = vpx_constant(PARAMETERS,"(  )",ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Open_20_Stack,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Run_20_End,2,0,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_POAS_20_Open_20_Sections_2F_Push_20_On_20_Stack(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Open_20_Stack,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Open_20_Stack,TERMINAL(2),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

/* Stop Universals */



Nat4 VPLC_POAS_20_Resolve_20_References_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Resolve_20_References_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Resolve_20_References_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Resolve_20_References_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Resolve_20_References_2F_Count_20_Completed,environment);
	tempAttribute = attribute_add("Class List",tempClass,tempAttribute_POAS_20_Resolve_20_References_2F_Class_20_List,environment);
	tempAttribute = attribute_add("Whole List",tempClass,tempAttribute_POAS_20_Resolve_20_References_2F_Whole_20_List,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_POAS_20_Resolve_20_References_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Resolve_20_References_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(14)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Class_20_List,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Class_20_List,TERMINAL(2),TERMINAL(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Whole_20_List,TERMINAL(0),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(4),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Primary_20_Prompt,2,0,TERMINAL(1),TERMINAL(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Up_20_Count,3,0,TERMINAL(0),NONE,TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Resolve_20_Class,2,2,TERMINAL(4),TERMINAL(8),ROOT(10),ROOT(11));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Whole_20_List,TERMINAL(6),TERMINAL(11),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTERWITHNONE(14)
}

enum opTrigger vpx_method_POAS_20_Resolve_20_References_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Resolve_20_References_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_POAS_20_Resolve_20_References_2F_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Resolve_20_References_2F_Run_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_POAS_20_Resolve_20_References_2F_Run_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Resolve_20_References_2F_Run_20_Begin_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Resolve_20_References_2F_Run_20_Begin_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Helper,1,1,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(2),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Class_20_List,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Whole_20_List,TERMINAL(4),TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(3),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Count_20_Max,TERMINAL(5),TERMINAL(6),ROOT(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_POAS_20_Resolve_20_References_2F_Run_20_Begin(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_POAS_20_Resolve_20_References_2F_Run_20_Begin_case_1_local_2(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Run_20_Begin,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_POAS_20_Resolve_20_References_2F_Run_20_End_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Resolve_20_References_2F_Run_20_End_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Class_20_List,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Whole_20_List,TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_POAS_20_Resolve_20_References_2F_Run_20_End(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_POAS_20_Resolve_20_References_2F_Run_20_End_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Run_20_End,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_POAS_20_Post_20_Load_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Post_20_Load_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Post_20_Load_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Post_20_Load_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Post_20_Load_2F_Count_20_Completed,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_POAS_20_Post_20_Load_2F_Run_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Post_20_Load_2F_Run_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Helper,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Post_20_Load_20_Processing,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_POAS_20_Post_20_Load_2F_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = vpx_method_POAS_20_Post_20_Load_2F_Run_case_1_local_3(PARAMETERS,TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_POAS_20_Update_20_Classes_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Update_20_Classes_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Update_20_Classes_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Update_20_Classes_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Update_20_Classes_2F_Count_20_Completed,environment);
	tempAttribute = attribute_add("Class List",tempClass,tempAttribute_POAS_20_Update_20_Classes_2F_Class_20_List,environment);
	tempAttribute = attribute_add("Whole List",tempClass,tempAttribute_POAS_20_Update_20_Classes_2F_Whole_20_List,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_POAS_20_Update_20_Classes_2F_Run_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Update_20_Classes_2F_Run_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Primary_20_Prompt,2,0,TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_POAS_20_Update_20_Classes_2F_Run_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Update_20_Classes_2F_Run_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
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

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(13));

result = kSuccess;

FOOTER(14)
}

enum opTrigger vpx_method_POAS_20_Update_20_Classes_2F_Run_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Update_20_Classes_2F_Run_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_POAS_20_Update_20_Classes_2F_Run_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Update_20_Classes_2F_Run_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Update_20_Classes_2F_Run_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_POAS_20_Update_20_Classes_2F_Run_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Update_20_Classes_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Update_20_Classes_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Class_20_List,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Class_20_List,TERMINAL(2),TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(7));

result = vpx_method_POAS_20_Update_20_Classes_2F_Run_case_1_local_7(PARAMETERS,TERMINAL(4),TERMINAL(1));

result = vpx_method_POAS_20_Update_20_Classes_2F_Run_case_1_local_8(PARAMETERS,TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Value,1,0,TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Up_20_Count,3,0,TERMINAL(0),NONE,TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_POAS_20_Update_20_Classes_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Update_20_Classes_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_POAS_20_Update_20_Classes_2F_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Update_20_Classes_2F_Run_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_POAS_20_Update_20_Classes_2F_Run_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Update_20_Classes_2F_Run_20_Begin_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Update_20_Classes_2F_Run_20_Begin_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Helper,1,1,TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(2),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Class_20_List,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(3),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Count_20_Max,TERMINAL(4),TERMINAL(5),ROOT(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_POAS_20_Update_20_Classes_2F_Run_20_Begin(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_POAS_20_Update_20_Classes_2F_Run_20_Begin_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Run_20_Begin,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_POAS_20_Update_20_Classes_2F_Run_20_End(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Class_20_List,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Run_20_End,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

/* Stop Universals */



Nat4 VPLC_POAS_20_Update_20_Persistents_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Update_20_Persistents_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Update_20_Persistents_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Update_20_Persistents_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Update_20_Persistents_2F_Count_20_Completed,environment);
	tempAttribute = attribute_add("Class List",tempClass,tempAttribute_POAS_20_Update_20_Persistents_2F_Class_20_List,environment);
	tempAttribute = attribute_add("Whole List",tempClass,tempAttribute_POAS_20_Update_20_Persistents_2F_Whole_20_List,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_POAS_20_Update_20_Persistents_2F_Run_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Update_20_Persistents_2F_Run_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Primary_20_Prompt,2,0,TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_POAS_20_Update_20_Persistents_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Update_20_Persistents_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Class_20_List,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Class_20_List,TERMINAL(2),TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(7));

result = vpx_method_POAS_20_Update_20_Persistents_2F_Run_case_1_local_7(PARAMETERS,TERMINAL(4),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Value,1,0,TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Up_20_Count,3,0,TERMINAL(0),NONE,TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_POAS_20_Update_20_Persistents_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Update_20_Persistents_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_POAS_20_Update_20_Persistents_2F_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Update_20_Persistents_2F_Run_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_POAS_20_Update_20_Persistents_2F_Run_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Update_20_Persistents_2F_Run_20_Begin_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Update_20_Persistents_2F_Run_20_Begin_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Helper,1,1,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Persistents,1,1,TERMINAL(2),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Class_20_List,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(3),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Count_20_Max,TERMINAL(4),TERMINAL(5),ROOT(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_POAS_20_Update_20_Persistents_2F_Run_20_Begin(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_POAS_20_Update_20_Persistents_2F_Run_20_Begin_case_1_local_2(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Run_20_Begin,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_POAS_20_Update_20_Persistents_2F_Run_20_End(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Class_20_List,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Run_20_End,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

/* Stop Universals */



Nat4 VPLC_POAS_20_Install_20_Tools_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Install_20_Tools_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Install_20_Tools_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Install_20_Tools_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Install_20_Tools_2F_Count_20_Completed,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_POAS_20_Install_20_Tools_2F_Run_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Install_20_Tools_2F_Run_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Project Info",ROOT(1));

result = vpx_method_Find_20_Service(PARAMETERS,TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Helper,1,1,TERMINAL(0),ROOT(3));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Project,2,0,TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_POAS_20_Install_20_Tools_2F_Run_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Install_20_Tools_2F_Run_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Application(PARAMETERS,ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Tools,2,0,TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_POAS_20_Install_20_Tools_2F_Run_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Install_20_Tools_2F_Run_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Install_20_Tools_2F_Run_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_POAS_20_Install_20_Tools_2F_Run_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Install_20_Tools_2F_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = vpx_method_POAS_20_Install_20_Tools_2F_Run_case_1_local_3(PARAMETERS,TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_POAS_20_Copy_20_Resources_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Copy_20_Resources_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 145 448 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Copy_20_Resources_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Copy_20_Resources_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Copy_20_Resources_2F_Count_20_Completed,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 103 429 }{ 200 300 } */
enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_1_local_8_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_1_local_8_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_1_local_8_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_1_local_8_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_1_local_8_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_1_local_8_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_1_local_8_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_1_local_8_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_1_local_8_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_1_local_8_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(1),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Helper,1,1,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Resource File Data",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_1_local_8_case_1_local_5(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_1_local_8_case_1_local_7(PARAMETERS,TERMINAL(4),TERMINAL(5));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name_20_As_20_String,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"Trouble copying resource",ROOT(3));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(3),TERMINAL(2));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Other_20_Files,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Other_20_Files,TERMINAL(2),TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Up_20_Count,3,0,TERMINAL(0),NONE,TERMINAL(1));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(7));

result = vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_1_local_8(PARAMETERS,TERMINAL(1),TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Next_20_Name,2,0,TERMINAL(0),TERMINAL(6));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_POAS_20_Copy_20_Resources_2F_Run_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_20_Begin_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_20_Begin_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Other_20_Files,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(3),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Count_20_Max,TERMINAL(0),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_20_Begin_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_20_Begin_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,LIST(2));
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"(  )",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_20_Begin_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_20_Begin_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Resource File Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Helper,1,1,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));
TERMINATEONFAILURE

result = vpx_method_POAS_20_Copy_20_Resources_2F_Run_20_Begin_case_1_local_3_case_1_local_5(PARAMETERS,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Run_20_Begin(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_POAS_20_Copy_20_Resources_2F_Run_20_Begin_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_method_POAS_20_Copy_20_Resources_2F_Run_20_Begin_case_1_local_3(PARAMETERS,TERMINAL(1));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Run_20_Begin,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Next_20_Name,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Next_20_Name_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Next_20_Name_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Other_20_Files,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name_20_As_20_String,1,1,TERMINAL(3),ROOT(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Next_20_Name_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Next_20_Name_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Next_20_Name_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Next_20_Name_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Copy_20_Resources_2F_Next_20_Name_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_POAS_20_Copy_20_Resources_2F_Next_20_Name_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Copy_20_Resources_2F_Next_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_POAS_20_Copy_20_Resources_2F_Next_20_Name_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Primary_20_Prompt,2,0,TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_POAS_20_Open_20_Editor_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Open_20_Editor_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Open_20_Editor_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Open_20_Editor_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Open_20_Editor_2F_Count_20_Completed,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 198 681 }{ 200 300 } */
enum opTrigger vpx_method_POAS_20_Open_20_Editor_2F_Run_case_1_local_3_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Open_20_Editor_2F_Run_case_1_local_3_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
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

enum opTrigger vpx_method_POAS_20_Open_20_Editor_2F_Run_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Open_20_Editor_2F_Run_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_POAS_20_Open_20_Editor_2F_Run_case_1_local_3_case_1_local_4_case_1_local_2(PARAMETERS,ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Project,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_POAS_20_Open_20_Editor_2F_Run_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Open_20_Editor_2F_Run_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Helper,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(1));

result = vpx_method_POAS_20_Open_20_Editor_2F_Run_case_1_local_3_case_1_local_4(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_POAS_20_Open_20_Editor_2F_Run_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Open_20_Editor_2F_Run_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_VPL_20_Data(PARAMETERS,ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_POAS_20_Open_20_Editor_2F_Run_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_POAS_20_Open_20_Editor_2F_Run_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Open_20_Editor_2F_Run_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_POAS_20_Open_20_Editor_2F_Run_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Open_20_Editor_2F_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = vpx_method_POAS_20_Open_20_Editor_2F_Run_case_1_local_3(PARAMETERS,TERMINAL(1));

result = vpx_method_VPLProject_20_Info_20_Tools_2F_Update_20_Tool_20_Set(PARAMETERS,NONE);

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(3)
}

/* Stop Universals */



Nat4 VPLC_POAS_20_Name_20_Application_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Name_20_Application_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 187 381 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Name_20_Application_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Name_20_Application_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Name_20_Application_2F_Count_20_Completed,environment);
	tempAttribute = attribute_add("Window",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 155 369 }{ 200 300 } */
enum opTrigger vpx_method_POAS_20_Name_20_Application_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Name_20_Application_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Window,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"FALSE",ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_POAS_20_Name_20_Application_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Name_20_Application_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_POAS_20_Name_20_Application_2F_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Name_20_Application_2F_Run_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_POAS_20_Name_20_Application_2F_Run_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Name_20_Application_2F_Run_20_Begin_case_1_local_3_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Name_20_Application_2F_Run_20_Begin_case_1_local_3_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_POAS_20_Name_20_Application_2F_Run_20_Begin_case_1_local_3_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Name_20_Application_2F_Run_20_Begin_case_1_local_3_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Begin_20_Window,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_POAS_20_Name_20_Application_2F_Run_20_Begin_case_1_local_3_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_POAS_20_Name_20_Application_2F_Run_20_Begin_case_1_local_3_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_POAS_20_Name_20_Application_2F_Run_20_Begin_case_1_local_3_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_POAS_20_Name_20_Application_2F_Run_20_Begin_case_1_local_3_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_POAS_20_Name_20_Application_2F_Run_20_Begin_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_POAS_20_Name_20_Application_2F_Run_20_Begin_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Helper,1,1,TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Progress,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
TERMINATEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLProject_20_AppName_20_Sheet,1,1,NONE,ROOT(4));

result = vpx_method_POAS_20_Name_20_Application_2F_Run_20_Begin_case_1_local_3_case_1_local_6(PARAMETERS,TERMINAL(3),ROOT(5));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Null_20_on_20_Cancel_3F_,TERMINAL(4),TERMINAL(6),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Data,TERMINAL(7),TERMINAL(2),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(4),TERMINAL(5));

result = vpx_set(PARAMETERS,kVPXValue_Window,TERMINAL(0),TERMINAL(4),ROOT(9));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(10)
}

enum opTrigger vpx_method_POAS_20_Name_20_Application_2F_Run_20_Begin(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Run_20_Begin,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_POAS_20_Name_20_Application_2F_Run_20_Begin_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_POAS_20_Name_20_Application_2F_Run_20_End(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Run_20_End,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Window,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

/* Stop Universals */



Nat4 VPLC_PFAS_20_Locate_20_Files_20_Manually_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_PFAS_20_Locate_20_Files_20_Manually_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_PFAS_20_Locate_20_Files_20_Manually_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_PFAS_20_Locate_20_Files_20_Manually_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_PFAS_20_Locate_20_Files_20_Manually_2F_Count_20_Completed,environment);
	tempAttribute = attribute_add("Stack",tempClass,tempAttribute_PFAS_20_Locate_20_Files_20_Manually_2F_Stack,environment);
	tempAttribute = attribute_add("Current Item",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 417 97 }{ 200 300 } */
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Current_20_Item,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Item_20_Run,3,0,TERMINAL(0),TERMINAL(3),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Stack,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Stack,TERMINAL(2),TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Item_20_Start,3,0,TERMINAL(0),TERMINAL(4),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Run_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Run_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Run_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Run_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Run_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Run_20_Begin_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Run_20_Begin_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Stack,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(2),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Count_20_Max,TERMINAL(0),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Run_20_Begin(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Run_20_Begin_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Run_20_Begin,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Stop(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Activity,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Up_20_Count,3,0,TERMINAL(0),NONE,TERMINAL(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Current_20_Item,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Primary_20_Prompt,2,0,TERMINAL(1),TERMINAL(0));

result = vpx_set(PARAMETERS,kVPXValue_Current_20_Item,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Synchronize,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0,V_Object *root1)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"section",ROOT(0));

result = vpx_method_Get_20_File_20_Type_20_Extension(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_6_case_1_local_2(PARAMETERS,ROOT(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_method__22_Suffix_22_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\'****\'",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_6_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_6_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0,V_Object *root1)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"library",ROOT(0));

result = vpx_method_Get_20_File_20_Type_20_Extension(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_6_case_3_local_2(PARAMETERS,ROOT(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_method__22_Suffix_22_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_6_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_14_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_14_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"NONE",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_14_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_14_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_14_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_14_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_14_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_14_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Message\"",ROOT(2));

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_14_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parameter_20_String,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_18_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_18_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"NONE",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_18_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_18_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_18_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_18_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_18_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_18_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_18(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_18(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Cancel Button Label\"",ROOT(2));

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_18_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parameter_20_String,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_PFAS_20_Nav_20_Locate_20_Files_20_Dialog,1,1,NONE,ROOT(3));

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_3(PARAMETERS,TERMINAL(3),TERMINAL(1));

result = vpx_extconstant(PARAMETERS,kWindowModalityAppModal,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Modality,2,0,TERMINAL(3),TERMINAL(4));

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parent_20_Window,2,0,TERMINAL(3),TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Completion_20_Behavior,2,0,TERMINAL(3),TERMINAL(2));

result = vpx_constant(PARAMETERS,"\"Please locate \xE2\x80\x9C\"",ROOT(6));

result = vpx_constant(PARAMETERS,"\"\xE2\x80\x9D\"",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(6),TERMINAL(0),TERMINAL(7),ROOT(8));

result = vpx_constant(PARAMETERS,"\"Find Missing Components\"",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Window_20_Title,2,0,TERMINAL(3),TERMINAL(9));

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_14(PARAMETERS,TERMINAL(3),TERMINAL(8));

result = vpx_constant(PARAMETERS,"\'****\'",ROOT(10));

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_16(PARAMETERS,TERMINAL(3),TERMINAL(10));

result = vpx_constant(PARAMETERS,"Remove",ROOT(11));

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1_local_18(PARAMETERS,TERMINAL(3),TERMINAL(11));

result = vpx_instantiate(PARAMETERS,kVPXClass_Nav_20_Choose_20_Object_20_Dialog,1,1,NONE,ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERWITHNONE(13)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2_local_14_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2_local_14_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"NONE",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2_local_14_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2_local_14_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2_local_14_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2_local_14_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2_local_14_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2_local_14_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Message\"",ROOT(2));

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2_local_14_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parameter_20_String,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2_local_18_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2_local_18_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"NONE",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2_local_18_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2_local_18_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2_local_18_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2_local_18_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2_local_18_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2_local_18_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2_local_18(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2_local_18(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Cancel Button Label\"",ROOT(2));

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2_local_18_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parameter_20_String,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Nav_20_Choose_20_File_20_Dialog,1,1,NONE,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Type_20_List,2,0,TERMINAL(3),TERMINAL(1));

result = vpx_extconstant(PARAMETERS,kWindowModalityAppModal,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Modality,2,0,TERMINAL(3),TERMINAL(4));

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parent_20_Window,2,0,TERMINAL(3),TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Completion_20_Behavior,2,0,TERMINAL(3),TERMINAL(2));

result = vpx_constant(PARAMETERS,"\"Please locate \xE2\x80\x9C\"",ROOT(6));

result = vpx_constant(PARAMETERS,"\"\xE2\x80\x9D\"",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(6),TERMINAL(0),TERMINAL(7),ROOT(8));

result = vpx_constant(PARAMETERS,"\"Find Missing Components\"",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Window_20_Title,2,0,TERMINAL(3),TERMINAL(9));

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2_local_14(PARAMETERS,TERMINAL(3),TERMINAL(8));

result = vpx_constant(PARAMETERS,"\'****\'",ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Creator_20_Code,2,0,TERMINAL(3),TERMINAL(10));

result = vpx_constant(PARAMETERS,"Remove",ROOT(11));

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2_local_18(PARAMETERS,TERMINAL(3),TERMINAL(11));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERWITHNONE(12)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,1,0,TERMINAL(3));
FAILONFAILURE

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8_case_1_local_4(PARAMETERS,TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"/Nav File Callback",ROOT(3));

result = vpx_method_New_20_Callback(PARAMETERS,TERMINAL(3),TERMINAL(0),NONE,ROOT(4));

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_5(PARAMETERS,TERMINAL(1),TERMINAL(2),TERMINAL(0));

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_6(PARAMETERS,TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(6),ROOT(7));

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1_local_8(PARAMETERS,TERMINAL(5),TERMINAL(7),TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Item_20_Stop,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Custom_20_Reply,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"Cancel",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Activity,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(4));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_User_20_Cancel,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Stack,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_instantiate(PARAMETERS,kVPXClass_POAS_20_Find_20_Files,1,1,NONE,ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Activity,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Current_20_Item,TERMINAL(0),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(8),TERMINAL(3),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(1),ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Manual_20_Locations,TERMINAL(4),TERMINAL(10),ROOT(11));

result = vpx_set(PARAMETERS,kVPXValue_Manual_20_Items,TERMINAL(11),TERMINAL(9),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Push_20_Next_20_Stage,2,0,TERMINAL(6),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(13)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Current_20_Item,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"( )",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Stack,TERMINAL(0),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Custom_20_Reply,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"Search Here",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavCtl_20_Get_20_Location,1,1,TERMINAL(1),ROOT(3));
TERMINATEONFAILURE

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_2_local_5(PARAMETERS,TERMINAL(0),TERMINAL(3));

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_2_local_6(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Activity,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Helper,1,1,TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Canceled_3F_,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_3_local_4(PARAMETERS,TERMINAL(0));

result = vpx_get(PARAMETERS,kVPXValue_Current_20_Item,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"Removed file",ROOT(5));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(5),TERMINAL(4));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0,V_Object *root1)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"section",ROOT(0));

result = vpx_method_Get_20_File_20_Type_20_Extension(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_2_case_1_local_2(PARAMETERS,ROOT(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_method__22_Suffix_22_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_2_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_2_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0,V_Object *root1)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"library",ROOT(0));

result = vpx_method_Get_20_File_20_Type_20_Extension(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_2_case_2_local_2(PARAMETERS,ROOT(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_method__22_Suffix_22_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\'****\'",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'vplS\'",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,NONE)
OUTPUT(2,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'vplB\'",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,TERMINAL(0))
OUTPUT(2,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'FMWK\'",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,TERMINAL(0))
OUTPUT(2,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,NONE)
OUTPUT(2,TERMINAL(0))
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1,root2))
if(vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1,root2))
if(vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1,root2))
vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_3_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3_case_1_local_3(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
OUTPUT(2,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(16)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Section_20_Files,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Primitive_20_Files,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Other_20_Files,TERMINAL(6),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(5),TERMINAL(1),ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Section_20_Files,TERMINAL(8),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(7),TERMINAL(2),ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Primitive_20_Files,TERMINAL(11),TERMINAL(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(9),TERMINAL(3),ROOT(14));

result = vpx_set(PARAMETERS,kVPXValue_Other_20_Files,TERMINAL(13),TERMINAL(14),ROOT(15));

result = kSuccess;

FOOTERSINGLECASE(16)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Activity,TERMINAL(0),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(1),TERMINAL(2))) ){
LISTROOTBEGIN(3)
REPEATBEGINWITHCOUNTER
result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_3(PARAMETERS,LIST(1),LIST(2),ROOT(5),ROOT(6),ROOT(7));
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

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7_case_1_local_4(PARAMETERS,TERMINAL(4),TERMINAL(5),TERMINAL(6),TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reply_20_Selection,1,1,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"(  )",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Current_20_Item,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(4),ROOT(5));

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4_local_7(PARAMETERS,TERMINAL(0),TERMINAL(5),TERMINAL(2));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Item_20_Stop,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 144 719 }{ 446 455 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Event_20_Callback_20_Behavior,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Parameter_20_Strings,environment);
	tempAttribute = attribute_add("Filter Callback Behavior",tempClass,NULL,environment);
	tempAttribute = attribute_add("Preview Callback Behavior",tempClass,NULL,environment);
	tempAttribute = attribute_add("The Nib Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("The Custom View",tempClass,NULL,environment);
	tempAttribute = attribute_add("Last Height",tempClass,tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Last_20_Height,environment);
	tempAttribute = attribute_add("Last Width",tempClass,tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Last_20_Width,environment);
	tempAttribute = attribute_add("Custom Reply",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Nav Choose Object Dialog");
	return kNOERROR;
}

/* Start Universals: { 187 1064 }{ 463 311 } */
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"EventRecord",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_pointer,1,1,TERMINAL(5),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,1,TERMINAL(7),TERMINAL(6),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event_case_1_local_15_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event_case_1_local_15_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kControlButtonPart,TERMINAL(1));
NEXTCASEONFAILURE

GetControlTitle( GETPOINTER(0,OpaqueControlRef,*,ROOT(2),TERMINAL(0)),GETPOINTER(256,unsigned char,*,ROOT(3),NONE));
result = kSuccess;

result = vpx_method_Get_20_UInt8(PARAMETERS,TERMINAL(3),NONE,ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(4),TERMINAL(5),ROOT(6),ROOT(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERWITHNONE(9)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event_case_1_local_15_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event_case_1_local_15_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event_case_1_local_15_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event_case_1_local_15_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event_case_1_local_16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event_case_1_local_16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Custom_20_Reply,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavCtl_20_Terminate,1,0,TERMINAL(0));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(26)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extget(PARAMETERS,"eventData",1,2,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_extget(PARAMETERS,"eventDataParms",1,2,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event_case_1_local_4(PARAMETERS,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_extget(PARAMETERS,"what",1,2,TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_extmatch(PARAMETERS,mouseDown,TERMINAL(10));
NEXTCASEONFAILURE

result = vpx_extget(PARAMETERS,"where",1,2,TERMINAL(8),ROOT(11),ROOT(12));

GlobalToLocal( GETPOINTER(4,Point,*,ROOT(13),TERMINAL(12)));
result = kSuccess;

result = vpx_extget(PARAMETERS,"window",1,2,TERMINAL(1),ROOT(14),ROOT(15));

PUTPOINTER(OpaqueControlRef,*,FindControlUnderMouse( GETSTRUCTURE(4,Point,TERMINAL(13)),GETPOINTER(0,OpaqueWindowPtr,*,ROOT(17),TERMINAL(15)),GETPOINTER(2,short,*,ROOT(18),NONE)),16);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(16));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"NULL",ROOT(19));

result = vpx_extget(PARAMETERS,"modifiers",1,2,TERMINAL(8),ROOT(20),ROOT(21));

PUTINTEGER(HandleControlClick( GETPOINTER(0,OpaqueControlRef,*,ROOT(23),TERMINAL(16)),GETSTRUCTURE(4,Point,TERMINAL(13)),GETINTEGER(TERMINAL(21)),GETPOINTER(0,void,*,ROOT(24),TERMINAL(19))),22);
result = kSuccess;

result = vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event_case_1_local_15(PARAMETERS,TERMINAL(16),TERMINAL(22),ROOT(25));

result = vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event_case_1_local_16(PARAMETERS,TERMINAL(0),TERMINAL(25));

result = kSuccess;

FOOTERWITHNONE(26)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Unknown_20_Selector_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Unknown_20_Selector_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavCBCustomize,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavCB_20_Customize,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Unknown_20_Selector_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Unknown_20_Selector_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavCBAdjustRect,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavCB_20_Adjust_20_Rect,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Unknown_20_Selector_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Unknown_20_Selector_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavCBNewLocation,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavCB_20_New_20_Location,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Unknown_20_Selector_case_4_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Unknown_20_Selector_case_4_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Unknown selector",ROOT(2));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(1),NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Unknown_20_Selector_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Unknown_20_Selector_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Unknown_20_Selector_case_4_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Unknown_20_Selector_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Unknown_20_Selector_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
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

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Unknown_20_Selector(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Unknown_20_Selector_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
if(vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Unknown_20_Selector_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
if(vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Unknown_20_Selector_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
if(vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Unknown_20_Selector_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Unknown_20_Selector_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(12)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Nib_20_Window,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

PUTPOINTER(Rect,*,GetWindowPortBounds( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(3),TERMINAL(1)),GETPOINTER(8,Rect,*,ROOT(4),NONE)),2);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_Rect_2D_to_2D_list,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(5),ROOT(6),ROOT(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(8),TERMINAL(6),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(9),TERMINAL(7),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
OUTPUT(1,TERMINAL(11))
FOOTERSINGLECASEWITHNONE(12)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(6)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Last_20_Height,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(4),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__3C_,2,0,TERMINAL(2),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(5)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7_case_2_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7_case_2_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Last_20_Width,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(4),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__3C_,2,0,TERMINAL(2),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(5)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7_case_2_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(3),ROOT(5));

result = vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7_case_2_local_3(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(4),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,root0,root1))
vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,root0,root1);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extget(PARAMETERS,"customRect",1,2,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_Rect_2D_to_2D_list,1,1,TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(6),ROOT(7),ROOT(8),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(7),TERMINAL(2),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(8),TERMINAL(3),ROOT(12));

result = vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3_case_1_local_7(PARAMETERS,TERMINAL(0),TERMINAL(11),TERMINAL(12),TERMINAL(9),TERMINAL(10),ROOT(13),ROOT(14));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
OUTPUT(1,TERMINAL(14))
FOOTERSINGLECASE(15)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Last_20_Height,TERMINAL(0),TERMINAL(2),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Last_20_Width,TERMINAL(4),TERMINAL(3),ROOT(5));

result = vpx_extget(PARAMETERS,"customRect",1,2,TERMINAL(1),ROOT(6),ROOT(7));

result = vpx_extset(PARAMETERS,"bottom",2,1,TERMINAL(7),TERMINAL(2),ROOT(8));

result = vpx_extset(PARAMETERS,"right",2,1,TERMINAL(8),TERMINAL(3),ROOT(9));

result = vpx_extset(PARAMETERS,"customRect",2,1,TERMINAL(1),TERMINAL(9),ROOT(10));

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(3),ROOT(4));
TERMINATEONFAILURE

result = vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(3),TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(5),TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Start_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Start_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Custom_20_View,1,1,TERMINAL(0),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavCtl_20_Add_20_Control,2,0,TERMINAL(0),TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Location_20_Prompt,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Start_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Start_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Nav Customize FAILED!",ROOT(3));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Start(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Start_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Start_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Accept(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Adjust_20_Rect_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Adjust_20_Rect_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"View moved.",ROOT(2));

result = vpx_constant(PARAMETERS,"View moved x: %d  y:%d",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_format,3,1,TERMINAL(3),TERMINAL(0),TERMINAL(1),ROOT(4));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Adjust_20_Rect_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Adjust_20_Rect_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Custom_20_View,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

result = vpx_extget(PARAMETERS,"customRect",1,2,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_extget(PARAMETERS,"left",1,2,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_extget(PARAMETERS,"top",1,2,TERMINAL(5),ROOT(8),ROOT(9));

MoveControl( GETPOINTER(0,OpaqueControlRef,*,ROOT(10),TERMINAL(3)),GETINTEGER(TERMINAL(7)),GETINTEGER(TERMINAL(9)));
result = kSuccess;

result = vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Adjust_20_Rect_case_1_local_7(PARAMETERS,TERMINAL(7),TERMINAL(9));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Adjust_20_Rect_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Adjust_20_Rect_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Did not find view!",ROOT(0));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Adjust_20_Rect_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Adjust_20_Rect_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Adjust_20_Rect_case_2_local_2(PARAMETERS);

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Adjust_20_Rect(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Adjust_20_Rect_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Adjust_20_Rect_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Terminate_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Terminate_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_The_20_Nib_20_Window,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

DisposeWindow( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(3),TERMINAL(2)));
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_The_20_Nib_20_Window,TERMINAL(1),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Terminate_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Terminate_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_The_20_Custom_20_View,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Terminate(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_NavCB_20_Terminate,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Terminate_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Terminate_case_1_local_4(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Get_20_Custom_20_View_20_ID_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Get_20_Custom_20_View_20_ID_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"100",ROOT(1));

result = vpx_constant(PARAMETERS,"\'usrb\'",ROOT(2));

result = vpx_method_New_20_ControlID(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Get_20_Custom_20_View_20_ID_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Get_20_Custom_20_View_20_ID_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Get_20_Custom_20_View_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Get_20_Custom_20_View_20_ID_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Get_20_Custom_20_View_20_ID_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_View_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_View_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(1));
FAILONFAILURE

result = vpx_extget(PARAMETERS,"window",1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

PUTPOINTER(OpaqueControlRef,*,HIViewGetRoot( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(5),TERMINAL(3))),4);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Custom_20_View_20_ID,1,1,TERMINAL(0),ROOT(6));
FAILONFAILURE

PUTINTEGER(HIViewFindByID( GETPOINTER(0,OpaqueControlRef,*,ROOT(8),TERMINAL(4)),GETSTRUCTURE(8,ControlID,TERMINAL(6)),GETPOINTER(0,OpaqueControlRef,**,ROOT(9),NONE)),7);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(7));
FAILONFAILURE

CFShow( GETCONSTPOINTER(void,*,TERMINAL(9)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_View_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_View_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_The_20_Custom_20_View,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_View(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_View_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_View_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_Item_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_Item_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_Item_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_Item_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"2",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_New_20_ControlID(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_Item_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_Item_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_Item_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_Item_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_Item_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_Item_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_Item_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_Item_case_1_local_2(PARAMETERS,TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Custom_20_View,2,1,TERMINAL(0),TERMINAL(1),ROOT(4));
FAILONFAILURE

PUTINTEGER(HIViewFindByID( GETPOINTER(0,OpaqueControlRef,*,ROOT(6),TERMINAL(4)),GETSTRUCTURE(8,ControlID,TERMINAL(3)),GETPOINTER(0,OpaqueControlRef,**,ROOT(7),NONE)),5);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Nib_20_Window_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Nib_20_Window_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_The_20_Nib_20_Window,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Nib_20_Window,1,1,TERMINAL(0),ROOT(3));
FAILONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_The_20_Nib_20_Window,TERMINAL(0),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Nib_20_Window_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Nib_20_Window_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_The_20_Nib_20_Window,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Nib_20_Window(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Nib_20_Window_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Nib_20_Window_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Get_20_Custom_20_Reply(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Custom_20_Reply,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Set_20_Custom_20_Reply(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Custom_20_Reply,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Create_20_Custom_20_View_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Create_20_Custom_20_View_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_The_20_Custom_20_View,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Create_20_Custom_20_View_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Create_20_Custom_20_View_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"HIViewFindByID",ROOT(1));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Create_20_Custom_20_View_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Create_20_Custom_20_View_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(10)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_The_20_Nib_20_Window,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Custom_20_View_20_ID,1,1,TERMINAL(0),ROOT(3));
FAILONFAILURE

PUTPOINTER(OpaqueControlRef,*,HIViewGetRoot( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(5),TERMINAL(2))),4);
result = kSuccess;

PUTINTEGER(HIViewFindByID( GETPOINTER(0,OpaqueControlRef,*,ROOT(7),TERMINAL(4)),GETSTRUCTURE(8,ControlID,TERMINAL(3)),GETPOINTER(0,OpaqueControlRef,**,ROOT(8),NONE)),6);
result = kSuccess;

result = vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Create_20_Custom_20_View_case_2_local_7(PARAMETERS,TERMINAL(6));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(6));
FAILONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_The_20_Custom_20_View,TERMINAL(0),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Create_20_Custom_20_View(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Create_20_Custom_20_View_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Create_20_Custom_20_View_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Create_20_Nib_20_Window(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"LocateItemsView",ROOT(1));

result = vpx_constant(PARAMETERS,"NavLocateItem",ROOT(2));

result = vpx_method_Create_20_Nib_20_Window(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Nav_20_Custom_20_Control_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Nav_20_Custom_20_Control_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"NavCustomControl: selector: \"",ROOT(3));

result = vpx_constant(PARAMETERS,"\" result: \"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(5),TERMINAL(1),NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Nav_20_Custom_20_Control_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Nav_20_Custom_20_Control_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window_20_Record,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method_Default_20_NULL(PARAMETERS,TERMINAL(2),ROOT(4));

PUTINTEGER(NavCustomControl( GETPOINTER(0,__NavDialog,*,ROOT(6),TERMINAL(3)),GETINTEGER(TERMINAL(1)),GETPOINTER(0,void,*,ROOT(7),TERMINAL(4))),5);
result = kSuccess;

result = vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Nav_20_Custom_20_Control_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(5),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(8)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Nav_20_Custom_20_Control_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Nav_20_Custom_20_Control_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Nav_20_Custom_20_Control(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Nav_20_Custom_20_Control_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Nav_20_Custom_20_Control_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCtl_20_Get_20_Location(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"AEDesc",ROOT(1));

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_method_Create_20_Block_20_Type(PARAMETERS,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));
FAILONFAILURE

result = vpx_extconstant(PARAMETERS,kNavCtlGetLocation,ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Nav_20_Custom_20_Control,3,1,TERMINAL(0),TERMINAL(5),TERMINAL(4),ROOT(6));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(6));
FAILONFAILURE

result = vpx_method_From_20_AEDesc(PARAMETERS,TERMINAL(4),ROOT(7));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCtl_20_Terminate(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kNavCtlTerminate,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Nav_20_Custom_20_Control,3,1,TERMINAL(0),TERMINAL(1),NONE,ROOT(2));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCtl_20_Add_20_Control(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kNavCtlAddControl,ROOT(2));

result = vpx_constant(PARAMETERS,"2",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,2,1,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Nav_20_Custom_20_Control,3,1,TERMINAL(0),TERMINAL(2),TERMINAL(1),ROOT(5));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(5));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_New_20_Location_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_New_20_Location_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Location_20_Prompt,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_New_20_Location_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_New_20_Location_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_New_20_Location(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_New_20_Location_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_New_20_Location_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_case_1_local_8_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_case_1_local_8_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"void",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(1),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(3),TERMINAL(4),TERMINAL(0),TERMINAL(5),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_case_1_local_8_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_case_1_local_8_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Current location",ROOT(1));

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_extconstant(PARAMETERS,kControlLabelPart,ROOT(3));

result = vpx_extconstant(PARAMETERS,kControlStaticTextCFStringTag,ROOT(4));

result = vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_case_1_local_8_case_1_local_5(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(5));

PUTINTEGER(SetControlData( GETPOINTER(0,OpaqueControlRef,*,ROOT(7),TERMINAL(0)),GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(2)),GETCONSTPOINTER(void,*,TERMINAL(5))),6);
result = kSuccess;

result = vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_case_1_local_8_case_1_local_7(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extget(PARAMETERS,"window",1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

PUTPOINTER(Rect,*,GetControlBounds( GETPOINTER(0,OpaqueControlRef,*,ROOT(5),TERMINAL(0)),GETPOINTER(8,Rect,*,ROOT(6),NONE)),4);
result = kSuccess;

PUTINTEGER(InvalWindowRect( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(8),TERMINAL(3)),GETCONSTPOINTER(Rect,*,TERMINAL(4))),7);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Location updated.",ROOT(0));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( \'LNam\' 1 )",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Custom_20_Item,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavCtl_20_Get_20_Location,1,1,TERMINAL(0),ROOT(4));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Display_20_Name,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(5),ROOT(6));

result = vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_case_1_local_8(PARAMETERS,TERMINAL(3),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(5));

result = vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_case_1_local_11(PARAMETERS,TERMINAL(3),TERMINAL(1));

result = vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_case_1_local_12(PARAMETERS);

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Location update FAILED!",ROOT(0));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_case_2_local_2(PARAMETERS);

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

/* Stop Universals */






Nat4	loadClasses_Project_20_Open_20_Activity(V_Environment environment);
Nat4	loadClasses_Project_20_Open_20_Activity(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Project Open Activity",environment);
	if(result == NULL) return kERROR;
	VPLC_Project_20_Open_20_Activity_class_load(result,environment);
	result = class_new("Project File Activity Stage",environment);
	if(result == NULL) return kERROR;
	VPLC_Project_20_File_20_Activity_20_Stage_class_load(result,environment);
	result = class_new("POAS Load File",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Load_20_File_class_load(result,environment);
	result = class_new("POAS Find Files",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Find_20_Files_class_load(result,environment);
	result = class_new("POAS Read Primitives",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Read_20_Primitives_class_load(result,environment);
	result = class_new("POAS Read Sections",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Read_20_Sections_class_load(result,environment);
	result = class_new("POAS Open Project",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Open_20_Project_class_load(result,environment);
	result = class_new("POAS Open Sections",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Open_20_Sections_class_load(result,environment);
	result = class_new("POAS Resolve References",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Resolve_20_References_class_load(result,environment);
	result = class_new("POAS Post Load",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Post_20_Load_class_load(result,environment);
	result = class_new("POAS Update Classes",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Update_20_Classes_class_load(result,environment);
	result = class_new("POAS Update Persistents",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Update_20_Persistents_class_load(result,environment);
	result = class_new("POAS Install Tools",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Install_20_Tools_class_load(result,environment);
	result = class_new("POAS Copy Resources",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Copy_20_Resources_class_load(result,environment);
	result = class_new("POAS Open Editor",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Open_20_Editor_class_load(result,environment);
	result = class_new("POAS Name Application",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Name_20_Application_class_load(result,environment);
	result = class_new("PFAS Locate Files Manually",environment);
	if(result == NULL) return kERROR;
	VPLC_PFAS_20_Locate_20_Files_20_Manually_class_load(result,environment);
	result = class_new("PFAS Nav Locate Files Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Project_20_Open_20_Activity(V_Environment environment);
Nat4	loadUniversals_Project_20_Open_20_Activity(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("VPL Add Search Locations",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPL_20_Add_20_Search_20_Locations,NULL);

	result = method_new("Project Open Activity/Error",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Open_20_Activity_2F_Error,NULL);

	result = method_new("Project Open Activity/Get Project Helper",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Open_20_Activity_2F_Get_20_Project_20_Helper,NULL);

	result = method_new("Project Open Activity/Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Open_20_Activity_2F_Run,NULL);

	result = method_new("Project Open Activity/Initialize Progress Window",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Open_20_Activity_2F_Initialize_20_Progress_20_Window,NULL);

	result = method_new("Project File Activity Stage/Run Begin",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_File_20_Activity_20_Stage_2F_Run_20_Begin,NULL);

	result = method_new("Project File Activity Stage/Update Percent",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_File_20_Activity_20_Stage_2F_Update_20_Percent,NULL);

	result = method_new("Project File Activity Stage/Up Count",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_File_20_Activity_20_Stage_2F_Up_20_Count,NULL);

	result = method_new("Project File Activity Stage/Set Count",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_File_20_Activity_20_Stage_2F_Set_20_Count,NULL);

	result = method_new("POAS Load File/Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Load_20_File_2F_Run,NULL);

	result = method_new("POAS Find Files/Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Find_20_Files_2F_Run,NULL);

	result = method_new("POAS Find Files/Run Begin",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Find_20_Files_2F_Run_20_Begin,NULL);

	result = method_new("POAS Find Files/Run End",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Find_20_Files_2F_Run_20_End,NULL);

	result = method_new("POAS Read Primitives/Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Read_20_Primitives_2F_Run,NULL);

	result = method_new("POAS Read Primitives/Run Begin",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Read_20_Primitives_2F_Run_20_Begin,NULL);

	result = method_new("POAS Read Primitives/Next Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Read_20_Primitives_2F_Next_20_Name,NULL);

	result = method_new("POAS Read Sections/Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Read_20_Sections_2F_Run,NULL);

	result = method_new("POAS Read Sections/Run Begin",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Read_20_Sections_2F_Run_20_Begin,NULL);

	result = method_new("POAS Read Sections/Run End",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Read_20_Sections_2F_Run_20_End,NULL);

	result = method_new("POAS Open Project/Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Open_20_Project_2F_Run,NULL);

	result = method_new("POAS Open Sections/Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Open_20_Sections_2F_Run,NULL);

	result = method_new("POAS Open Sections/Run Begin",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Open_20_Sections_2F_Run_20_Begin,NULL);

	result = method_new("POAS Open Sections/Run End",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Open_20_Sections_2F_Run_20_End,NULL);

	result = method_new("POAS Open Sections/Push On Stack",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Open_20_Sections_2F_Push_20_On_20_Stack,NULL);

	result = method_new("POAS Resolve References/Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Resolve_20_References_2F_Run,NULL);

	result = method_new("POAS Resolve References/Run Begin",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Resolve_20_References_2F_Run_20_Begin,NULL);

	result = method_new("POAS Resolve References/Run End",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Resolve_20_References_2F_Run_20_End,NULL);

	result = method_new("POAS Post Load/Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Post_20_Load_2F_Run,NULL);

	result = method_new("POAS Update Classes/Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Update_20_Classes_2F_Run,NULL);

	result = method_new("POAS Update Classes/Run Begin",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Update_20_Classes_2F_Run_20_Begin,NULL);

	result = method_new("POAS Update Classes/Run End",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Update_20_Classes_2F_Run_20_End,NULL);

	result = method_new("POAS Update Persistents/Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Update_20_Persistents_2F_Run,NULL);

	result = method_new("POAS Update Persistents/Run Begin",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Update_20_Persistents_2F_Run_20_Begin,NULL);

	result = method_new("POAS Update Persistents/Run End",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Update_20_Persistents_2F_Run_20_End,NULL);

	result = method_new("POAS Install Tools/Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Install_20_Tools_2F_Run,NULL);

	result = method_new("POAS Copy Resources/Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Copy_20_Resources_2F_Run,NULL);

	result = method_new("POAS Copy Resources/Run Begin",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Copy_20_Resources_2F_Run_20_Begin,NULL);

	result = method_new("POAS Copy Resources/Next Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Copy_20_Resources_2F_Next_20_Name,NULL);

	result = method_new("POAS Open Editor/Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Open_20_Editor_2F_Run,NULL);

	result = method_new("POAS Name Application/Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Name_20_Application_2F_Run,NULL);

	result = method_new("POAS Name Application/Run Begin",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Name_20_Application_2F_Run_20_Begin,NULL);

	result = method_new("POAS Name Application/Run End",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_POAS_20_Name_20_Application_2F_Run_20_End,NULL);

	result = method_new("PFAS Locate Files Manually/Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Run,NULL);

	result = method_new("PFAS Locate Files Manually/Run Begin",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Run_20_Begin,NULL);

	result = method_new("PFAS Locate Files Manually/Item Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Run,NULL);

	result = method_new("PFAS Locate Files Manually/Item Stop",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Stop,NULL);

	result = method_new("PFAS Locate Files Manually/Item Start",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start,NULL);

	result = method_new("PFAS Locate Files Manually/Nav File Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback,NULL);

	result = method_new("PFAS Nav Locate Files Dialog/NavCB Event",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event,NULL);

	result = method_new("PFAS Nav Locate Files Dialog/NavCB Unknown Selector",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Unknown_20_Selector,NULL);

	result = method_new("PFAS Nav Locate Files Dialog/NavCB Customize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize,NULL);

	result = method_new("PFAS Nav Locate Files Dialog/NavCB Start",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Start,NULL);

	result = method_new("PFAS Nav Locate Files Dialog/NavCB Accept",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Accept,NULL);

	result = method_new("PFAS Nav Locate Files Dialog/NavCB Adjust Rect",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Adjust_20_Rect,NULL);

	result = method_new("PFAS Nav Locate Files Dialog/NavCB Terminate",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Terminate,NULL);

	result = method_new("PFAS Nav Locate Files Dialog/Get Custom View ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Get_20_Custom_20_View_20_ID,NULL);

	result = method_new("PFAS Nav Locate Files Dialog/Find Custom View",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_View,NULL);

	result = method_new("PFAS Nav Locate Files Dialog/Find Custom Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_Item,NULL);

	result = method_new("PFAS Nav Locate Files Dialog/Find Nib Window",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Nib_20_Window,NULL);

	result = method_new("PFAS Nav Locate Files Dialog/Get Custom Reply",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Get_20_Custom_20_Reply,NULL);

	result = method_new("PFAS Nav Locate Files Dialog/Set Custom Reply",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Set_20_Custom_20_Reply,NULL);

	result = method_new("PFAS Nav Locate Files Dialog/Create Custom View",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Create_20_Custom_20_View,NULL);

	result = method_new("PFAS Nav Locate Files Dialog/Create Nib Window",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Create_20_Nib_20_Window,NULL);

	result = method_new("PFAS Nav Locate Files Dialog/Nav Custom Control",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Nav_20_Custom_20_Control,NULL);

	result = method_new("PFAS Nav Locate Files Dialog/NavCtl Get Location",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCtl_20_Get_20_Location,NULL);

	result = method_new("PFAS Nav Locate Files Dialog/NavCtl Terminate",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCtl_20_Terminate,NULL);

	result = method_new("PFAS Nav Locate Files Dialog/NavCtl Add Control",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCtl_20_Add_20_Control,NULL);

	result = method_new("PFAS Nav Locate Files Dialog/NavCB New Location",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_New_20_Location,NULL);

	result = method_new("PFAS Nav Locate Files Dialog/Update Location Prompt",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_Project_20_Open_20_Activity(V_Environment environment);
Nat4	loadPersistents_Project_20_Open_20_Activity(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_Project_20_Open_20_Activity(V_Environment environment);
Nat4	load_Project_20_Open_20_Activity(V_Environment environment)
{

	loadClasses_Project_20_Open_20_Activity(environment);
	loadUniversals_Project_20_Open_20_Activity(environment);
	loadPersistents_Project_20_Open_20_Activity(environment);
	return kNOERROR;

}

