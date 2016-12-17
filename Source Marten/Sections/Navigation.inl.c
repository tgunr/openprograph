/* A VPL Section File */
/*

Navigation.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_Nav_20_Ask_20_Discard_20_Changes_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Ask_20_Discard_20_Changes_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Nav_20_Ask_20_Discard_20_Changes_20_Dialog,1,1,NONE,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Modality,2,0,TERMINAL(3),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parent_20_Window,2,0,TERMINAL(3),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Completion_20_Behavior,2,0,TERMINAL(3),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Discard_20_Changes_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Ask_20_Discard_20_Changes_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Discard_20_Changes_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Ask_20_Discard_20_Changes_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Discard_20_Changes_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Ask_20_Discard_20_Changes_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Ask_20_Discard_20_Changes_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Nav_20_Ask_20_Discard_20_Changes_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Ask_20_Discard_20_Changes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Nav_20_Ask_20_Discard_20_Changes_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,1,0,TERMINAL(3));
FAILONFAILURE

result = vpx_method_Nav_20_Ask_20_Discard_20_Changes_case_1_local_4(PARAMETERS,TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Nav_20_Ask_20_Review_20_Documents_20_Dialog,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Document_20_Count,2,0,TERMINAL(2),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Completion_20_Behavior,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Ask_20_Review_20_Documents_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Nav_20_Ask_20_Review_20_Documents_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Nav_20_Ask_20_Review_20_Documents_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,1,0,TERMINAL(2));
FAILONFAILURE

result = vpx_method_Nav_20_Ask_20_Review_20_Documents_case_1_local_4(PARAMETERS,TERMINAL(2));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Nav_20_Ask_20_Save_20_Changes_20_Dialog,1,1,NONE,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Action,2,0,TERMINAL(4),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Modality,2,0,TERMINAL(4),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parent_20_Window,2,0,TERMINAL(4),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Completion_20_Behavior,2,0,TERMINAL(4),TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Ask_20_Save_20_Changes_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Nav_20_Ask_20_Save_20_Changes_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Nav_20_Ask_20_Save_20_Changes_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,1,0,TERMINAL(4));
FAILONFAILURE

result = vpx_method_Nav_20_Ask_20_Save_20_Changes_case_1_local_4(PARAMETERS,TERMINAL(4));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Nav_20_Choose_20_File_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Choose_20_File_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Nav_20_Choose_20_File_20_Dialog,1,1,NONE,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Type_20_List,2,0,TERMINAL(4),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Modality,2,0,TERMINAL(4),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parent_20_Window,2,0,TERMINAL(4),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Completion_20_Behavior,2,0,TERMINAL(4),TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Nav_20_Choose_20_File_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Choose_20_File_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Choose_20_File_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Choose_20_File_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Choose_20_File_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Choose_20_File_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Choose_20_File_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Nav_20_Choose_20_File_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Choose_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Nav_20_Choose_20_File_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,1,0,TERMINAL(4));
FAILONFAILURE

result = vpx_method_Nav_20_Choose_20_File_case_1_local_4(PARAMETERS,TERMINAL(4));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Nav_20_Choose_20_Folder_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Choose_20_Folder_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Nav_20_Choose_20_Folder_20_Dialog,1,1,NONE,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Modality,2,0,TERMINAL(3),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parent_20_Window,2,0,TERMINAL(3),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Completion_20_Behavior,2,0,TERMINAL(3),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_Nav_20_Choose_20_Folder_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Choose_20_Folder_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Choose_20_Folder_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Choose_20_Folder_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Choose_20_Folder_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Choose_20_Folder_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Choose_20_Folder_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Nav_20_Choose_20_Folder_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Choose_20_Folder(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Nav_20_Choose_20_Folder_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,1,0,TERMINAL(3));
FAILONFAILURE

result = vpx_method_Nav_20_Choose_20_Folder_case_1_local_4(PARAMETERS,TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Nav_20_Choose_20_Object_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Choose_20_Object_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Nav_20_Choose_20_Object_20_Dialog,1,1,NONE,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Modality,2,0,TERMINAL(3),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parent_20_Window,2,0,TERMINAL(3),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Completion_20_Behavior,2,0,TERMINAL(3),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_Nav_20_Choose_20_Object_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Choose_20_Object_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Choose_20_Object_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Choose_20_Object_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Choose_20_Object_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Choose_20_Object_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Choose_20_Object_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Nav_20_Choose_20_Object_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Choose_20_Object(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Nav_20_Choose_20_Object_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,1,0,TERMINAL(3));
FAILONFAILURE

result = vpx_method_Nav_20_Choose_20_Object_case_1_local_4(PARAMETERS,TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Nav_20_Choose_20_Volume_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Choose_20_Volume_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Nav_20_Choose_20_Volume_20_Dialog,1,1,NONE,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Modality,2,0,TERMINAL(3),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parent_20_Window,2,0,TERMINAL(3),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Completion_20_Behavior,2,0,TERMINAL(3),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_Nav_20_Choose_20_Volume_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Choose_20_Volume_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Choose_20_Volume_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Choose_20_Volume_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Choose_20_Volume_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Choose_20_Volume_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Choose_20_Volume_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Nav_20_Choose_20_Volume_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Choose_20_Volume(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Nav_20_Choose_20_Volume_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,1,0,TERMINAL(3));
FAILONFAILURE

result = vpx_method_Nav_20_Choose_20_Volume_case_1_local_4(PARAMETERS,TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Nav_20_Get_20_File_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Get_20_File_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Nav_20_Get_20_File_20_Dialog,1,1,NONE,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Type_20_List,2,0,TERMINAL(4),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Modality,2,0,TERMINAL(4),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parent_20_Window,2,0,TERMINAL(4),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Completion_20_Behavior,2,0,TERMINAL(4),TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Nav_20_Get_20_File_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Get_20_File_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Get_20_File_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Get_20_File_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Get_20_File_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Get_20_File_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Get_20_File_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Nav_20_Get_20_File_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Get_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Nav_20_Get_20_File_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,1,0,TERMINAL(4));
FAILONFAILURE

result = vpx_method_Nav_20_Get_20_File_case_1_local_4(PARAMETERS,TERMINAL(4));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Nav_20_New_20_Folder_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Nav_20_New_20_Folder_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Nav_20_New_20_Folder_20_Dialog,1,1,NONE,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_File_20_Name,2,0,TERMINAL(4),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Modality,2,0,TERMINAL(4),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parent_20_Window,2,0,TERMINAL(4),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Completion_20_Behavior,2,0,TERMINAL(4),TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Nav_20_New_20_Folder_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_New_20_Folder_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_New_20_Folder_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_New_20_Folder_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_New_20_Folder_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_New_20_Folder_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_New_20_Folder_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Nav_20_New_20_Folder_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_New_20_Folder(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Nav_20_New_20_Folder_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,1,0,TERMINAL(4));
FAILONFAILURE

result = vpx_method_Nav_20_New_20_Folder_case_1_local_4(PARAMETERS,TERMINAL(4));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Nav_20_Put_20_File_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Put_20_File_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
INPUT(5,5)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Nav_20_Put_20_File_20_Dialog,1,1,NONE,ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_File_20_Creator,2,0,TERMINAL(6),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_File_20_Type,2,0,TERMINAL(6),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Modality,2,0,TERMINAL(6),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parent_20_Window,2,0,TERMINAL(6),TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Completion_20_Behavior,2,0,TERMINAL(6),TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_File_20_Name,2,0,TERMINAL(6),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_Nav_20_Put_20_File_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Put_20_File_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Put_20_File_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Put_20_File_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Put_20_File_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Put_20_File_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Put_20_File_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Nav_20_Put_20_File_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Put_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
INPUT(5,5)
result = kSuccess;

result = vpx_method_Nav_20_Put_20_File_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,1,0,TERMINAL(6));
FAILONFAILURE

result = vpx_method_Nav_20_Put_20_File_case_1_local_4(PARAMETERS,TERMINAL(6));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_New_20_NavTypeList_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_New_20_NavTypeList_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"12",ROOT(1));

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__2A2A_,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(4),TERMINAL(1),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_New_20_NavTypeList_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_New_20_NavTypeList_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_method_New_20_NavTypeList_case_1_local_3_case_1_local_5(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(1))
OUTPUT(2,TERMINAL(0))
OUTPUT(3,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_New_20_NavTypeList_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_New_20_NavTypeList_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( \'****\' )",ROOT(1));

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_constant(PARAMETERS,"12",ROOT(3));

result = vpx_constant(PARAMETERS,"( 0 )",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(2))
OUTPUT(2,TERMINAL(1))
OUTPUT(3,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_New_20_NavTypeList_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_New_20_NavTypeList_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_New_20_NavTypeList_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2,root3))
vpx_method_New_20_NavTypeList_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2,root3);
return outcome;
}

enum opTrigger vpx_method_New_20_NavTypeList_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_New_20_NavTypeList_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_New_20_NavTypeList_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_New_20_NavTypeList_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_New_20_NavTypeList_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_New_20_NavTypeList_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_New_20_NavTypeList_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_New_20_NavTypeList_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\'****\'",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_New_20_NavTypeList_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_New_20_NavTypeList_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_New_20_NavTypeList_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_New_20_NavTypeList_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_New_20_NavTypeList_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_New_20_NavTypeList_case_1_local_4_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_New_20_NavTypeList_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_New_20_NavTypeList_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NavTypeList",ROOT(2));

result = vpx_method_New_20_NavTypeList_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_method_New_20_NavTypeList_case_1_local_4(PARAMETERS,TERMINAL(0),ROOT(7));

result = vpx_constant(PARAMETERS,"2",ROOT(8));

result = vpx_method_Create_20_Block_20_Type(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(8),ROOT(9));

result = vpx_extset(PARAMETERS,"componentSignature",2,1,TERMINAL(9),TERMINAL(7),ROOT(10));

result = vpx_extset(PARAMETERS,"osTypeCount",2,1,TERMINAL(10),TERMINAL(4),ROOT(11));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(5),TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,11,12)
result = vpx_extset(PARAMETERS,"osType",3,1,LOOP(0),LIST(5),LIST(6),ROOT(12));
REPEATFINISH
} else {
ROOTNULL(12,TERMINAL(11))
}

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(13)
}

enum opTrigger vpx_method_New_20_NavTypeList_case_2_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_New_20_NavTypeList_case_2_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"12",ROOT(1));

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__2A2A_,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(4),TERMINAL(1),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_New_20_NavTypeList_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_New_20_NavTypeList_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_method_New_20_NavTypeList_case_2_local_3_case_1_local_5(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(1))
OUTPUT(2,TERMINAL(0))
OUTPUT(3,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_New_20_NavTypeList_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_New_20_NavTypeList_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( \'****\' )",ROOT(1));

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_constant(PARAMETERS,"12",ROOT(3));

result = vpx_constant(PARAMETERS,"( 0 )",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(2))
OUTPUT(2,TERMINAL(1))
OUTPUT(3,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_New_20_NavTypeList_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_New_20_NavTypeList_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_New_20_NavTypeList_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2,root3))
vpx_method_New_20_NavTypeList_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2,root3);
return outcome;
}

enum opTrigger vpx_method_New_20_NavTypeList_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_New_20_NavTypeList_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_New_20_NavTypeList_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_New_20_NavTypeList_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_New_20_NavTypeList_case_2_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_New_20_NavTypeList_case_2_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_New_20_NavTypeList_case_2_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_New_20_NavTypeList_case_2_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\'****\'",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_New_20_NavTypeList_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_New_20_NavTypeList_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_New_20_NavTypeList_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_New_20_NavTypeList_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_New_20_NavTypeList_case_2_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_New_20_NavTypeList_case_2_local_4_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_New_20_NavTypeList_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_New_20_NavTypeList_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_evaluate(PARAMETERS,"(A*4)+8",1,1,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(0),TERMINAL(3),TERMINAL(4),TERMINAL(1),ROOT(5),ROOT(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_New_20_NavTypeList_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_New_20_NavTypeList_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NavTypeList",ROOT(2));

result = vpx_method_New_20_NavTypeList_case_2_local_3(PARAMETERS,TERMINAL(1),ROOT(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_method_New_20_NavTypeList_case_2_local_4(PARAMETERS,TERMINAL(0),ROOT(7));

result = vpx_constant(PARAMETERS,"2",ROOT(8));

result = vpx_method_Create_20_Block_20_Type(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(8),ROOT(9));

result = vpx_extset(PARAMETERS,"componentSignature",2,1,TERMINAL(9),TERMINAL(7),ROOT(10));

result = vpx_extset(PARAMETERS,"osTypeCount",2,1,TERMINAL(10),TERMINAL(4),ROOT(11));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(5),TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_New_20_NavTypeList_case_2_local_9(PARAMETERS,TERMINAL(11),LIST(5),LIST(6));
REPEATFINISH
} else {
}

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(12)
}

enum opTrigger vpx_method_New_20_NavTypeList(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_New_20_NavTypeList_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_New_20_NavTypeList_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_NavEvent_20_Simple_case_1_local_2_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_NavEvent_20_Simple_case_1_local_2_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavCBAccept,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"Accept\"",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_NavEvent_20_Simple_case_1_local_2_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_NavEvent_20_Simple_case_1_local_2_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavCBCancel,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"Cancel\"",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_NavEvent_20_Simple_case_1_local_2_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_NavEvent_20_Simple_case_1_local_2_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavCBTerminate,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"Terminate\"",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_NavEvent_20_Simple_case_1_local_2_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_NavEvent_20_Simple_case_1_local_2_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavCBStart,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"Start\"",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_NavEvent_20_Simple_case_1_local_2_case_1_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_NavEvent_20_Simple_case_1_local_2_case_1_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavCBUserAction,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"User Action: \"",ROOT(2));

result = vpx_extget(PARAMETERS,"context",1,2,TERMINAL(1),ROOT(3),ROOT(4));

PUTINTEGER(NavDialogGetUserAction( GETPOINTER(0,__NavDialog,*,ROOT(6),TERMINAL(4))),5);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(5),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_NavEvent_20_Simple_case_1_local_2_case_1_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_NavEvent_20_Simple_case_1_local_2_case_1_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavCBEvent,TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_NavEvent_20_Simple_case_1_local_2_case_1_local_2_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_NavEvent_20_Simple_case_1_local_2_case_1_local_2_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_NavEvent_20_Simple_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_NavEvent_20_Simple_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_NavEvent_20_Simple_case_1_local_2_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_NavEvent_20_Simple_case_1_local_2_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_NavEvent_20_Simple_case_1_local_2_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_NavEvent_20_Simple_case_1_local_2_case_1_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_NavEvent_20_Simple_case_1_local_2_case_1_local_2_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_NavEvent_20_Simple_case_1_local_2_case_1_local_2_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_NavEvent_20_Simple_case_1_local_2_case_1_local_2_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_NavEvent_20_Simple_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_NavEvent_20_Simple_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_NavEvent_20_Simple_case_1_local_2_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_NavEvent_20_Simple(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_NavEvent_20_Simple_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_TEST_20_New_20_Nav_20_Modal_20_GF_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_TEST_20_New_20_Nav_20_Modal_20_GF_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_TEST_20_New_20_Nav_20_Modal_20_GF_case_1_local_6_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_TEST_20_New_20_Nav_20_Modal_20_GF_case_1_local_6_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_TEST_20_New_20_Nav_20_Modal_20_GF_case_1_local_6_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_TEST_20_New_20_Nav_20_Modal_20_GF_case_1_local_6_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_TEST_20_New_20_Nav_20_Modal_20_GF_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_TEST_20_New_20_Nav_20_Modal_20_GF_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_TEST_20_New_20_Nav_20_Modal_20_GF_case_1_local_6_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_TEST_20_New_20_Nav_20_Modal_20_GF_case_1_local_6_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_TEST_20_New_20_Nav_20_Modal_20_GF_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_TEST_20_New_20_Nav_20_Modal_20_GF_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Canceled_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_List,1,1,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_TEST_20_New_20_Nav_20_Modal_20_GF_case_1_local_6_case_1_local_5(PARAMETERS,LIST(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_TEST_20_New_20_Nav_20_Modal_20_GF(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Nav Get File Dialog",ROOT(0));

result = vpx_method_Nav_20_Dialog_2F_New(PARAMETERS,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_method_TEST_20_New_20_Nav_20_Modal_20_GF_case_1_local_4(PARAMETERS,TERMINAL(1),NONE,NONE,NONE);

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_method_TEST_20_New_20_Nav_20_Modal_20_GF_case_1_local_6(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_TEST_20_New_20_Nav_20_Modal_20_CF_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_TEST_20_New_20_Nav_20_Modal_20_CF_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_TEST_20_New_20_Nav_20_Modal_20_CF_case_1_local_6_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_TEST_20_New_20_Nav_20_Modal_20_CF_case_1_local_6_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_TEST_20_New_20_Nav_20_Modal_20_CF_case_1_local_6_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_TEST_20_New_20_Nav_20_Modal_20_CF_case_1_local_6_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_TEST_20_New_20_Nav_20_Modal_20_CF_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_TEST_20_New_20_Nav_20_Modal_20_CF_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_TEST_20_New_20_Nav_20_Modal_20_CF_case_1_local_6_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_TEST_20_New_20_Nav_20_Modal_20_CF_case_1_local_6_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_TEST_20_New_20_Nav_20_Modal_20_CF_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_TEST_20_New_20_Nav_20_Modal_20_CF_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Canceled_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_List,1,1,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_TEST_20_New_20_Nav_20_Modal_20_CF_case_1_local_6_case_1_local_5(PARAMETERS,LIST(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_TEST_20_New_20_Nav_20_Modal_20_CF(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Nav Choose Folder Dialog",ROOT(0));

result = vpx_method_Nav_20_Dialog_2F_New(PARAMETERS,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_method_TEST_20_New_20_Nav_20_Modal_20_CF_case_1_local_4(PARAMETERS,TERMINAL(1),NONE,NONE,NONE);

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_method_TEST_20_New_20_Nav_20_Modal_20_CF_case_1_local_6(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(2)
}




	Nat4 tempAttribute_Navigation_20_Reply_2F_Version[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Reply_2F_Key_20_Script[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Reply_2F_Valid_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Reply_2F_Replacing_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Reply_2F_Stationery_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Reply_2F_Translation_20_Needed_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Reply_2F_Selected_20_Files[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Event_20_Callback_20_Behavior[] = {
0000000000, 0X00000350, 0X000000A0, 0X00000023, 0X00000014, 0X00000100, 0X000003BC, 0X000000F4,
0X00000390, 0X000000F0, 0X00000364, 0X000000EC, 0X00000330, 0X000000E8, 0X000000E4, 0X000000E0,
0X000002B8, 0X000002C0, 0X00000194, 0X00000288, 0X00000264, 0X0000026C, 0X00000190, 0X00000234,
0X00000210, 0X00000218, 0X0000018C, 0X000001EC, 0X000001D4, 0X000001AC, 0X000001B4, 0X00000188,
0X00000180, 0X000000DC, 0X00000150, 0X000000D8, 0X00000118, 0X000000D0, 0X000000B4, 0X000000BC,
0X17000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000D0, 0X0000000D, 0X000000C0,
0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000104, 0000000000, 0X0000013C, 0X0000016C,
0X000002E4, 0X00000300, 0X0000031C, 0X00000350, 0X0000037C, 0X000003A8, 0000000000, 0000000000,
0X000003D8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000120, 0X19000000,
0X4E617669, 0X67617469, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000158, 0X10000000, 0X2F4E6176, 0X4576656E,
0X74205369, 0X6D706C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000004, 0X00000198, 0X000001FC, 0X00000250, 0X000002A4, 0X13000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D4, 0X00000001, 0X000001B8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000001D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0X05000000, 0X4F776E65, 0X72000000, 0X15000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000234, 0X00000001, 0X0000021C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000238, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X15000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000288, 0X00000001, 0X00000270, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X0000028C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X13000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000338, 0X16000000, 0X2F446F20, 0X43616C6C,
0X6261636B, 0X204E6F20, 0X52657375, 0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0F000000, 0X4E617645, 0X76656E74, 0X50726F63, 0X50747200, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0E000000, 0X4E65774E, 0X61764576,
0X656E7455, 0X50500000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C4,
0X12000000, 0X44697370, 0X6F73654E, 0X61764576, 0X656E7455, 0X50500000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Event_20_Callback_20_Behavior[] = {
0000000000, 0X00000350, 0X000000A0, 0X00000023, 0X00000014, 0X00000100, 0X000003BC, 0X000000F4,
0X00000390, 0X000000F0, 0X00000364, 0X000000EC, 0X00000330, 0X000000E8, 0X000000E4, 0X000000E0,
0X000002B8, 0X000002C0, 0X00000194, 0X00000288, 0X00000264, 0X0000026C, 0X00000190, 0X00000234,
0X00000210, 0X00000218, 0X0000018C, 0X000001EC, 0X000001D4, 0X000001AC, 0X000001B4, 0X00000188,
0X00000180, 0X000000DC, 0X00000150, 0X000000D8, 0X00000118, 0X000000D0, 0X000000B4, 0X000000BC,
0X17000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000D0, 0X0000000D, 0X000000C0,
0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000104, 0000000000, 0X0000013C, 0X0000016C,
0X000002E4, 0X00000300, 0X0000031C, 0X00000350, 0X0000037C, 0X000003A8, 0000000000, 0000000000,
0X000003D8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000120, 0X19000000,
0X4E617669, 0X67617469, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000158, 0X10000000, 0X2F4E6176, 0X4576656E,
0X74205369, 0X6D706C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000004, 0X00000198, 0X000001FC, 0X00000250, 0X000002A4, 0X13000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D4, 0X00000001, 0X000001B8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000001D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0X05000000, 0X4F776E65, 0X72000000, 0X15000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000234, 0X00000001, 0X0000021C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000238, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X15000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000288, 0X00000001, 0X00000270, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X0000028C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X13000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000338, 0X16000000, 0X2F446F20, 0X43616C6C,
0X6261636B, 0X204E6F20, 0X52657375, 0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0F000000, 0X4E617645, 0X76656E74, 0X50726F63, 0X50747200, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0E000000, 0X4E65774E, 0X61764576,
0X656E7455, 0X50500000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C4,
0X12000000, 0X44697370, 0X6F73654E, 0X61764576, 0X656E7455, 0X50500000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Save_20_Changes_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Navigation_20_Services_20_Window_2F_Event_20_Callback_20_Behavior[] = {
0000000000, 0X00000350, 0X000000A0, 0X00000023, 0X00000014, 0X00000100, 0X000003BC, 0X000000F4,
0X00000390, 0X000000F0, 0X00000364, 0X000000EC, 0X00000330, 0X000000E8, 0X000000E4, 0X000000E0,
0X000002B8, 0X000002C0, 0X00000194, 0X00000288, 0X00000264, 0X0000026C, 0X00000190, 0X00000234,
0X00000210, 0X00000218, 0X0000018C, 0X000001EC, 0X000001D4, 0X000001AC, 0X000001B4, 0X00000188,
0X00000180, 0X000000DC, 0X00000150, 0X000000D8, 0X00000118, 0X000000D0, 0X000000B4, 0X000000BC,
0X17000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000D0, 0X0000000D, 0X000000C0,
0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000104, 0000000000, 0X0000013C, 0X0000016C,
0X000002E4, 0X00000300, 0X0000031C, 0X00000350, 0X0000037C, 0X000003A8, 0000000000, 0000000000,
0X000003D8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000120, 0X19000000,
0X4E617669, 0X67617469, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000158, 0X10000000, 0X2F4E6176, 0X4576656E,
0X74205369, 0X6D706C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000004, 0X00000198, 0X000001FC, 0X00000250, 0X000002A4, 0X13000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D4, 0X00000001, 0X000001B8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000001D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0X05000000, 0X4F776E65, 0X72000000, 0X15000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000234, 0X00000001, 0X0000021C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000238, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X15000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000288, 0X00000001, 0X00000270, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X0000028C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X13000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000338, 0X16000000, 0X2F446F20, 0X43616C6C,
0X6261636B, 0X204E6F20, 0X52657375, 0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0F000000, 0X4E617645, 0X76656E74, 0X50726F63, 0X50747200, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0E000000, 0X4E65774E, 0X61764576,
0X656E7455, 0X50500000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C4,
0X12000000, 0X44697370, 0X6F73654E, 0X61764576, 0X656E7455, 0X50500000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Services_20_Window_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Services_20_Window_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Services_20_Window_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Services_20_Window_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Services_20_Window_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Services_20_Window_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Services_20_Window_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Services_20_Window_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Event_20_Callback_20_Behavior[] = {
0000000000, 0X00000350, 0X000000A0, 0X00000023, 0X00000014, 0X00000100, 0X000003BC, 0X000000F4,
0X00000390, 0X000000F0, 0X00000364, 0X000000EC, 0X00000330, 0X000000E8, 0X000000E4, 0X000000E0,
0X000002B8, 0X000002C0, 0X00000194, 0X00000288, 0X00000264, 0X0000026C, 0X00000190, 0X00000234,
0X00000210, 0X00000218, 0X0000018C, 0X000001EC, 0X000001D4, 0X000001AC, 0X000001B4, 0X00000188,
0X00000180, 0X000000DC, 0X00000150, 0X000000D8, 0X00000118, 0X000000D0, 0X000000B4, 0X000000BC,
0X17000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000D0, 0X0000000D, 0X000000C0,
0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000104, 0000000000, 0X0000013C, 0X0000016C,
0X000002E4, 0X00000300, 0X0000031C, 0X00000350, 0X0000037C, 0X000003A8, 0000000000, 0000000000,
0X000003D8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000120, 0X19000000,
0X4E617669, 0X67617469, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000158, 0X10000000, 0X2F4E6176, 0X4576656E,
0X74205369, 0X6D706C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000004, 0X00000198, 0X000001FC, 0X00000250, 0X000002A4, 0X13000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D4, 0X00000001, 0X000001B8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000001D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0X05000000, 0X4F776E65, 0X72000000, 0X15000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000234, 0X00000001, 0X0000021C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000238, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X15000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000288, 0X00000001, 0X00000270, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X0000028C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X13000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000338, 0X16000000, 0X2F446F20, 0X43616C6C,
0X6261636B, 0X204E6F20, 0X52657375, 0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0F000000, 0X4E617645, 0X76656E74, 0X50726F63, 0X50747200, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0E000000, 0X4E65774E, 0X61764576,
0X656E7455, 0X50500000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C4,
0X12000000, 0X44697370, 0X6F73654E, 0X61764576, 0X656E7455, 0X50500000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Event_20_Callback_20_Behavior[] = {
0000000000, 0X00000350, 0X000000A0, 0X00000023, 0X00000014, 0X00000100, 0X000003BC, 0X000000F4,
0X00000390, 0X000000F0, 0X00000364, 0X000000EC, 0X00000330, 0X000000E8, 0X000000E4, 0X000000E0,
0X000002B8, 0X000002C0, 0X00000194, 0X00000288, 0X00000264, 0X0000026C, 0X00000190, 0X00000234,
0X00000210, 0X00000218, 0X0000018C, 0X000001EC, 0X000001D4, 0X000001AC, 0X000001B4, 0X00000188,
0X00000180, 0X000000DC, 0X00000150, 0X000000D8, 0X00000118, 0X000000D0, 0X000000B4, 0X000000BC,
0X17000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000D0, 0X0000000D, 0X000000C0,
0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000104, 0000000000, 0X0000013C, 0X0000016C,
0X000002E4, 0X00000300, 0X0000031C, 0X00000350, 0X0000037C, 0X000003A8, 0000000000, 0000000000,
0X000003D8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000120, 0X19000000,
0X4E617669, 0X67617469, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000158, 0X10000000, 0X2F4E6176, 0X4576656E,
0X74205369, 0X6D706C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000004, 0X00000198, 0X000001FC, 0X00000250, 0X000002A4, 0X13000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D4, 0X00000001, 0X000001B8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000001D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0X05000000, 0X4F776E65, 0X72000000, 0X15000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000234, 0X00000001, 0X0000021C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000238, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X15000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000288, 0X00000001, 0X00000270, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X0000028C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X13000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000338, 0X16000000, 0X2F446F20, 0X43616C6C,
0X6261636B, 0X204E6F20, 0X52657375, 0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0F000000, 0X4E617645, 0X76656E74, 0X50726F63, 0X50747200, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0E000000, 0X4E65774E, 0X61764576,
0X656E7455, 0X50500000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C4,
0X12000000, 0X44697370, 0X6F73654E, 0X61764576, 0X656E7455, 0X50500000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Event_20_Callback_20_Behavior[] = {
0000000000, 0X00000350, 0X000000A0, 0X00000023, 0X00000014, 0X00000100, 0X000003BC, 0X000000F4,
0X00000390, 0X000000F0, 0X00000364, 0X000000EC, 0X00000330, 0X000000E8, 0X000000E4, 0X000000E0,
0X000002B8, 0X000002C0, 0X00000194, 0X00000288, 0X00000264, 0X0000026C, 0X00000190, 0X00000234,
0X00000210, 0X00000218, 0X0000018C, 0X000001EC, 0X000001D4, 0X000001AC, 0X000001B4, 0X00000188,
0X00000180, 0X000000DC, 0X00000150, 0X000000D8, 0X00000118, 0X000000D0, 0X000000B4, 0X000000BC,
0X17000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000D0, 0X0000000D, 0X000000C0,
0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000104, 0000000000, 0X0000013C, 0X0000016C,
0X000002E4, 0X00000300, 0X0000031C, 0X00000350, 0X0000037C, 0X000003A8, 0000000000, 0000000000,
0X000003D8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000120, 0X19000000,
0X4E617669, 0X67617469, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000158, 0X10000000, 0X2F4E6176, 0X4576656E,
0X74205369, 0X6D706C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000004, 0X00000198, 0X000001FC, 0X00000250, 0X000002A4, 0X13000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D4, 0X00000001, 0X000001B8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000001D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0X05000000, 0X4F776E65, 0X72000000, 0X15000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000234, 0X00000001, 0X0000021C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000238, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X15000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000288, 0X00000001, 0X00000270, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X0000028C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X13000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000338, 0X16000000, 0X2F446F20, 0X43616C6C,
0X6261636B, 0X204E6F20, 0X52657375, 0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0F000000, 0X4E617645, 0X76656E74, 0X50726F63, 0X50747200, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0E000000, 0X4E65774E, 0X61764576,
0X656E7455, 0X50500000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C4,
0X12000000, 0X44697370, 0X6F73654E, 0X61764576, 0X656E7455, 0X50500000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Type_20_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Event_20_Callback_20_Behavior[] = {
0000000000, 0X00000350, 0X000000A0, 0X00000023, 0X00000014, 0X00000100, 0X000003BC, 0X000000F4,
0X00000390, 0X000000F0, 0X00000364, 0X000000EC, 0X00000330, 0X000000E8, 0X000000E4, 0X000000E0,
0X000002B8, 0X000002C0, 0X00000194, 0X00000288, 0X00000264, 0X0000026C, 0X00000190, 0X00000234,
0X00000210, 0X00000218, 0X0000018C, 0X000001EC, 0X000001D4, 0X000001AC, 0X000001B4, 0X00000188,
0X00000180, 0X000000DC, 0X00000150, 0X000000D8, 0X00000118, 0X000000D0, 0X000000B4, 0X000000BC,
0X17000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000D0, 0X0000000D, 0X000000C0,
0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000104, 0000000000, 0X0000013C, 0X0000016C,
0X000002E4, 0X00000300, 0X0000031C, 0X00000350, 0X0000037C, 0X000003A8, 0000000000, 0000000000,
0X000003D8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000120, 0X19000000,
0X4E617669, 0X67617469, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000158, 0X10000000, 0X2F4E6176, 0X4576656E,
0X74205369, 0X6D706C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000004, 0X00000198, 0X000001FC, 0X00000250, 0X000002A4, 0X13000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D4, 0X00000001, 0X000001B8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000001D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0X05000000, 0X4F776E65, 0X72000000, 0X15000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000234, 0X00000001, 0X0000021C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000238, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X15000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000288, 0X00000001, 0X00000270, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X0000028C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X13000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000338, 0X16000000, 0X2F446F20, 0X43616C6C,
0X6261636B, 0X204E6F20, 0X52657375, 0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0F000000, 0X4E617645, 0X76656E74, 0X50726F63, 0X50747200, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0E000000, 0X4E65774E, 0X61764576,
0X656E7455, 0X50500000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C4,
0X12000000, 0X44697370, 0X6F73654E, 0X61764576, 0X656E7455, 0X50500000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_File_20_Type[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X3F3F3F3F
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Event_20_Callback_20_Behavior[] = {
0000000000, 0X00000350, 0X000000A0, 0X00000023, 0X00000014, 0X00000100, 0X000003BC, 0X000000F4,
0X00000390, 0X000000F0, 0X00000364, 0X000000EC, 0X00000330, 0X000000E8, 0X000000E4, 0X000000E0,
0X000002B8, 0X000002C0, 0X00000194, 0X00000288, 0X00000264, 0X0000026C, 0X00000190, 0X00000234,
0X00000210, 0X00000218, 0X0000018C, 0X000001EC, 0X000001D4, 0X000001AC, 0X000001B4, 0X00000188,
0X00000180, 0X000000DC, 0X00000150, 0X000000D8, 0X00000118, 0X000000D0, 0X000000B4, 0X000000BC,
0X17000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000D0, 0X0000000D, 0X000000C0,
0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000104, 0000000000, 0X0000013C, 0X0000016C,
0X000002E4, 0X00000300, 0X0000031C, 0X00000350, 0X0000037C, 0X000003A8, 0000000000, 0000000000,
0X000003D8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000120, 0X19000000,
0X4E617669, 0X67617469, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000158, 0X10000000, 0X2F4E6176, 0X4576656E,
0X74205369, 0X6D706C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000004, 0X00000198, 0X000001FC, 0X00000250, 0X000002A4, 0X13000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D4, 0X00000001, 0X000001B8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000001D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0X05000000, 0X4F776E65, 0X72000000, 0X15000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000234, 0X00000001, 0X0000021C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000238, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X15000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000288, 0X00000001, 0X00000270, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X0000028C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X13000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000338, 0X16000000, 0X2F446F20, 0X43616C6C,
0X6261636B, 0X204E6F20, 0X52657375, 0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0F000000, 0X4E617645, 0X76656E74, 0X50726F63, 0X50747200, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0E000000, 0X4E65774E, 0X61764576,
0X656E7455, 0X50500000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C4,
0X12000000, 0X44697370, 0X6F73654E, 0X61764576, 0X656E7455, 0X50500000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Event_20_Callback_20_Behavior[] = {
0000000000, 0X00000350, 0X000000A0, 0X00000023, 0X00000014, 0X00000100, 0X000003BC, 0X000000F4,
0X00000390, 0X000000F0, 0X00000364, 0X000000EC, 0X00000330, 0X000000E8, 0X000000E4, 0X000000E0,
0X000002B8, 0X000002C0, 0X00000194, 0X00000288, 0X00000264, 0X0000026C, 0X00000190, 0X00000234,
0X00000210, 0X00000218, 0X0000018C, 0X000001EC, 0X000001D4, 0X000001AC, 0X000001B4, 0X00000188,
0X00000180, 0X000000DC, 0X00000150, 0X000000D8, 0X00000118, 0X000000D0, 0X000000B4, 0X000000BC,
0X17000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000D0, 0X0000000D, 0X000000C0,
0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000104, 0000000000, 0X0000013C, 0X0000016C,
0X000002E4, 0X00000300, 0X0000031C, 0X00000350, 0X0000037C, 0X000003A8, 0000000000, 0000000000,
0X000003D8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000120, 0X19000000,
0X4E617669, 0X67617469, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000158, 0X10000000, 0X2F4E6176, 0X4576656E,
0X74205369, 0X6D706C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000004, 0X00000198, 0X000001FC, 0X00000250, 0X000002A4, 0X13000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D4, 0X00000001, 0X000001B8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000001D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0X05000000, 0X4F776E65, 0X72000000, 0X15000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000234, 0X00000001, 0X0000021C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000238, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X15000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000288, 0X00000001, 0X00000270, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X0000028C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X13000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000338, 0X16000000, 0X2F446F20, 0X43616C6C,
0X6261636B, 0X204E6F20, 0X52657375, 0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0F000000, 0X4E617645, 0X76656E74, 0X50726F63, 0X50747200, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0E000000, 0X4E65774E, 0X61764576,
0X656E7455, 0X50500000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C4,
0X12000000, 0X44697370, 0X6F73654E, 0X61764576, 0X656E7455, 0X50500000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Type_20_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Event_20_Callback_20_Behavior[] = {
0000000000, 0X00000350, 0X000000A0, 0X00000023, 0X00000014, 0X00000100, 0X000003BC, 0X000000F4,
0X00000390, 0X000000F0, 0X00000364, 0X000000EC, 0X00000330, 0X000000E8, 0X000000E4, 0X000000E0,
0X000002B8, 0X000002C0, 0X00000194, 0X00000288, 0X00000264, 0X0000026C, 0X00000190, 0X00000234,
0X00000210, 0X00000218, 0X0000018C, 0X000001EC, 0X000001D4, 0X000001AC, 0X000001B4, 0X00000188,
0X00000180, 0X000000DC, 0X00000150, 0X000000D8, 0X00000118, 0X000000D0, 0X000000B4, 0X000000BC,
0X17000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000D0, 0X0000000D, 0X000000C0,
0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000104, 0000000000, 0X0000013C, 0X0000016C,
0X000002E4, 0X00000300, 0X0000031C, 0X00000350, 0X0000037C, 0X000003A8, 0000000000, 0000000000,
0X000003D8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000120, 0X19000000,
0X4E617669, 0X67617469, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000158, 0X10000000, 0X2F4E6176, 0X4576656E,
0X74205369, 0X6D706C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000004, 0X00000198, 0X000001FC, 0X00000250, 0X000002A4, 0X13000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D4, 0X00000001, 0X000001B8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000001D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0X05000000, 0X4F776E65, 0X72000000, 0X15000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000234, 0X00000001, 0X0000021C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000238, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X15000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000288, 0X00000001, 0X00000270, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X0000028C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X13000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000338, 0X16000000, 0X2F446F20, 0X43616C6C,
0X6261636B, 0X204E6F20, 0X52657375, 0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0F000000, 0X4E617645, 0X76656E74, 0X50726F63, 0X50747200, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0E000000, 0X4E65774E, 0X61764576,
0X656E7455, 0X50500000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C4,
0X12000000, 0X44697370, 0X6F73654E, 0X61764576, 0X656E7455, 0X50500000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Event_20_Callback_20_Behavior[] = {
0000000000, 0X00000350, 0X000000A0, 0X00000023, 0X00000014, 0X00000100, 0X000003BC, 0X000000F4,
0X00000390, 0X000000F0, 0X00000364, 0X000000EC, 0X00000330, 0X000000E8, 0X000000E4, 0X000000E0,
0X000002B8, 0X000002C0, 0X00000194, 0X00000288, 0X00000264, 0X0000026C, 0X00000190, 0X00000234,
0X00000210, 0X00000218, 0X0000018C, 0X000001EC, 0X000001D4, 0X000001AC, 0X000001B4, 0X00000188,
0X00000180, 0X000000DC, 0X00000150, 0X000000D8, 0X00000118, 0X000000D0, 0X000000B4, 0X000000BC,
0X17000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000D0, 0X0000000D, 0X000000C0,
0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000104, 0000000000, 0X0000013C, 0X0000016C,
0X000002E4, 0X00000300, 0X0000031C, 0X00000350, 0X0000037C, 0X000003A8, 0000000000, 0000000000,
0X000003D8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000120, 0X19000000,
0X4E617669, 0X67617469, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000158, 0X10000000, 0X2F4E6176, 0X4576656E,
0X74205369, 0X6D706C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000004, 0X00000198, 0X000001FC, 0X00000250, 0X000002A4, 0X13000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D4, 0X00000001, 0X000001B8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000001D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0X05000000, 0X4F776E65, 0X72000000, 0X15000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000234, 0X00000001, 0X0000021C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000238, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X15000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000288, 0X00000001, 0X00000270, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X0000028C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X13000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000338, 0X16000000, 0X2F446F20, 0X43616C6C,
0X6261636B, 0X204E6F20, 0X52657375, 0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0F000000, 0X4E617645, 0X76656E74, 0X50726F63, 0X50747200, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0E000000, 0X4E65774E, 0X61764576,
0X656E7455, 0X50500000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C4,
0X12000000, 0X44697370, 0X6F73654E, 0X61764576, 0X656E7455, 0X50500000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Document_20_Count[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Review_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Dialog_2F_Nav_20_Class[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X07340006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X13000000, 0X4E617620, 0X50757420, 0X46696C65,
0X20446961, 0X6C6F6700
	};
	Nat4 tempAttribute_Nav_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X06AF0007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_Navigation_20_Reply_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Navigation_20_Reply_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Version",tempClass,tempAttribute_Navigation_20_Reply_2F_Version,environment);
	tempAttribute = attribute_add("Key Script",tempClass,tempAttribute_Navigation_20_Reply_2F_Key_20_Script,environment);
	tempAttribute = attribute_add("Valid?",tempClass,tempAttribute_Navigation_20_Reply_2F_Valid_3F_,environment);
	tempAttribute = attribute_add("Replacing?",tempClass,tempAttribute_Navigation_20_Reply_2F_Replacing_3F_,environment);
	tempAttribute = attribute_add("Stationery?",tempClass,tempAttribute_Navigation_20_Reply_2F_Stationery_3F_,environment);
	tempAttribute = attribute_add("Translation Needed?",tempClass,tempAttribute_Navigation_20_Reply_2F_Translation_20_Needed_3F_,environment);
	tempAttribute = attribute_add("File Translation Spec",tempClass,NULL,environment);
	tempAttribute = attribute_add("Selected Files",tempClass,tempAttribute_Navigation_20_Reply_2F_Selected_20_Files,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 165 220 }{ 547 257 } */
enum opTrigger vpx_method_Navigation_20_Reply_2F_Get_20_File_20_Translation_20_Spec(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_File_20_Translation_20_Spec,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F_Get_20_Key_20_Script(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Key_20_Script,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F_Get_20_Replacing_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Replacing_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F_Get_20_Selected_20_Files(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Selected_20_Files,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F_Get_20_Stationery_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Stationery_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F_Get_20_Translation_20_Needed_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Translation_20_Needed_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F_Get_20_Valid_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Valid_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F_Get_20_Version(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Version,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F_Set_20_File_20_Translation_20_Spec(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_File_20_Translation_20_Spec,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F_Set_20_Key_20_Script(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Key_20_Script,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F_Set_20_Replacing_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Replacing_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F_Set_20_Selected_20_Files(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Selected_20_Files,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F_Set_20_Stationery_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Stationery_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F_Set_20_Translation_20_Needed_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Translation_20_Needed_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F_Set_20_Valid_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Valid_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F_Set_20_Version(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Version,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Generate_20_Reply_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Generate_20_Reply_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E7E_Parse_20_Reply_20_Selection_20_AEDesc,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Generate_20_Reply_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Generate_20_Reply_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"(  )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Generate_20_Reply_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Generate_20_Reply_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Navigation_20_Reply_2F7E7E_Generate_20_Reply_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Navigation_20_Reply_2F7E7E_Generate_20_Reply_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Generate_20_Reply(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(19)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extget(PARAMETERS,"fileTranslation",1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_extget(PARAMETERS,"keyScript",1,2,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_extget(PARAMETERS,"selection",1,2,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_extget(PARAMETERS,"translationNeeded",1,2,TERMINAL(6),ROOT(8),ROOT(9));

result = vpx_extget(PARAMETERS,"isStationery",1,2,TERMINAL(8),ROOT(10),ROOT(11));

result = vpx_extget(PARAMETERS,"replacing",1,2,TERMINAL(10),ROOT(12),ROOT(13));

result = vpx_extget(PARAMETERS,"validRecord",1,2,TERMINAL(12),ROOT(14),ROOT(15));

result = vpx_extget(PARAMETERS,"version",1,2,TERMINAL(14),ROOT(16),ROOT(17));

result = vpx_method_Navigation_20_Reply_2F7E7E_Generate_20_Reply_case_1_local_10(PARAMETERS,TERMINAL(0),TERMINAL(7),ROOT(18));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Selected_20_Files,2,0,TERMINAL(0),TERMINAL(18));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_File_20_Translation_20_Spec,2,0,TERMINAL(0),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Key_20_Script,2,0,TERMINAL(0),TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Translation_20_Needed_3F_,2,0,TERMINAL(0),TERMINAL(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stationery_3F_,2,0,TERMINAL(0),TERMINAL(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Replacing_3F_,2,0,TERMINAL(0),TERMINAL(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Valid_3F_,2,0,TERMINAL(0),TERMINAL(15));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Version,2,0,TERMINAL(0),TERMINAL(17));

result = kSuccess;

FOOTERSINGLECASE(19)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,typeNull,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"AECountItems",ROOT(1));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_2_local_10_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_2_local_10_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeFSRef,ROOT(3));

result = vpx_constant(PARAMETERS,"8",ROOT(4));

result = vpx_constant(PARAMETERS,"AEDesc",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(5),TERMINAL(4),ROOT(6));

PUTINTEGER(AEGetNthDesc( GETCONSTPOINTER(AEDesc,*,TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(3)),GETPOINTER(4,unsigned long,*,ROOT(8),NONE),GETPOINTER(8,AEDesc,*,ROOT(9),TERMINAL(6))),7);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E7E_Parse_20_Reply_20_Selection_20_AEDesc,2,1,TERMINAL(0),TERMINAL(9),ROOT(10));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERWITHNONE(11)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_2_local_10_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_2_local_10_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeFSS,ROOT(3));

result = vpx_constant(PARAMETERS,"8",ROOT(4));

result = vpx_constant(PARAMETERS,"AEDesc",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(5),TERMINAL(4),ROOT(6));

PUTINTEGER(AEGetNthDesc( GETCONSTPOINTER(AEDesc,*,TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(3)),GETPOINTER(4,unsigned long,*,ROOT(8),NONE),GETPOINTER(8,AEDesc,*,ROOT(9),TERMINAL(6))),7);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E7E_Parse_20_Reply_20_Selection_20_AEDesc,2,1,TERMINAL(0),TERMINAL(9),ROOT(10));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERWITHNONE(11)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_2_local_10_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_2_local_10_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_2_local_10_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_2_local_10_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_2_local_10_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_2_local_10_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_2_local_10_case_1_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__3E_,2,0,TERMINAL(2),TERMINAL(3));
FINISHONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(2),ROOT(4));

result = vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_2_local_10_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,typeAEList,TERMINAL(2));
NEXTCASEONFAILURE

PUTINTEGER(AECountItems( GETCONSTPOINTER(AEDesc,*,TERMINAL(1)),GETPOINTER(4,long int,*,ROOT(4),NONE)),3);
result = kSuccess;

result = vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_2_local_4(PARAMETERS,TERMINAL(3));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"1",ROOT(5));

result = vpx_constant(PARAMETERS,"4",ROOT(6));

result = vpx_constant(PARAMETERS,"0",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(4),TERMINAL(7),TERMINAL(6),ROOT(8),ROOT(9),ROOT(10));

LISTROOTBEGIN(1)
REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,5,11)
result = vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_2_local_10(PARAMETERS,TERMINAL(0),TERMINAL(1),LOOP(0),TERMINAL(10),ROOT(11),ROOT(12));
LISTROOT(12,0)
REPEATFINISH
LISTROOTFINISH(12,0)
LISTROOTEND

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTERWITHNONE(13)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,typeFSS,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_AEDesc_20_Copy_20_Data(PARAMETERS,TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

result = vpx_method_New_20_FSSpec(PARAMETERS,TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,typeFSRef,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_AEDesc_20_Copy_20_Data(PARAMETERS,TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_method_Block_20_Copy(PARAMETERS,TERMINAL(3),NONE,TERMINAL(4),ROOT(5));
NEXTCASEONFAILURE

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(3));

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(5),ROOT(6));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extget(PARAMETERS,"descriptorType",1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(3),ROOT(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

/* Stop Universals */



Nat4 VPLC_Nav_20_Choose_20_Volume_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_Choose_20_Volume_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Event_20_Callback_20_Behavior,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Parameter_20_Strings,environment);
	tempAttribute = attribute_add("Filter Callback Behavior",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Nav Object Filter Dialog");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Nav_20_Choose_20_Volume_20_Dialog_2F7E_Nav_20_Create_20_Dialog(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Creation_20_Options_20_Record,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Filter_20_Callback,1,1,TERMINAL(0),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_New_20_NavDialog_2A2A_,1,1,TERMINAL(0),ROOT(5));

PUTINTEGER(NavCreateChooseVolumeDialog( GETCONSTPOINTER(NavDialogCreationOptions,*,TERMINAL(2)),GETPOINTER(0,void,*,ROOT(7),TERMINAL(1)),GETPOINTER(1,unsigned char,*,ROOT(8),TERMINAL(4)),GETPOINTER(0,void,*,ROOT(9),TERMINAL(3)),GETPOINTER(0,__NavDialog,**,ROOT(10),TERMINAL(5))),6);
result = kSuccess;

result = vpx_constant(PARAMETERS,"NavCreateChooseVolumeDialog",ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Error,3,0,TERMINAL(0),TERMINAL(11),TERMINAL(6));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(12)
}

/* Stop Universals */



Nat4 VPLC_Nav_20_Ask_20_Save_20_Changes_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_Ask_20_Save_20_Changes_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 304 965 }{ 257 344 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Event_20_Callback_20_Behavior,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Parameter_20_Strings,environment);
	tempAttribute = attribute_add("Save Changes?",tempClass,tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Save_20_Changes_3F_,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Navigation Services Window");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Extract_20_Reply(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Extract_20_Result(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Canceled_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Save_20_Changes_3F_,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Get_20_Save_20_Changes_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Save_20_Changes_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_NavUA_20_Dont_20_Save_20_Changes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Save_20_Changes_3F_,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Set_20_Save_20_Changes_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Save_20_Changes_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Setup_20_Run_20_Flags_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Setup_20_Run_20_Flags_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Save_20_Changes_3F_,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Setup_20_Run_20_Flags(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Setup_20_Run_20_Flags,1,0,TERMINAL(0));

result = vpx_method_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Setup_20_Run_20_Flags_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F7E_Nav_20_Create_20_Dialog(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Creation_20_Options_20_Record,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Action,1,1,TERMINAL(0),ROOT(4));

result = vpx_constant(PARAMETERS,"NavCreateAskSaveChangesDialog",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_New_20_NavDialog_2A2A_,1,1,TERMINAL(0),ROOT(6));

PUTINTEGER(NavCreateAskSaveChangesDialog( GETCONSTPOINTER(NavDialogCreationOptions,*,TERMINAL(2)),GETINTEGER(TERMINAL(4)),GETPOINTER(0,void,*,ROOT(8),TERMINAL(1)),GETPOINTER(0,void,*,ROOT(9),TERMINAL(3)),GETPOINTER(0,__NavDialog,**,ROOT(10),TERMINAL(6))),7);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Error,3,0,TERMINAL(0),TERMINAL(5),TERMINAL(7));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(11)
}

/* Stop Universals */



Nat4 VPLC_Navigation_20_Services_20_Window_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Navigation_20_Services_20_Window_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 361 552 }{ 233 334 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,tempAttribute_Navigation_20_Services_20_Window_2F_Event_20_Callback_20_Behavior,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Navigation_20_Services_20_Window_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Navigation_20_Services_20_Window_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Navigation_20_Services_20_Window_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Navigation_20_Services_20_Window_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Navigation_20_Services_20_Window_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Navigation_20_Services_20_Window_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Navigation_20_Services_20_Window_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Navigation_20_Services_20_Window_2F_Parameter_20_Strings,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 62 913 }{ 754 314 } */
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Callbacks,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Close_20_Callbacks(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Event_20_Callback,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Close_20_Event_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Close_20_Event_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Callback_20_Behavior,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Close_20_Event_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Close_20_Event_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Close_20_Event_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Navigation_20_Services_20_Window_2F_Close_20_Event_20_Callback_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Navigation_20_Services_20_Window_2F_Close_20_Event_20_Callback_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Dispose_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Dispose_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Creation_20_Options_20_Record,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

DisposePtr( GETPOINTER(1,char,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Creation_20_Options_20_Record,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Dispose_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Dispose_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"(  )",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Completion_20_Behavior,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Dispose_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Dispose_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window_20_Record,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

DisposeHandle( GETPOINTER(1,char,**,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Dispose_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Dispose_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Navigation_20_Services_20_Window_2F_Dispose_case_1_local_4_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Window_20_Record,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Dispose(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Navigation_20_Services_20_Window_2F_Dispose_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_Navigation_20_Services_20_Window_2F_Dispose_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_method_Navigation_20_Services_20_Window_2F_Dispose_case_1_local_4(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Do_20_Completion_20_Behavior_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Do_20_Completion_20_Behavior_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Navigation Window\"",ROOT(2));

result = vpx_method_Add_20_Attachment_20_To_20_Callback(PARAMETERS,TERMINAL(1),TERMINAL(2),TERMINAL(0),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Do_20_Completion_20_Behavior(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Completion_20_Behavior,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_Navigation_20_Services_20_Window_2F_Do_20_Completion_20_Behavior_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_Execute_20_Callback(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Extract_20_Reply_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Extract_20_Reply_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reply_20_Record,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Navigation_20_Reply,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E7E_Generate_20_Reply,2,0,TERMINAL(2),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Reply,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Extract_20_Reply_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Extract_20_Reply_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Extract_20_Reply(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Navigation_20_Services_20_Window_2F_Extract_20_Reply_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Navigation_20_Services_20_Window_2F_Extract_20_Reply_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Extract_20_Result(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Canceled_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Result,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Action(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Action,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Canceled_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Canceled_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Completion_20_Behavior(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Completion_20_Behavior,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Creation_20_Options_20_Record(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Creation_20_Options_20_Record,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Event_20_Callback_20_Behavior(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Event_20_Callback_20_Behavior,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_File_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_File_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Save File Name\"",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parameter_20_String,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_File_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_File_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_File_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Navigation_20_Services_20_Window_2F_Get_20_File_20_Name_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Navigation_20_Services_20_Window_2F_Get_20_File_20_Name_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Modality(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Modality,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Parameter_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parameter_20_Strings,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method__28_Get_20_Setting_29_(PARAMETERS,TERMINAL(3),TERMINAL(1),ROOT(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Parent_20_Window(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent_20_Window,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Reply(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Reply,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Reply_20_Record(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NavDialogGetReply",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window_20_Record,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

PUTINTEGER(NavDialogGetReply( GETPOINTER(0,__NavDialog,*,ROOT(4),TERMINAL(2)),GETPOINTER(256,NavReplyRecord,*,ROOT(5),NONE)),3);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Error,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Reply_20_Selection(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reply,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Selected_20_Files,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Result(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Result,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Window_20_Record(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Window_20_Record,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_Accept(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_Cancel(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Canceled_3F_,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_Event(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_Start(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_Terminate_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_Terminate_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Finished_3F_,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Extract_20_Reply,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_Terminate(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_Terminate_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Do_20_Completion_20_Behavior,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_Unknown_20_Selector(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavUserActionNone,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavUA_20_None,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavUserActionCancel,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavUA_20_Cancel,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavUserActionOpen,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavUA_20_Open,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavUserActionSaveAs,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavUA_20_Save_20_As,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavUserActionChoose,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavUA_20_Choose,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavUserActionNewFolder,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavUA_20_New_20_Folder,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavUserActionSaveChanges,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavUA_20_Save_20_Changes,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavUserActionDontSaveChanges,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavUA_20_Dont_20_Save_20_Changes,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavUserActionDiscardChanges,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavUA_20_Discard_20_Changes,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavUserActionReviewDocuments,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavUA_20_Review_20_Documents,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_11(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_11(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"10",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavUA_20_Dont_20_Save_20_Any_20_Documents,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_12(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_12(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavUA_20_Unknown_20_Action,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_8(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_9(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_10(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_11(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5_case_12(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extget(PARAMETERS,"context",1,2,TERMINAL(1),ROOT(3),ROOT(4));

PUTINTEGER(NavDialogGetUserAction( GETPOINTER(0,__NavDialog,*,ROOT(6),TERMINAL(4))),5);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Result,2,0,TERMINAL(0),TERMINAL(5));

result = vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"NavEvent",ROOT(4));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(4),TERMINAL(1),NONE);

result = kSuccess;
NEXTCASEONSUCCESS

FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavCBAccept,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavCB_20_Accept,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavCBCancel,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavCB_20_Cancel,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavCBTerminate,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavCB_20_Terminate,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavCBStart,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavCB_20_Start,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavCBUserAction,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavCB_20_User_20_Action,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kNavCBEvent,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavCB_20_Event,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2_local_2_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2_local_2_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_NavCB_20_Unknown_20_Selector,4,0,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
if(vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
if(vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
if(vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
if(vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2_local_2_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
if(vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2_local_2_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2_local_2_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3);
return outcome;
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3);
return outcome;
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Cancel(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Canceled_3F_,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Choose(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Discard_20_Changes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Dont_20_Save_20_Any_20_Documents(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Dont_20_Save_20_Changes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_New_20_Folder(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_None(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Review_20_Documents(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Save_20_As(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Save_20_Changes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Unknown_20_Action(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Options,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Dialog,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Run_20_Flags,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Navigation_20_Services_20_Window_2F_Open_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Navigation_20_Services_20_Window_2F_Open_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Open_20_Event_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Open_20_Event_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Callback_20_Behavior,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Pointer,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Open_20_Event_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Open_20_Event_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(1));

result = vpx_constant(PARAMETERS,"\"Open Callback Behavior\"",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Error,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Open_20_Event_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Navigation_20_Services_20_Window_2F_Open_20_Event_20_Callback_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Navigation_20_Services_20_Window_2F_Open_20_Event_20_Callback_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Report_20_Error(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"/",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(3),TERMINAL(4),TERMINAL(1),ROOT(5));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(5),TERMINAL(2));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Error,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window_20_Record,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"NavDialogRun",ROOT(2));

PUTINTEGER(NavDialogRun( GETPOINTER(0,__NavDialog,*,ROOT(4),TERMINAL(1))),3);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Error,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(1));

result = vpx_constant(PARAMETERS,"Run Dialog",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Error,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Navigation_20_Services_20_Window_2F_Run_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Navigation_20_Services_20_Window_2F_Run_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Action(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Action,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Canceled_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Canceled_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Completion_20_Behavior(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Completion_20_Behavior,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Creation_20_Options_20_Record(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Creation_20_Options_20_Record,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Error(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Error,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_File_20_Name_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_File_20_Name_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_File_20_Name_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_File_20_Name_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_File_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_File_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Navigation_20_Services_20_Window_2F_Set_20_File_20_Name_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Navigation_20_Services_20_Window_2F_Set_20_File_20_Name_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_File_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Save File Name\"",ROOT(2));

result = vpx_method_Navigation_20_Services_20_Window_2F_Set_20_File_20_Name_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parameter_20_String,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Finished_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Finished_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Modality(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Modality,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Parameter_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parameter_20_Strings,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method__28_Set_20_Setting_29_(PARAMETERS,TERMINAL(4),TERMINAL(1),TERMINAL(2),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Parameter_20_Strings,TERMINAL(3),TERMINAL(5),ROOT(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Parent_20_Window(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Parent_20_Window,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Preference_20_Key_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Preference_20_Key_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"NONE",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Preference_20_Key_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Preference_20_Key_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Preference_20_Key_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Preference_20_Key_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Preference_20_Key_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Preference_20_Key_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Preference_20_Key(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Preference Key\"",ROOT(2));

result = vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Preference_20_Key_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parameter_20_String,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Reply(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Reply,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Result(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Result,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Window_20_Record(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Window_20_Record,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Window_20_Title_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Window_20_Title_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Window_20_Title_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Window_20_Title_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Window_20_Title_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Window_20_Title_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Window_20_Title_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Window_20_Title_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Window_20_Title(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Window Title\"",ROOT(2));

result = vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Window_20_Title_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parameter_20_String,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Dialog(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Event_20_Callback,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_Nav_20_Create_20_Dialog,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Window_20_Record,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NavGetDefaultDialogCreationOptions",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Error,3,0,TERMINAL(1),TERMINAL(2),TERMINAL(0));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NavDialogCreationOptions",ROOT(1));

result = vpx_constant(PARAMETERS,"68",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

PUTINTEGER(NavGetDefaultDialogCreationOptions( GETPOINTER(66,NavDialogCreationOptions,*,ROOT(5),TERMINAL(3))),4);
result = kSuccess;

result = vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_2_case_1_local_6(PARAMETERS,TERMINAL(4),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parent_20_Window,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window_20_Record,1,1,TERMINAL(2),ROOT(3));

result = vpx_extset(PARAMETERS,"parentWindow",2,1,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parent_20_Window,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_extset(PARAMETERS,"parentWindow",2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Modality,1,1,TERMINAL(0),ROOT(2));

result = vpx_extset(PARAMETERS,"modality",2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_File_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_extset(PARAMETERS,"saveFileName",2,1,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_extset(PARAMETERS,"saveFileName",2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Window Title\"",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parameter_20_String,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_extset(PARAMETERS,"windowTitle",2,1,TERMINAL(1),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Message\"",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parameter_20_String,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_extset(PARAMETERS,"message",2,1,TERMINAL(1),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Client Name\"",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parameter_20_String,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_extset(PARAMETERS,"clientName",2,1,TERMINAL(1),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Action Button Label\"",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parameter_20_String,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_extset(PARAMETERS,"actionButtonLabel",2,1,TERMINAL(1),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Cancel Button Label\"",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parameter_20_String,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_extset(PARAMETERS,"cancelButtonLabel",2,1,TERMINAL(1),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Preference Key\"",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parameter_20_String,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_extset(PARAMETERS,"preferenceKey",2,1,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_extget(PARAMETERS,"optionFlags",1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_extconstant(PARAMETERS,kNavSupportPackages,ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_bit_2D_or,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_extset(PARAMETERS,"optionFlags",2,1,TERMINAL(1),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(4),ROOT(5));

result = vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(5),ROOT(6));

result = vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_7(PARAMETERS,TERMINAL(0),TERMINAL(6),ROOT(7));

result = vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_8(PARAMETERS,TERMINAL(0),TERMINAL(7),ROOT(8));

result = vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_9(PARAMETERS,TERMINAL(0),TERMINAL(8),ROOT(9));

result = vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_10(PARAMETERS,TERMINAL(0),TERMINAL(9),ROOT(10));

result = vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3_case_1_local_11(PARAMETERS,TERMINAL(10));

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Creation_20_Options_20_Record,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Run_20_Flags_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Run_20_Flags_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Finished_3F_,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Run_20_Flags_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Run_20_Flags_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Canceled_3F_,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Run_20_Flags(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Run_20_Flags_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Run_20_Flags_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F7E_Nav_20_Create_20_Dialog(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Creation_20_Options_20_Record,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Action,1,1,TERMINAL(0),ROOT(5));

PUTINTEGER(NavCreateAskSaveChangesDialog( GETCONSTPOINTER(NavDialogCreationOptions,*,TERMINAL(2)),GETINTEGER(TERMINAL(5)),GETPOINTER(0,void,*,ROOT(7),TERMINAL(1)),GETPOINTER(0,void,*,ROOT(8),TERMINAL(3)),GETPOINTER(0,__NavDialog,**,ROOT(9),TERMINAL(4))),6);
result = kSuccess;

result = vpx_constant(PARAMETERS,"NavCreateAskSaveChangesDialog",ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Error,3,0,TERMINAL(0),TERMINAL(10),TERMINAL(6));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Navigation_20_Services_20_Window_2F7E_New_20_NavDialog_2A2A_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(1));

PUTPOINTER(char,**,NewHandle( GETINTEGER(TERMINAL(1))),2);
result = kSuccess;

result = vpx_constant(PARAMETERS,"__NavDialog",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(2),TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(4)
}

/* Stop Universals */



Nat4 VPLC_Nav_20_New_20_Folder_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_New_20_Folder_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Event_20_Callback_20_Behavior,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Parameter_20_Strings,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Navigation Services Window");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Nav_20_New_20_Folder_20_Dialog_2F7E_Nav_20_Create_20_Dialog(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Creation_20_Options_20_Record,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_constant(PARAMETERS,"NavCreateNewFolderDialog",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_New_20_NavDialog_2A2A_,1,1,TERMINAL(0),ROOT(5));

PUTINTEGER(NavCreateNewFolderDialog( GETCONSTPOINTER(NavDialogCreationOptions,*,TERMINAL(2)),GETPOINTER(0,void,*,ROOT(7),TERMINAL(1)),GETPOINTER(0,void,*,ROOT(8),TERMINAL(3)),GETPOINTER(0,__NavDialog,**,ROOT(9),TERMINAL(5))),6);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Error,3,0,TERMINAL(0),TERMINAL(4),TERMINAL(6));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

/* Stop Universals */



Nat4 VPLC_Nav_20_Object_20_Filter_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_Object_20_Filter_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,NULL,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Parameter_20_Strings,environment);
	tempAttribute = attribute_add("Filter Callback Behavior",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Navigation Services Window");
	return kNOERROR;
}

/* Start Universals: { 118 422 }{ 200 300 } */
enum opTrigger vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Close_20_Callbacks(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Close_20_Callbacks,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Filter_20_Callback,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Close_20_Filter_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Close_20_Filter_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Filter_20_Callback_20_Behavior,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Close_20_Filter_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Close_20_Filter_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Close_20_Filter_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Close_20_Filter_20_Callback_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Close_20_Filter_20_Callback_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Get_20_Filter_20_Callback_20_Behavior(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Filter_20_Callback_20_Behavior,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Open_20_Filter_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Open_20_Filter_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Filter_20_Callback_20_Behavior,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Pointer,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Open_20_Filter_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Open_20_Filter_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Open_20_Filter_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Open_20_Filter_20_Callback_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Open_20_Filter_20_Callback_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Set_20_Filter_20_Callback_20_Behavior(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Filter_20_Callback_20_Behavior,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F7E_Nav_20_Create_20_Dialog(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERSINGLECASEWITHNONE(2)
}

/* Stop Universals */



Nat4 VPLC_Nav_20_Choose_20_Folder_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_Choose_20_Folder_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Event_20_Callback_20_Behavior,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Parameter_20_Strings,environment);
	tempAttribute = attribute_add("Filter Callback Behavior",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Nav Object Filter Dialog");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Nav_20_Choose_20_Folder_20_Dialog_2F7E_Nav_20_Create_20_Dialog(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Creation_20_Options_20_Record,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Filter_20_Callback,1,1,TERMINAL(0),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_New_20_NavDialog_2A2A_,1,1,TERMINAL(0),ROOT(5));

PUTINTEGER(NavCreateChooseFolderDialog( GETCONSTPOINTER(NavDialogCreationOptions,*,TERMINAL(2)),GETPOINTER(0,void,*,ROOT(7),TERMINAL(1)),GETPOINTER(1,unsigned char,*,ROOT(8),TERMINAL(4)),GETPOINTER(0,void,*,ROOT(9),TERMINAL(3)),GETPOINTER(0,__NavDialog,**,ROOT(10),TERMINAL(5))),6);
result = kSuccess;

result = vpx_constant(PARAMETERS,"NavCreateChooseFolderDialog",ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Error,3,0,TERMINAL(0),TERMINAL(11),TERMINAL(6));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(12)
}

/* Stop Universals */



Nat4 VPLC_Nav_20_Preview_20_Filter_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_Preview_20_Filter_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,NULL,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Parameter_20_Strings,environment);
	tempAttribute = attribute_add("Filter Callback Behavior",tempClass,NULL,environment);
	tempAttribute = attribute_add("Preview Callback Behavior",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Nav Object Filter Dialog");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Close_20_Callbacks(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Close_20_Callbacks,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Preview_20_Callback,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Close_20_Preview_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Close_20_Preview_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Preview_20_Callback_20_Behavior,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Close_20_Preview_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Close_20_Preview_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Close_20_Preview_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Close_20_Preview_20_Callback_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Close_20_Preview_20_Callback_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Get_20_Preview_20_Callback_20_Behavior(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Preview_20_Callback_20_Behavior,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Open_20_Preview_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Open_20_Preview_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Preview_20_Callback_20_Behavior,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Pointer,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Open_20_Preview_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Open_20_Preview_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Open_20_Preview_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Open_20_Preview_20_Callback_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Open_20_Preview_20_Callback_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Set_20_Preview_20_Callback_20_Behavior(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Preview_20_Callback_20_Behavior,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Nav_20_Get_20_File_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_Get_20_File_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 205 454 }{ 287 388 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Event_20_Callback_20_Behavior,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Parameter_20_Strings,environment);
	tempAttribute = attribute_add("Filter Callback Behavior",tempClass,NULL,environment);
	tempAttribute = attribute_add("Preview Callback Behavior",tempClass,NULL,environment);
	tempAttribute = attribute_add("Type List",tempClass,tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Type_20_List,environment);
	tempAttribute = attribute_add("Creator Code",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Nav Preview Filter Dialog");
	return kNOERROR;
}

/* Start Universals: { 67 333 }{ 200 300 } */
enum opTrigger vpx_method_Nav_20_Get_20_File_20_Dialog_2F_Get_20_NavTypeList_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Get_20_File_20_Dialog_2F_Get_20_NavTypeList_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Type_20_List,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Creator_20_Code,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_New_20_NavTypeList(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Nav_20_Get_20_File_20_Dialog_2F_Get_20_NavTypeList_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Get_20_File_20_Dialog_2F_Get_20_NavTypeList_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Nav_20_Get_20_File_20_Dialog_2F_Get_20_NavTypeList(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Get_20_File_20_Dialog_2F_Get_20_NavTypeList_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Nav_20_Get_20_File_20_Dialog_2F_Get_20_NavTypeList_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Get_20_File_20_Dialog_2F_Get_20_Creator_20_Code(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Creator_20_Code,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Get_20_File_20_Dialog_2F_Set_20_Creator_20_Code(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Creator_20_Code,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Get_20_File_20_Dialog_2F_Get_20_Type_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Type_20_List,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Get_20_File_20_Dialog_2F_Set_20_Type_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Type_20_List,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Nav_20_Get_20_File_20_Dialog_2F7E_Nav_20_Create_20_Dialog(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(16)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Creation_20_Options_20_Record,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Filter_20_Callback,1,1,TERMINAL(0),ROOT(4));

result = vpx_constant(PARAMETERS,"NavCreateGetFileDialog",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_NavTypeList,1,1,TERMINAL(0),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Preview_20_Callback,1,1,TERMINAL(0),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_New_20_NavDialog_2A2A_,1,1,TERMINAL(0),ROOT(8));

PUTINTEGER(NavCreateGetFileDialog( GETCONSTPOINTER(NavDialogCreationOptions,*,TERMINAL(2)),GETPOINTER(12,NavTypeList,**,ROOT(10),TERMINAL(6)),GETPOINTER(0,void,*,ROOT(11),TERMINAL(1)),GETPOINTER(1,unsigned char,*,ROOT(12),TERMINAL(7)),GETPOINTER(1,unsigned char,*,ROOT(13),TERMINAL(4)),GETPOINTER(0,void,*,ROOT(14),TERMINAL(3)),GETPOINTER(0,__NavDialog,**,ROOT(15),TERMINAL(8))),9);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Error,3,0,TERMINAL(0),TERMINAL(5),TERMINAL(9));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(15))
FOOTERSINGLECASE(16)
}

/* Stop Universals */



Nat4 VPLC_Nav_20_Put_20_File_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_Put_20_File_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 339 432 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Event_20_Callback_20_Behavior,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Parameter_20_Strings,environment);
	tempAttribute = attribute_add("File Type",tempClass,tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_File_20_Type,environment);
	tempAttribute = attribute_add("File Creator",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Navigation Services Window");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Nav_20_Put_20_File_20_Dialog_2F_Get_20_File_20_Creator_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Put_20_File_20_Dialog_2F_Get_20_File_20_Creator_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_File_20_Creator,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Nav_20_Put_20_File_20_Dialog_2F_Get_20_File_20_Creator_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Put_20_File_20_Dialog_2F_Get_20_File_20_Creator_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Nav_20_Put_20_File_20_Dialog_2F_Get_20_File_20_Creator_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Put_20_File_20_Dialog_2F_Get_20_File_20_Creator_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\'????\'",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Nav_20_Put_20_File_20_Dialog_2F_Get_20_File_20_Creator(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Put_20_File_20_Dialog_2F_Get_20_File_20_Creator_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Nav_20_Put_20_File_20_Dialog_2F_Get_20_File_20_Creator_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Nav_20_Put_20_File_20_Dialog_2F_Get_20_File_20_Creator_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Put_20_File_20_Dialog_2F_Get_20_File_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_File_20_Type,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Put_20_File_20_Dialog_2F_Set_20_File_20_Creator(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_File_20_Creator,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Put_20_File_20_Dialog_2F_Set_20_File_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_File_20_Type,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Put_20_File_20_Dialog_2F7E_Nav_20_Create_20_Dialog_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Nav_20_Put_20_File_20_Dialog_2F7E_Nav_20_Create_20_Dialog_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_File_20_Name,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(2),ROOT(3));

PUTINTEGER(NavDialogSetSaveFileName( GETPOINTER(0,__NavDialog,*,ROOT(5),TERMINAL(0)),GETCONSTPOINTER(__CFString,*,TERMINAL(3))),4);
result = kSuccess;

CFShow( GETCONSTPOINTER(void,*,TERMINAL(3)));
result = kSuccess;

result = vpx_constant(PARAMETERS,"NavDialogSetSaveFileName",ROOT(6));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(6),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Nav_20_Put_20_File_20_Dialog_2F7E_Nav_20_Create_20_Dialog(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Creation_20_Options_20_Record,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_constant(PARAMETERS,"NavCreateNewFolderDialog",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_File_20_Type,1,1,TERMINAL(0),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_File_20_Creator,1,1,TERMINAL(0),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_New_20_NavDialog_2A2A_,1,1,TERMINAL(0),ROOT(7));

PUTINTEGER(NavCreatePutFileDialog( GETCONSTPOINTER(NavDialogCreationOptions,*,TERMINAL(2)),GETINTEGER(TERMINAL(5)),GETINTEGER(TERMINAL(6)),GETPOINTER(0,void,*,ROOT(9),TERMINAL(1)),GETPOINTER(0,void,*,ROOT(10),TERMINAL(3)),GETPOINTER(0,__NavDialog,**,ROOT(11),TERMINAL(7))),8);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Error,3,0,TERMINAL(0),TERMINAL(4),TERMINAL(8));
FAILONFAILURE

result = vpx_method_Nav_20_Put_20_File_20_Dialog_2F7E_Nav_20_Create_20_Dialog_case_1_local_10(PARAMETERS,TERMINAL(11),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Nav_20_Put_20_File_20_Dialog_2F_NavUA_20_Save_20_As_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Put_20_File_20_Dialog_2F_NavUA_20_Save_20_As_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window_20_Record,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTPOINTER(__CFString,*,NavDialogGetSaveFileName( GETPOINTER(0,__NavDialog,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

PUTPOINTER(void,*,CFRetain( GETCONSTPOINTER(void,*,TERMINAL(2))),4);
result = kSuccess;

result = vpx_method_CF_20_String_2F_New(PARAMETERS,TERMINAL(2),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_String,1,1,TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_File_20_Name,2,0,TERMINAL(0),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(5));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Nav_20_Put_20_File_20_Dialog_2F_NavUA_20_Save_20_As_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Put_20_File_20_Dialog_2F_NavUA_20_Save_20_As_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Put_20_File_20_Dialog_2F_NavUA_20_Save_20_As(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Put_20_File_20_Dialog_2F_NavUA_20_Save_20_As_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Nav_20_Put_20_File_20_Dialog_2F_NavUA_20_Save_20_As_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Nav_20_Choose_20_Object_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_Choose_20_Object_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 210 447 }{ 200 300 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Event_20_Callback_20_Behavior,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Parameter_20_Strings,environment);
	tempAttribute = attribute_add("Filter Callback Behavior",tempClass,NULL,environment);
	tempAttribute = attribute_add("Preview Callback Behavior",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Nav Preview Filter Dialog");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Nav_20_Choose_20_Object_20_Dialog_2F7E_Nav_20_Create_20_Dialog(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Creation_20_Options_20_Record,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Filter_20_Callback,1,1,TERMINAL(0),ROOT(4));

result = vpx_constant(PARAMETERS,"NavCreateChooseObjectDialog",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Preview_20_Callback,1,1,TERMINAL(0),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_New_20_NavDialog_2A2A_,1,1,TERMINAL(0),ROOT(7));

PUTINTEGER(NavCreateChooseObjectDialog( GETCONSTPOINTER(NavDialogCreationOptions,*,TERMINAL(2)),GETPOINTER(0,void,*,ROOT(9),TERMINAL(1)),GETPOINTER(1,unsigned char,*,ROOT(10),TERMINAL(6)),GETPOINTER(1,unsigned char,*,ROOT(11),TERMINAL(4)),GETPOINTER(0,void,*,ROOT(12),TERMINAL(3)),GETPOINTER(0,__NavDialog,**,ROOT(13),TERMINAL(7))),8);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Error,3,0,TERMINAL(0),TERMINAL(5),TERMINAL(8));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(13))
FOOTERSINGLECASE(14)
}

/* Stop Universals */



Nat4 VPLC_Nav_20_Choose_20_File_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_Choose_20_File_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 210 447 }{ 200 300 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Event_20_Callback_20_Behavior,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Parameter_20_Strings,environment);
	tempAttribute = attribute_add("Filter Callback Behavior",tempClass,NULL,environment);
	tempAttribute = attribute_add("Preview Callback Behavior",tempClass,NULL,environment);
	tempAttribute = attribute_add("Type List",tempClass,tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Type_20_List,environment);
	tempAttribute = attribute_add("Creator Code",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Nav Preview Filter Dialog");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Nav_20_Choose_20_File_20_Dialog_2F_Get_20_NavTypeList_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Choose_20_File_20_Dialog_2F_Get_20_NavTypeList_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Type_20_List,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Creator_20_Code,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_New_20_NavTypeList(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Nav_20_Choose_20_File_20_Dialog_2F_Get_20_NavTypeList_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Choose_20_File_20_Dialog_2F_Get_20_NavTypeList_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Nav_20_Choose_20_File_20_Dialog_2F_Get_20_NavTypeList(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Choose_20_File_20_Dialog_2F_Get_20_NavTypeList_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Nav_20_Choose_20_File_20_Dialog_2F_Get_20_NavTypeList_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Choose_20_File_20_Dialog_2F_Set_20_Creator_20_Code(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Creator_20_Code,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Choose_20_File_20_Dialog_2F_Get_20_Creator_20_Code(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Creator_20_Code,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Choose_20_File_20_Dialog_2F_Get_20_Type_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Type_20_List,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Choose_20_File_20_Dialog_2F_Set_20_Type_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Type_20_List,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Nav_20_Choose_20_File_20_Dialog_2F7E_Nav_20_Create_20_Dialog(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(16)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Creation_20_Options_20_Record,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Filter_20_Callback,1,1,TERMINAL(0),ROOT(4));

result = vpx_constant(PARAMETERS,"NavCreateChooseFileDialog",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_NavTypeList,1,1,TERMINAL(0),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Preview_20_Callback,1,1,TERMINAL(0),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_New_20_NavDialog_2A2A_,1,1,TERMINAL(0),ROOT(8));

PUTINTEGER(NavCreateChooseFileDialog( GETCONSTPOINTER(NavDialogCreationOptions,*,TERMINAL(2)),GETPOINTER(12,NavTypeList,**,ROOT(10),TERMINAL(6)),GETPOINTER(0,void,*,ROOT(11),TERMINAL(1)),GETPOINTER(1,unsigned char,*,ROOT(12),TERMINAL(7)),GETPOINTER(1,unsigned char,*,ROOT(13),TERMINAL(4)),GETPOINTER(0,void,*,ROOT(14),TERMINAL(3)),GETPOINTER(0,__NavDialog,**,ROOT(15),TERMINAL(8))),9);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Error,3,0,TERMINAL(0),TERMINAL(5),TERMINAL(9));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(15))
FOOTERSINGLECASE(16)
}

/* Stop Universals */



Nat4 VPLC_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 278 325 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Event_20_Callback_20_Behavior,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Parameter_20_Strings,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Navigation Services Window");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F7E_Nav_20_Create_20_Dialog(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Creation_20_Options_20_Record,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_constant(PARAMETERS,"NavCreateAskDiscardChangesDialog",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_New_20_NavDialog_2A2A_,1,1,TERMINAL(0),ROOT(5));

PUTINTEGER(NavCreateAskDiscardChangesDialog( GETCONSTPOINTER(NavDialogCreationOptions,*,TERMINAL(2)),GETPOINTER(0,void,*,ROOT(7),TERMINAL(1)),GETPOINTER(0,void,*,ROOT(8),TERMINAL(3)),GETPOINTER(0,__NavDialog,**,ROOT(9),TERMINAL(5))),6);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Error,3,0,TERMINAL(0),TERMINAL(4),TERMINAL(6));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Extract_20_Reply(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

/* Stop Universals */



Nat4 VPLC_Nav_20_Ask_20_Review_20_Documents_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_Ask_20_Review_20_Documents_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 324 308 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Event_20_Callback_20_Behavior,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Parameter_20_Strings,environment);
	tempAttribute = attribute_add("Document Count",tempClass,tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Document_20_Count,environment);
	tempAttribute = attribute_add("Review?",tempClass,tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Review_3F_,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Navigation Services Window");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Extract_20_Reply(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Extract_20_Result(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Canceled_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Review_3F_,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Get_20_Document_20_Count(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Document_20_Count,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Get_20_Review_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Review_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_NavUA_20_Dont_20_Save_20_Any_20_Documents(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Review_3F_,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Set_20_Document_20_Count(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Document_20_Count,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Set_20_Review_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Review_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Setup_20_Run_20_Flags_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Setup_20_Run_20_Flags_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Review_3F_,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Setup_20_Run_20_Flags(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Setup_20_Run_20_Flags,1,0,TERMINAL(0));

result = vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Setup_20_Run_20_Flags_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F7E_Nav_20_Create_20_Dialog(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Creation_20_Options_20_Record,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Document_20_Count,1,1,TERMINAL(0),ROOT(4));

result = vpx_constant(PARAMETERS,"NavCreateAskSaveChangesDialog",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_New_20_NavDialog_2A2A_,1,1,TERMINAL(0),ROOT(6));

PUTINTEGER(NavCreateAskReviewDocumentsDialog( GETCONSTPOINTER(NavDialogCreationOptions,*,TERMINAL(2)),GETINTEGER(TERMINAL(4)),GETPOINTER(0,void,*,ROOT(8),TERMINAL(1)),GETPOINTER(0,void,*,ROOT(9),TERMINAL(3)),GETPOINTER(0,__NavDialog,**,ROOT(10),TERMINAL(6))),7);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Error,3,0,TERMINAL(0),TERMINAL(5),TERMINAL(7));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(11)
}

/* Stop Universals */



Nat4 VPLC_Nav_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 357 1076 }{ 200 300 } */
	tempAttribute = attribute_add("Nav Class",tempClass,tempAttribute_Nav_20_Dialog_2F_Nav_20_Class,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_Dialog_2F_Completion_20_Behavior,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 94 734 }{ 354 314 } */
enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_Nav_20_Class(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Make_20_Class(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
FAILONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Nav_20_Class,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Nav_20_Class(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Nav_20_Class,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_Window_20_Title(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Nav_20_Class,1,1,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Window_20_Title,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_Preference_20_Key(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Nav_20_Class,1,1,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Preference_20_Key,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_Type_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Default_20_List(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Nav_20_Class,1,1,TERMINAL(0),ROOT(3));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Type_20_List,2,0,TERMINAL(3),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_File_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Nav_20_Class,1,1,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_File_20_Type,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_File_20_Creator(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Nav_20_Class,1,1,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_File_20_Creator,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_File_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Nav_20_Class,1,1,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_File_20_Name,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_Modality(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Nav_20_Class,1,1,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Modality,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_Parent_20_Window(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Nav_20_Class,1,1,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parent_20_Window,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_Document_20_Count(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Nav_20_Class,1,1,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Document_20_Count,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_Completion_20_Behavior_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_Completion_20_Behavior_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"(  )",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_set(PARAMETERS,kVPXValue_Completion_20_Behavior,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"/~Default Completion",ROOT(3));

result = vpx_method_New_20_Callback(PARAMETERS,TERMINAL(3),TERMINAL(2),NONE,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_Completion_20_Behavior_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_Completion_20_Behavior_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_Completion_20_Behavior_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_Completion_20_Behavior_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Dialog_2F_Set_20_Completion_20_Behavior_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Nav_20_Dialog_2F_Set_20_Completion_20_Behavior_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Set_20_Completion_20_Behavior(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Nav_20_Class,1,1,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_method_Default_20_List(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_method_Nav_20_Dialog_2F_Set_20_Completion_20_Behavior_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Completion_20_Behavior,2,0,TERMINAL(2),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Run_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Run_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Completion_20_Behavior,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_extconstant(PARAMETERS,kWindowModalityAppModal,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Modality,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Run_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Run_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Run_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Run_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Run_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Run_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Dialog_2F_Run_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Nav_20_Dialog_2F_Run_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Nav_20_Dialog_2F_Run_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Nav_20_Class,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,1,0,TERMINAL(1));
FAILONFAILURE

result = vpx_method_Nav_20_Dialog_2F_Run_case_1_local_5(PARAMETERS,TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Canceled_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Canceled_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Nav_20_Class,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Canceled_3F_,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Canceled_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Canceled_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Canceled_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Dialog_2F_Get_20_Canceled_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Nav_20_Dialog_2F_Get_20_Canceled_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_List_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_List_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Nav_20_Class,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reply_20_Selection,1,1,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_List_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_List_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_List_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_List_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Nav_20_Class,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reply_20_Selection,1,1,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"(  )",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_File_20_Name,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Item_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Item_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Result_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Result_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Nav_20_Class,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Extract_20_Result,1,1,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Result_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Result_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Result(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Result_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Result_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Nav_20_Class,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_File_20_Name,1,1,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Name_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Name_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Destruct_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Destruct_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Nav_20_Class,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(1));
CONTINUEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Nav_20_Class,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Destruct_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Dialog_2F_Destruct_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Completion_20_Behavior,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_Destruct(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Nav_20_Dialog_2F_Destruct_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_Nav_20_Dialog_2F_Destruct_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F7E_Default_20_Completion_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Nav_20_Dialog_2F7E_Default_20_Completion_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Completion_20_Behavior,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"( )",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"\"Navigation Window\"",ROOT(4));

result = vpx_method_Add_20_Attachment_20_To_20_Callback(PARAMETERS,TERMINAL(3),TERMINAL(4),TERMINAL(1),ROOT(5));

result = vpx_method_Execute_20_Callback(PARAMETERS,TERMINAL(5),ROOT(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F7E_Default_20_Completion_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Nav_20_Dialog_2F7E_Default_20_Completion_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Nav_20_Dialog_2F7E_Default_20_Completion(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Dialog_2F7E_Default_20_Completion_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Nav_20_Dialog_2F7E_Default_20_Completion_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Dialog_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Nav_20_Dialog,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Nav_20_Class,2,0,TERMINAL(1),TERMINAL(0));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

/* Stop Universals */






Nat4	loadClasses_Navigation(V_Environment environment);
Nat4	loadClasses_Navigation(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Navigation Reply",environment);
	if(result == NULL) return kERROR;
	VPLC_Navigation_20_Reply_class_load(result,environment);
	result = class_new("Nav Choose Volume Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_Choose_20_Volume_20_Dialog_class_load(result,environment);
	result = class_new("Nav Ask Save Changes Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_Ask_20_Save_20_Changes_20_Dialog_class_load(result,environment);
	result = class_new("Navigation Services Window",environment);
	if(result == NULL) return kERROR;
	VPLC_Navigation_20_Services_20_Window_class_load(result,environment);
	result = class_new("Nav New Folder Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_New_20_Folder_20_Dialog_class_load(result,environment);
	result = class_new("Nav Object Filter Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_Object_20_Filter_20_Dialog_class_load(result,environment);
	result = class_new("Nav Choose Folder Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_Choose_20_Folder_20_Dialog_class_load(result,environment);
	result = class_new("Nav Preview Filter Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_Preview_20_Filter_20_Dialog_class_load(result,environment);
	result = class_new("Nav Get File Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_Get_20_File_20_Dialog_class_load(result,environment);
	result = class_new("Nav Put File Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_Put_20_File_20_Dialog_class_load(result,environment);
	result = class_new("Nav Choose Object Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_Choose_20_Object_20_Dialog_class_load(result,environment);
	result = class_new("Nav Choose File Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_Choose_20_File_20_Dialog_class_load(result,environment);
	result = class_new("Nav Ask Discard Changes Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_class_load(result,environment);
	result = class_new("Nav Ask Review Documents Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_Ask_20_Review_20_Documents_20_Dialog_class_load(result,environment);
	result = class_new("Nav Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_Dialog_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Navigation(V_Environment environment);
Nat4	loadUniversals_Navigation(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Nav Ask Discard Changes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Ask_20_Discard_20_Changes,NULL);

	result = method_new("Nav Ask Review Documents",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Ask_20_Review_20_Documents,NULL);

	result = method_new("Nav Ask Save Changes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Ask_20_Save_20_Changes,NULL);

	result = method_new("Nav Choose File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Choose_20_File,NULL);

	result = method_new("Nav Choose Folder",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Choose_20_Folder,NULL);

	result = method_new("Nav Choose Object",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Choose_20_Object,NULL);

	result = method_new("Nav Choose Volume",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Choose_20_Volume,NULL);

	result = method_new("Nav Get File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Get_20_File,NULL);

	result = method_new("Nav New Folder",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_New_20_Folder,NULL);

	result = method_new("Nav Put File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Put_20_File,NULL);

	result = method_new("New NavTypeList",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_New_20_NavTypeList,NULL);

	result = method_new("NavEvent Simple",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_NavEvent_20_Simple,NULL);

	result = method_new("TEST New Nav Modal GF",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_New_20_Nav_20_Modal_20_GF,NULL);

	result = method_new("TEST New Nav Modal CF",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_New_20_Nav_20_Modal_20_CF,NULL);

	result = method_new("Navigation Reply/Get File Translation Spec",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Reply_2F_Get_20_File_20_Translation_20_Spec,NULL);

	result = method_new("Navigation Reply/Get Key Script",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Reply_2F_Get_20_Key_20_Script,NULL);

	result = method_new("Navigation Reply/Get Replacing?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Reply_2F_Get_20_Replacing_3F_,NULL);

	result = method_new("Navigation Reply/Get Selected Files",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Reply_2F_Get_20_Selected_20_Files,NULL);

	result = method_new("Navigation Reply/Get Stationery?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Reply_2F_Get_20_Stationery_3F_,NULL);

	result = method_new("Navigation Reply/Get Translation Needed?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Reply_2F_Get_20_Translation_20_Needed_3F_,NULL);

	result = method_new("Navigation Reply/Get Valid?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Reply_2F_Get_20_Valid_3F_,NULL);

	result = method_new("Navigation Reply/Get Version",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Reply_2F_Get_20_Version,NULL);

	result = method_new("Navigation Reply/Set File Translation Spec",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Reply_2F_Set_20_File_20_Translation_20_Spec,NULL);

	result = method_new("Navigation Reply/Set Key Script",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Reply_2F_Set_20_Key_20_Script,NULL);

	result = method_new("Navigation Reply/Set Replacing?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Reply_2F_Set_20_Replacing_3F_,NULL);

	result = method_new("Navigation Reply/Set Selected Files",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Reply_2F_Set_20_Selected_20_Files,NULL);

	result = method_new("Navigation Reply/Set Stationery?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Reply_2F_Set_20_Stationery_3F_,NULL);

	result = method_new("Navigation Reply/Set Translation Needed?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Reply_2F_Set_20_Translation_20_Needed_3F_,NULL);

	result = method_new("Navigation Reply/Set Valid?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Reply_2F_Set_20_Valid_3F_,NULL);

	result = method_new("Navigation Reply/Set Version",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Reply_2F_Set_20_Version,NULL);

	result = method_new("Navigation Reply/~~Generate Reply",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Reply_2F7E7E_Generate_20_Reply,NULL);

	result = method_new("Navigation Reply/~~Parse Reply Selection AEDesc",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc,NULL);

	result = method_new("Nav Choose Volume Dialog/~Nav Create Dialog",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Choose_20_Volume_20_Dialog_2F7E_Nav_20_Create_20_Dialog,NULL);

	result = method_new("Nav Ask Save Changes Dialog/Extract Reply",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Extract_20_Reply,NULL);

	result = method_new("Nav Ask Save Changes Dialog/Extract Result",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Extract_20_Result,NULL);

	result = method_new("Nav Ask Save Changes Dialog/Get Save Changes?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Get_20_Save_20_Changes_3F_,NULL);

	result = method_new("Nav Ask Save Changes Dialog/NavUA Dont Save Changes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_NavUA_20_Dont_20_Save_20_Changes,NULL);

	result = method_new("Nav Ask Save Changes Dialog/Set Save Changes?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Set_20_Save_20_Changes_3F_,NULL);

	result = method_new("Nav Ask Save Changes Dialog/Setup Run Flags",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Setup_20_Run_20_Flags,NULL);

	result = method_new("Nav Ask Save Changes Dialog/~Nav Create Dialog",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F7E_Nav_20_Create_20_Dialog,NULL);

	result = method_new("Navigation Services Window/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Close,NULL);

	result = method_new("Navigation Services Window/Close Callbacks",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Close_20_Callbacks,NULL);

	result = method_new("Navigation Services Window/Close Event Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Close_20_Event_20_Callback,NULL);

	result = method_new("Navigation Services Window/Dispose",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Dispose,NULL);

	result = method_new("Navigation Services Window/Do Completion Behavior",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Do_20_Completion_20_Behavior,NULL);

	result = method_new("Navigation Services Window/Extract Reply",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Extract_20_Reply,NULL);

	result = method_new("Navigation Services Window/Extract Result",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Extract_20_Result,NULL);

	result = method_new("Navigation Services Window/Get Action",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Action,NULL);

	result = method_new("Navigation Services Window/Get Canceled?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Canceled_3F_,NULL);

	result = method_new("Navigation Services Window/Get Completion Behavior",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Completion_20_Behavior,NULL);

	result = method_new("Navigation Services Window/Get Creation Options Record",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Creation_20_Options_20_Record,NULL);

	result = method_new("Navigation Services Window/Get Event Callback Behavior",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Event_20_Callback_20_Behavior,NULL);

	result = method_new("Navigation Services Window/Get File Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Get_20_File_20_Name,NULL);

	result = method_new("Navigation Services Window/Get Modality",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Modality,NULL);

	result = method_new("Navigation Services Window/Get Parameter String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Parameter_20_String,NULL);

	result = method_new("Navigation Services Window/Get Parent Window",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Parent_20_Window,NULL);

	result = method_new("Navigation Services Window/Get Reply",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Reply,NULL);

	result = method_new("Navigation Services Window/Get Reply Record",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Reply_20_Record,NULL);

	result = method_new("Navigation Services Window/Get Reply Selection",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Reply_20_Selection,NULL);

	result = method_new("Navigation Services Window/Get Result",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Result,NULL);

	result = method_new("Navigation Services Window/Get Window Record",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Get_20_Window_20_Record,NULL);

	result = method_new("Navigation Services Window/NavCB Accept",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_Accept,NULL);

	result = method_new("Navigation Services Window/NavCB Cancel",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_Cancel,NULL);

	result = method_new("Navigation Services Window/NavCB Event",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_Event,NULL);

	result = method_new("Navigation Services Window/NavCB Start",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_Start,NULL);

	result = method_new("Navigation Services Window/NavCB Terminate",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_Terminate,NULL);

	result = method_new("Navigation Services Window/NavCB Unknown Selector",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_Unknown_20_Selector,NULL);

	result = method_new("Navigation Services Window/NavCB User Action",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action,NULL);

	result = method_new("Navigation Services Window/NavEvent Simple",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple,NULL);

	result = method_new("Navigation Services Window/NavUA Cancel",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Cancel,NULL);

	result = method_new("Navigation Services Window/NavUA Choose",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Choose,NULL);

	result = method_new("Navigation Services Window/NavUA Discard Changes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Discard_20_Changes,NULL);

	result = method_new("Navigation Services Window/NavUA Dont Save Any Documents",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Dont_20_Save_20_Any_20_Documents,NULL);

	result = method_new("Navigation Services Window/NavUA Dont Save Changes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Dont_20_Save_20_Changes,NULL);

	result = method_new("Navigation Services Window/NavUA New Folder",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_New_20_Folder,NULL);

	result = method_new("Navigation Services Window/NavUA None",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_None,NULL);

	result = method_new("Navigation Services Window/NavUA Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Open,NULL);

	result = method_new("Navigation Services Window/NavUA Review Documents",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Review_20_Documents,NULL);

	result = method_new("Navigation Services Window/NavUA Save As",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Save_20_As,NULL);

	result = method_new("Navigation Services Window/NavUA Save Changes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Save_20_Changes,NULL);

	result = method_new("Navigation Services Window/NavUA Unknown Action",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_NavUA_20_Unknown_20_Action,NULL);

	result = method_new("Navigation Services Window/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Open,NULL);

	result = method_new("Navigation Services Window/Open Event Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Open_20_Event_20_Callback,NULL);

	result = method_new("Navigation Services Window/Report Error",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Report_20_Error,NULL);

	result = method_new("Navigation Services Window/Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Run,NULL);

	result = method_new("Navigation Services Window/Set Action",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Action,NULL);

	result = method_new("Navigation Services Window/Set Canceled?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Canceled_3F_,NULL);

	result = method_new("Navigation Services Window/Set Completion Behavior",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Completion_20_Behavior,NULL);

	result = method_new("Navigation Services Window/Set Creation Options Record",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Creation_20_Options_20_Record,NULL);

	result = method_new("Navigation Services Window/Set Error",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Error,NULL);

	result = method_new("Navigation Services Window/Set File Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Set_20_File_20_Name,NULL);

	result = method_new("Navigation Services Window/Set Finished?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Finished_3F_,NULL);

	result = method_new("Navigation Services Window/Set Modality",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Modality,NULL);

	result = method_new("Navigation Services Window/Set Parameter String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Parameter_20_String,NULL);

	result = method_new("Navigation Services Window/Set Parent Window",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Parent_20_Window,NULL);

	result = method_new("Navigation Services Window/Set Preference Key",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Preference_20_Key,NULL);

	result = method_new("Navigation Services Window/Set Reply",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Reply,NULL);

	result = method_new("Navigation Services Window/Set Result",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Result,NULL);

	result = method_new("Navigation Services Window/Set Window Record",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Window_20_Record,NULL);

	result = method_new("Navigation Services Window/Set Window Title",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Set_20_Window_20_Title,NULL);

	result = method_new("Navigation Services Window/Setup Dialog",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Dialog,NULL);

	result = method_new("Navigation Services Window/Setup Options",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Options,NULL);

	result = method_new("Navigation Services Window/Setup Run Flags",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F_Setup_20_Run_20_Flags,NULL);

	result = method_new("Navigation Services Window/~Nav Create Dialog",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F7E_Nav_20_Create_20_Dialog,NULL);

	result = method_new("Navigation Services Window/~New NavDialog**",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Navigation_20_Services_20_Window_2F7E_New_20_NavDialog_2A2A_,NULL);

	result = method_new("Nav New Folder Dialog/~Nav Create Dialog",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_New_20_Folder_20_Dialog_2F7E_Nav_20_Create_20_Dialog,NULL);

	result = method_new("Nav Object Filter Dialog/Close Callbacks",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Close_20_Callbacks,NULL);

	result = method_new("Nav Object Filter Dialog/Close Filter Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Close_20_Filter_20_Callback,NULL);

	result = method_new("Nav Object Filter Dialog/Get Filter Callback Behavior",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Get_20_Filter_20_Callback_20_Behavior,NULL);

	result = method_new("Nav Object Filter Dialog/Open Filter Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Open_20_Filter_20_Callback,NULL);

	result = method_new("Nav Object Filter Dialog/Set Filter Callback Behavior",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F_Set_20_Filter_20_Callback_20_Behavior,NULL);

	result = method_new("Nav Object Filter Dialog/~Nav Create Dialog",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Object_20_Filter_20_Dialog_2F7E_Nav_20_Create_20_Dialog,NULL);

	result = method_new("Nav Choose Folder Dialog/~Nav Create Dialog",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Choose_20_Folder_20_Dialog_2F7E_Nav_20_Create_20_Dialog,NULL);

	result = method_new("Nav Preview Filter Dialog/Close Callbacks",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Close_20_Callbacks,NULL);

	result = method_new("Nav Preview Filter Dialog/Close Preview Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Close_20_Preview_20_Callback,NULL);

	result = method_new("Nav Preview Filter Dialog/Get Preview Callback Behavior",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Get_20_Preview_20_Callback_20_Behavior,NULL);

	result = method_new("Nav Preview Filter Dialog/Open Preview Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Open_20_Preview_20_Callback,NULL);

	result = method_new("Nav Preview Filter Dialog/Set Preview Callback Behavior",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Preview_20_Filter_20_Dialog_2F_Set_20_Preview_20_Callback_20_Behavior,NULL);

	result = method_new("Nav Get File Dialog/Get NavTypeList",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Get_20_File_20_Dialog_2F_Get_20_NavTypeList,NULL);

	result = method_new("Nav Get File Dialog/Get Creator Code",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Get_20_File_20_Dialog_2F_Get_20_Creator_20_Code,NULL);

	result = method_new("Nav Get File Dialog/Set Creator Code",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Get_20_File_20_Dialog_2F_Set_20_Creator_20_Code,NULL);

	result = method_new("Nav Get File Dialog/Get Type List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Get_20_File_20_Dialog_2F_Get_20_Type_20_List,NULL);

	result = method_new("Nav Get File Dialog/Set Type List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Get_20_File_20_Dialog_2F_Set_20_Type_20_List,NULL);

	result = method_new("Nav Get File Dialog/~Nav Create Dialog",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Get_20_File_20_Dialog_2F7E_Nav_20_Create_20_Dialog,NULL);

	result = method_new("Nav Put File Dialog/Get File Creator",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Put_20_File_20_Dialog_2F_Get_20_File_20_Creator,NULL);

	result = method_new("Nav Put File Dialog/Get File Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Put_20_File_20_Dialog_2F_Get_20_File_20_Type,NULL);

	result = method_new("Nav Put File Dialog/Set File Creator",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Put_20_File_20_Dialog_2F_Set_20_File_20_Creator,NULL);

	result = method_new("Nav Put File Dialog/Set File Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Put_20_File_20_Dialog_2F_Set_20_File_20_Type,NULL);

	result = method_new("Nav Put File Dialog/~Nav Create Dialog",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Put_20_File_20_Dialog_2F7E_Nav_20_Create_20_Dialog,NULL);

	result = method_new("Nav Put File Dialog/NavUA Save As",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Put_20_File_20_Dialog_2F_NavUA_20_Save_20_As,NULL);

	result = method_new("Nav Choose Object Dialog/~Nav Create Dialog",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Choose_20_Object_20_Dialog_2F7E_Nav_20_Create_20_Dialog,NULL);

	result = method_new("Nav Choose File Dialog/Get NavTypeList",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Choose_20_File_20_Dialog_2F_Get_20_NavTypeList,NULL);

	result = method_new("Nav Choose File Dialog/Set Creator Code",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Choose_20_File_20_Dialog_2F_Set_20_Creator_20_Code,NULL);

	result = method_new("Nav Choose File Dialog/Get Creator Code",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Choose_20_File_20_Dialog_2F_Get_20_Creator_20_Code,NULL);

	result = method_new("Nav Choose File Dialog/Get Type List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Choose_20_File_20_Dialog_2F_Get_20_Type_20_List,NULL);

	result = method_new("Nav Choose File Dialog/Set Type List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Choose_20_File_20_Dialog_2F_Set_20_Type_20_List,NULL);

	result = method_new("Nav Choose File Dialog/~Nav Create Dialog",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Choose_20_File_20_Dialog_2F7E_Nav_20_Create_20_Dialog,NULL);

	result = method_new("Nav Ask Discard Changes Dialog/~Nav Create Dialog",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F7E_Nav_20_Create_20_Dialog,NULL);

	result = method_new("Nav Ask Discard Changes Dialog/Extract Reply",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Extract_20_Reply,NULL);

	result = method_new("Nav Ask Review Documents Dialog/Extract Reply",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Extract_20_Reply,NULL);

	result = method_new("Nav Ask Review Documents Dialog/Extract Result",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Extract_20_Result,NULL);

	result = method_new("Nav Ask Review Documents Dialog/Get Document Count",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Get_20_Document_20_Count,NULL);

	result = method_new("Nav Ask Review Documents Dialog/Get Review?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Get_20_Review_3F_,NULL);

	result = method_new("Nav Ask Review Documents Dialog/NavUA Dont Save Any Documents",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_NavUA_20_Dont_20_Save_20_Any_20_Documents,NULL);

	result = method_new("Nav Ask Review Documents Dialog/Set Document Count",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Set_20_Document_20_Count,NULL);

	result = method_new("Nav Ask Review Documents Dialog/Set Review?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Set_20_Review_3F_,NULL);

	result = method_new("Nav Ask Review Documents Dialog/Setup Run Flags",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Setup_20_Run_20_Flags,NULL);

	result = method_new("Nav Ask Review Documents Dialog/~Nav Create Dialog",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F7E_Nav_20_Create_20_Dialog,NULL);

	result = method_new("Nav Dialog/Set Nav Class",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Dialog_2F_Set_20_Nav_20_Class,NULL);

	result = method_new("Nav Dialog/Get Nav Class",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Dialog_2F_Get_20_Nav_20_Class,NULL);

	result = method_new("Nav Dialog/Set Window Title",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Dialog_2F_Set_20_Window_20_Title,NULL);

	result = method_new("Nav Dialog/Set Preference Key",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Dialog_2F_Set_20_Preference_20_Key,NULL);

	result = method_new("Nav Dialog/Set Type List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Dialog_2F_Set_20_Type_20_List,NULL);

	result = method_new("Nav Dialog/Set File Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Dialog_2F_Set_20_File_20_Type,NULL);

	result = method_new("Nav Dialog/Set File Creator",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Dialog_2F_Set_20_File_20_Creator,NULL);

	result = method_new("Nav Dialog/Set File Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Dialog_2F_Set_20_File_20_Name,NULL);

	result = method_new("Nav Dialog/Set Modality",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Dialog_2F_Set_20_Modality,NULL);

	result = method_new("Nav Dialog/Set Parent Window",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Dialog_2F_Set_20_Parent_20_Window,NULL);

	result = method_new("Nav Dialog/Set Document Count",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Dialog_2F_Set_20_Document_20_Count,NULL);

	result = method_new("Nav Dialog/Set Completion Behavior",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Dialog_2F_Set_20_Completion_20_Behavior,NULL);

	result = method_new("Nav Dialog/Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Dialog_2F_Run,NULL);

	result = method_new("Nav Dialog/Get Canceled?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Dialog_2F_Get_20_Canceled_3F_,NULL);

	result = method_new("Nav Dialog/Get Select List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_List,NULL);

	result = method_new("Nav Dialog/Get Select Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Item,NULL);

	result = method_new("Nav Dialog/Get Select Result",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Result,NULL);

	result = method_new("Nav Dialog/Get Select Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Dialog_2F_Get_20_Select_20_Name,NULL);

	result = method_new("Nav Dialog/Destruct",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Dialog_2F_Destruct,"Destructor");

	result = method_new("Nav Dialog/~Default Completion",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Dialog_2F7E_Default_20_Completion,NULL);

	result = method_new("Nav Dialog/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Dialog_2F_New,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_Navigation(V_Environment environment);
Nat4	loadPersistents_Navigation(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_Navigation(V_Environment environment);
Nat4	load_Navigation(V_Environment environment)
{

	loadClasses_Navigation(environment);
	loadUniversals_Navigation(environment);
	loadPersistents_Navigation(environment);
	return kNOERROR;

}

