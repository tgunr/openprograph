/* A VPL Section File */
/*

Pasteboard Service.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_Get_20_Clipboard_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Get_20_Clipboard_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Pasteboard",ROOT(0));

result = vpx_method_Find_20_Service(PARAMETERS,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Clipboard,1,1,TERMINAL(1),ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Clipboard_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Get_20_Clipboard_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Pasteboard,1,1,NONE,ROOT(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Clipboard,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,1,0,TERMINAL(0));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Get_20_Clipboard(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Clipboard_case_1(environment, &outcome, inputRepeat, contextIndex,root0))
vpx_method_Get_20_Clipboard_case_2(environment, &outcome, inputRepeat, contextIndex,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_Clipboard_20_Text_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Get_20_Clipboard_20_Text_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"com.apple.traditional-mac-plain-text",ROOT(0));

result = vpx_constant(PARAMETERS,"public.utf16-plain-text",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Get_20_Clipboard_20_Text_case_1_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Clipboard_20_Text_case_1_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Extracted_20_Value,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FINISHONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Get_20_Clipboard_20_Text_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Clipboard_20_Text_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Flavors,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"( )",TERMINAL(1));
NEXTCASEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Get_20_Clipboard_20_Text_case_1_local_7_case_1_local_4(PARAMETERS,LIST(1),ROOT(2));
REPEATFINISH
} else {
ROOTNULL(2,NULL)
}

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FINISHONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Clipboard_20_Text_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Clipboard_20_Text_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Get_20_Clipboard_20_Text_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Clipboard_20_Text_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Clipboard_20_Text_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Get_20_Clipboard_20_Text_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_Clipboard_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(6)
result = kSuccess;

result = vpx_method_Get_20_Clipboard(PARAMETERS,ROOT(0));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Synchronize,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_method_Get_20_Clipboard_20_Text_case_1_local_4(PARAMETERS,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Values_20_As_20_UTIs,2,2,TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"( )",TERMINAL(3));
FAILONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Get_20_Clipboard_20_Text_case_1_local_7(PARAMETERS,LIST(3),ROOT(5));
REPEATFINISH
} else {
ROOTNULL(5,NULL)
}

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Set_20_Clipboard_20_Text_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Set_20_Clipboard_20_Text_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_method_Get_20_Clipboard(PARAMETERS,ROOT(0));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Pasteboard_20_Clear,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Set_20_Clipboard_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Set_20_Clipboard_20_Text_case_1_local_2(PARAMETERS,ROOT(1));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Put_20_Values_20_As_20_UTIs,3,1,TERMINAL(1),TERMINAL(0),NONE,ROOT(2));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Get_20_Find_20_Pasteboard_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Get_20_Find_20_Pasteboard_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Pasteboard",ROOT(0));

result = vpx_method_Find_20_Service(PARAMETERS,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Find,1,1,TERMINAL(1),ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Find_20_Pasteboard_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Get_20_Find_20_Pasteboard_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Pasteboard,1,1,NONE,ROOT(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Find,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,1,0,TERMINAL(0));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Get_20_Find_20_Pasteboard(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Find_20_Pasteboard_case_1(environment, &outcome, inputRepeat, contextIndex,root0))
vpx_method_Get_20_Find_20_Pasteboard_case_2(environment, &outcome, inputRepeat, contextIndex,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_Find_20_Pasteboard_20_Text_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Get_20_Find_20_Pasteboard_20_Text_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"com.apple.traditional-mac-plain-text",ROOT(0));

result = vpx_constant(PARAMETERS,"public.utf16-plain-text",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Get_20_Find_20_Pasteboard_20_Text_case_1_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Find_20_Pasteboard_20_Text_case_1_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Extracted_20_Value,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FINISHONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Get_20_Find_20_Pasteboard_20_Text_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Find_20_Pasteboard_20_Text_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Flavors,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"( )",TERMINAL(1));
NEXTCASEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Get_20_Find_20_Pasteboard_20_Text_case_1_local_7_case_1_local_4(PARAMETERS,LIST(1),ROOT(2));
REPEATFINISH
} else {
ROOTNULL(2,NULL)
}

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FINISHONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Find_20_Pasteboard_20_Text_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Find_20_Pasteboard_20_Text_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Get_20_Find_20_Pasteboard_20_Text_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Find_20_Pasteboard_20_Text_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Find_20_Pasteboard_20_Text_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Get_20_Find_20_Pasteboard_20_Text_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_Find_20_Pasteboard_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(6)
result = kSuccess;

result = vpx_method_Get_20_Find_20_Pasteboard(PARAMETERS,ROOT(0));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Synchronize,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_method_Get_20_Find_20_Pasteboard_20_Text_case_1_local_4(PARAMETERS,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Values_20_As_20_UTIs,2,2,TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"( )",TERMINAL(3));
FAILONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Get_20_Find_20_Pasteboard_20_Text_case_1_local_7(PARAMETERS,LIST(3),ROOT(5));
REPEATFINISH
} else {
ROOTNULL(5,NULL)
}

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Set_20_Find_20_Pasteboard_20_Text_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Set_20_Find_20_Pasteboard_20_Text_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_method_Get_20_Find_20_Pasteboard(PARAMETERS,ROOT(0));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Pasteboard_20_Clear,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Set_20_Find_20_Pasteboard_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Set_20_Find_20_Pasteboard_20_Text_case_1_local_2(PARAMETERS,ROOT(1));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Put_20_Values_20_As_20_UTIs,3,1,TERMINAL(1),TERMINAL(0),NONE,ROOT(2));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_PasteboardItemID_20_To_20_Object_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PasteboardItemID_20_To_20_Object_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"16#0000FFFF",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__3E3D_,2,0,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_address_2D_to_2D_object,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_PasteboardItemID_20_To_20_Object_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PasteboardItemID_20_To_20_Object_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_PasteboardItemID_20_To_20_Object_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PasteboardItemID_20_To_20_Object_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PasteboardItemID_20_To_20_Object_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_PasteboardItemID_20_To_20_Object_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_PasteboardItemID_20_To_20_Object_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PasteboardItemID_20_To_20_Object_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_PasteboardItemID_20_To_20_Object_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_PasteboardItemID_20_To_20_Object_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PasteboardItemID_20_To_20_Object_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_PasteboardItemID_20_To_20_Object_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_PasteboardItemID_20_To_20_Object_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_PasteboardItemID_20_To_20_Object(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_PasteboardItemID_20_To_20_Object_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_PasteboardItemID_20_To_20_Object_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_PasteboardItemID_20_To_20_Object_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Object_20_To_20_PasteboardItemID_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Object_20_To_20_PasteboardItemID_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_object_2D_to_2D_address,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Object_20_To_20_PasteboardItemID_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Object_20_To_20_PasteboardItemID_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Object_20_To_20_PasteboardItemID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Object_20_To_20_PasteboardItemID_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Object_20_To_20_PasteboardItemID_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Pasteboard Item Count",ROOT(2));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"PasteboardGetItemIdentifier",ROOT(1));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1_local_7_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1_local_7_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Pasteboard Item ID",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1_local_7_case_1_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1_local_7_case_1_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"PasteboardCopyItemFlavors",ROOT(1));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1_local_7_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1_local_7_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1_local_7_case_1_local_5_case_1_local_2(PARAMETERS,TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Pasteboard_20_Copy_20_Item_20_Flavors,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));
FAILONFAILURE

result = vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1_local_7_case_1_local_5_case_1_local_4(PARAMETERS,TERMINAL(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Show,1,0,TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Pasteboard_20_Get_20_Item_20_Identifier,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1_local_7_case_1_local_3(PARAMETERS,TERMINAL(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1_local_7_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_method_Get_20_Clipboard(PARAMETERS,ROOT(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Pasteboard_20_Get_20_Item_20_Count,1,2,TERMINAL(0),ROOT(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1_local_4(PARAMETERS,TERMINAL(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_Make_20_Count(PARAMETERS,TERMINAL(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1_local_7(PARAMETERS,TERMINAL(0),LIST(3));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_method_Beep(PARAMETERS);

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Flavors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_1(environment, &outcome, inputRepeat, contextIndex))
vpx_method_TEST_20_Show_20_Clipboard_20_Flavors_case_2(environment, &outcome, inputRepeat, contextIndex);
return outcome;
}

enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_method_Get_20_Clipboard_20_Text(PARAMETERS,ROOT(0));
NEXTCASEONFAILURE

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_method_Beep(PARAMETERS);

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_TEST_20_Show_20_Clipboard_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_TEST_20_Show_20_Clipboard_20_Text_case_1(environment, &outcome, inputRepeat, contextIndex))
vpx_method_TEST_20_Show_20_Clipboard_20_Text_case_2(environment, &outcome, inputRepeat, contextIndex);
return outcome;
}

enum opTrigger vpx_method_TEST_20_Show_20_Find_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_Show_20_Find_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_method_Get_20_Find_20_Pasteboard_20_Text(PARAMETERS,ROOT(0));
NEXTCASEONFAILURE

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_TEST_20_Show_20_Find_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_Show_20_Find_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_method_Beep(PARAMETERS);

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_TEST_20_Show_20_Find_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_TEST_20_Show_20_Find_20_Text_case_1(environment, &outcome, inputRepeat, contextIndex))
vpx_method_TEST_20_Show_20_Find_20_Text_case_2(environment, &outcome, inputRepeat, contextIndex);
return outcome;
}

enum opTrigger vpx_method_TEST_20_Set_20_Clipboard_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_Set_20_Clipboard_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Andescotia, LLC.",ROOT(0));

result = vpx_method_Set_20_Clipboard_20_Text(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_TEST_20_Set_20_Clipboard_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_Set_20_Clipboard_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_method_Beep(PARAMETERS);

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_TEST_20_Set_20_Clipboard_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_TEST_20_Set_20_Clipboard_20_Text_case_1(environment, &outcome, inputRepeat, contextIndex))
vpx_method_TEST_20_Set_20_Clipboard_20_Text_case_2(environment, &outcome, inputRepeat, contextIndex);
return outcome;
}

enum opTrigger vpx_method_TEST_20_Set_20_Find_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_Set_20_Find_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Andescotia, LLC.",ROOT(0));

result = vpx_method_Set_20_Find_20_Pasteboard_20_Text(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_TEST_20_Set_20_Find_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_Set_20_Find_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_method_Beep(PARAMETERS);

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_TEST_20_Set_20_Find_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_TEST_20_Set_20_Find_20_Text_case_1(environment, &outcome, inputRepeat, contextIndex))
vpx_method_TEST_20_Set_20_Find_20_Text_case_2(environment, &outcome, inputRepeat, contextIndex);
return outcome;
}

enum opTrigger vpx_method_TEST_20_UTI_20_Generator_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_UTI_20_Generator_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(11)
result = kSuccess;

result = vpx_constant(PARAMETERS,"vpx",ROOT(0));

result = vpx_constant(PARAMETERS,"__CFString",ROOT(1));

result = vpx_constant(PARAMETERS,"kUTTagClassFilenameExtension",ROOT(2));

result = vpx_constant(PARAMETERS,"kUTTagClassOSType",ROOT(3));

result = vpx_method_Get_20_Framework_20_Constant(PARAMETERS,TERMINAL(3),NONE,TERMINAL(1),ROOT(4));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"hfs \"",ROOT(5));

result = vpx_constant(PARAMETERS,"framework",ROOT(6));

result = vpx_constant(PARAMETERS,"furl",ROOT(7));

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_constant(PARAMETERS,"NULL",ROOT(9));

PUTPOINTER(__CFString,*,UTTypeCreatePreferredIdentifierForTag( GETCONSTPOINTER(__CFString,*,TERMINAL(4)),GETCONSTPOINTER(__CFString,*,TERMINAL(8)),GETCONSTPOINTER(__CFString,*,TERMINAL(9))),10);
result = kSuccess;

CFShow( GETCONSTPOINTER(void,*,TERMINAL(10)));
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(10)));
result = kSuccess;

result = kSuccess;

FOOTERWITHNONE(11)
}

enum opTrigger vpx_method_TEST_20_UTI_20_Generator_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_UTI_20_Generator_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_method_Beep(PARAMETERS);

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_TEST_20_UTI_20_Generator(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_TEST_20_UTI_20_Generator_case_1(environment, &outcome, inputRepeat, contextIndex))
vpx_method_TEST_20_UTI_20_Generator_case_2(environment, &outcome, inputRepeat, contextIndex);
return outcome;
}




	Nat4 tempAttribute_Pasteboard_20_Service_2F_Name[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000000A, 0X50617374, 0X65626F61, 0X72640000
	};
	Nat4 tempAttribute_Pasteboard_20_Service_2F_Required_20_Services[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Service_2F_Initial_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Pasteboard_20_Service_2F_Active_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Service_2F_Pasteboards[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Service_2F_Initial_20_Pasteboards[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Service_2F_Event_20_Handlers[] = {
0000000000, 0X00000320, 0X0000009C, 0X00000022, 0X00000014, 0X00000388, 0X00000384, 0X0000037C,
0X00000310, 0X00000334, 0X00000330, 0X00000328, 0X0000030C, 0X00000304, 0X00000108, 0X00000104,
0X000002BC, 0X000000F0, 0X00000290, 0X000000EC, 0X000000E4, 0X0000024C, 0X00000234, 0X00000214,
0X0000021C, 0X000001A0, 0X000001F0, 0X000001D8, 0X000001B8, 0X000001C0, 0X0000019C, 0X00000194,
0X000000E0, 0X00000164, 0X000000DC, 0X0000012C, 0X000000D4, 0X000000B0, 0X000000B8, 0X00270008,
0000000000, 0000000000, 0000000000, 0000000000, 0X000000D4, 0X00000011, 0X000000BC, 0X43617262,
0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000118, 0000000000, 0X00000150,
0X00000180, 0X00000260, 0000000000, 0X0000027C, 0X000002A8, 0000000000, 0000000000, 0000000000,
0000000000, 0X000002D8, 0X000002F0, 0000000000, 0000000000, 0000000000, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000134, 0X0000001A, 0X50617374, 0X65626F61, 0X72642045,
0X76656E74, 0X73204361, 0X6C6C6261, 0X636B0000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000016C, 0X00000010, 0X2F434520, 0X48616E64, 0X6C652045, 0X76656E74, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000019C, 0X00000002, 0X000001A4,
0X00000200, 0X00180008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001D8, 0X00000001,
0X000001C4, 0X41747472, 0X69627574, 0X65205370, 0X65636966, 0X69657200, 0X000001DC, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001F8, 0X00000005, 0X4F776E65, 0X72000000,
0X00180008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000234, 0X00000001, 0X00000220,
0X41747472, 0X69627574, 0X65205370, 0X65636966, 0X69657200, 0X00000238, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000254, 0X00000009, 0X54686520, 0X4576656E, 0X74000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000298, 0X0000000F, 0X2F446F20, 0X43452043,
0X616C6C62, 0X61636B00, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002C4,
0X00000013, 0X4576656E, 0X7448616E, 0X646C6572, 0X50726F63, 0X50747200, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0XFFFFD96E, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000030C, 0X00000002, 0X00000314, 0X00000368, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000330, 0X00000002, 0X00000338, 0X00000350, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X6170706C, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000001, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000384,
0X00000002, 0X0000038C, 0X000003A4, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X6170706C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Pasteboard_2F_Name[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000008, 0X556E7469, 0X746C6564, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_2F_Identifier[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000010, 0X636F6D2E, 0X6D79636F, 0X72702E73,
0X63726170, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_2F_Release_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Pasteboard_2F_Changed_20_Callback[] = {
0000000000, 0X000001D0, 0X00000064, 0X00000014, 0X00000014, 0X000000A4, 0X000000A0, 0X000001E8,
0X000001D0, 0X000001AC, 0X000001B4, 0X00000138, 0X00000188, 0X00000170, 0X00000150, 0X00000158,
0X00000134, 0X0000012C, 0X0000009C, 0X000000F0, 0X00000098, 0X000000BC, 0X00000090, 0X00000078,
0X00000080, 0X00100008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000090, 0X00000006,
0X00000084, 0X4D657468, 0X6F642043, 0X616C6C00, 0X000000A8, 0000000000, 0X000000DC, 0X00000118,
0X000001FC, 0X00000218, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000C4,
0X00000017, 0X50617374, 0X65626F61, 0X72642043, 0X68616E67, 0X65642043, 0X616C6C00, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X000000F8, 0X0000001D, 0X2F446F20, 0X5374616E,
0X64617264, 0X20436861, 0X6E676564, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000134, 0X00000002, 0X0000013C, 0X00000198, 0X00180008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000170, 0X00000001, 0X0000015C, 0X41747472,
0X69627574, 0X65205370, 0X65636966, 0X69657200, 0X00000174, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000190, 0X00000005, 0X4F776E65, 0X72000000, 0X00170008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D0, 0X00000001, 0X000001B8, 0X41747461, 0X63686D65,
0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X000001D4, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X000001F0, 0X0000000A, 0X53796E63, 0X20466C61, 0X67730000, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_2F_Promise_20_Callback[] = {
0000000000, 0X00000334, 0X0000009C, 0X00000022, 0X00000014, 0X000000FC, 0X00000390, 0X000000E8,
0X00000364, 0X000000E4, 0X000000E0, 0X0000031C, 0X00000304, 0X000002E4, 0X000002EC, 0X000002CC,
0X000002C4, 0X000000DC, 0X00000294, 0X00000270, 0X00000278, 0X000001A8, 0X00000240, 0X0000021C,
0X00000224, 0X000001A4, 0X000001F8, 0X000001E0, 0X000001C0, 0X000001C8, 0X000001A0, 0X00000198,
0X000000D8, 0X00000154, 0X000000D4, 0X00000114, 0X000000CC, 0X000000B0, 0X000000B8, 0X00190008,
0000000000, 0000000000, 0000000000, 0000000000, 0X000000CC, 0X0000000D, 0X000000BC, 0X4D657468,
0X6F642043, 0X616C6C62, 0X61636B00, 0X00000100, 0000000000, 0X00000140, 0X00000184, 0X000002B0,
0X00000334, 0X00000350, 0X0000037C, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003B8,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000011C, 0X00000022, 0X50617374,
0X65626F61, 0X72642050, 0X726F6D69, 0X7365204B, 0X65657065, 0X72204361, 0X6C6C6261, 0X636B0000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000015C, 0X00000024, 0X2F446F20,
0X5374616E, 0X64617264, 0X2050726F, 0X6D697365, 0X204B6565, 0X70657220, 0X43616C6C, 0X6261636B,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001A0, 0X00000003,
0X000001AC, 0X00000208, 0X0000025C, 0X00180008, 0000000000, 0000000000, 0000000000, 0000000000,
0X000001E0, 0X00000001, 0X000001CC, 0X41747472, 0X69627574, 0X65205370, 0X65636966, 0X69657200,
0X000001E4, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000200, 0X00000005,
0X4F776E65, 0X72000000, 0X00170008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000240,
0X00000001, 0X00000228, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000,
0X00000244, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000002, 0X00170008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000294, 0X00000001, 0X0000027C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000298, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000003, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X000002CC, 0X00000001, 0X000002D0, 0X00180008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000304, 0X00000001, 0X000002F0, 0X41747472, 0X69627574, 0X65205370, 0X65636966,
0X69657200, 0X00000308, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000324,
0X0000000F, 0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0000000C, 0X2F446F20, 0X43616C6C, 0X6261636B, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0000001E, 0X50617374, 0X65626F61,
0X72645072, 0X6F6D6973, 0X654B6565, 0X70657250, 0X726F6350, 0X74720000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_2F_Known_20_Flavors[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_2F_Calling_20_Promise_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Notifier_2F_Name[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000008, 0X556E7469, 0X746C6564, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Notifier_2F_Identifier[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000010, 0X636F6D2E, 0X6D79636F, 0X72702E73,
0X63726170, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Notifier_2F_Release_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Pasteboard_20_Notifier_2F_Changed_20_Callback[] = {
0000000000, 0X000001D0, 0X00000064, 0X00000014, 0X00000014, 0X000000A4, 0X000000A0, 0X000001E8,
0X000001D0, 0X000001AC, 0X000001B4, 0X00000138, 0X00000188, 0X00000170, 0X00000150, 0X00000158,
0X00000134, 0X0000012C, 0X0000009C, 0X000000F0, 0X00000098, 0X000000BC, 0X00000090, 0X00000078,
0X00000080, 0X00100008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000090, 0X00000006,
0X00000084, 0X4D657468, 0X6F642043, 0X616C6C00, 0X000000A8, 0000000000, 0X000000DC, 0X00000118,
0X000001FC, 0X00000218, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000C4,
0X00000017, 0X50617374, 0X65626F61, 0X72642043, 0X68616E67, 0X65642043, 0X616C6C00, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X000000F8, 0X0000001D, 0X2F446F20, 0X5374616E,
0X64617264, 0X20436861, 0X6E676564, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000134, 0X00000002, 0X0000013C, 0X00000198, 0X00180008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000170, 0X00000001, 0X0000015C, 0X41747472,
0X69627574, 0X65205370, 0X65636966, 0X69657200, 0X00000174, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000190, 0X00000005, 0X4F776E65, 0X72000000, 0X00170008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D0, 0X00000001, 0X000001B8, 0X41747461, 0X63686D65,
0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X000001D4, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X000001F0, 0X0000000A, 0X53796E63, 0X20466C61, 0X67730000, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Notifier_2F_Promise_20_Callback[] = {
0000000000, 0X00000334, 0X0000009C, 0X00000022, 0X00000014, 0X000000FC, 0X00000390, 0X000000E8,
0X00000364, 0X000000E4, 0X000000E0, 0X0000031C, 0X00000304, 0X000002E4, 0X000002EC, 0X000002CC,
0X000002C4, 0X000000DC, 0X00000294, 0X00000270, 0X00000278, 0X000001A8, 0X00000240, 0X0000021C,
0X00000224, 0X000001A4, 0X000001F8, 0X000001E0, 0X000001C0, 0X000001C8, 0X000001A0, 0X00000198,
0X000000D8, 0X00000154, 0X000000D4, 0X00000114, 0X000000CC, 0X000000B0, 0X000000B8, 0X00190008,
0000000000, 0000000000, 0000000000, 0000000000, 0X000000CC, 0X0000000D, 0X000000BC, 0X4D657468,
0X6F642043, 0X616C6C62, 0X61636B00, 0X00000100, 0000000000, 0X00000140, 0X00000184, 0X000002B0,
0X00000334, 0X00000350, 0X0000037C, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003B8,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000011C, 0X00000022, 0X50617374,
0X65626F61, 0X72642050, 0X726F6D69, 0X7365204B, 0X65657065, 0X72204361, 0X6C6C6261, 0X636B0000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000015C, 0X00000024, 0X2F446F20,
0X5374616E, 0X64617264, 0X2050726F, 0X6D697365, 0X204B6565, 0X70657220, 0X43616C6C, 0X6261636B,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001A0, 0X00000003,
0X000001AC, 0X00000208, 0X0000025C, 0X00180008, 0000000000, 0000000000, 0000000000, 0000000000,
0X000001E0, 0X00000001, 0X000001CC, 0X41747472, 0X69627574, 0X65205370, 0X65636966, 0X69657200,
0X000001E4, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000200, 0X00000005,
0X4F776E65, 0X72000000, 0X00170008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000240,
0X00000001, 0X00000228, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000,
0X00000244, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000002, 0X00170008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000294, 0X00000001, 0X0000027C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000298, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000003, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X000002CC, 0X00000001, 0X000002D0, 0X00180008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000304, 0X00000001, 0X000002F0, 0X41747472, 0X69627574, 0X65205370, 0X65636966,
0X69657200, 0X00000308, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000324,
0X0000000F, 0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0000000C, 0X2F446F20, 0X43616C6C, 0X6261636B, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0000001E, 0X50617374, 0X65626F61,
0X72645072, 0X6F6D6973, 0X654B6565, 0X70657250, 0X726F6350, 0X74720000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Notifier_2F_Known_20_Flavors[] = {
0000000000, 0X000000D8, 0X00000030, 0X00000007, 0X00000014, 0X000000DC, 0X00000054, 0X000000A0,
0X00000050, 0X0000006C, 0X0000004C, 0X00000044, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000004C, 0X00000003, 0X00000058, 0X0000008C, 0X000000C8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000074, 0X00000016, 0X50617374, 0X65626F61, 0X72642046,
0X6C61766F, 0X72205465, 0X78740000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000A8, 0X0000001F, 0X50617374, 0X65626F61, 0X72642046, 0X6C61766F, 0X72205465, 0X7874204D,
0X6163526F, 0X6D616E00, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000E4,
0X00000021, 0X50617374, 0X65626F61, 0X72642046, 0X6C61766F, 0X72204F62, 0X6A656374, 0X20496E73,
0X74616E63, 0X65000000
	};
	Nat4 tempAttribute_Pasteboard_20_Notifier_2F_Calling_20_Promise_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Notifier_2F_Items[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Item_2F_Flavors[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_2F_Identifier[] = {
0000000000, 0X00000034, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000017, 0X7075626C, 0X69632E75, 0X74663136,
0X2D706C61, 0X696E2D74, 0X65787400
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_2F_Sender_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_2F_Sender_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_2F_Not_20_Saved_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_2F_Request_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_2F_System_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_2F_Promised_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_2F_Exclude_20_Types[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Text_2F_Identifier[] = {
0000000000, 0X00000034, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000017, 0X7075626C, 0X69632E75, 0X74663136,
0X2D706C61, 0X696E2D74, 0X65787400
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Text_2F_Sender_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Text_2F_Sender_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Text_2F_Not_20_Saved_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Text_2F_Request_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Text_2F_System_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Text_2F_Promised_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Text_2F_Exclude_20_Types[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Identifier[] = {
0000000000, 0X00000044, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000024, 0X636F6D2E, 0X6170706C, 0X652E7472,
0X61646974, 0X696F6E61, 0X6C2D6D61, 0X632D706C, 0X61696E2D, 0X74657874, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Sender_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Sender_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Not_20_Saved_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Request_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_System_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Promised_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Exclude_20_Types[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_2F_Identifier[] = {
0000000000, 0X0000003C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000001E, 0X636F6D2E, 0X616E6465, 0X73636F74,
0X69612E6D, 0X61727465, 0X6E2E696E, 0X7374616E, 0X63650000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_2F_Sender_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_2F_Sender_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_2F_Not_20_Saved_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_2F_Request_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_2F_System_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_2F_Promised_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_2F_Exclude_20_Types[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Case_2F_Identifier[] = {
0000000000, 0X00000040, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000023, 0X636F6D2E, 0X616E6465, 0X73636F74,
0X69612E6D, 0X61727465, 0X6E2E696E, 0X7374616E, 0X63652E63, 0X61736500
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Case_2F_Sender_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Case_2F_Sender_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Case_2F_Not_20_Saved_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Case_2F_Request_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Case_2F_System_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Case_2F_Promised_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Case_2F_Exclude_20_Types[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_20_List_2F_Identifier[] = {
0000000000, 0X00000040, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000023, 0X636F6D2E, 0X616E6465, 0X73636F74,
0X69612E6D, 0X61727465, 0X6E2E696E, 0X7374616E, 0X63652E6C, 0X69737400
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_20_List_2F_Sender_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_20_List_2F_Sender_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_20_List_2F_Not_20_Saved_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_20_List_2F_Request_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_20_List_2F_System_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_20_List_2F_Promised_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_20_List_2F_Exclude_20_Types[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Value_2F_Identifier[] = {
0000000000, 0X00000044, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000024, 0X636F6D2E, 0X616E6465, 0X73636F74,
0X69612E6D, 0X61727465, 0X6E2E696E, 0X7374616E, 0X63652E76, 0X616C7565, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Value_2F_Sender_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Value_2F_Sender_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Value_2F_Not_20_Saved_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Value_2F_Request_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Value_2F_System_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Value_2F_Promised_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Value_2F_Exclude_20_Types[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_2F_Identifier[] = {
0000000000, 0X0000003C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000001D, 0X636F6D2E, 0X616E6465, 0X73636F74,
0X69612E6D, 0X61727465, 0X6E2E6172, 0X63686976, 0X65000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_2F_Sender_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_2F_Sender_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_2F_Not_20_Saved_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_2F_Request_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_2F_System_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_2F_Promised_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_2F_Exclude_20_Types[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_2F_Archive_20_Types[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Identifier[] = {
0000000000, 0X0000004C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000002D, 0X636F6D2E, 0X616E6465, 0X73636F74,
0X69612E6D, 0X61727465, 0X6E2E6172, 0X63686976, 0X652E6C69, 0X73742E68, 0X656C7065, 0X726E616D,
0X65000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Sender_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Sender_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Not_20_Saved_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Request_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_System_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Promised_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Exclude_20_Types[] = {
0000000000, 0X000000B4, 0X00000038, 0X00000009, 0X00000014, 0X000000DC, 0X000000C0, 0X000000B8,
0X00000058, 0X00000094, 0X00000078, 0X00000070, 0X00000054, 0X0000004C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000054, 0X00000002, 0X0000005C, 0X000000A4, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000078, 0X00000002, 0X00000080, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000009C, 0X00000005, 0X50617374,
0X65000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000C0, 0X00000002,
0X000000C8, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000E4,
0X00000004, 0X44726F70, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Identifier[] = {
0000000000, 0X00000038, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000019, 0X636F6D2E, 0X616E6465, 0X73636F74,
0X69612E6D, 0X61727465, 0X6E2E7572, 0X6C000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Sender_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Sender_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Not_20_Saved_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Request_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_20_URL_2F_System_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Promised_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Exclude_20_Types[] = {
0000000000, 0X000000B4, 0X00000038, 0X00000009, 0X00000014, 0X000000DC, 0X000000C0, 0X000000B8,
0X00000058, 0X00000094, 0X00000078, 0X00000070, 0X00000054, 0X0000004C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000054, 0X00000002, 0X0000005C, 0X000000A4, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000078, 0X00000002, 0X00000080, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000009C, 0X00000005, 0X50617374,
0X65000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000C0, 0X00000002,
0X000000C8, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000E4,
0X00000004, 0X44726F70, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Identifier[] = {
0000000000, 0X00000034, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000017, 0X7075626C, 0X69632E75, 0X74663136,
0X2D706C61, 0X696E2D74, 0X65787400
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Sender_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Sender_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Not_20_Saved_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Request_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_20_Text_2F_System_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Promised_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Exclude_20_Types[] = {
0000000000, 0X000000B4, 0X00000038, 0X00000009, 0X00000014, 0X000000DC, 0X000000C0, 0X000000B8,
0X00000058, 0X00000094, 0X00000078, 0X00000070, 0X00000054, 0X0000004C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000054, 0X00000002, 0X0000005C, 0X000000A4, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000078, 0X00000002, 0X00000080, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000009C, 0X00000005, 0X50617374,
0X65000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000C0, 0X00000002,
0X000000C8, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000E4,
0X00000004, 0X44726F70, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Object_20_Value_2F_Identifier[] = {
0000000000, 0X00000040, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000022, 0X636F6D2E, 0X616E6465, 0X73636F74,
0X69612E6D, 0X61727465, 0X6E2E6F62, 0X6A656374, 0X2E76616C, 0X75650000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Object_20_Value_2F_Sender_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Object_20_Value_2F_Sender_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Object_20_Value_2F_Not_20_Saved_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Object_20_Value_2F_Request_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Object_20_Value_2F_System_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Object_20_Value_2F_Promised_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Object_20_Value_2F_Exclude_20_Types[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Identifier[] = {
0000000000, 0X0000004C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000002F, 0X636F6D2E, 0X616E6465, 0X73636F74,
0X69612E6D, 0X61727465, 0X6E2E6F62, 0X6A656374, 0X2E617263, 0X68697665, 0X2E6F7065, 0X72617469,
0X6F6E7300
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Sender_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Sender_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Not_20_Saved_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Request_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Object_20_Operations_2F_System_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Promised_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Exclude_20_Types[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_File_20_URL_2F_Identifier[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000000F, 0X7075626C, 0X69632E66, 0X696C652D,
0X75726C00
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_File_20_URL_2F_Sender_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_File_20_URL_2F_Sender_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_File_20_URL_2F_Not_20_Saved_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_File_20_URL_2F_Request_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_File_20_URL_2F_System_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_File_20_URL_2F_Promised_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_File_20_URL_2F_Exclude_20_Types[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_File_20_URL_2F_Limit_20_UTIs[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Identifier[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000000A, 0X74726173, 0X686C6162, 0X656C0000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Sender_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Sender_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Not_20_Saved_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Request_20_Only_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Trash_20_Label_2F_System_20_Translated_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Promised_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Extracted_20_Value[] = {
0000000000, 0X00000024, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000006, 0X44656C65, 0X74650000
	};
	Nat4 tempAttribute_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Exclude_20_Types[] = {
0000000000, 0X00000108, 0X00000048, 0X0000000D, 0X00000014, 0X00000138, 0X0000011C, 0X00000114,
0X0000006C, 0X000000F0, 0X000000D4, 0X000000CC, 0X00000068, 0X000000A8, 0X0000008C, 0X00000084,
0X00000064, 0X0000005C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000064,
0X00000003, 0X00000070, 0X000000B8, 0X00000100, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000008C, 0X00000002, 0X00000094, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X000000B0, 0X00000005, 0X50617374, 0X65000000, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X000000D4, 0X00000002, 0X000000DC, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X000000F8, 0X00000004, 0X44726F70, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000011C, 0X00000002, 0X00000124,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000140, 0X0000000C,
0X53657276, 0X69636520, 0X436F7079, 0000000000
	};
	Nat4 tempAttribute_Abstract_20_Pasteboard_20_Handler_2F_Known_20_Flavors[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Cache[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Window_20_Pasteboard_20_Handler_2F_Known_20_Flavors[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Cache[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_List_20_Window_20_Pasteboard_20_Handler_2F_Known_20_Flavors[] = {
0000000000, 0X000001A8, 0X00000048, 0X0000000D, 0X00000014, 0X000001C8, 0X00000078, 0X0000018C,
0X00000074, 0X00000150, 0X00000070, 0X00000114, 0X0000006C, 0X000000CC, 0X00000068, 0X00000090,
0X00000064, 0X0000005C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000064,
0X00000006, 0X0000007C, 0X000000B8, 0X00000100, 0X0000013C, 0X00000178, 0X000001B4, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000098, 0X0000001F, 0X50617374, 0X65626F61,
0X72642046, 0X6C61766F, 0X7220496E, 0X7374616E, 0X6365204C, 0X69737400, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000000D4, 0X0000002A, 0X50617374, 0X65626F61, 0X72642046,
0X6C61766F, 0X72204172, 0X63686976, 0X65204C69, 0X73742048, 0X656C7065, 0X72204E61, 0X6D650000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000011C, 0X0000001E, 0X50617374,
0X65626F61, 0X72642046, 0X6C61766F, 0X72204172, 0X63686976, 0X65204C69, 0X73740000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000158, 0X0000001E, 0X50617374, 0X65626F61,
0X72642046, 0X6C61766F, 0X72204172, 0X63686976, 0X65205465, 0X78740000, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000194, 0X0000001D, 0X50617374, 0X65626F61, 0X72642046,
0X6C61766F, 0X72204172, 0X63686976, 0X65205552, 0X4C000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X000001D0, 0X0000001D, 0X50617374, 0X65626F61, 0X72642046, 0X6C61766F,
0X72205472, 0X61736820, 0X4C616265, 0X6C000000
	};
	Nat4 tempAttribute_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Cache[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_List_20_Window_20_Pasteboard_20_Handler_2F_Window_20_Drag_20_Handler[] = {
0000000000, 0X00000674, 0X0000012C, 0X00000046, 0X00000014, 0X00000540, 0X00000764, 0X0000052C,
0X00000738, 0X00000528, 0X00000524, 0X000006F0, 0X000006D8, 0X000006B8, 0X000006C0, 0X000006A0,
0X00000698, 0X00000520, 0X00000668, 0X00000644, 0X0000064C, 0X000005D0, 0X00000620, 0X00000608,
0X000005E8, 0X000005F0, 0X000005CC, 0X000005C4, 0X0000051C, 0X00000594, 0X00000518, 0X00000558,
0X00000510, 0X000004F4, 0X000004FC, 0X0000017C, 0X00000224, 0X000004A4, 0X00000210, 0X00000478,
0X0000020C, 0X00000208, 0X00000430, 0X00000418, 0X000003F8, 0X00000400, 0X000003E0, 0X000003D8,
0X00000204, 0X000003A8, 0X00000384, 0X0000038C, 0X000002BC, 0X00000354, 0X00000330, 0X00000338,
0X000002B8, 0X0000030C, 0X000002F4, 0X000002D4, 0X000002DC, 0X000002B4, 0X000002AC, 0X00000200,
0X00000278, 0X000001FC, 0X0000023C, 0X000001F4, 0X000001D8, 0X000001E0, 0X00000178, 0X00000174,
0X00000170, 0X00000140, 0X00000148, 0X01550008, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000168, 0X00000009, 0X0000014C, 0X4C697374, 0X2057696E, 0X646F7720, 0X44726167, 0X2048616E,
0X646C6572, 0000000000, 0000000000, 0000000000, 0X0000018C, 0X000001A8, 0X000001C4, 0X000004E0,
0000000000, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00190008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001F4, 0X0000000D,
0X000001E4, 0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000228, 0000000000, 0X00000264,
0X00000298, 0X000003C4, 0X00000448, 0X00000464, 0X00000490, 0000000000, 0000000000, 0000000000,
0000000000, 0X000004C8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000244,
0X0000001D, 0X57696E64, 0X6F772044, 0X72616720, 0X54726163, 0X6B696E67, 0X2043616C, 0X6C626163,
0X6B000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X00000014,
0X2F446F20, 0X54726163, 0X6B696E67, 0X2048616E, 0X646C6572, 0000000000, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X000002B4, 0X00000003, 0X000002C0, 0X0000031C, 0X00000370,
0X00180008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002F4, 0X00000001, 0X000002E0,
0X41747472, 0X69627574, 0X65205370, 0X65636966, 0X69657200, 0X000002F8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000314, 0X00000005, 0X4F776E65, 0X72000000, 0X00170008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000354, 0X00000001, 0X0000033C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000358, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X00170008, 0000000000, 0000000000, 0000000000,
0000000000, 0X000003A8, 0X00000001, 0X00000390, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X000003AC, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000004, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003E0, 0X00000001,
0X000003E4, 0X00180008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000418, 0X00000001,
0X00000404, 0X41747472, 0X69627574, 0X65205370, 0X65636966, 0X69657200, 0X0000041C, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000438, 0X0000000F, 0X43616C6C, 0X6261636B,
0X20526573, 0X756C7400, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000480, 0X0000000C,
0X2F446F20, 0X43616C6C, 0X6261636B, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000004AC, 0X0000001A, 0X44726167, 0X54726163, 0X6B696E67, 0X48616E64, 0X6C657250,
0X726F6350, 0X74720000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00190008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000510, 0X0000000D, 0X00000500,
0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000544, 0000000000, 0X00000580, 0X000005B0,
0X00000684, 0X00000708, 0X00000724, 0X00000750, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000788, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000560, 0X0000001C,
0X57696E64, 0X6F772044, 0X72616720, 0X52656365, 0X69766520, 0X43616C6C, 0X6261636B, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000059C, 0X00000013, 0X2F446F20,
0X52656365, 0X69766520, 0X48616E64, 0X6C657200, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X000005CC, 0X00000002, 0X000005D4, 0X00000630, 0X00180008, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000608, 0X00000001, 0X000005F4, 0X41747472, 0X69627574, 0X65205370,
0X65636966, 0X69657200, 0X0000060C, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000628, 0X00000005, 0X4F776E65, 0X72000000, 0X00170008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000668, 0X00000001, 0X00000650, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X0000066C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000003, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000006A0, 0X00000001,
0X000006A4, 0X00180008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000006D8, 0X00000001,
0X000006C4, 0X41747472, 0X69627574, 0X65205370, 0X65636966, 0X69657200, 0X000006DC, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X000006F8, 0X0000000F, 0X43616C6C, 0X6261636B,
0X20526573, 0X756C7400, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000740, 0X0000000C,
0X2F446F20, 0X43616C6C, 0X6261636B, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000076C, 0X00000019, 0X44726167, 0X52656365, 0X69766548, 0X616E646C, 0X65725072,
0X6F635074, 0X72000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_Pasteboard_20_Service_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Pasteboard_20_Service_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 208 344 }{ 186 337 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Pasteboard_20_Service_2F_Name,environment);
	tempAttribute = attribute_add("Required Services",tempClass,tempAttribute_Pasteboard_20_Service_2F_Required_20_Services,environment);
	tempAttribute = attribute_add("Initial?",tempClass,tempAttribute_Pasteboard_20_Service_2F_Initial_3F_,environment);
	tempAttribute = attribute_add("Active?",tempClass,tempAttribute_Pasteboard_20_Service_2F_Active_3F_,environment);
	tempAttribute = attribute_add("Pasteboards",tempClass,tempAttribute_Pasteboard_20_Service_2F_Pasteboards,environment);
	tempAttribute = attribute_add("Initial Pasteboards",tempClass,tempAttribute_Pasteboard_20_Service_2F_Initial_20_Pasteboards,environment);
	tempAttribute = attribute_add("Event Handlers",tempClass,tempAttribute_Pasteboard_20_Service_2F_Event_20_Handlers,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Service Abstract");
	return kNOERROR;
}

/* Start Universals: { 317 398 }{ 368 296 } */
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Get_20_Clipboard_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Get_20_Clipboard_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Clipboard",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Pasteboard_20_Name,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Get_20_Clipboard_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Get_20_Clipboard_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Pasteboard,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Clipboard,1,0,TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Pasteboards,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,1,0,TERMINAL(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Get_20_Clipboard(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Service_2F_Get_20_Clipboard_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_20_Service_2F_Get_20_Clipboard_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Get_20_Find_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Get_20_Find_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Find",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Pasteboard_20_Name,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Get_20_Find_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Get_20_Find_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Pasteboard,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Find,1,0,TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Pasteboards,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,1,0,TERMINAL(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Get_20_Find(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Service_2F_Get_20_Find_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_20_Service_2F_Get_20_Find_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_CE_20_Handle_20_Event_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_CE_20_Handle_20_Event_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_CE_20_Handle_20_Event_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_CE_20_Handle_20_Event_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Kind,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Class,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_integer_2D_to_2D_string,1,1,TERMINAL(2),ROOT(3));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_CE_20_Handle_20_Event_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_CE_20_Handle_20_Event_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Service_2F_CE_20_Handle_20_Event_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Pasteboard_20_Service_2F_CE_20_Handle_20_Event_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_CE_20_Handle_20_Event(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Pasteboards,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_Pasteboard_20_Service_2F_CE_20_Handle_20_Event_case_1_local_3(PARAMETERS,TERMINAL(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_Handle_20_Event,2,0,LIST(2),TERMINAL(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Find_20_Pasteboard_20_Name_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Find_20_Pasteboard_20_Name_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Find_20_Pasteboard_20_Name_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Find_20_Pasteboard_20_Name_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Find_20_Pasteboard_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Find_20_Pasteboard_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Service_2F_Find_20_Pasteboard_20_Name_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_20_Service_2F_Find_20_Pasteboard_20_Name_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Find_20_Pasteboard_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Pasteboards,1,1,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_20_Service_2F_Find_20_Pasteboard_20_Name_case_1_local_3(PARAMETERS,LIST(2),TERMINAL(1),ROOT(3));
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

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Add_20_Pasteboards(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Pasteboards,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Pasteboards,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Get_20_Pasteboards(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Pasteboards,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Set_20_Pasteboards(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Pasteboards,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Get_20_Initial_20_Pasteboards(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Initial_20_Pasteboards,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Set_20_Initial_20_Pasteboards(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Initial_20_Pasteboards,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Get_20_Event_20_Handlers(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Event_20_Handlers,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Set_20_Event_20_Handlers(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Event_20_Handlers,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Open_20_Event_20_Handlers(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Handlers,1,1,TERMINAL(0),ROOT(1));

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,LIST(2),TERMINAL(0));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Close_20_Event_20_Handlers(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Handlers,1,1,TERMINAL(0),ROOT(1));

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,LIST(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Initialize_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Initialize_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Make_20_Class(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Initialize_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Initialize_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Initialize_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Initialize_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Service_2F_Initialize_case_1_local_3_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_20_Service_2F_Initialize_case_1_local_3_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Initialize_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Initialize_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Initial_20_Pasteboards,1,1,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_20_Service_2F_Initialize_case_1_local_3_case_1_local_3(PARAMETERS,LIST(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Pasteboards,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Initialize_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Initialize_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Clipboard,1,1,TERMINAL(0),ROOT(1));
CONTINUEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Find,1,1,TERMINAL(0),ROOT(2));
CONTINUEONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Initialize_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Initialize_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Initialize_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Initialize_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Service_2F_Initialize_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Pasteboard_20_Service_2F_Initialize_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Initialize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Event_20_Handlers,1,0,TERMINAL(0));

result = vpx_method_Pasteboard_20_Service_2F_Initialize_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_method_Pasteboard_20_Service_2F_Initialize_case_1_local_4(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Close_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Service_2F_Close_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Pasteboards,1,1,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,LIST(1));
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Pasteboards,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Service_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = vpx_method_Pasteboard_20_Service_2F_Close_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Event_20_Handlers,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

/* Stop Universals */



Nat4 VPLC_Pasteboard_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Pasteboard_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 426 961 }{ 203 399 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Pasteboard_2F_Name,environment);
	tempAttribute = attribute_add("Identifier",tempClass,tempAttribute_Pasteboard_2F_Identifier,environment);
	tempAttribute = attribute_add("PasteboardRef",tempClass,NULL,environment);
	tempAttribute = attribute_add("Release?",tempClass,tempAttribute_Pasteboard_2F_Release_3F_,environment);
	tempAttribute = attribute_add("Changed Callback",tempClass,tempAttribute_Pasteboard_2F_Changed_20_Callback,environment);
	tempAttribute = attribute_add("Promise Callback",tempClass,tempAttribute_Pasteboard_2F_Promise_20_Callback,environment);
	tempAttribute = attribute_add("Known Flavors",tempClass,tempAttribute_Pasteboard_2F_Known_20_Flavors,environment);
	tempAttribute = attribute_add("Calling Promise?",tempClass,tempAttribute_Pasteboard_2F_Calling_20_Promise_3F_,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 44 535 }{ 846 379 } */
enum opTrigger vpx_method_Pasteboard_2F_CE_20_Handle_20_Event_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_2F_CE_20_Handle_20_Event_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Synchronize,1,1,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_2F_CE_20_Handle_20_Event_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_2F_CE_20_Handle_20_Event_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_2F_CE_20_Handle_20_Event(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_CE_20_Handle_20_Event_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Pasteboard_2F_CE_20_Handle_20_Event_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Create(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Pasteboard_20_Create,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Pasteboard_2F_Setup_20_Clipboard_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_2F_Setup_20_Clipboard_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Clipboard",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Name,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_constant(PARAMETERS,"com.apple.pasteboard.clipboard",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Identifier,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Setup_20_Clipboard(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Pasteboard_2F_Setup_20_Clipboard_case_1_local_2(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Pasteboard_2F_Setup_20_Find_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_2F_Setup_20_Find_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Find",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Name,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_constant(PARAMETERS,"com.apple.pasteboard.find",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Identifier,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Setup_20_Find(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Pasteboard_2F_Setup_20_Find_case_1_local_2(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"public.utf16-plain-text",ROOT(1));

result = vpx_constant(PARAMETERS,"com.apple.traditional-mac-plain-text",ROOT(2));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_1_local_5_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_1_local_5_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Item_20_Value_20_By_20_UTI,3,3,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_1_local_5_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_1_local_5_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_1_local_5_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_1_local_5_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_1_local_5_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),LIST(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,NONE)
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Items_20_From_20_Count,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_1_local_5(PARAMETERS,LIST(2),TERMINAL(0),TERMINAL(3),ROOT(4),ROOT(5));
LISTROOT(4,0)
LISTROOT(5,1)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTFINISH(5,1)
LISTROOTEND
} else {
ROOTEMPTY(4)
ROOTEMPTY(5)
}

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
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

enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_3_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_3_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Pasteboard Item Count",ROOT(2));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_3_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_3_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"public.utf16-plain-text",ROOT(1));

result = vpx_constant(PARAMETERS,"com.apple.traditional-mac-plain-text",ROOT(2));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_3_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_3_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Pasteboard_20_Item,1,1,NONE,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Item_20_From_20_Number,3,0,TERMINAL(3),TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Item_20_Value_20_By_20_UTI,3,3,TERMINAL(3),TERMINAL(0),TERMINAL(2),ROOT(4),ROOT(5),ROOT(6));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_3_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_3_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,NONE)
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_3_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_3_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_3_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_3_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Pasteboard_20_Get_20_Item_20_Count,1,2,TERMINAL(0),ROOT(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method_Make_20_Count(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_3_local_6(PARAMETERS,TERMINAL(1),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_3_local_7(PARAMETERS,TERMINAL(0),LIST(4),TERMINAL(5),ROOT(6),ROOT(7));
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
FOOTER(8)
}

enum opTrigger vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
if(vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Find_20_Flavors_20_For_20_UTIs_case_1_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Pasteboard_2F_Find_20_Flavors_20_For_20_UTIs_case_1_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Make_20_Class(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Match_20_UTI_3F_,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Pasteboard_2F_Find_20_Flavors_20_For_20_UTIs_case_1_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Pasteboard_2F_Find_20_Flavors_20_For_20_UTIs_case_1_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
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

enum opTrigger vpx_method_Pasteboard_2F_Find_20_Flavors_20_For_20_UTIs_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Pasteboard_2F_Find_20_Flavors_20_For_20_UTIs_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_Find_20_Flavors_20_For_20_UTIs_case_1_local_4_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Pasteboard_2F_Find_20_Flavors_20_For_20_UTIs_case_1_local_4_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Find_20_Flavors_20_For_20_UTIs_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Pasteboard_2F_Find_20_Flavors_20_For_20_UTIs_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_2F_Find_20_Flavors_20_For_20_UTIs_case_1_local_4_case_1_local_3(PARAMETERS,LIST(0),TERMINAL(2),ROOT(3),ROOT(4));
LISTROOT(3,0)
LISTROOT(4,1)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTFINISH(4,1)
LISTROOTEND
} else {
ROOTEMPTY(3)
ROOTEMPTY(4)
}

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Pasteboard_2F_Find_20_Flavors_20_For_20_UTIs(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_Flavors,1,1,TERMINAL(0),ROOT(2));

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_2F_Find_20_Flavors_20_For_20_UTIs_case_1_local_4(PARAMETERS,TERMINAL(2),LIST(3),ROOT(4),ROOT(5));
LISTROOT(4,0)
LISTROOT(5,1)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTFINISH(5,1)
LISTROOTEND
} else {
ROOTEMPTY(4)
ROOTEMPTY(5)
}

result = vpx_method__28_Flatten_29_(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_method__28_Flatten_29_(PARAMETERS,TERMINAL(4),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
OUTPUT(1,TERMINAL(6))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Pasteboard_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Make_20_Class(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_UTIs_20_For_20_Value,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Pasteboard_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Pasteboard_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Find_20_UTIs_20_For_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_Flavors,1,1,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3(PARAMETERS,LIST(2),TERMINAL(1),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = vpx_method__28_Flatten_29_(PARAMETERS,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Put_20_Item_20_Data_20_By_20_UTI,3,0,TERMINAL(1),TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Items_20_From_20_Values,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_1_local_3(PARAMETERS,TERMINAL(0),LIST(3),TERMINAL(2),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = vpx_match(PARAMETERS,"(  )",TERMINAL(4));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Flavors_20_For_20_UTIs,2,2,TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"( )",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_UTIs_20_For_20_Value,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Flavors_20_For_20_UTIs,2,2,TERMINAL(0),TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"( )",TERMINAL(5));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
OUTPUT(1,NONE)
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
if(vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2_local_5_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2_local_5_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_method_Make_20_Clone(PARAMETERS,TERMINAL(2),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Convert_20_Value_20_To_20_Data,3,1,TERMINAL(5),TERMINAL(3),TERMINAL(4),ROOT(6));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Identifier,1,1,TERMINAL(5),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Put_20_Attributes,1,1,TERMINAL(5),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Pasteboard_20_Put_20_Item_20_Flavor,5,1,TERMINAL(0),TERMINAL(1),TERMINAL(7),TERMINAL(6),TERMINAL(8),ROOT(9));
CONTINUEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(10)
}

enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2_local_5_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2_local_5_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2_local_5_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,root0))
vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2_local_5_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(2,TERMINAL(2),TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2_local_5_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),LIST(2),LIST(3),TERMINAL(4),ROOT(5));
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

enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_method_Make_20_Count(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2_local_4(PARAMETERS,TERMINAL(0),TERMINAL(3),TERMINAL(2),ROOT(5),ROOT(6));
FAILONFAILURE

if( (repeatLimit = vpx_multiplex(2,TERMINAL(4),TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2_local_5(PARAMETERS,TERMINAL(0),LIST(4),TERMINAL(5),TERMINAL(6),LIST(3),ROOT(7));
LISTROOT(7,0)
REPEATFINISH
LISTROOTFINISH(7,0)
LISTROOTEND
} else {
ROOTEMPTY(7)
}

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1_local_7_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1_local_7_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1_local_7_case_1_local_4_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1_local_7_case_1_local_4_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1_local_7_case_1_local_4_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1_local_7_case_1_local_4_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1_local_7_case_1_local_4_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1_local_7_case_1_local_4_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1_local_7_case_1_local_4_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1_local_7_case_1_local_4_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Pasteboard_20_Copy_20_Item_20_Flavors,2,2,TERMINAL(0),TERMINAL(1),ROOT(3),ROOT(4));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(4));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Values_20_As_20_Strings,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1_local_7_case_1_local_4_case_1_local_7(PARAMETERS,TERMINAL(5),LIST(2),ROOT(6));
LISTROOT(6,0)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTEND
} else {
ROOTEMPTY(6)
}

result = vpx_match(PARAMETERS,"( )",TERMINAL(6));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Pasteboard_20_Get_20_Item_20_Identifier,2,2,TERMINAL(0),TERMINAL(1),ROOT(4),ROOT(5));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1_local_7_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(5),TERMINAL(2),ROOT(6));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(3));
FINISHONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Default_20_TRUE(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Pasteboard_20_Get_20_Item_20_Count,1,2,TERMINAL(0),ROOT(4),ROOT(5));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_method_Make_20_Count(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1_local_7(PARAMETERS,TERMINAL(0),LIST(6),TERMINAL(7),TERMINAL(3),ROOT(8));
LISTROOT(8,0)
REPEATFINISH
LISTROOTFINISH(8,0)
LISTROOTEND
} else {
ROOTEMPTY(8)
}

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Synchronize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Pasteboard_20_Synchronize,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Do_20_Changed_20_Callback,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Count_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Count_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Pasteboard Item Count",ROOT(2));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Count_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Count_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Pasteboard_20_Item,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Item_20_From_20_Number,3,0,TERMINAL(2),TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Count_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Count_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Count_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Count_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Count_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Count_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Count_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Count_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Pasteboard_20_Get_20_Item_20_Count,1,2,TERMINAL(0),ROOT(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_Make_20_Count(PARAMETERS,TERMINAL(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Count_case_1_local_6(PARAMETERS,TERMINAL(0),LIST(3),ROOT(4));
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

enum opTrigger vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Count_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Count_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Count(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Count_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Count_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Values_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Values_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Pasteboard_20_Item,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Item_20_From_20_Value,3,0,TERMINAL(2),TERMINAL(0),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Values(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Values_case_1_local_3(PARAMETERS,TERMINAL(0),LIST(2),ROOT(3));
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

enum opTrigger vpx_method_Pasteboard_2F_Do_20_Changed_20_Callback_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Do_20_Changed_20_Callback_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Sync Flags",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Pasteboard_2F_Do_20_Changed_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Changed_20_Callback,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_Pasteboard_2F_Do_20_Changed_20_Callback_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_method_Execute_20_Callback_20_With_20_Attachments(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Changed_20_Callback_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Changed_20_Callback_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"com.apple.traditional-mac-plain-text",ROOT(0));

result = vpx_constant(PARAMETERS,"public.utf16-plain-text",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Changed_20_Callback_case_1_local_2_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Changed_20_Callback_case_1_local_2_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Values_20_As_20_UTIs,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_method__28_Flatten_29_(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
NEXTCASEONSUCCESS

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Changed_20_Callback_case_1_local_2_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Changed_20_Callback_case_1_local_2_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Changed_20_Callback_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Changed_20_Callback_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_Do_20_Standard_20_Changed_20_Callback_case_1_local_2_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_2F_Do_20_Standard_20_Changed_20_Callback_case_1_local_2_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Changed_20_Callback_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Changed_20_Callback_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Pasteboard_2F_Do_20_Standard_20_Changed_20_Callback_case_1_local_2_case_1_local_2(PARAMETERS,ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_2F_Do_20_Standard_20_Changed_20_Callback_case_1_local_2_case_1_local_3(PARAMETERS,TERMINAL(0),LIST(1),ROOT(2));
REPEATFINISH
} else {
ROOTNULL(2,NULL)
}

result = vpx_method__28_One_29_(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(4));

result = vpx_constant(PARAMETERS,"\" changed\"",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(3),ROOT(7));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(6),TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Changed_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Promise_20_Keeper_20_Callback_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Promise_20_Keeper_20_Callback_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Calling_20_Promise_3F_,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Promise_20_Keeper_20_Callback_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Promise_20_Keeper_20_Callback_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Promise_20_Keeper_20_Callback_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Promise_20_Keeper_20_Callback_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_PasteboardItemID_20_To_20_Object(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
FAILONFAILURE

result = vpx_method_Pasteboard_2F_Do_20_Standard_20_Promise_20_Keeper_20_Callback_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(4));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fullfill_20_Promise,3,0,TERMINAL(3),TERMINAL(0),TERMINAL(4));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Promise_20_Keeper_20_Callback_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Promise_20_Keeper_20_Callback_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Calling_20_Promise_3F_,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Promise_20_Keeper_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Promise_20_Keeper_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Pasteboard_2F_Do_20_Standard_20_Promise_20_Keeper_20_Callback_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(3));

result = vpx_method_Pasteboard_2F_Do_20_Standard_20_Promise_20_Keeper_20_Callback_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_Pasteboard_2F_Do_20_Standard_20_Promise_20_Keeper_20_Callback_case_1_local_5(PARAMETERS,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Promise_20_Keeper_20_Callback_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Promise_20_Keeper_20_Callback_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Calling_20_Promise_3F_,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Promise_20_Keeper_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Promise_20_Keeper_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(3));

result = vpx_method_Pasteboard_2F_Do_20_Standard_20_Promise_20_Keeper_20_Callback_case_2_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Pasteboard_2F_Do_20_Standard_20_Promise_20_Keeper_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_Do_20_Standard_20_Promise_20_Keeper_20_Callback_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_2F_Do_20_Standard_20_Promise_20_Keeper_20_Callback_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Get_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Set_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Get_20_Identifier(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Identifier,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Set_20_Identifier(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Identifier,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Get_20_PasteboardRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_PasteboardRef,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Set_20_PasteboardRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_PasteboardRef,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Get_20_Changed_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Changed_20_Callback,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Set_20_Changed_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Changed_20_Callback,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Get_20_Promise_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Promise_20_Callback,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Set_20_Promise_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Promise_20_Callback,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Create_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Create_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Create_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Create_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Create_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Create_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_Pasteboard_20_Create_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_2F_Pasteboard_20_Create_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Create_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Create_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_PasteboardRef,2,0,TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Create_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Create_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(0)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Create(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Identifier,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_Pasteboard_2F_Pasteboard_20_Create_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(2));

PUTINTEGER(PasteboardCreate( GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETPOINTER(0,OpaquePasteboardRef,**,ROOT(4),NONE)),3);
result = kSuccess;

result = vpx_method_Pasteboard_2F_Pasteboard_20_Create_case_1_local_5(PARAMETERS,TERMINAL(3),TERMINAL(0),TERMINAL(4));

result = vpx_method_Pasteboard_2F_Pasteboard_20_Create_case_1_local_6(PARAMETERS,TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Create_20_Unique(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Identifier,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Pasteboard_20_Create,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Synchronize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_PasteboardRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

PUTINTEGER(PasteboardSynchronize( GETPOINTER(0,OpaquePasteboardRef,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Clear(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_PasteboardRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

PUTINTEGER(PasteboardClear( GETPOINTER(0,OpaquePasteboardRef,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Get_20_Item_20_Count_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Get_20_Item_20_Count_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(1),NONE,ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Get_20_Item_20_Count_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Get_20_Item_20_Count_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Get_20_Item_20_Count_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Get_20_Item_20_Count_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_Pasteboard_20_Get_20_Item_20_Count_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_2F_Pasteboard_20_Get_20_Item_20_Count_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Get_20_Item_20_Count(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_PasteboardRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

PUTINTEGER(PasteboardGetItemCount( GETPOINTER(0,OpaquePasteboardRef,*,ROOT(3),TERMINAL(1)),GETPOINTER(4,unsigned long,*,ROOT(4),NONE)),2);
result = kSuccess;

result = vpx_method_Pasteboard_2F_Pasteboard_20_Get_20_Item_20_Count_case_1_local_5(PARAMETERS,TERMINAL(2),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Get_20_Item_20_Identifier_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Get_20_Item_20_Identifier_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Get_20_Item_20_Identifier_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Get_20_Item_20_Identifier_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Get_20_Item_20_Identifier_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Get_20_Item_20_Identifier_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_Pasteboard_20_Get_20_Item_20_Identifier_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_2F_Pasteboard_20_Get_20_Item_20_Identifier_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Get_20_Item_20_Identifier(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_PasteboardRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

PUTINTEGER(PasteboardGetItemIdentifier( GETPOINTER(0,OpaquePasteboardRef,*,ROOT(4),TERMINAL(2)),GETINTEGER(TERMINAL(1)),GETPOINTER(0,void,**,ROOT(5),NONE)),3);
result = kSuccess;

result = vpx_method_Pasteboard_2F_Pasteboard_20_Get_20_Item_20_Identifier_case_1_local_5(PARAMETERS,TERMINAL(3),TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(6))
FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Copy_20_Item_20_Flavors_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Copy_20_Item_20_Flavors_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_CF_20_Array_2F_New(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Copy_20_Item_20_Flavors_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Copy_20_Item_20_Flavors_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Copy_20_Item_20_Flavors_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Copy_20_Item_20_Flavors_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_Pasteboard_20_Copy_20_Item_20_Flavors_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_2F_Pasteboard_20_Copy_20_Item_20_Flavors_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Copy_20_Item_20_Flavors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_PasteboardRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

PUTINTEGER(PasteboardCopyItemFlavors( GETPOINTER(0,OpaquePasteboardRef,*,ROOT(4),TERMINAL(2)),GETPOINTER(0,void,*,ROOT(5),TERMINAL(1)),GETPOINTER(0,__CFArray,**,ROOT(6),NONE)),3);
result = kSuccess;

result = vpx_method_Pasteboard_2F_Pasteboard_20_Copy_20_Item_20_Flavors_case_1_local_5(PARAMETERS,TERMINAL(3),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Copy_20_Item_20_Flavor_20_Data_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Copy_20_Item_20_Flavor_20_Data_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_CF_20_Data_2F_New(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Copy_20_Item_20_Flavor_20_Data_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Copy_20_Item_20_Flavor_20_Data_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Copy_20_Item_20_Flavor_20_Data_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Copy_20_Item_20_Flavor_20_Data_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_Pasteboard_20_Copy_20_Item_20_Flavor_20_Data_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_2F_Pasteboard_20_Copy_20_Item_20_Flavor_20_Data_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Copy_20_Item_20_Flavor_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_PasteboardRef,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

PUTINTEGER(PasteboardCopyItemFlavorData( GETPOINTER(0,OpaquePasteboardRef,*,ROOT(5),TERMINAL(3)),GETPOINTER(0,void,*,ROOT(6),TERMINAL(1)),GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETPOINTER(0,__CFData,**,ROOT(7),NONE)),4);
result = kSuccess;

result = vpx_method_Pasteboard_2F_Pasteboard_20_Copy_20_Item_20_Flavor_20_Data_case_1_local_5(PARAMETERS,TERMINAL(4),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(8))
FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Put_20_Item_20_Flavor_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Put_20_Item_20_Flavor_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Put_20_Item_20_Flavor_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Put_20_Item_20_Flavor_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Put_20_Item_20_Flavor_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Put_20_Item_20_Flavor_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_Pasteboard_20_Put_20_Item_20_Flavor_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_2F_Pasteboard_20_Put_20_Item_20_Flavor_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Put_20_Item_20_Flavor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_PasteboardRef,1,1,TERMINAL(0),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
FAILONSUCCESS

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(2),ROOT(6));

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(4),ROOT(7));

result = vpx_method_Pasteboard_2F_Pasteboard_20_Put_20_Item_20_Flavor_case_1_local_6(PARAMETERS,TERMINAL(3),ROOT(8));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_pointer,1,1,TERMINAL(1),ROOT(9));

PUTINTEGER(PasteboardPutItemFlavor( GETPOINTER(0,OpaquePasteboardRef,*,ROOT(11),TERMINAL(5)),GETPOINTER(0,void,*,ROOT(12),TERMINAL(9)),GETCONSTPOINTER(__CFString,*,TERMINAL(6)),GETCONSTPOINTER(__CFData,*,TERMINAL(8)),GETINTEGER(TERMINAL(7))),10);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Pasteboard_2F_Pasteboard_20_Set_20_Promise_20_Keeper(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_PasteboardRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

PUTINTEGER(PasteboardSetPromiseKeeper( GETPOINTER(0,OpaquePasteboardRef,*,ROOT(5),TERMINAL(2)),GETPOINTER(4,int,*,ROOT(6),TERMINAL(1)),GETPOINTER(0,void,*,ROOT(7),TERMINAL(3))),4);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Pasteboard_2F_Get_20_Known_20_Flavors_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_Known_20_Flavors_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Known_20_Flavors,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Get_20_Known_20_Flavors_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_2F_Get_20_Known_20_Flavors_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Pasteboard Flavor",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_descendants,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Get_20_Known_20_Flavors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_2F_Get_20_Known_20_Flavors_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_2F_Get_20_Known_20_Flavors_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_2F_Set_20_Known_20_Flavors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Known_20_Flavors,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Get_20_Calling_20_Promise_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Calling_20_Promise_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Set_20_Calling_20_Promise_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Calling_20_Promise_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Changed_20_Callback,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Pasteboard_2F_Open_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_2F_Open_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Promise_20_Callback,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Pointer,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Pasteboard_20_Set_20_Promise_20_Keeper,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Pasteboard_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create,1,0,TERMINAL(0));

result = vpx_method_Pasteboard_2F_Open_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Synchronize,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_method_Pasteboard_2F_Open_case_1_local_5(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Pasteboard_2F_Release_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_2F_Release_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Release_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_PasteboardRef,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(3)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Pasteboard_2F_Release(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Pasteboard_2F_Release_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_PasteboardRef,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Pasteboard_2F_Close_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_2F_Close_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Changed_20_Callback,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Pasteboard_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(0));

result = vpx_method_Pasteboard_2F_Close_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Pasteboard_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Pasteboard,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_PasteboardRef,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

/* Stop Universals */



Nat4 VPLC_Pasteboard_20_Notifier_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Pasteboard_20_Notifier_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 402 739 }{ 243 302 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Pasteboard_20_Notifier_2F_Name,environment);
	tempAttribute = attribute_add("Identifier",tempClass,tempAttribute_Pasteboard_20_Notifier_2F_Identifier,environment);
	tempAttribute = attribute_add("PasteboardRef",tempClass,NULL,environment);
	tempAttribute = attribute_add("Release?",tempClass,tempAttribute_Pasteboard_20_Notifier_2F_Release_3F_,environment);
	tempAttribute = attribute_add("Changed Callback",tempClass,tempAttribute_Pasteboard_20_Notifier_2F_Changed_20_Callback,environment);
	tempAttribute = attribute_add("Promise Callback",tempClass,tempAttribute_Pasteboard_20_Notifier_2F_Promise_20_Callback,environment);
	tempAttribute = attribute_add("Known Flavors",tempClass,tempAttribute_Pasteboard_20_Notifier_2F_Known_20_Flavors,environment);
	tempAttribute = attribute_add("Calling Promise?",tempClass,tempAttribute_Pasteboard_20_Notifier_2F_Calling_20_Promise_3F_,environment);
	tempAttribute = attribute_add("Revision ID",tempClass,NULL,environment);
	tempAttribute = attribute_add("Items",tempClass,tempAttribute_Pasteboard_20_Notifier_2F_Items,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Pasteboard");
	return kNOERROR;
}

/* Start Universals: { 316 396 }{ 213 303 } */
enum opTrigger vpx_method_Pasteboard_20_Notifier_2F_Register_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_20_Notifier_2F_Register_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Items,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(2),TERMINAL(1),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Items,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Pasteboard_20_Notifier_2F_Register_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_20_Notifier_2F_Register_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Notifier_2F_Register_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Notifier_2F_Register_20_Item_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Pasteboard_20_Notifier_2F_Register_20_Item_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Notifier_2F_Unregister_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_20_Notifier_2F_Unregister_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Items,1,1,TERMINAL(0),ROOT(2));

result = vpx_method__28_Detach_20_Item_29_(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Items,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Pasteboard_20_Notifier_2F_Unregister_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_20_Notifier_2F_Unregister_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Notifier_2F_Unregister_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Notifier_2F_Unregister_20_Item_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Pasteboard_20_Notifier_2F_Unregister_20_Item_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Notifier_2F_Do_20_Standard_20_Changed_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Items,1,1,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Pasteboard_20_Changed,3,0,LIST(2),TERMINAL(0),TERMINAL(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Notifier_2F_Get_20_Revision_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Revision_20_ID,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Notifier_2F_Set_20_Revision_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Revision_20_ID,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Notifier_2F_Get_20_Items(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Items,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Notifier_2F_Set_20_Items(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Items,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Pasteboard_20_Item_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Pasteboard_20_Item_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 208 344 }{ 200 300 } */
	tempAttribute = attribute_add("Item ID",tempClass,NULL,environment);
	tempAttribute = attribute_add("Flavors",tempClass,tempAttribute_Pasteboard_20_Item_2F_Flavors,environment);
	tempAttribute = attribute_add("Value",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 296 842 }{ 343 346 } */
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Find_20_Flavor_20_Values_20_For_20_Identifiers_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Find_20_Flavor_20_Values_20_For_20_Identifiers_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Identifier,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Extracted_20_Value,1,1,TERMINAL(0),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Find_20_Flavor_20_Values_20_For_20_Identifiers_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Find_20_Flavor_20_Values_20_For_20_Identifiers_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Find_20_Flavor_20_Values_20_For_20_Identifiers_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Find_20_Flavor_20_Values_20_For_20_Identifiers_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Item_2F_Find_20_Flavor_20_Values_20_For_20_Identifiers_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_20_Item_2F_Find_20_Flavor_20_Values_20_For_20_Identifiers_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Find_20_Flavor_20_Values_20_For_20_Identifiers_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Find_20_Flavor_20_Values_20_For_20_Identifiers_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"( )",TERMINAL(0));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Find_20_Flavor_20_Values_20_For_20_Identifiers_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Find_20_Flavor_20_Values_20_For_20_Identifiers_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Find_20_Flavor_20_Values_20_For_20_Identifiers_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Find_20_Flavor_20_Values_20_For_20_Identifiers_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Item_2F_Find_20_Flavor_20_Values_20_For_20_Identifiers_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_20_Item_2F_Find_20_Flavor_20_Values_20_For_20_Identifiers_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Find_20_Flavor_20_Values_20_For_20_Identifiers(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Flavors,1,1,TERMINAL(0),ROOT(2));

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_20_Item_2F_Find_20_Flavor_20_Values_20_For_20_Identifiers_case_1_local_4(PARAMETERS,LIST(2),TERMINAL(3),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_20_Item_2F_Find_20_Flavor_20_Values_20_For_20_Identifiers_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
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

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Create_20_Item_20_From_20_Number(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Pasteboard_20_Get_20_Item_20_Identifier,2,2,TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));
FAILONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Item_20_ID,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Create_20_Item_20_From_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Value,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_method_Object_20_To_20_PasteboardItemID(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Item_20_ID,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Make_20_Class(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_method_Make_20_Clone(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Match_20_UTI_3F_,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI_case_1_local_6_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI_case_1_local_6_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Item_20_ID,1,1,TERMINAL(0),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Pasteboard_20_Copy_20_Item_20_Flavors,2,2,TERMINAL(1),TERMINAL(4),ROOT(5),ROOT(6));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(6));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Values_20_As_20_Strings,1,1,TERMINAL(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(6));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(7),TERMINAL(3),ROOT(8));

result = vpx_match(PARAMETERS,"0",TERMINAL(8));
FAILONSUCCESS

result = vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI_case_1_local_6_case_1_local_10(PARAMETERS,TERMINAL(2),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Convert_20_Data_20_To_20_Value,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(2));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_Flavors,1,1,TERMINAL(1),ROOT(3));

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(2),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI_case_1_local_4(PARAMETERS,LIST(3),TERMINAL(4),ROOT(5),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(5,NULL)
ROOTNULL(6,NULL)
}

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(5));
FAILONFAILURE

result = vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(5),TERMINAL(6));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Copy_20_Item_20_Flavor_20_Data,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(6),ROOT(7));
FAILONFAILURE

result = vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI_case_1_local_8(PARAMETERS,TERMINAL(5),TERMINAL(6),TERMINAL(7),ROOT(8));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Extracted_20_Value,2,0,TERMINAL(5),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Flavors,2,0,TERMINAL(0),TERMINAL(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
OUTPUT(2,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Flavors_20_For_20_UTIs,2,2,TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"( )",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_UTIs_20_For_20_Value,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Flavors_20_For_20_UTIs,2,2,TERMINAL(0),TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"( )",TERMINAL(5));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
OUTPUT(1,NONE)
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
if(vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_4_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_4_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Calling_20_Promise_3F_,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Promised_3F_,1,1,TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_4_case_1_local_3_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(1),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Convert_20_Value_20_To_20_Data,3,1,TERMINAL(2),TERMINAL(3),TERMINAL(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Commit_20_Promise,3,0,TERMINAL(1),TERMINAL(2),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_4_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_4_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_4_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_4_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Make_20_Clone(PARAMETERS,TERMINAL(2),ROOT(4));

result = vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_4_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(4),TERMINAL(3),ROOT(5));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Identifier,1,1,TERMINAL(4),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Put_20_Attributes,1,1,TERMINAL(4),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Item_20_ID,1,1,TERMINAL(1),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Pasteboard_20_Put_20_Item_20_Flavor,5,1,TERMINAL(0),TERMINAL(8),TERMINAL(6),TERMINAL(5),TERMINAL(7),ROOT(9));
CONTINUEONFAILURE

result = vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_4_case_1_local_8(PARAMETERS,TERMINAL(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(10)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Default_20_List(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_3(PARAMETERS,TERMINAL(1),TERMINAL(0),TERMINAL(3),ROOT(4),ROOT(5));
FAILONFAILURE

if( (repeatLimit = vpx_multiplex(2,TERMINAL(4),TERMINAL(5))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(0),LIST(4),LIST(5),ROOT(6));
LISTROOT(6,0)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTEND
} else {
ROOTEMPTY(6)
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Flavors,2,0,TERMINAL(0),TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Copy_20_Item_20_Flavor_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Item_20_ID,1,1,TERMINAL(0),ROOT(3));

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Pasteboard_20_Copy_20_Item_20_Flavor_20_Data,3,2,TERMINAL(1),TERMINAL(3),TERMINAL(4),ROOT(5),ROOT(6));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(6));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Commit_20_Promise(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_retain_2D_object,1,1,TERMINAL(0),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Fullfill_20_Promise(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_release_2D_object,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Put_20_Item_20_Data_20_By_20_UTI,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Add_20_Flavors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Flavors,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Flavors,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Item_20_ID,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Set_20_Item_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Item_20_ID,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Get_20_Flavors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Flavors,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Set_20_Flavors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Flavors,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Get_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Set_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Value,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Item_2F_Clean_20_Up(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Flavors,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Value,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Pasteboard_20_Flavor_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Pasteboard_20_Flavor_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 195 180 }{ 222 366 } */
	tempAttribute = attribute_add("Identifier",tempClass,tempAttribute_Pasteboard_20_Flavor_2F_Identifier,environment);
	tempAttribute = attribute_add("Sender Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_2F_Sender_20_Only_3F_,environment);
	tempAttribute = attribute_add("Sender Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_2F_Sender_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Not Saved?",tempClass,tempAttribute_Pasteboard_20_Flavor_2F_Not_20_Saved_3F_,environment);
	tempAttribute = attribute_add("Request Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_2F_Request_20_Only_3F_,environment);
	tempAttribute = attribute_add("System Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_2F_System_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Promised?",tempClass,tempAttribute_Pasteboard_20_Flavor_2F_Promised_3F_,environment);
	tempAttribute = attribute_add("Extracted Value",tempClass,NULL,environment);
	tempAttribute = attribute_add("Exclude Types",tempClass,tempAttribute_Pasteboard_20_Flavor_2F_Exclude_20_Types,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 118 1018 }{ 636 344 } */
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Match_20_Identifier_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_IDs,1,1,TERMINAL(0),ROOT(2));

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Identifier,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Match_20_UTI_3F__case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Match_20_UTI_3F__case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(0),ROOT(2));

PUTINTEGER(UTTypeConformsTo( GETCONSTPOINTER(__CFString,*,TERMINAL(1)),GETCONSTPOINTER(__CFString,*,TERMINAL(2))),3);
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
FOOTER(4)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Match_20_UTI_3F__case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Match_20_UTI_3F__case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Match_20_UTI_3F__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Match_20_UTI_3F__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_2F_Match_20_UTI_3F__case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_20_Flavor_2F_Match_20_UTI_3F__case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Match_20_UTI_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_IDs,1,1,TERMINAL(0),ROOT(2));

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_20_Flavor_2F_Match_20_UTI_3F__case_1_local_4(PARAMETERS,LIST(3),TERMINAL(1),ROOT(4));
REPEATFINISH
} else {
ROOTNULL(4,NULL)
}

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Identifier,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Find_20_UTIs_20_For_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Convert_20_Data_20_To_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Convert_20_Value_20_To_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Is_20_Tasty_20_Flavor_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Is_20_Tasty_20_Flavor_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Is_20_Tasty_20_Flavor_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Is_20_Tasty_20_Flavor_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Is_20_Tasty_20_Flavor_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_2F_Is_20_Tasty_20_Flavor_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Pasteboard_20_Flavor_2F_Is_20_Tasty_20_Flavor_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Is_20_Tasty_20_Pasteboard_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Is_20_Tasty_20_Pasteboard_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Is_20_Tasty_20_Pasteboard_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Is_20_Tasty_20_Pasteboard_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Is_20_Tasty_20_Pasteboard_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_2F_Is_20_Tasty_20_Pasteboard_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Pasteboard_20_Flavor_2F_Is_20_Tasty_20_Pasteboard_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Put_20_Attributes_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Put_20_Attributes_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Promised_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_extconstant(PARAMETERS,kPasteboardFlavorPromised,ROOT(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Put_20_Attributes_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Put_20_Attributes_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Sender_20_Only_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_extconstant(PARAMETERS,kPasteboardFlavorSenderOnly,ROOT(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Put_20_Attributes_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Put_20_Attributes_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Sender_20_Translated_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_extconstant(PARAMETERS,kPasteboardFlavorSenderTranslated,ROOT(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Put_20_Attributes_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Put_20_Attributes_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Not_20_Saved_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_extconstant(PARAMETERS,kPasteboardFlavorNotSaved,ROOT(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Put_20_Attributes_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Put_20_Attributes_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Request_20_Only_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_extconstant(PARAMETERS,kPasteboardFlavorRequestOnly,ROOT(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Put_20_Attributes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kPasteboardFlavorNoFlags,ROOT(1));

result = vpx_method_Pasteboard_20_Flavor_2F_Get_20_Put_20_Attributes_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_method_Pasteboard_20_Flavor_2F_Get_20_Put_20_Attributes_case_1_local_4(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_method_Pasteboard_20_Flavor_2F_Get_20_Put_20_Attributes_case_1_local_5(PARAMETERS,TERMINAL(0),ROOT(4));

result = vpx_method_Pasteboard_20_Flavor_2F_Get_20_Put_20_Attributes_case_1_local_6(PARAMETERS,TERMINAL(0),ROOT(5));

result = vpx_method_Pasteboard_20_Flavor_2F_Get_20_Put_20_Attributes_case_1_local_7(PARAMETERS,TERMINAL(0),ROOT(6));

result = vpx_call_evaluate(PARAMETERS,"A | B | C | D | E | F",6,1,TERMINAL(1),TERMINAL(3),TERMINAL(4),TERMINAL(5),TERMINAL(6),TERMINAL(1),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Known_20_IDs_20_For_20_Type_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Known_20_IDs_20_For_20_Type_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Exclude_20_IDs_20_For_20_Type,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_IDs,1,1,TERMINAL(0),ROOT(3));

result = vpx_method__28_Without_29_(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Known_20_IDs_20_For_20_Type_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Known_20_IDs_20_For_20_Type_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Known_20_IDs_20_For_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_2F_Get_20_Known_20_IDs_20_For_20_Type_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_20_Flavor_2F_Get_20_Known_20_IDs_20_For_20_Type_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method__28_Get_20_Setting_29_(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_match(PARAMETERS,"NULL",LIST(0));
NEXTCASEONSUCCESS
REPEATFINISH
} else {
}

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Exclude_20_Types,1,1,TERMINAL(0),ROOT(2));

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type_case_1_local_4(PARAMETERS,TERMINAL(2),LIST(3),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = vpx_method__28_Flatten_29_(PARAMETERS,TERMINAL(4),ROOT(5));

result = vpx_method__28_Unique_29_(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"( )",TERMINAL(6));
NEXTCASEONSUCCESS

result = vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type_case_1_local_8(PARAMETERS,TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Promised_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Promised_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Set_20_Promised_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Promised_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Sender_20_Only_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Sender_20_Only_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Set_20_Sender_20_Only_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Sender_20_Only_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Sender_20_Translated_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Sender_20_Translated_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Set_20_Sender_20_Translated_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Sender_20_Translated_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Not_20_Saved_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Not_20_Saved_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Set_20_Not_20_Saved_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Not_20_Saved_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Request_20_Only_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Request_20_Only_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Set_20_Request_20_Only_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Request_20_Only_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_System_20_Translated_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_System_20_Translated_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Set_20_System_20_Translated_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_System_20_Translated_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Identifier(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Identifier,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Set_20_Identifier(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Identifier,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Known_20_IDs(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Known_20_IDs,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Set_20_Known_20_IDs(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Known_20_IDs,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Extracted_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Extracted_20_Value,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Set_20_Extracted_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Extracted_20_Value,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_Types(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Exclude_20_Types,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Set_20_Exclude_20_Types(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Exclude_20_Types,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Clean_20_Up_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Clean_20_Up_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_2F_Clean_20_Up(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_constant(PARAMETERS,"Pasteboard Flavor Destructor",ROOT(2));

result = vpx_method_Pasteboard_20_Flavor_2F_Clean_20_Up_case_1_local_4(PARAMETERS,TERMINAL(2),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Extracted_20_Value,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Pasteboard_20_Flavor_20_Text_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Pasteboard_20_Flavor_20_Text_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Identifier",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Text_2F_Identifier,environment);
	tempAttribute = attribute_add("Sender Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Text_2F_Sender_20_Only_3F_,environment);
	tempAttribute = attribute_add("Sender Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Text_2F_Sender_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Not Saved?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Text_2F_Not_20_Saved_3F_,environment);
	tempAttribute = attribute_add("Request Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Text_2F_Request_20_Only_3F_,environment);
	tempAttribute = attribute_add("System Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Text_2F_System_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Promised?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Text_2F_Promised_3F_,environment);
	tempAttribute = attribute_add("Extracted Value",tempClass,NULL,environment);
	tempAttribute = attribute_add("Exclude Types",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Text_2F_Exclude_20_Types,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Pasteboard Flavor");
	return kNOERROR;
}

/* Start Universals: { 478 116 }{ 200 300 } */
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_IDs,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_2F_Find_20_UTIs_20_For_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_20_Flavor_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_2F_Convert_20_Data_20_To_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_2F_Convert_20_Data_20_To_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"public.utf16-plain-text\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUnicode,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Text,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_2F_Convert_20_Data_20_To_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_2F_Convert_20_Data_20_To_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"com.apple.traditional-mac-plain-text",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kCFStringEncodingMacRoman,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Text,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"\"public.utf16-plain-text\"",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Identifier,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(6)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_2F_Convert_20_Data_20_To_20_Value_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_2F_Convert_20_Data_20_To_20_Value_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_2F_Convert_20_Data_20_To_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Text_2F_Convert_20_Data_20_To_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Pasteboard_20_Flavor_20_Text_2F_Convert_20_Data_20_To_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_20_Flavor_20_Text_2F_Convert_20_Data_20_To_20_Value_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"public.utf16-plain-text\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(2));
FAILONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Data,1,1,NONE,ROOT(3));

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUnicode,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_String,3,0,TERMINAL(3),TERMINAL(2),TERMINAL(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_2F_Convert_20_Value_20_To_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_2F_Convert_20_Value_20_To_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"com.apple.traditional-mac-plain-text",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(2));
FAILONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Data,1,1,NONE,ROOT(3));

result = vpx_extconstant(PARAMETERS,kCFStringEncodingMacRoman,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_String,3,0,TERMINAL(3),TERMINAL(2),TERMINAL(4));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Identifier,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_2F_Convert_20_Value_20_To_20_Data_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_2F_Convert_20_Value_20_To_20_Data_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_2F_Convert_20_Value_20_To_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Pasteboard_20_Flavor_20_Text_2F_Convert_20_Value_20_To_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_20_Flavor_20_Text_2F_Convert_20_Value_20_To_20_Data_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Pasteboard_20_Flavor_20_Text_20_MacRoman_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Pasteboard_20_Flavor_20_Text_20_MacRoman_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Identifier",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Identifier,environment);
	tempAttribute = attribute_add("Sender Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Sender_20_Only_3F_,environment);
	tempAttribute = attribute_add("Sender Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Sender_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Not Saved?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Not_20_Saved_3F_,environment);
	tempAttribute = attribute_add("Request Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Request_20_Only_3F_,environment);
	tempAttribute = attribute_add("System Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_System_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Promised?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Promised_3F_,environment);
	tempAttribute = attribute_add("Extracted Value",tempClass,NULL,environment);
	tempAttribute = attribute_add("Exclude Types",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Exclude_20_Types,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Pasteboard Flavor Text");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Find_20_UTIs_20_For_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Find_20_UTIs_20_For_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_IDs,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Find_20_UTIs_20_For_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Find_20_UTIs_20_For_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Find_20_UTIs_20_For_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Find_20_UTIs_20_For_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Find_20_UTIs_20_For_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Convert_20_Data_20_To_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Convert_20_Data_20_To_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"com.apple.traditional-mac-plain-text",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kCFStringEncodingMacRoman,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Text,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Convert_20_Data_20_To_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Convert_20_Data_20_To_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Convert_20_Data_20_To_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Convert_20_Data_20_To_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Convert_20_Data_20_To_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Convert_20_Value_20_To_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Convert_20_Value_20_To_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"com.apple.traditional-mac-plain-text",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Data,1,1,NONE,ROOT(4));

result = vpx_extconstant(PARAMETERS,kCFStringEncodingMacRoman,ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_String,3,0,TERMINAL(4),TERMINAL(3),TERMINAL(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Convert_20_Value_20_To_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Convert_20_Value_20_To_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Convert_20_Value_20_To_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Convert_20_Value_20_To_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Convert_20_Value_20_To_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Pasteboard_20_Flavor_20_Instance_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Pasteboard_20_Flavor_20_Instance_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 224 309 }{ 201 398 } */
	tempAttribute = attribute_add("Identifier",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_2F_Identifier,environment);
	tempAttribute = attribute_add("Sender Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_2F_Sender_20_Only_3F_,environment);
	tempAttribute = attribute_add("Sender Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_2F_Sender_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Not Saved?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_2F_Not_20_Saved_3F_,environment);
	tempAttribute = attribute_add("Request Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_2F_Request_20_Only_3F_,environment);
	tempAttribute = attribute_add("System Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_2F_System_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Promised?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_2F_Promised_3F_,environment);
	tempAttribute = attribute_add("Extracted Value",tempClass,NULL,environment);
	tempAttribute = attribute_add("Exclude Types",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_2F_Exclude_20_Types,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Pasteboard Flavor");
	return kNOERROR;
}

/* Start Universals: { 438 425 }{ 200 300 } */
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"List Item",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Value Item",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Item",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Comment Item",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Case Select Item",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_1_local_3(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_IDs,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Data_20_To_20_Value_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Data_20_To_20_Value_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Data_20_To_20_Value_case_1_local_6_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Data_20_To_20_Value_case_1_local_6_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,3,TERMINAL(1),ROOT(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,3,TERMINAL(8),ROOT(9),ROOT(10),ROOT(11));

result = vpx_method_Subtract_20_Point(PARAMETERS,TERMINAL(4),TERMINAL(9),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Move_20_By,2,0,TERMINAL(0),TERMINAL(12));

result = kSuccess;

FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Data_20_To_20_Value_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Data_20_To_20_Value_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Data_20_To_20_Value_case_1_local_6_case_2_local_5(PARAMETERS,TERMINAL(1),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Data_20_To_20_Value_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Data_20_To_20_Value_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Data_20_To_20_Value_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Data_20_To_20_Value_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Data_20_To_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Data_20_To_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Check_20_UTI,2,0,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Integer,3,2,TERMINAL(2),NONE,TERMINAL(3),ROOT(4),ROOT(5));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_address_2D_to_2D_object,1,1,TERMINAL(5),ROOT(6));

result = vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Data_20_To_20_Value_case_1_local_6(PARAMETERS,TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Data_20_To_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Data_20_To_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Data_20_To_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Data_20_To_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Data_20_To_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Value_20_To_20_Data_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Value_20_To_20_Data_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Value_20_To_20_Data_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Value_20_To_20_Data_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( \"Operation Item\" \"Comment Item\" )",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Frame,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_retain_2D_object,1,1,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Value_20_To_20_Data_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Value_20_To_20_Data_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Value_20_To_20_Data_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Value_20_To_20_Data_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Value_20_To_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Value_20_To_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Check_20_UTI,2,0,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
FAILONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Data,1,1,NONE,ROOT(3));

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Value_20_To_20_Data_case_1_local_6(PARAMETERS,TERMINAL(2),ROOT(5));

result = vpx_constant(PARAMETERS,"unsigned char",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_object_2D_to_2D_address,1,1,TERMINAL(5),ROOT(7));

result = vpx_method_New_20_UInt32(PARAMETERS,TERMINAL(7),NONE,ROOT(8));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(8),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create,3,0,TERMINAL(3),TERMINAL(8),TERMINAL(4));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_retain_2D_object,1,1,TERMINAL(5),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Value_20_To_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Value_20_To_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Value_20_To_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Value_20_To_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Value_20_To_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Check_20_UTI_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Check_20_UTI_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Identifier,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
NEXTCASEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Check_20_UTI_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Check_20_UTI_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Check_20_UTI(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Check_20_UTI_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Check_20_UTI_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Pasteboard_20_Flavor_20_Instance_20_Case_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Pasteboard_20_Flavor_20_Instance_20_Case_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 167 418 }{ 200 300 } */
	tempAttribute = attribute_add("Identifier",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Case_2F_Identifier,environment);
	tempAttribute = attribute_add("Sender Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Case_2F_Sender_20_Only_3F_,environment);
	tempAttribute = attribute_add("Sender Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Case_2F_Sender_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Not Saved?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Case_2F_Not_20_Saved_3F_,environment);
	tempAttribute = attribute_add("Request Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Case_2F_Request_20_Only_3F_,environment);
	tempAttribute = attribute_add("System Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Case_2F_System_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Promised?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Case_2F_Promised_3F_,environment);
	tempAttribute = attribute_add("Extracted Value",tempClass,NULL,environment);
	tempAttribute = attribute_add("Exclude Types",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Case_2F_Exclude_20_Types,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Pasteboard Flavor Instance");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
/* Stop Universals */



Nat4 VPLC_Pasteboard_20_Flavor_20_Instance_20_List_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Pasteboard_20_Flavor_20_Instance_20_List_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Identifier",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_20_List_2F_Identifier,environment);
	tempAttribute = attribute_add("Sender Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_20_List_2F_Sender_20_Only_3F_,environment);
	tempAttribute = attribute_add("Sender Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_20_List_2F_Sender_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Not Saved?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_20_List_2F_Not_20_Saved_3F_,environment);
	tempAttribute = attribute_add("Request Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_20_List_2F_Request_20_Only_3F_,environment);
	tempAttribute = attribute_add("System Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_20_List_2F_System_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Promised?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_20_List_2F_Promised_3F_,environment);
	tempAttribute = attribute_add("Extracted Value",tempClass,NULL,environment);
	tempAttribute = attribute_add("Exclude Types",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_20_List_2F_Exclude_20_Types,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Pasteboard Flavor Instance");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
/* Stop Universals */



Nat4 VPLC_Pasteboard_20_Flavor_20_Instance_20_Value_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Pasteboard_20_Flavor_20_Instance_20_Value_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 399 705 }{ 200 300 } */
	tempAttribute = attribute_add("Identifier",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Value_2F_Identifier,environment);
	tempAttribute = attribute_add("Sender Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Value_2F_Sender_20_Only_3F_,environment);
	tempAttribute = attribute_add("Sender Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Value_2F_Sender_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Not Saved?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Value_2F_Not_20_Saved_3F_,environment);
	tempAttribute = attribute_add("Request Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Value_2F_Request_20_Only_3F_,environment);
	tempAttribute = attribute_add("System Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Value_2F_System_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Promised?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Value_2F_Promised_3F_,environment);
	tempAttribute = attribute_add("Extracted Value",tempClass,NULL,environment);
	tempAttribute = attribute_add("Exclude Types",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Instance_20_Value_2F_Exclude_20_Types,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Pasteboard Flavor Instance");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
/* Stop Universals */



Nat4 VPLC_Pasteboard_20_Flavor_20_Archive_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Pasteboard_20_Flavor_20_Archive_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 260 70 }{ 214 532 } */
	tempAttribute = attribute_add("Identifier",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_2F_Identifier,environment);
	tempAttribute = attribute_add("Sender Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_2F_Sender_20_Only_3F_,environment);
	tempAttribute = attribute_add("Sender Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_2F_Sender_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Not Saved?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_2F_Not_20_Saved_3F_,environment);
	tempAttribute = attribute_add("Request Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_2F_Request_20_Only_3F_,environment);
	tempAttribute = attribute_add("System Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_2F_System_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Promised?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_2F_Promised_3F_,environment);
	tempAttribute = attribute_add("Extracted Value",tempClass,NULL,environment);
	tempAttribute = attribute_add("Exclude Types",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_2F_Exclude_20_Types,environment);
	tempAttribute = attribute_add("Archive Types",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_2F_Archive_20_Types,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Pasteboard Flavor");
	return kNOERROR;
}

/* Start Universals: { 240 424 }{ 200 300 } */
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Archive_20_Types,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
FAILONSUCCESS

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(1),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"List Item Archive",ROOT(2));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(1),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,LIST(1));
NEXTCASEONFAILURE
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"Item Data",ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,LIST(1),TERMINAL(2));
NEXTCASEONFAILURE
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Find_20_UTIs_20_For_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Find_20_UTIs_20_For_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_IDs,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Find_20_UTIs_20_For_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Find_20_UTIs_20_For_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Find_20_UTIs_20_For_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Find_20_UTIs_20_For_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Find_20_UTIs_20_For_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Convert_20_Data_20_To_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Convert_20_Data_20_To_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Check_20_UTI,2,0,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Object,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Convert_20_Data_20_To_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Convert_20_Data_20_To_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Convert_20_Data_20_To_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Convert_20_Data_20_To_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Convert_20_Data_20_To_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Convert_20_Value_20_To_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Convert_20_Value_20_To_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Check_20_UTI,2,0,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Data,1,1,NONE,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_Object,2,0,TERMINAL(3),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Convert_20_Value_20_To_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Convert_20_Value_20_To_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Convert_20_Value_20_To_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Convert_20_Value_20_To_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Convert_20_Value_20_To_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Check_20_UTI_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Check_20_UTI_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Identifier,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
NEXTCASEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Check_20_UTI_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Check_20_UTI_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Check_20_UTI(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Check_20_UTI_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Check_20_UTI_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Get_20_Archive_20_Types(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Archive_20_Types,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Set_20_Archive_20_Types(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Archive_20_Types,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 399 705 }{ 208 559 } */
	tempAttribute = attribute_add("Identifier",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Identifier,environment);
	tempAttribute = attribute_add("Sender Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Sender_20_Only_3F_,environment);
	tempAttribute = attribute_add("Sender Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Sender_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Not Saved?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Not_20_Saved_3F_,environment);
	tempAttribute = attribute_add("Request Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Request_20_Only_3F_,environment);
	tempAttribute = attribute_add("System Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_System_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Promised?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Promised_3F_,environment);
	tempAttribute = attribute_add("Extracted Value",tempClass,NULL,environment);
	tempAttribute = attribute_add("Exclude Types",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Exclude_20_Types,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Pasteboard Flavor");
	return kNOERROR;
}

/* Start Universals: { 625 527 }{ 200 300 } */
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"List Item Archive",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,LIST(0));
NEXTCASEONFAILURE
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"Item Data",ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,LIST(0),TERMINAL(1));
NEXTCASEONFAILURE
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Find_20_UTIs_20_For_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Find_20_UTIs_20_For_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_IDs,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Find_20_UTIs_20_For_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Find_20_UTIs_20_For_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Find_20_UTIs_20_For_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Find_20_UTIs_20_For_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Find_20_UTIs_20_For_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Data_20_To_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Data_20_To_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"com.andescotia.marten.archive.list.helpername\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUnicode,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Text,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Data_20_To_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Data_20_To_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Data_20_To_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Data_20_To_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Data_20_To_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(1));
FAILONFAILURE

result = vpx_match(PARAMETERS,"\"\"",TERMINAL(1));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_match(PARAMETERS,"( )",TERMINAL(0));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
FAILONFAILURE

result = vpx_method_Get_20_Item_20_Helper(PARAMETERS,TERMINAL(1),ROOT(3));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Value_20_To_20_Data_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Value_20_To_20_Data_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Value_20_To_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Value_20_To_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"com.andescotia.marten.archive.list.helpername\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Value_20_To_20_Data_case_1_local_3(PARAMETERS,TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Data,1,1,NONE,ROOT(4));

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUnicode,ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_String,3,0,TERMINAL(4),TERMINAL(3),TERMINAL(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Value_20_To_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Value_20_To_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Value_20_To_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Value_20_To_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Value_20_To_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Is_20_Tasty_20_Flavor_3F__case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Is_20_Tasty_20_Flavor_3F__case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"List Data",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"VPL Data",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Is_20_Tasty_20_Flavor_3F__case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Is_20_Tasty_20_Flavor_3F__case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(16)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Is_20_Tasty_20_Flavor_3F__case_1_local_2_case_1_local_6(PARAMETERS,TERMINAL(4));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Tasty_20_Pasteboard,1,1,TERMINAL(0),ROOT(5));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"com.andescotia.marten.archive.list",ROOT(6));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Tasty_20_Flavors_3F_,3,1,TERMINAL(5),TERMINAL(6),TERMINAL(7),ROOT(8));
TERMINATEONFAILURE

result = vpx_match(PARAMETERS,"( )",TERMINAL(8));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"com.andescotia.marten.archive.list.helpername",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Values_20_As_20_UTIs,2,2,TERMINAL(5),TERMINAL(9),ROOT(10),ROOT(11));

result = vpx_method__28_Flatten_29_(PARAMETERS,TERMINAL(11),ROOT(12));

result = vpx_match(PARAMETERS,"( )",TERMINAL(12));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(12),ROOT(13));

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(3),ROOT(14),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(15),TERMINAL(13));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(16)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Is_20_Tasty_20_Flavor_3F__case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Is_20_Tasty_20_Flavor_3F__case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Is_20_Tasty_20_Flavor_3F__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Is_20_Tasty_20_Flavor_3F__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Is_20_Tasty_20_Flavor_3F__case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Is_20_Tasty_20_Flavor_3F__case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Is_20_Tasty_20_Flavor_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Is_20_Tasty_20_Flavor_3F__case_1_local_2(PARAMETERS,TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Pasteboard_20_Flavor_20_Archive_20_URL_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Pasteboard_20_Flavor_20_Archive_20_URL_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 322 853 }{ 200 300 } */
	tempAttribute = attribute_add("Identifier",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Identifier,environment);
	tempAttribute = attribute_add("Sender Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Sender_20_Only_3F_,environment);
	tempAttribute = attribute_add("Sender Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Sender_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Not Saved?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Not_20_Saved_3F_,environment);
	tempAttribute = attribute_add("Request Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Request_20_Only_3F_,environment);
	tempAttribute = attribute_add("System Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_20_URL_2F_System_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Promised?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Promised_3F_,environment);
	tempAttribute = attribute_add("Extracted Value",tempClass,NULL,environment);
	tempAttribute = attribute_add("Exclude Types",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Exclude_20_Types,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Pasteboard Flavor");
	return kNOERROR;
}

/* Start Universals: { 579 484 }{ 200 300 } */
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"List Item Archive",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Operation Item Archive",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,LIST(0));
NEXTCASEONFAILURE
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"Item Data",ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,LIST(0),TERMINAL(1));
NEXTCASEONFAILURE
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_IDs,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Find_20_UTIs_20_For_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"com.andescotia.marten.url",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUnicode,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Text,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Data_20_To_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Data_20_To_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Data_20_To_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Data_20_To_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_URL_20_Text,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(1));
FAILONFAILURE

result = vpx_match(PARAMETERS,"\"\"",TERMINAL(1));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_4_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_4_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_URL,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_4_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"\"\"",TERMINAL(2));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_match(PARAMETERS,"( )",TERMINAL(0));
FAILONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_4(PARAMETERS,LIST(0),ROOT(1));
LISTROOT(1,0)
REPEATFINISH
LISTROOTFINISH(1,0)
LISTROOTEND
} else {
ROOTEMPTY(1)
}

result = vpx_match(PARAMETERS,"( )",TERMINAL(1));
FAILONSUCCESS

result = vpx_method_Get_20_Return_20_String(PARAMETERS,NONE,ROOT(2));

result = vpx_method__28_To_20_String_29_(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"com.andescotia.marten.url",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3(PARAMETERS,TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Data,1,1,NONE,ROOT(4));

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUnicode,ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_String,3,0,TERMINAL(4),TERMINAL(3),TERMINAL(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_2_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_match(PARAMETERS,"com.andescotia.marten.url",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_URL_20_Text,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(1));
FAILONFAILURE

result = vpx_match(PARAMETERS,"\"\"",TERMINAL(1));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3_case_2_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3_case_2_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3_case_2_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3_case_2_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3_case_2_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3_case_2_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3_case_2_local_4_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3_case_2_local_4_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_URL,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3_case_2_local_4_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"\"\"",TERMINAL(2));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_match(PARAMETERS,"( )",TERMINAL(0));
FAILONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3_case_2_local_4(PARAMETERS,LIST(0),ROOT(1));
LISTROOT(1,0)
REPEATFINISH
LISTROOTFINISH(1,0)
LISTROOTEND
} else {
ROOTEMPTY(1)
}

result = vpx_match(PARAMETERS,"( )",TERMINAL(1));
FAILONSUCCESS

result = vpx_method_Get_20_Return_20_String(PARAMETERS,NONE,ROOT(2));

result = vpx_method__28_To_20_String_29_(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_3(PARAMETERS,TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Data,1,1,NONE,ROOT(4));

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUnicode,ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_String,3,0,TERMINAL(4),TERMINAL(3),TERMINAL(5));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"\"public.utf16-plain-text\"",ROOT(6));

result = vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3_local_8(PARAMETERS,TERMINAL(0),TERMINAL(6));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Pasteboard_20_Flavor_20_Archive_20_Text_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Pasteboard_20_Flavor_20_Archive_20_Text_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 167 418 }{ 199 312 } */
	tempAttribute = attribute_add("Identifier",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Identifier,environment);
	tempAttribute = attribute_add("Sender Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Sender_20_Only_3F_,environment);
	tempAttribute = attribute_add("Sender Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Sender_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Not Saved?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Not_20_Saved_3F_,environment);
	tempAttribute = attribute_add("Request Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Request_20_Only_3F_,environment);
	tempAttribute = attribute_add("System Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_20_Text_2F_System_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Promised?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Promised_3F_,environment);
	tempAttribute = attribute_add("Extracted Value",tempClass,NULL,environment);
	tempAttribute = attribute_add("Exclude Types",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Exclude_20_Types,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Pasteboard Flavor");
	return kNOERROR;
}

/* Start Universals: { 576 1084 }{ 200 300 } */
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"List Item Archive",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Operation Item Archive",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Value Item Archive",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_IDs,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Find_20_UTIs_20_For_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Find_20_UTIs_20_For_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Data_20_To_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Data_20_To_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"public.utf16-plain-text\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUnicode,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Text,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Data_20_To_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Data_20_To_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Data_20_To_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Data_20_To_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Data_20_To_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Text,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(1));
FAILONFAILURE

result = vpx_match(PARAMETERS,"\"\"",TERMINAL(1));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Text,2,1,TERMINAL(7),TERMINAL(3),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Value Entry Text",ROOT(1));

result = vpx_constant(PARAMETERS,"Name",ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(4),TERMINAL(2),TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Text,1,1,TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Value Item",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_2_local_4(PARAMETERS,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Helper Data",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Path_20_Name,1,1,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"List Item",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method_Get_20_Item_20_Helper(PARAMETERS,TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Path_20_Name,1,1,TERMINAL(4),ROOT(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Item Data",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Path_20_Name,1,1,TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3(PARAMETERS,LIST(1),ROOT(2));
FAILONFAILURE
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
FAILONSUCCESS

result = vpx_method_Get_20_Return_20_String(PARAMETERS,NONE,ROOT(3));

result = vpx_method__28_To_20_String_29_(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"public.utf16-plain-text\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1_local_3(PARAMETERS,TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Data,1,1,NONE,ROOT(4));

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUnicode,ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_String,3,0,TERMINAL(4),TERMINAL(3),TERMINAL(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Is_20_Tasty_20_Pasteboard_3F__case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Is_20_Tasty_20_Pasteboard_3F__case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"com.andescotia.marten.archive.list",ROOT(1));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Tasty_20_Flavors_3F_,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

result = vpx_match(PARAMETERS,"( )",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Is_20_Tasty_20_Pasteboard_3F__case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Is_20_Tasty_20_Pasteboard_3F__case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Is_20_Tasty_20_Pasteboard_3F__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Is_20_Tasty_20_Pasteboard_3F__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Is_20_Tasty_20_Pasteboard_3F__case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Is_20_Tasty_20_Pasteboard_3F__case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Is_20_Tasty_20_Pasteboard_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Is_20_Tasty_20_Pasteboard_3F__case_1_local_2(PARAMETERS,TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Is_20_Tasty_20_Flavor_3F__case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Is_20_Tasty_20_Flavor_3F__case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"com.andescotia.marten.archive.list",ROOT(1));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Tasty_20_Pasteboard,1,1,TERMINAL(0),ROOT(3));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Tasty_20_Flavors_3F_,3,1,TERMINAL(3),TERMINAL(1),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
TERMINATEONSUCCESS

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Is_20_Tasty_20_Flavor_3F__case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Is_20_Tasty_20_Flavor_3F__case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Is_20_Tasty_20_Flavor_3F__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Is_20_Tasty_20_Flavor_3F__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Is_20_Tasty_20_Flavor_3F__case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Is_20_Tasty_20_Flavor_3F__case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Is_20_Tasty_20_Flavor_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Is_20_Tasty_20_Flavor_3F__case_1_local_2(PARAMETERS,TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Pasteboard_20_Flavor_20_Object_20_Value_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Pasteboard_20_Flavor_20_Object_20_Value_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 260 70 }{ 214 532 } */
	tempAttribute = attribute_add("Identifier",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Object_20_Value_2F_Identifier,environment);
	tempAttribute = attribute_add("Sender Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Object_20_Value_2F_Sender_20_Only_3F_,environment);
	tempAttribute = attribute_add("Sender Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Object_20_Value_2F_Sender_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Not Saved?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Object_20_Value_2F_Not_20_Saved_3F_,environment);
	tempAttribute = attribute_add("Request Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Object_20_Value_2F_Request_20_Only_3F_,environment);
	tempAttribute = attribute_add("System Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Object_20_Value_2F_System_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Promised?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Object_20_Value_2F_Promised_3F_,environment);
	tempAttribute = attribute_add("Extracted Value",tempClass,NULL,environment);
	tempAttribute = attribute_add("Exclude Types",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Object_20_Value_2F_Exclude_20_Types,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Pasteboard Flavor");
	return kNOERROR;
}

/* Start Universals: { 240 424 }{ 200 300 } */
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Value Item Archive",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_3_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_3_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_type,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_3_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_3_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"VPL_Archive",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_3_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_3_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"VPL_Archive",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_3_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_3_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_3_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_3_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_3_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_3_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_3_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_3_local_3_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_3_local_3(PARAMETERS,LIST(0),ROOT(1));
NEXTCASEONFAILURE
LISTROOT(1,0)
REPEATFINISH
LISTROOTFINISH(1,0)
LISTROOTEND
} else {
ROOTEMPTY(1)
}

result = vpx_method__28_Unique_29_(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"( \"VPL_Archive\" )",TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_IDs,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Convert_20_Data_20_To_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Convert_20_Data_20_To_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"com.andescotia.marten.object.value\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Object,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Convert_20_Data_20_To_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Convert_20_Data_20_To_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Convert_20_Data_20_To_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Convert_20_Data_20_To_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Convert_20_Data_20_To_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Convert_20_Value_20_To_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Convert_20_Value_20_To_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"com.andescotia.marten.object.value\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Data,1,1,NONE,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_Object,2,0,TERMINAL(3),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Convert_20_Value_20_To_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Convert_20_Value_20_To_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Convert_20_Value_20_To_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Convert_20_Value_20_To_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Convert_20_Value_20_To_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Pasteboard_20_Flavor_20_Object_20_Operations_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Pasteboard_20_Flavor_20_Object_20_Operations_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 260 70 }{ 214 532 } */
	tempAttribute = attribute_add("Identifier",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Identifier,environment);
	tempAttribute = attribute_add("Sender Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Sender_20_Only_3F_,environment);
	tempAttribute = attribute_add("Sender Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Sender_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Not Saved?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Not_20_Saved_3F_,environment);
	tempAttribute = attribute_add("Request Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Request_20_Only_3F_,environment);
	tempAttribute = attribute_add("System Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Object_20_Operations_2F_System_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Promised?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Promised_3F_,environment);
	tempAttribute = attribute_add("Extracted Value",tempClass,NULL,environment);
	tempAttribute = attribute_add("Exclude Types",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Exclude_20_Types,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Pasteboard Flavor");
	return kNOERROR;
}

/* Start Universals: { 240 424 }{ 200 300 } */
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Find_20_UTIs_20_For_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Find_20_UTIs_20_For_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Operation Item Archive",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Find_20_UTIs_20_For_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Find_20_UTIs_20_For_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_IDs,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Find_20_UTIs_20_For_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Find_20_UTIs_20_For_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Find_20_UTIs_20_For_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Convert_20_Data_20_To_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Convert_20_Data_20_To_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"com.andescotia.marten.object.archive.operations\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Object,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Convert_20_Data_20_To_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Convert_20_Data_20_To_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Convert_20_Data_20_To_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Convert_20_Data_20_To_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Convert_20_Data_20_To_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Convert_20_Value_20_To_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Convert_20_Value_20_To_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"com.andescotia.marten.object.archive.operations\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Data,1,1,NONE,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_Object,2,0,TERMINAL(3),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Convert_20_Value_20_To_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Convert_20_Value_20_To_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Convert_20_Value_20_To_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Convert_20_Value_20_To_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Convert_20_Value_20_To_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Pasteboard_20_Flavor_20_File_20_URL_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Pasteboard_20_Flavor_20_File_20_URL_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 355 244 }{ 222 302 } */
	tempAttribute = attribute_add("Identifier",tempClass,tempAttribute_Pasteboard_20_Flavor_20_File_20_URL_2F_Identifier,environment);
	tempAttribute = attribute_add("Sender Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_File_20_URL_2F_Sender_20_Only_3F_,environment);
	tempAttribute = attribute_add("Sender Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_File_20_URL_2F_Sender_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Not Saved?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_File_20_URL_2F_Not_20_Saved_3F_,environment);
	tempAttribute = attribute_add("Request Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_File_20_URL_2F_Request_20_Only_3F_,environment);
	tempAttribute = attribute_add("System Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_File_20_URL_2F_System_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Promised?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_File_20_URL_2F_Promised_3F_,environment);
	tempAttribute = attribute_add("Extracted Value",tempClass,NULL,environment);
	tempAttribute = attribute_add("Exclude Types",tempClass,tempAttribute_Pasteboard_20_Flavor_20_File_20_URL_2F_Exclude_20_Types,environment);
	tempAttribute = attribute_add("Limit UTIs",tempClass,tempAttribute_Pasteboard_20_Flavor_20_File_20_URL_2F_Limit_20_UTIs,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Pasteboard Flavor");
	return kNOERROR;
}

/* Start Universals: { 393 477 }{ 200 300 } */
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"file://",ROOT(1));

result = vpx_method__22_Prefix_22_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( \"MacOS File Reference\" \"CF URL\" )",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_IDs,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Find_20_UTIs_20_For_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Find_20_UTIs_20_For_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"public.file-url",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_2_case_2_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_2_case_2_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"\"furl\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_2_case_2_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_2_case_2_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_2_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_2_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_2_case_2_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_2_case_2_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"__CFString",ROOT(1));

result = vpx_constant(PARAMETERS,"kUTTagClassOSType",ROOT(2));

result = vpx_method_Get_20_Framework_20_Constant(PARAMETERS,TERMINAL(2),NONE,TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(4));

PUTPOINTER(__CFString,*,UTTypeCopyPreferredTagWithClass( GETCONSTPOINTER(__CFString,*,TERMINAL(4)),GETCONSTPOINTER(__CFString,*,TERMINAL(3))),5);
result = kSuccess;

result = vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_2_case_2_local_7(PARAMETERS,TERMINAL(5),ROOT(6));

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(4)));
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(5)));
result = kSuccess;

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(6));
NEXTCASEONSUCCESS

result = kSuccess;

FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_1_local_2_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_1_local_2_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"kUTTagClassFilenameExtension",ROOT(0));

result = vpx_constant(PARAMETERS,"__CFString",ROOT(1));

result = vpx_method_Get_20_Framework_20_Constant(PARAMETERS,TERMINAL(0),NONE,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_1_local_2_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_1_local_2_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Could not resolve \"kUTTagClassFilenameExtension\"",ROOT(0));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_1_local_2_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,root0))
vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_1_local_2_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONFAILURE

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Limit_20_UTIs,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_1_local_2_case_1_local_4(PARAMETERS,ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Copy_20_Path_20_Extension,1,1,TERMINAL(1),ROOT(4));

result = vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_1_local_2_case_1_local_6(PARAMETERS,TERMINAL(4),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"NULL",ROOT(6));

PUTPOINTER(__CFString,*,UTTypeCreatePreferredIdentifierForTag( GETCONSTPOINTER(__CFString,*,TERMINAL(3)),GETCONSTPOINTER(__CFString,*,TERMINAL(5)),GETCONSTPOINTER(__CFString,*,TERMINAL(6))),7);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
NEXTCASEONSUCCESS

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(7),ROOT(8));

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(7)));
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(2),TERMINAL(8),ROOT(9));

result = vpx_match(PARAMETERS,"0",TERMINAL(9));
NEXTCASEONSUCCESS

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_URL,1,1,NONE,ROOT(3));

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUTF8,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Text,2,1,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_String,3,0,TERMINAL(3),TERMINAL(5),NONE);
NEXTCASEONFAILURE

result = vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1_local_7(PARAMETERS,TERMINAL(0),TERMINAL(3),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MacOS File Reference",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Full_20_Path_20_CFURL,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"CF URL",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Retain,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2_local_3(PARAMETERS,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_String,1,1,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"public.file-url",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1_local_3(PARAMETERS,TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Data,1,1,NONE,ROOT(4));

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUTF8,ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_String,3,0,TERMINAL(4),TERMINAL(3),TERMINAL(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Get_20_Limit_20_UTIs(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Limit_20_UTIs,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Set_20_Limit_20_UTIs(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Limit_20_UTIs,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F__case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F__case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(0),ROOT(2));

PUTINTEGER(UTTypeConformsTo( GETCONSTPOINTER(__CFString,*,TERMINAL(1)),GETCONSTPOINTER(__CFString,*,TERMINAL(2))),3);
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
FOOTER(4)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F__case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F__case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F__case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F__case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F__case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F__case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(9)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"__CFString",ROOT(1));

result = vpx_constant(PARAMETERS,"kUTTagClassOSType",ROOT(2));

result = vpx_method_Get_20_Framework_20_Constant(PARAMETERS,TERMINAL(2),NONE,TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"furl",ROOT(4));

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"NULL",ROOT(6));

PUTPOINTER(__CFString,*,UTTypeCreatePreferredIdentifierForTag( GETCONSTPOINTER(__CFString,*,TERMINAL(3)),GETCONSTPOINTER(__CFString,*,TERMINAL(5)),GETCONSTPOINTER(__CFString,*,TERMINAL(6))),7);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
NEXTCASEONSUCCESS

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(7),ROOT(8));

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(7)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERWITHNONE(9)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F__case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F__case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F__case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F__case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F__case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F__case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_IDs,1,1,TERMINAL(0),ROOT(2));

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F__case_1_local_4(PARAMETERS,LIST(3),TERMINAL(1),ROOT(4));
REPEATFINISH
} else {
ROOTNULL(4,NULL)
}

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F__case_1_local_6(PARAMETERS,TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Identifier,2,0,TERMINAL(0),TERMINAL(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Is_20_Tasty_20_Pasteboard_3F__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Is_20_Tasty_20_Pasteboard_3F__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"public.file-url",ROOT(1));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Tasty_20_Flavors_3F_,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

result = vpx_match(PARAMETERS,"( )",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Values_20_As_20_UTIs,2,2,TERMINAL(0),TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_method__28_Flatten_29_(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"( )",TERMINAL(6));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Is_20_Tasty_20_Pasteboard_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Is_20_Tasty_20_Pasteboard_3F__case_1_local_2(PARAMETERS,TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Is_20_Tasty_20_Flavor_3F__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Is_20_Tasty_20_Flavor_3F__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"public.file-url",ROOT(1));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Tasty_20_Pasteboard,1,1,TERMINAL(0),ROOT(3));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Tasty_20_Flavors_3F_,3,1,TERMINAL(3),TERMINAL(1),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Values_20_As_20_UTIs,2,2,TERMINAL(3),TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_method__28_Flatten_29_(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_match(PARAMETERS,"( )",TERMINAL(7));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Is_20_Tasty_20_Flavor_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Is_20_Tasty_20_Flavor_3F__case_1_local_2(PARAMETERS,TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Pasteboard_20_Flavor_20_Trash_20_Label_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Pasteboard_20_Flavor_20_Trash_20_Label_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 576 576 }{ 241 319 } */
	tempAttribute = attribute_add("Identifier",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Identifier,environment);
	tempAttribute = attribute_add("Sender Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Sender_20_Only_3F_,environment);
	tempAttribute = attribute_add("Sender Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Sender_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Not Saved?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Not_20_Saved_3F_,environment);
	tempAttribute = attribute_add("Request Only?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Request_20_Only_3F_,environment);
	tempAttribute = attribute_add("System Translated?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Trash_20_Label_2F_System_20_Translated_3F_,environment);
	tempAttribute = attribute_add("Promised?",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Promised_3F_,environment);
	tempAttribute = attribute_add("Extracted Value",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Extracted_20_Value,environment);
	tempAttribute = attribute_add("Exclude Types",tempClass,tempAttribute_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Exclude_20_Types,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Pasteboard Flavor");
	return kNOERROR;
}

/* Start Universals: { 291 366 }{ 200 300 } */
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Object Archive Abstract",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_1_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_IDs,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,LIST(0));
FAILONFAILURE
REPEATFINISH
} else {
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_type,1,1,LIST(0),ROOT(1));
LISTROOT(1,0)
REPEATFINISH
LISTROOTFINISH(1,0)
LISTROOTEND
} else {
ROOTEMPTY(1)
}

result = vpx_method__28_Unique_29_(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"( \"VPL_Archive\" )",TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"VPL_Archive",TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_2_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_IDs,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Convert_20_Data_20_To_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Convert_20_Data_20_To_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Extracted_20_Value,1,1,TERMINAL(0),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Convert_20_Data_20_To_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Convert_20_Data_20_To_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Convert_20_Data_20_To_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Convert_20_Data_20_To_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Convert_20_Data_20_To_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Convert_20_Value_20_To_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Convert_20_Value_20_To_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"trashlabel",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Extracted_20_Value,1,1,TERMINAL(0),ROOT(3));

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Data,1,1,NONE,ROOT(4));

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUnicode,ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_String,3,0,TERMINAL(4),TERMINAL(3),TERMINAL(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Convert_20_Value_20_To_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Convert_20_Value_20_To_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"com.apple.traditional-mac-plain-text",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Data,1,1,NONE,ROOT(4));

result = vpx_extconstant(PARAMETERS,kCFStringEncodingMacRoman,ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_String,3,0,TERMINAL(4),TERMINAL(3),TERMINAL(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Convert_20_Value_20_To_20_Data_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Convert_20_Value_20_To_20_Data_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Convert_20_Value_20_To_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Convert_20_Value_20_To_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Convert_20_Value_20_To_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Convert_20_Value_20_To_20_Data_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,LIST(0));
FAILONFAILURE
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"Item Data",ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,LIST(0),TERMINAL(1));
FAILONFAILURE
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Item Data",ROOT(1));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_1_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_IDs,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,LIST(0));
FAILONFAILURE
REPEATFINISH
} else {
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_type,1,1,LIST(0),ROOT(1));
LISTROOT(1,0)
REPEATFINISH
LISTROOTFINISH(1,0)
LISTROOTEND
} else {
ROOTEMPTY(1)
}

result = vpx_method__28_Unique_29_(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"( \"VPL_Archive\" )",TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"VPL_Archive",TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_2_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_2_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_2_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_2_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_2_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_2_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_IDs,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Abstract_20_Pasteboard_20_Handler_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Abstract_20_Pasteboard_20_Handler_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 326 400 }{ 200 326 } */
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Known Flavors",tempClass,tempAttribute_Abstract_20_Pasteboard_20_Handler_2F_Known_20_Flavors,environment);
	tempAttribute = attribute_add("HICommand Cache",tempClass,tempAttribute_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Cache,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 44 737 }{ 744 318 } */
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Pasteboard_20_Changed(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Clear_20_HICommand_20_Cache,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_HICommand_20_State,2,1,TERMINAL(0),TERMINAL(1),ROOT(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1_local_2_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1_local_2_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
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

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1_local_2_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1_local_2_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_HICommand_20_State,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1_local_2_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1_local_2_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1_local_2_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1_local_2_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3);
return outcome;
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HICommand_20_Determine_20_State,4,2,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5));
NEXTCASEONFAILURE

result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1_local_2_case_2_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(4),TERMINAL(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(6)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

EnableMenuCommand( GETPOINTER(0,OpaqueMenuRef,*,ROOT(3),TERMINAL(2)),GETINTEGER(TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));
FAILONFAILURE

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1_local_4(PARAMETERS,TERMINAL(4),TERMINAL(1));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Return_20_Event_20_Not_20_Handled,1,1,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HICommand_20_Selection_20_State,2,1,TERMINAL(0),TERMINAL(1),ROOT(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HICommand_20_Pasteboard_20_State,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HICommand_20_Owner_20_State,2,2,TERMINAL(0),TERMINAL(1),ROOT(4),ROOT(5));
NEXTCASEONFAILURE

result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(4),TERMINAL(5),ROOT(6));
NEXTCASEONFAILURE

result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(6),ROOT(7));

result = vpx_method_Default_20_TRUE(PARAMETERS,TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,NONE)
FOOTERWITHNONE(9)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandPaste,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,NONE)
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
OUTPUT(1,NONE)
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1))
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1))
vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
OUTPUT(1,NONE)
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Selection_20_State_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Selection_20_State_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Selection_20_State_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Selection_20_State_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Selection_20_State(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Selection_20_State_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Selection_20_State_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Paste",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UTIs_20_For_20_Type,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Registrar_20_Pasteboard,1,1,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Tasty_20_Flavors_3F_,3,1,TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandPaste,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Process_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Process_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandCut,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Cut,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Process_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Process_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandCopy,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Copy,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Process_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Process_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandClear,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Clear,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Process_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Process_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandPaste,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Paste,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Process_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Process_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandSelectAll,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Select_20_All,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Process_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Process_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EDdu\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Duplicate,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Process_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Process_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(4)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Process(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Process_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Process_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Process_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Process_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Process_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Process_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Process_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3);
return outcome;
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_HICommand_20_State(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_HICommand_20_Cache,1,1,TERMINAL(0),ROOT(2));

result = vpx_method__28_Get_20_Setting_29_(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Set_20_HICommand_20_State(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_HICommand_20_Cache,1,1,TERMINAL(0),ROOT(3));

result = vpx_method__28_Set_20_Setting_29_(PARAMETERS,TERMINAL(3),TERMINAL(1),TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_HICommand_20_Cache,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Clear_20_HICommand_20_Cache(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_HICommand_20_Cache,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Open_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Open_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Open_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Open_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Registrar_20_Pasteboard,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Register_20_Item,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Open_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Open_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Owner,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Open_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Flavors,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Open_20_Flavors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Close_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Close_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Close_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Close_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Registrar_20_Pasteboard,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Unregister_20_Item,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Close_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Close_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Close_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Close_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Close_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Close_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Owner,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Close_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Close_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Window_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Window_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Owner,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Window_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Window_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Window(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Window_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Window_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Select_20_Values_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Select_20_Values_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Select_20_Values_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Select_20_Values_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Select_20_Values(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Select_20_Values_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Select_20_Values_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Put_20_Values(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"( )",TERMINAL(1));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Registrar_20_Pasteboard(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Clipboard(PARAMETERS,ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Tasty_20_Pasteboard(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Registrar_20_Pasteboard,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Owner(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Set_20_Owner(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_HICommand_20_Cache(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_HICommand_20_Cache,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Set_20_HICommand_20_Cache(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_HICommand_20_Cache,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Copy_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Copy_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Registrar_20_Pasteboard,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Copy",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Put_20_Onto_20_Pasteboard,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Copy_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Copy_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Beep(PARAMETERS);

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Copy_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Copy_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Copy",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UTIs_20_For_20_Type,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Copy_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Copy_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Copy_case_3_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Registrar_20_Pasteboard,1,1,TERMINAL(0),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Pasteboard_20_Clear,1,1,TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(2),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Put_20_Values_20_As_20_UTIs,3,1,TERMINAL(3),TERMINAL(5),TERMINAL(1),ROOT(6));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Copy(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Copy_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Copy_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Copy_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Clear(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Owner,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Delete,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Cut_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Cut_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Registrar_20_Pasteboard,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"Cut",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Put_20_Onto_20_Pasteboard,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Cut(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Cut_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Clear,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Paste_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Paste_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Registrar_20_Pasteboard,1,1,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Paste",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_From_20_Pasteboard,3,1,TERMINAL(0),TERMINAL(2),TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Accept_20_Flavors,3,0,TERMINAL(1),NONE,TERMINAL(4));

result = kSuccess;

FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Paste_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Paste_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Beep(PARAMETERS);

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Paste_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Paste_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Paste",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UTIs_20_For_20_Type,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Paste_case_3_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Paste_case_3_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Paste",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Flavors_20_For_20_Type,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"( )",TERMINAL(3));
FAILONSUCCESS

result = vpx_method_Make_20_Clone(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Known_20_Flavors,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

OUTPUT(0,NONE)
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Paste_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Paste_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Paste_case_3_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Registrar_20_Pasteboard,1,1,TERMINAL(0),ROOT(3));
NEXTCASEONFAILURE

result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Paste_case_3_local_6(PARAMETERS,TERMINAL(3),TERMINAL(0),ROOT(4));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Values_20_As_20_UTIs,2,2,TERMINAL(3),TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Accept_20_Flavors,3,0,TERMINAL(2),TERMINAL(0),TERMINAL(5));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Paste_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Paste_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Paste(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Paste_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Paste_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Paste_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Paste_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Duplicate",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Name,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Identifier,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Duplicate",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Flavors_20_For_20_Type,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"( )",TERMINAL(3));
FAILONSUCCESS

result = vpx_method_Make_20_Clone(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Known_20_Flavors,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Pasteboard,1,1,NONE,ROOT(1));

result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_2_case_1_local_3(PARAMETERS,TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,1,0,TERMINAL(1));
FAILONFAILURE

result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_2_case_1_local_5(PARAMETERS,TERMINAL(1),TERMINAL(0));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Duplicate",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Put_20_Onto_20_Pasteboard,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_From_20_Pasteboard,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(3),ROOT(5));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Accept_20_Flavors,3,0,TERMINAL(2),NONE,TERMINAL(5));

result = kSuccess;

FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_3_case_3_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_3_case_3_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Copy",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UTIs_20_For_20_Type,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_3_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_3_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_3_case_3_local_2_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"( )",TERMINAL(3));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Pasteboard_20_Clear,1,1,TERMINAL(1),ROOT(4));
FAILONFAILURE

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(4));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(3),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Put_20_Values_20_As_20_UTIs,3,1,TERMINAL(1),TERMINAL(5),TERMINAL(2),ROOT(6));
FAILONFAILURE

result = vpx_match(PARAMETERS,"( )",TERMINAL(6));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_3_case_3_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_3_case_3_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"Paste",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_From_20_Pasteboard,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(3),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Accept_20_Flavors,3,0,TERMINAL(2),TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_3_case_3_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));
TERMINATEONFAILURE

result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_3_case_3_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Select_20_All(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Owner,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Select_20_All,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_UTIs_20_For_20_Type_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_UTIs_20_For_20_Type_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Make_20_Class(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_IDs_20_For_20_Type,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_UTIs_20_For_20_Type_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_UTIs_20_For_20_Type_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_UTIs_20_For_20_Type_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_UTIs_20_For_20_Type_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_UTIs_20_For_20_Type_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_UTIs_20_For_20_Type_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_UTIs_20_For_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Flavors_20_For_20_Type,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_UTIs_20_For_20_Type_case_1_local_3(PARAMETERS,LIST(2),TERMINAL(1),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = vpx_method__28_Flatten_29_(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_method__28_Unique_29_(PARAMETERS,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Flavors_20_For_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Exclude_20_Flavors_20_For_20_Type,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_Flavors,1,1,TERMINAL(0),ROOT(3));

result = vpx_method__28_Without_29_(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Exclude_20_Flavors_20_For_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Known_20_Flavors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Known_20_Flavors,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Set_20_Known_20_Flavors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Known_20_Flavors,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Put_20_Onto_20_Pasteboard_case_1_local_2_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Put_20_Onto_20_Pasteboard_case_1_local_2_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Make_20_Class(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_IDs_20_For_20_Type,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"( )",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(4)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Put_20_Onto_20_Pasteboard_case_1_local_2_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Put_20_Onto_20_Pasteboard_case_1_local_2_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Put_20_Onto_20_Pasteboard_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Put_20_Onto_20_Pasteboard_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Put_20_Onto_20_Pasteboard_case_1_local_2_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Put_20_Onto_20_Pasteboard_case_1_local_2_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Put_20_Onto_20_Pasteboard_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Put_20_Onto_20_Pasteboard_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Flavors_20_For_20_Type,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"( )",TERMINAL(3));
FAILONSUCCESS

result = vpx_method_Make_20_Clone(PARAMETERS,TERMINAL(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Put_20_Onto_20_Pasteboard_case_1_local_2_case_1_local_5(PARAMETERS,LIST(4),TERMINAL(2),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Known_20_Flavors,2,0,TERMINAL(0),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Put_20_Onto_20_Pasteboard(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Put_20_Onto_20_Pasteboard_case_1_local_2(PARAMETERS,TERMINAL(1),TERMINAL(0),TERMINAL(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UTIs_20_For_20_Type,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"( )",TERMINAL(3));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Put_20_Values,1,1,TERMINAL(0),ROOT(4));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Pasteboard_20_Clear,1,1,TERMINAL(1),ROOT(5));
FAILONFAILURE

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(5));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Put_20_Values_20_As_20_UTIs,3,1,TERMINAL(1),TERMINAL(4),TERMINAL(3),ROOT(6));
FAILONFAILURE

result = vpx_match(PARAMETERS,"( )",TERMINAL(6));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_From_20_Pasteboard_case_1_local_2_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_From_20_Pasteboard_case_1_local_2_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Make_20_Class(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_IDs_20_For_20_Type,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"( )",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(4)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_From_20_Pasteboard_case_1_local_2_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_From_20_Pasteboard_case_1_local_2_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_From_20_Pasteboard_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_From_20_Pasteboard_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_From_20_Pasteboard_case_1_local_2_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_From_20_Pasteboard_case_1_local_2_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_From_20_Pasteboard_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_From_20_Pasteboard_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Flavors_20_For_20_Type,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"( )",TERMINAL(3));
FAILONSUCCESS

result = vpx_method_Make_20_Clone(PARAMETERS,TERMINAL(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_From_20_Pasteboard_case_1_local_2_case_1_local_5(PARAMETERS,LIST(4),TERMINAL(2),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Known_20_Flavors,2,0,TERMINAL(0),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_From_20_Pasteboard(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_From_20_Pasteboard_case_1_local_2(PARAMETERS,TERMINAL(1),TERMINAL(0),TERMINAL(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UTIs_20_For_20_Type,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"( )",TERMINAL(3));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Values_20_As_20_UTIs,2,2,TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(6)
}

/* Stop Universals */



Nat4 VPLC_Window_20_Pasteboard_20_Handler_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Window_20_Pasteboard_20_Handler_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 344 479 }{ 180 353 } */
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Known Flavors",tempClass,tempAttribute_Window_20_Pasteboard_20_Handler_2F_Known_20_Flavors,environment);
	tempAttribute = attribute_add("HICommand Cache",tempClass,tempAttribute_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Cache,environment);
	tempAttribute = attribute_add("Window Drag Handler",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Abstract Pasteboard Handler");
	return kNOERROR;
}

/* Start Universals: { 322 467 }{ 200 300 } */
enum opTrigger vpx_method_Window_20_Pasteboard_20_Handler_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Drag_20_Handler,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Window_20_Pasteboard_20_Handler_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Drag_20_Handler,1,0,TERMINAL(0));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Window_20_Pasteboard_20_Handler_2F_Open_20_Drag_20_Handler_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_20_Pasteboard_20_Handler_2F_Open_20_Drag_20_Handler_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Drop",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Flavors_20_For_20_Type,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_Make_20_Clone(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Window_20_Pasteboard_20_Handler_2F_Open_20_Drag_20_Handler(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window_20_Drag_20_Handler,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_method_Window_20_Pasteboard_20_Handler_2F_Open_20_Drag_20_Handler_case_1_local_6(PARAMETERS,TERMINAL(0),ROOT(3));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Drop_20_Flavors,2,0,TERMINAL(1),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Window_20_Pasteboard_20_Handler_2F_Close_20_Drag_20_Handler(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window_20_Drag_20_Handler,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Window_20_Pasteboard_20_Handler_2F_Get_20_Window_20_Drag_20_Handler(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Window_20_Drag_20_Handler,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Window_20_Pasteboard_20_Handler_2F_Set_20_Window_20_Drag_20_Handler(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Window_20_Drag_20_Handler,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_List_20_Window_20_Pasteboard_20_Handler_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_List_20_Window_20_Pasteboard_20_Handler_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 233 676 }{ 200 300 } */
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Known Flavors",tempClass,tempAttribute_List_20_Window_20_Pasteboard_20_Handler_2F_Known_20_Flavors,environment);
	tempAttribute = attribute_add("HICommand Cache",tempClass,tempAttribute_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Cache,environment);
	tempAttribute = attribute_add("Window Drag Handler",tempClass,tempAttribute_List_20_Window_20_Pasteboard_20_Handler_2F_Window_20_Drag_20_Handler,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Window Pasteboard Handler");
	return kNOERROR;
}

/* Start Universals: { 566 1091 }{ 200 300 } */
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandCopy,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kHICommandCut,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'EDdu\'",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_1_local_3_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_1_local_3_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"List Data",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"VPL Data",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_1_local_3_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_1_local_3_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Project Data",TERMINAL(0));
FAILONSUCCESS

result = vpx_match(PARAMETERS,"Primitive Data",TERMINAL(0));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_1_local_3_case_1_local_6(PARAMETERS,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_1_local_3_case_1_local_8(PARAMETERS,TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_1_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_2_local_3_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_2_local_3_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"List Data",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"VPL Data",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_2_local_3_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_2_local_3_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Project Datas",TERMINAL(0));
FAILONSUCCESS

result = vpx_match(PARAMETERS,"Primitive Data",TERMINAL(0));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_2_local_3_case_1_local_6(PARAMETERS,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_2_local_3_case_1_local_8(PARAMETERS,TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandPaste,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_2_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_3_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_3_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"List Data",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"VPL Data",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_3_local_4_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_3_local_4_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Primitive Data",TERMINAL(0));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_3_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_3_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_3_local_4_case_1_local_6(PARAMETERS,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_3_local_4_case_1_local_8(PARAMETERS,TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_3_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_3_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_3_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_3_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandClear,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_3_local_4(PARAMETERS,TERMINAL(0),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandSelectAll,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Owner,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Content,1,1,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"( )",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__E289A0_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
OUTPUT(1,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
if(vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
if(vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
if(vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Paste",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UTIs_20_For_20_Type,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_1_local_7_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_1_local_7_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"List Data",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"VPL Data",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(16)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_1_local_7_case_1_local_6(PARAMETERS,TERMINAL(4));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Registrar_20_Pasteboard,1,1,TERMINAL(0),ROOT(5));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"com.andescotia.marten.archive.list",ROOT(6));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Tasty_20_Flavors_3F_,3,1,TERMINAL(5),TERMINAL(6),TERMINAL(7),ROOT(8));
TERMINATEONFAILURE

result = vpx_match(PARAMETERS,"( )",TERMINAL(8));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"com.andescotia.marten.archive.list.helpername",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Values_20_As_20_UTIs,2,2,TERMINAL(5),TERMINAL(9),ROOT(10),ROOT(11));

result = vpx_method__28_Flatten_29_(PARAMETERS,TERMINAL(11),ROOT(12));

result = vpx_match(PARAMETERS,"( )",TERMINAL(12));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(12),ROOT(13));

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(3),ROOT(14),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(15),TERMINAL(13));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(16)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Registrar_20_Pasteboard,1,1,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Tasty_20_Flavors_3F_,3,1,TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_1_local_7(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandPaste,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"VPL Data",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( \"com.andescotia.marten.file.project\" )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(8)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(0));

result = vpx_constant(PARAMETERS,"framework",ROOT(1));

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"kUTTagClassFilenameExtension",ROOT(3));

result = vpx_constant(PARAMETERS,"__CFString",ROOT(4));

result = vpx_method_Get_20_Framework_20_Constant(PARAMETERS,TERMINAL(3),NONE,TERMINAL(4),ROOT(5));
NEXTCASEONFAILURE

PUTPOINTER(__CFString,*,UTTypeCreatePreferredIdentifierForTag( GETCONSTPOINTER(__CFString,*,TERMINAL(5)),GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(0))),6);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
NEXTCASEONSUCCESS

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(6),ROOT(7));

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(6)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"com.apple.framework",ROOT(0));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,root0))
vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,root0);
return outcome;
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Primitives Data",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_2_local_3(PARAMETERS,ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Section Data",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( \"com.andescotia.marten.file.section\" )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Resource File Data",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_5_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_5_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_VPZ_20_Access_20_Control,0,1,ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_5_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_5_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"com.apple.application-bundle\"",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_5_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_5_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_5_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_5_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Project Data",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( \"com.andescotia.marten.file.project\" )",ROOT(1));

result = vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_5_local_4(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(12)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"__CFString",ROOT(1));

result = vpx_constant(PARAMETERS,"kUTTagClassOSType",ROOT(2));

result = vpx_method_Get_20_Framework_20_Constant(PARAMETERS,TERMINAL(2),NONE,TERMINAL(1),ROOT(3));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"furl",ROOT(4));

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"NULL",ROOT(6));

PUTPOINTER(__CFString,*,UTTypeCreatePreferredIdentifierForTag( GETCONSTPOINTER(__CFString,*,TERMINAL(3)),GETCONSTPOINTER(__CFString,*,TERMINAL(5)),GETCONSTPOINTER(__CFString,*,TERMINAL(6))),7);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
TERMINATEONSUCCESS

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(7),ROOT(8));

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(7)));
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_IDs,1,1,TERMINAL(0),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(9),TERMINAL(8),ROOT(10));

result = vpx_match(PARAMETERS,"0",TERMINAL(10));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(9),TERMINAL(8),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Known_20_IDs,2,0,TERMINAL(0),TERMINAL(11));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(12)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"List Data",ROOT(5));

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(PARAMETERS,TERMINAL(4),TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_8(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_match(PARAMETERS,"( )",TERMINAL(8));
NEXTCASEONSUCCESS

result = vpx_instantiate(PARAMETERS,kVPXClass_Pasteboard_20_Flavor_20_File_20_URL,1,1,NONE,ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Limit_20_UTIs,2,0,TERMINAL(9),TERMINAL(8));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(1),TERMINAL(9),ROOT(10));

result = vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1_local_13(PARAMETERS,TERMINAL(9));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERWITHNONE(11)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Known_20_Flavors,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Known_20_Flavors,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Get_20_Put_20_Values(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"( )",TERMINAL(1));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Item_20_Archive,1,1,NONE,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Archive,3,0,TERMINAL(4),TERMINAL(1),TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(5)
}

/* Stop Universals */






Nat4	loadClasses_Pasteboard_20_Service(V_Environment environment);
Nat4	loadClasses_Pasteboard_20_Service(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Pasteboard Service",environment);
	if(result == NULL) return kERROR;
	VPLC_Pasteboard_20_Service_class_load(result,environment);
	result = class_new("Pasteboard",environment);
	if(result == NULL) return kERROR;
	VPLC_Pasteboard_class_load(result,environment);
	result = class_new("Pasteboard Notifier",environment);
	if(result == NULL) return kERROR;
	VPLC_Pasteboard_20_Notifier_class_load(result,environment);
	result = class_new("Pasteboard Item",environment);
	if(result == NULL) return kERROR;
	VPLC_Pasteboard_20_Item_class_load(result,environment);
	result = class_new("Pasteboard Flavor",environment);
	if(result == NULL) return kERROR;
	VPLC_Pasteboard_20_Flavor_class_load(result,environment);
	result = class_new("Pasteboard Flavor Text",environment);
	if(result == NULL) return kERROR;
	VPLC_Pasteboard_20_Flavor_20_Text_class_load(result,environment);
	result = class_new("Pasteboard Flavor Text MacRoman",environment);
	if(result == NULL) return kERROR;
	VPLC_Pasteboard_20_Flavor_20_Text_20_MacRoman_class_load(result,environment);
	result = class_new("Pasteboard Flavor Instance",environment);
	if(result == NULL) return kERROR;
	VPLC_Pasteboard_20_Flavor_20_Instance_class_load(result,environment);
	result = class_new("Pasteboard Flavor Instance Case",environment);
	if(result == NULL) return kERROR;
	VPLC_Pasteboard_20_Flavor_20_Instance_20_Case_class_load(result,environment);
	result = class_new("Pasteboard Flavor Instance List",environment);
	if(result == NULL) return kERROR;
	VPLC_Pasteboard_20_Flavor_20_Instance_20_List_class_load(result,environment);
	result = class_new("Pasteboard Flavor Instance Value",environment);
	if(result == NULL) return kERROR;
	VPLC_Pasteboard_20_Flavor_20_Instance_20_Value_class_load(result,environment);
	result = class_new("Pasteboard Flavor Archive",environment);
	if(result == NULL) return kERROR;
	VPLC_Pasteboard_20_Flavor_20_Archive_class_load(result,environment);
	result = class_new("Pasteboard Flavor Archive List Helper Name",environment);
	if(result == NULL) return kERROR;
	VPLC_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_class_load(result,environment);
	result = class_new("Pasteboard Flavor Archive URL",environment);
	if(result == NULL) return kERROR;
	VPLC_Pasteboard_20_Flavor_20_Archive_20_URL_class_load(result,environment);
	result = class_new("Pasteboard Flavor Archive Text",environment);
	if(result == NULL) return kERROR;
	VPLC_Pasteboard_20_Flavor_20_Archive_20_Text_class_load(result,environment);
	result = class_new("Pasteboard Flavor Object Value",environment);
	if(result == NULL) return kERROR;
	VPLC_Pasteboard_20_Flavor_20_Object_20_Value_class_load(result,environment);
	result = class_new("Pasteboard Flavor Object Operations",environment);
	if(result == NULL) return kERROR;
	VPLC_Pasteboard_20_Flavor_20_Object_20_Operations_class_load(result,environment);
	result = class_new("Pasteboard Flavor File URL",environment);
	if(result == NULL) return kERROR;
	VPLC_Pasteboard_20_Flavor_20_File_20_URL_class_load(result,environment);
	result = class_new("Pasteboard Flavor Trash Label",environment);
	if(result == NULL) return kERROR;
	VPLC_Pasteboard_20_Flavor_20_Trash_20_Label_class_load(result,environment);
	result = class_new("Abstract Pasteboard Handler",environment);
	if(result == NULL) return kERROR;
	VPLC_Abstract_20_Pasteboard_20_Handler_class_load(result,environment);
	result = class_new("Window Pasteboard Handler",environment);
	if(result == NULL) return kERROR;
	VPLC_Window_20_Pasteboard_20_Handler_class_load(result,environment);
	result = class_new("List Window Pasteboard Handler",environment);
	if(result == NULL) return kERROR;
	VPLC_List_20_Window_20_Pasteboard_20_Handler_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Pasteboard_20_Service(V_Environment environment);
Nat4	loadUniversals_Pasteboard_20_Service(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Get Clipboard",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Clipboard,NULL);

	result = method_new("Get Clipboard Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Clipboard_20_Text,NULL);

	result = method_new("Set Clipboard Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Set_20_Clipboard_20_Text,NULL);

	result = method_new("Get Find Pasteboard",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Find_20_Pasteboard,NULL);

	result = method_new("Get Find Pasteboard Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Find_20_Pasteboard_20_Text,NULL);

	result = method_new("Set Find Pasteboard Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Set_20_Find_20_Pasteboard_20_Text,NULL);

	result = method_new("PasteboardItemID To Object",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_PasteboardItemID_20_To_20_Object,NULL);

	result = method_new("Object To PasteboardItemID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Object_20_To_20_PasteboardItemID,NULL);

	result = method_new("TEST Show Clipboard Flavors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_Show_20_Clipboard_20_Flavors,NULL);

	result = method_new("TEST Show Clipboard Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_Show_20_Clipboard_20_Text,NULL);

	result = method_new("TEST Show Find Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_Show_20_Find_20_Text,NULL);

	result = method_new("TEST Set Clipboard Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_Set_20_Clipboard_20_Text,NULL);

	result = method_new("TEST Set Find Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_Set_20_Find_20_Text,NULL);

	result = method_new("TEST UTI Generator",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_UTI_20_Generator,NULL);

	result = method_new("Pasteboard Service/Get Clipboard",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Service_2F_Get_20_Clipboard,NULL);

	result = method_new("Pasteboard Service/Get Find",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Service_2F_Get_20_Find,NULL);

	result = method_new("Pasteboard Service/CE Handle Event",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Service_2F_CE_20_Handle_20_Event,NULL);

	result = method_new("Pasteboard Service/Find Pasteboard Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Service_2F_Find_20_Pasteboard_20_Name,NULL);

	result = method_new("Pasteboard Service/Add Pasteboards",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Service_2F_Add_20_Pasteboards,NULL);

	result = method_new("Pasteboard Service/Get Pasteboards",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Service_2F_Get_20_Pasteboards,NULL);

	result = method_new("Pasteboard Service/Set Pasteboards",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Service_2F_Set_20_Pasteboards,NULL);

	result = method_new("Pasteboard Service/Get Initial Pasteboards",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Service_2F_Get_20_Initial_20_Pasteboards,NULL);

	result = method_new("Pasteboard Service/Set Initial Pasteboards",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Service_2F_Set_20_Initial_20_Pasteboards,NULL);

	result = method_new("Pasteboard Service/Get Event Handlers",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Service_2F_Get_20_Event_20_Handlers,NULL);

	result = method_new("Pasteboard Service/Set Event Handlers",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Service_2F_Set_20_Event_20_Handlers,NULL);

	result = method_new("Pasteboard Service/Open Event Handlers",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Service_2F_Open_20_Event_20_Handlers,NULL);

	result = method_new("Pasteboard Service/Close Event Handlers",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Service_2F_Close_20_Event_20_Handlers,NULL);

	result = method_new("Pasteboard Service/Initialize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Service_2F_Initialize,NULL);

	result = method_new("Pasteboard Service/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Service_2F_Close,NULL);

	result = method_new("Pasteboard/CE Handle Event",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_CE_20_Handle_20_Event,NULL);

	result = method_new("Pasteboard/Create",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Create,NULL);

	result = method_new("Pasteboard/Setup Clipboard",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Setup_20_Clipboard,NULL);

	result = method_new("Pasteboard/Setup Find",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Setup_20_Find,NULL);

	result = method_new("Pasteboard/Get Values As UTIs",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Get_20_Values_20_As_20_UTIs,NULL);

	result = method_new("Pasteboard/Find Flavors For UTIs",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Find_20_Flavors_20_For_20_UTIs,NULL);

	result = method_new("Pasteboard/Find UTIs For Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Find_20_UTIs_20_For_20_Value,NULL);

	result = method_new("Pasteboard/Put Values As UTIs",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Put_20_Values_20_As_20_UTIs,NULL);

	result = method_new("Pasteboard/Find Tasty Flavors?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Find_20_Tasty_20_Flavors_3F_,NULL);

	result = method_new("Pasteboard/Synchronize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Synchronize,NULL);

	result = method_new("Pasteboard/Create Items From Count",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Count,NULL);

	result = method_new("Pasteboard/Create Items From Values",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Create_20_Items_20_From_20_Values,NULL);

	result = method_new("Pasteboard/Do Changed Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Do_20_Changed_20_Callback,NULL);

	result = method_new("Pasteboard/Do Standard Changed Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Do_20_Standard_20_Changed_20_Callback,NULL);

	result = method_new("Pasteboard/Do Standard Promise Keeper Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Do_20_Standard_20_Promise_20_Keeper_20_Callback,NULL);

	result = method_new("Pasteboard/Get Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Get_20_Name,NULL);

	result = method_new("Pasteboard/Set Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Set_20_Name,NULL);

	result = method_new("Pasteboard/Get Identifier",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Get_20_Identifier,NULL);

	result = method_new("Pasteboard/Set Identifier",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Set_20_Identifier,NULL);

	result = method_new("Pasteboard/Get PasteboardRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Get_20_PasteboardRef,NULL);

	result = method_new("Pasteboard/Set PasteboardRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Set_20_PasteboardRef,NULL);

	result = method_new("Pasteboard/Get Changed Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Get_20_Changed_20_Callback,NULL);

	result = method_new("Pasteboard/Set Changed Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Set_20_Changed_20_Callback,NULL);

	result = method_new("Pasteboard/Get Promise Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Get_20_Promise_20_Callback,NULL);

	result = method_new("Pasteboard/Set Promise Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Set_20_Promise_20_Callback,NULL);

	result = method_new("Pasteboard/Pasteboard Create",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Pasteboard_20_Create,NULL);

	result = method_new("Pasteboard/Pasteboard Create Unique",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Pasteboard_20_Create_20_Unique,NULL);

	result = method_new("Pasteboard/Pasteboard Synchronize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Pasteboard_20_Synchronize,NULL);

	result = method_new("Pasteboard/Pasteboard Clear",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Pasteboard_20_Clear,NULL);

	result = method_new("Pasteboard/Pasteboard Get Item Count",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Pasteboard_20_Get_20_Item_20_Count,NULL);

	result = method_new("Pasteboard/Pasteboard Get Item Identifier",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Pasteboard_20_Get_20_Item_20_Identifier,NULL);

	result = method_new("Pasteboard/Pasteboard Copy Item Flavors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Pasteboard_20_Copy_20_Item_20_Flavors,NULL);

	result = method_new("Pasteboard/Pasteboard Copy Item Flavor Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Pasteboard_20_Copy_20_Item_20_Flavor_20_Data,NULL);

	result = method_new("Pasteboard/Pasteboard Put Item Flavor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Pasteboard_20_Put_20_Item_20_Flavor,NULL);

	result = method_new("Pasteboard/Pasteboard Set Promise Keeper",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Pasteboard_20_Set_20_Promise_20_Keeper,NULL);

	result = method_new("Pasteboard/Get Known Flavors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Get_20_Known_20_Flavors,NULL);

	result = method_new("Pasteboard/Set Known Flavors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Set_20_Known_20_Flavors,NULL);

	result = method_new("Pasteboard/Get Calling Promise?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Get_20_Calling_20_Promise_3F_,NULL);

	result = method_new("Pasteboard/Set Calling Promise?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Set_20_Calling_20_Promise_3F_,NULL);

	result = method_new("Pasteboard/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Open,NULL);

	result = method_new("Pasteboard/Release",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Release,NULL);

	result = method_new("Pasteboard/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_Close,NULL);

	result = method_new("Pasteboard/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_2F_New,NULL);

	result = method_new("Pasteboard Notifier/Register Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Notifier_2F_Register_20_Item,NULL);

	result = method_new("Pasteboard Notifier/Unregister Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Notifier_2F_Unregister_20_Item,NULL);

	result = method_new("Pasteboard Notifier/Do Standard Changed Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Notifier_2F_Do_20_Standard_20_Changed_20_Callback,NULL);

	result = method_new("Pasteboard Notifier/Get Revision ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Notifier_2F_Get_20_Revision_20_ID,NULL);

	result = method_new("Pasteboard Notifier/Set Revision ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Notifier_2F_Set_20_Revision_20_ID,NULL);

	result = method_new("Pasteboard Notifier/Get Items",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Notifier_2F_Get_20_Items,NULL);

	result = method_new("Pasteboard Notifier/Set Items",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Notifier_2F_Set_20_Items,NULL);

	result = method_new("Pasteboard Item/Find Flavor Values For Identifiers",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Item_2F_Find_20_Flavor_20_Values_20_For_20_Identifiers,NULL);

	result = method_new("Pasteboard Item/Create Item From Number",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Item_2F_Create_20_Item_20_From_20_Number,NULL);

	result = method_new("Pasteboard Item/Create Item From Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Item_2F_Create_20_Item_20_From_20_Value,NULL);

	result = method_new("Pasteboard Item/Get Item Value By UTI",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_Value_20_By_20_UTI,NULL);

	result = method_new("Pasteboard Item/Put Item Data By UTI",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Item_2F_Put_20_Item_20_Data_20_By_20_UTI,NULL);

	result = method_new("Pasteboard Item/Copy Item Flavor Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Item_2F_Copy_20_Item_20_Flavor_20_Data,NULL);

	result = method_new("Pasteboard Item/Commit Promise",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Item_2F_Commit_20_Promise,NULL);

	result = method_new("Pasteboard Item/Fullfill Promise",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Item_2F_Fullfill_20_Promise,NULL);

	result = method_new("Pasteboard Item/Add Flavors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Item_2F_Add_20_Flavors,NULL);

	result = method_new("Pasteboard Item/Get Item ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Item_2F_Get_20_Item_20_ID,NULL);

	result = method_new("Pasteboard Item/Set Item ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Item_2F_Set_20_Item_20_ID,NULL);

	result = method_new("Pasteboard Item/Get Flavors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Item_2F_Get_20_Flavors,NULL);

	result = method_new("Pasteboard Item/Set Flavors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Item_2F_Set_20_Flavors,NULL);

	result = method_new("Pasteboard Item/Get Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Item_2F_Get_20_Value,NULL);

	result = method_new("Pasteboard Item/Set Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Item_2F_Set_20_Value,NULL);

	result = method_new("Pasteboard Item/Clean Up",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Item_2F_Clean_20_Up,"Destructor");

	result = method_new("Pasteboard Flavor/Match Identifier?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Match_20_Identifier_3F_,NULL);

	result = method_new("Pasteboard Flavor/Match UTI?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Match_20_UTI_3F_,NULL);

	result = method_new("Pasteboard Flavor/Find UTIs For Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Find_20_UTIs_20_For_20_Value,NULL);

	result = method_new("Pasteboard Flavor/Convert Data To Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Convert_20_Data_20_To_20_Value,NULL);

	result = method_new("Pasteboard Flavor/Convert Value To Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Convert_20_Value_20_To_20_Data,NULL);

	result = method_new("Pasteboard Flavor/Is Tasty Flavor?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Is_20_Tasty_20_Flavor_3F_,NULL);

	result = method_new("Pasteboard Flavor/Is Tasty Pasteboard?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Is_20_Tasty_20_Pasteboard_3F_,NULL);

	result = method_new("Pasteboard Flavor/Get Put Attributes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Get_20_Put_20_Attributes,NULL);

	result = method_new("Pasteboard Flavor/Get Known IDs For Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Get_20_Known_20_IDs_20_For_20_Type,NULL);

	result = method_new("Pasteboard Flavor/Get Exclude IDs For Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_IDs_20_For_20_Type,NULL);

	result = method_new("Pasteboard Flavor/Get Promised?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Get_20_Promised_3F_,NULL);

	result = method_new("Pasteboard Flavor/Set Promised?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Set_20_Promised_3F_,NULL);

	result = method_new("Pasteboard Flavor/Get Sender Only?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Get_20_Sender_20_Only_3F_,NULL);

	result = method_new("Pasteboard Flavor/Set Sender Only?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Set_20_Sender_20_Only_3F_,NULL);

	result = method_new("Pasteboard Flavor/Get Sender Translated?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Get_20_Sender_20_Translated_3F_,NULL);

	result = method_new("Pasteboard Flavor/Set Sender Translated?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Set_20_Sender_20_Translated_3F_,NULL);

	result = method_new("Pasteboard Flavor/Get Not Saved?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Get_20_Not_20_Saved_3F_,NULL);

	result = method_new("Pasteboard Flavor/Set Not Saved?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Set_20_Not_20_Saved_3F_,NULL);

	result = method_new("Pasteboard Flavor/Get Request Only?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Get_20_Request_20_Only_3F_,NULL);

	result = method_new("Pasteboard Flavor/Set Request Only?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Set_20_Request_20_Only_3F_,NULL);

	result = method_new("Pasteboard Flavor/Get System Translated?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Get_20_System_20_Translated_3F_,NULL);

	result = method_new("Pasteboard Flavor/Set System Translated?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Set_20_System_20_Translated_3F_,NULL);

	result = method_new("Pasteboard Flavor/Get Identifier",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Get_20_Identifier,NULL);

	result = method_new("Pasteboard Flavor/Set Identifier",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Set_20_Identifier,NULL);

	result = method_new("Pasteboard Flavor/Get Known IDs",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Get_20_Known_20_IDs,NULL);

	result = method_new("Pasteboard Flavor/Set Known IDs",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Set_20_Known_20_IDs,NULL);

	result = method_new("Pasteboard Flavor/Get Extracted Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Get_20_Extracted_20_Value,NULL);

	result = method_new("Pasteboard Flavor/Set Extracted Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Set_20_Extracted_20_Value,NULL);

	result = method_new("Pasteboard Flavor/Get Exclude Types",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Get_20_Exclude_20_Types,NULL);

	result = method_new("Pasteboard Flavor/Set Exclude Types",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Set_20_Exclude_20_Types,NULL);

	result = method_new("Pasteboard Flavor/Clean Up",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_2F_Clean_20_Up,"Destructor");

	result = method_new("Pasteboard Flavor Text/Find UTIs For Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Text_2F_Find_20_UTIs_20_For_20_Value,NULL);

	result = method_new("Pasteboard Flavor Text/Convert Data To Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Text_2F_Convert_20_Data_20_To_20_Value,NULL);

	result = method_new("Pasteboard Flavor Text/Convert Value To Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Text_2F_Convert_20_Value_20_To_20_Data,NULL);

	result = method_new("Pasteboard Flavor Text MacRoman/Find UTIs For Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Find_20_UTIs_20_For_20_Value,NULL);

	result = method_new("Pasteboard Flavor Text MacRoman/Convert Data To Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Convert_20_Data_20_To_20_Value,NULL);

	result = method_new("Pasteboard Flavor Text MacRoman/Convert Value To Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Convert_20_Value_20_To_20_Data,NULL);

	result = method_new("Pasteboard Flavor Instance/Find UTIs For Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Find_20_UTIs_20_For_20_Value,NULL);

	result = method_new("Pasteboard Flavor Instance/Convert Data To Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Data_20_To_20_Value,NULL);

	result = method_new("Pasteboard Flavor Instance/Convert Value To Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Convert_20_Value_20_To_20_Data,NULL);

	result = method_new("Pasteboard Flavor Instance/Check UTI",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Instance_2F_Check_20_UTI,NULL);

	result = method_new("Pasteboard Flavor Archive/Find UTIs For Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Find_20_UTIs_20_For_20_Value,NULL);

	result = method_new("Pasteboard Flavor Archive/Convert Data To Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Convert_20_Data_20_To_20_Value,NULL);

	result = method_new("Pasteboard Flavor Archive/Convert Value To Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Convert_20_Value_20_To_20_Data,NULL);

	result = method_new("Pasteboard Flavor Archive/Check UTI",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Check_20_UTI,NULL);

	result = method_new("Pasteboard Flavor Archive/Get Archive Types",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Get_20_Archive_20_Types,NULL);

	result = method_new("Pasteboard Flavor Archive/Set Archive Types",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Archive_2F_Set_20_Archive_20_Types,NULL);

	result = method_new("Pasteboard Flavor Archive List Helper Name/Find UTIs For Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Find_20_UTIs_20_For_20_Value,NULL);

	result = method_new("Pasteboard Flavor Archive List Helper Name/Convert Data To Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Data_20_To_20_Value,NULL);

	result = method_new("Pasteboard Flavor Archive List Helper Name/Convert Value To Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Convert_20_Value_20_To_20_Data,NULL);

	result = method_new("Pasteboard Flavor Archive List Helper Name/Is Tasty Flavor?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Is_20_Tasty_20_Flavor_3F_,NULL);

	result = method_new("Pasteboard Flavor Archive URL/Find UTIs For Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Find_20_UTIs_20_For_20_Value,NULL);

	result = method_new("Pasteboard Flavor Archive URL/Convert Data To Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Data_20_To_20_Value,NULL);

	result = method_new("Pasteboard Flavor Archive URL/Convert Value To Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Convert_20_Value_20_To_20_Data,NULL);

	result = method_new("Pasteboard Flavor Archive Text/Find UTIs For Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Find_20_UTIs_20_For_20_Value,NULL);

	result = method_new("Pasteboard Flavor Archive Text/Convert Data To Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Data_20_To_20_Value,NULL);

	result = method_new("Pasteboard Flavor Archive Text/Convert Value To Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Convert_20_Value_20_To_20_Data,NULL);

	result = method_new("Pasteboard Flavor Archive Text/Is Tasty Pasteboard?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Is_20_Tasty_20_Pasteboard_3F_,NULL);

	result = method_new("Pasteboard Flavor Archive Text/Is Tasty Flavor?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Is_20_Tasty_20_Flavor_3F_,NULL);

	result = method_new("Pasteboard Flavor Object Value/Find UTIs For Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Find_20_UTIs_20_For_20_Value,NULL);

	result = method_new("Pasteboard Flavor Object Value/Convert Data To Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Convert_20_Data_20_To_20_Value,NULL);

	result = method_new("Pasteboard Flavor Object Value/Convert Value To Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Object_20_Value_2F_Convert_20_Value_20_To_20_Data,NULL);

	result = method_new("Pasteboard Flavor Object Operations/Find UTIs For Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Find_20_UTIs_20_For_20_Value,NULL);

	result = method_new("Pasteboard Flavor Object Operations/Convert Data To Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Convert_20_Data_20_To_20_Value,NULL);

	result = method_new("Pasteboard Flavor Object Operations/Convert Value To Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Convert_20_Value_20_To_20_Data,NULL);

	result = method_new("Pasteboard Flavor File URL/Find UTIs For Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Find_20_UTIs_20_For_20_Value,NULL);

	result = method_new("Pasteboard Flavor File URL/Convert Data To Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Data_20_To_20_Value,NULL);

	result = method_new("Pasteboard Flavor File URL/Convert Value To Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Convert_20_Value_20_To_20_Data,NULL);

	result = method_new("Pasteboard Flavor File URL/Get Limit UTIs",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Get_20_Limit_20_UTIs,NULL);

	result = method_new("Pasteboard Flavor File URL/Set Limit UTIs",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Set_20_Limit_20_UTIs,NULL);

	result = method_new("Pasteboard Flavor File URL/Match UTI?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Match_20_UTI_3F_,NULL);

	result = method_new("Pasteboard Flavor File URL/Is Tasty Pasteboard?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Is_20_Tasty_20_Pasteboard_3F_,NULL);

	result = method_new("Pasteboard Flavor File URL/Is Tasty Flavor?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_File_20_URL_2F_Is_20_Tasty_20_Flavor_3F_,NULL);

	result = method_new("Pasteboard Flavor Trash Label/Find UTIs For Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value,NULL);

	result = method_new("Pasteboard Flavor Trash Label/Convert Data To Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Convert_20_Data_20_To_20_Value,NULL);

	result = method_new("Pasteboard Flavor Trash Label/Convert Value To Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Convert_20_Value_20_To_20_Data,NULL);

	result = method_new("Pasteboard Flavor Trash Label/Find UTIs For Value #1",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Find_20_UTIs_20_For_20_Value_2023_1,NULL);

	result = method_new("Abstract Pasteboard Handler/Pasteboard Changed",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Pasteboard_20_Changed,NULL);

	result = method_new("Abstract Pasteboard Handler/HICommand Update Status",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Update_20_Status,NULL);

	result = method_new("Abstract Pasteboard Handler/HICommand Determine State",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Determine_20_State,NULL);

	result = method_new("Abstract Pasteboard Handler/HICommand Owner State",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State,NULL);

	result = method_new("Abstract Pasteboard Handler/HICommand Selection State",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Selection_20_State,NULL);

	result = method_new("Abstract Pasteboard Handler/HICommand Pasteboard State",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State,NULL);

	result = method_new("Abstract Pasteboard Handler/HICommand Process",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HICommand_20_Process,NULL);

	result = method_new("Abstract Pasteboard Handler/Get HICommand State",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_HICommand_20_State,NULL);

	result = method_new("Abstract Pasteboard Handler/Set HICommand State",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Set_20_HICommand_20_State,NULL);

	result = method_new("Abstract Pasteboard Handler/Clear HICommand Cache",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Clear_20_HICommand_20_Cache,NULL);

	result = method_new("Abstract Pasteboard Handler/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Open,NULL);

	result = method_new("Abstract Pasteboard Handler/Open Flavors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Open_20_Flavors,NULL);

	result = method_new("Abstract Pasteboard Handler/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Close,NULL);

	result = method_new("Abstract Pasteboard Handler/Get Window",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Window,NULL);

	result = method_new("Abstract Pasteboard Handler/Get Select Values",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Select_20_Values,NULL);

	result = method_new("Abstract Pasteboard Handler/Get Put Values",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Put_20_Values,NULL);

	result = method_new("Abstract Pasteboard Handler/Get Registrar Pasteboard",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Registrar_20_Pasteboard,NULL);

	result = method_new("Abstract Pasteboard Handler/Get Tasty Pasteboard",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Tasty_20_Pasteboard,NULL);

	result = method_new("Abstract Pasteboard Handler/Get Owner",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Owner,NULL);

	result = method_new("Abstract Pasteboard Handler/Set Owner",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Set_20_Owner,NULL);

	result = method_new("Abstract Pasteboard Handler/Get HICommand Cache",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_HICommand_20_Cache,NULL);

	result = method_new("Abstract Pasteboard Handler/Set HICommand Cache",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Set_20_HICommand_20_Cache,NULL);

	result = method_new("Abstract Pasteboard Handler/HIC Edit Copy",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Copy,NULL);

	result = method_new("Abstract Pasteboard Handler/HIC Edit Clear",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Clear,NULL);

	result = method_new("Abstract Pasteboard Handler/HIC Edit Cut",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Cut,NULL);

	result = method_new("Abstract Pasteboard Handler/HIC Edit Paste",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Paste,NULL);

	result = method_new("Abstract Pasteboard Handler/HIC Edit Duplicate",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Duplicate,NULL);

	result = method_new("Abstract Pasteboard Handler/HIC Edit Select All",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_HIC_20_Edit_20_Select_20_All,NULL);

	result = method_new("Abstract Pasteboard Handler/Get UTIs For Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_UTIs_20_For_20_Type,NULL);

	result = method_new("Abstract Pasteboard Handler/Get Flavors For Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Flavors_20_For_20_Type,NULL);

	result = method_new("Abstract Pasteboard Handler/Get Exclude Flavors For Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Exclude_20_Flavors_20_For_20_Type,NULL);

	result = method_new("Abstract Pasteboard Handler/Get Known Flavors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_Known_20_Flavors,NULL);

	result = method_new("Abstract Pasteboard Handler/Set Known Flavors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Set_20_Known_20_Flavors,NULL);

	result = method_new("Abstract Pasteboard Handler/Put Onto Pasteboard",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Put_20_Onto_20_Pasteboard,NULL);

	result = method_new("Abstract Pasteboard Handler/Get From Pasteboard",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Abstract_20_Pasteboard_20_Handler_2F_Get_20_From_20_Pasteboard,NULL);

	result = method_new("Window Pasteboard Handler/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_20_Pasteboard_20_Handler_2F_Open,NULL);

	result = method_new("Window Pasteboard Handler/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_20_Pasteboard_20_Handler_2F_Close,NULL);

	result = method_new("Window Pasteboard Handler/Open Drag Handler",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_20_Pasteboard_20_Handler_2F_Open_20_Drag_20_Handler,NULL);

	result = method_new("Window Pasteboard Handler/Close Drag Handler",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_20_Pasteboard_20_Handler_2F_Close_20_Drag_20_Handler,NULL);

	result = method_new("Window Pasteboard Handler/Get Window Drag Handler",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_20_Pasteboard_20_Handler_2F_Get_20_Window_20_Drag_20_Handler,NULL);

	result = method_new("Window Pasteboard Handler/Set Window Drag Handler",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_20_Pasteboard_20_Handler_2F_Set_20_Window_20_Drag_20_Handler,NULL);

	result = method_new("List Window Pasteboard Handler/HICommand Owner State",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Owner_20_State,NULL);

	result = method_new("List Window Pasteboard Handler/HICommand Pasteboard State",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_HICommand_20_Pasteboard_20_State,NULL);

	result = method_new("List Window Pasteboard Handler/Open Flavors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Open_20_Flavors,NULL);

	result = method_new("List Window Pasteboard Handler/Get Put Values",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Window_20_Pasteboard_20_Handler_2F_Get_20_Put_20_Values,NULL);

	return kNOERROR;

}


	Nat4 tempPersistent_Pasteboard_20_Flavor_2F_Known_20_IDs[] = {
0000000000, 0X0000009C, 0X00000028, 0X00000005, 0X00000014, 0X00000094, 0X00000048, 0X00000060,
0X00000044, 0X0000003C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000044,
0X00000002, 0X0000004C, 0X00000080, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000068, 0X00000017, 0X7075626C, 0X69632E75, 0X74663136, 0X2D706C61, 0X696E2D74, 0X65787400,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000009C, 0X00000024, 0X636F6D2E,
0X6170706C, 0X652E7472, 0X61646974, 0X696F6E61, 0X6C2D6D61, 0X632D706C, 0X61696E2D, 0X74657874,
0000000000
	};
	Nat4 tempPersistent_Pasteboard_20_Flavor_20_Text_2F_Known_20_IDs[] = {
0000000000, 0X0000009C, 0X00000028, 0X00000005, 0X00000014, 0X00000094, 0X00000048, 0X00000060,
0X00000044, 0X0000003C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000044,
0X00000002, 0X0000004C, 0X00000080, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000068, 0X00000017, 0X7075626C, 0X69632E75, 0X74663136, 0X2D706C61, 0X696E2D74, 0X65787400,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000009C, 0X00000024, 0X636F6D2E,
0X6170706C, 0X652E7472, 0X61646974, 0X696F6E61, 0X6C2D6D61, 0X632D706C, 0X61696E2D, 0X74657874,
0000000000
	};
	Nat4 tempPersistent_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Known_20_IDs[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempPersistent_Pasteboard_20_Flavor_20_Instance_2F_Known_20_IDs[] = {
0000000000, 0X0000005C, 0X00000020, 0X00000003, 0X00000014, 0X00000054, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000001, 0X00000040,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000005C, 0X0000001E, 0X636F6D2E,
0X616E6465, 0X73636F74, 0X69612E6D, 0X61727465, 0X6E2E696E, 0X7374616E, 0X63650000
	};
	Nat4 tempPersistent_Pasteboard_20_Flavor_20_Instance_20_Case_2F_Known_20_IDs[] = {
0000000000, 0X00000060, 0X00000020, 0X00000003, 0X00000014, 0X00000054, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000001, 0X00000040,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000005C, 0X00000023, 0X636F6D2E,
0X616E6465, 0X73636F74, 0X69612E6D, 0X61727465, 0X6E2E696E, 0X7374616E, 0X63652E63, 0X61736500
	};
	Nat4 tempPersistent_Pasteboard_20_Flavor_20_Instance_20_List_2F_Known_20_IDs[] = {
0000000000, 0X00000060, 0X00000020, 0X00000003, 0X00000014, 0X00000054, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000001, 0X00000040,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000005C, 0X00000023, 0X636F6D2E,
0X616E6465, 0X73636F74, 0X69612E6D, 0X61727465, 0X6E2E696E, 0X7374616E, 0X63652E6C, 0X69737400
	};
	Nat4 tempPersistent_Pasteboard_20_Flavor_20_Instance_20_Value_2F_Known_20_IDs[] = {
0000000000, 0X00000064, 0X00000020, 0X00000003, 0X00000014, 0X00000054, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000001, 0X00000040,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000005C, 0X00000024, 0X636F6D2E,
0X616E6465, 0X73636F74, 0X69612E6D, 0X61727465, 0X6E2E696E, 0X7374616E, 0X63652E76, 0X616C7565,
0000000000
	};
	Nat4 tempPersistent_Pasteboard_20_Flavor_20_Archive_2F_Known_20_IDs[] = {
0000000000, 0X0000005C, 0X00000020, 0X00000003, 0X00000014, 0X00000054, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000001, 0X00000040,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000005C, 0X0000001D, 0X636F6D2E,
0X616E6465, 0X73636F74, 0X69612E6D, 0X61727465, 0X6E2E6172, 0X63686976, 0X65000000
	};
	Nat4 tempPersistent_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Known_20_IDs[] = {
0000000000, 0X0000006C, 0X00000020, 0X00000003, 0X00000014, 0X00000054, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000001, 0X00000040,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000005C, 0X0000002D, 0X636F6D2E,
0X616E6465, 0X73636F74, 0X69612E6D, 0X61727465, 0X6E2E6172, 0X63686976, 0X652E6C69, 0X73742E68,
0X656C7065, 0X726E616D, 0X65000000
	};
	Nat4 tempPersistent_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Known_20_IDs[] = {
0000000000, 0X00000058, 0X00000020, 0X00000003, 0X00000014, 0X00000054, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000001, 0X00000040,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000005C, 0X00000019, 0X636F6D2E,
0X616E6465, 0X73636F74, 0X69612E6D, 0X61727465, 0X6E2E7572, 0X6C000000
	};
	Nat4 tempPersistent_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Known_20_IDs[] = {
0000000000, 0X00000054, 0X00000020, 0X00000003, 0X00000014, 0X00000054, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000001, 0X00000040,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000005C, 0X00000017, 0X7075626C,
0X69632E75, 0X74663136, 0X2D706C61, 0X696E2D74, 0X65787400
	};
	Nat4 tempPersistent_Pasteboard_20_Flavor_20_Object_20_Value_2F_Known_20_IDs[] = {
0000000000, 0X00000060, 0X00000020, 0X00000003, 0X00000014, 0X00000054, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000001, 0X00000040,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000005C, 0X00000022, 0X636F6D2E,
0X616E6465, 0X73636F74, 0X69612E6D, 0X61727465, 0X6E2E6F62, 0X6A656374, 0X2E76616C, 0X75650000
	};
	Nat4 tempPersistent_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Known_20_IDs[] = {
0000000000, 0X0000006C, 0X00000020, 0X00000003, 0X00000014, 0X00000054, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000001, 0X00000040,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000005C, 0X0000002F, 0X636F6D2E,
0X616E6465, 0X73636F74, 0X69612E6D, 0X61727465, 0X6E2E6F62, 0X6A656374, 0X2E617263, 0X68697665,
0X2E6F7065, 0X72617469, 0X6F6E7300
	};
	Nat4 tempPersistent_Pasteboard_20_Flavor_20_File_20_URL_2F_Known_20_IDs[] = {
0000000000, 0X0000004C, 0X00000020, 0X00000003, 0X00000014, 0X00000054, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000001, 0X00000040,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000005C, 0X0000000F, 0X7075626C,
0X69632E66, 0X696C652D, 0X75726C00
	};
	Nat4 tempPersistent_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Known_20_IDs[] = {
0000000000, 0X00000048, 0X00000020, 0X00000003, 0X00000014, 0X00000054, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000001, 0X00000040,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000005C, 0X0000000A, 0X74726173,
0X686C6162, 0X656C0000
	};

Nat4	loadPersistents_Pasteboard_20_Service(V_Environment environment);
Nat4	loadPersistents_Pasteboard_20_Service(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	tempPersistent = create_persistentNode("Pasteboard Flavor/Known IDs",tempPersistent_Pasteboard_20_Flavor_2F_Known_20_IDs,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Pasteboard Flavor Text/Known IDs",tempPersistent_Pasteboard_20_Flavor_20_Text_2F_Known_20_IDs,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Pasteboard Flavor Text MacRoman/Known IDs",tempPersistent_Pasteboard_20_Flavor_20_Text_20_MacRoman_2F_Known_20_IDs,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Pasteboard Flavor Instance/Known IDs",tempPersistent_Pasteboard_20_Flavor_20_Instance_2F_Known_20_IDs,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Pasteboard Flavor Instance Case/Known IDs",tempPersistent_Pasteboard_20_Flavor_20_Instance_20_Case_2F_Known_20_IDs,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Pasteboard Flavor Instance List/Known IDs",tempPersistent_Pasteboard_20_Flavor_20_Instance_20_List_2F_Known_20_IDs,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Pasteboard Flavor Instance Value/Known IDs",tempPersistent_Pasteboard_20_Flavor_20_Instance_20_Value_2F_Known_20_IDs,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Pasteboard Flavor Archive/Known IDs",tempPersistent_Pasteboard_20_Flavor_20_Archive_2F_Known_20_IDs,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Pasteboard Flavor Archive List Helper Name/Known IDs",tempPersistent_Pasteboard_20_Flavor_20_Archive_20_List_20_Helper_20_Name_2F_Known_20_IDs,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Pasteboard Flavor Archive URL/Known IDs",tempPersistent_Pasteboard_20_Flavor_20_Archive_20_URL_2F_Known_20_IDs,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Pasteboard Flavor Archive Text/Known IDs",tempPersistent_Pasteboard_20_Flavor_20_Archive_20_Text_2F_Known_20_IDs,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Pasteboard Flavor Object Value/Known IDs",tempPersistent_Pasteboard_20_Flavor_20_Object_20_Value_2F_Known_20_IDs,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Pasteboard Flavor Object Operations/Known IDs",tempPersistent_Pasteboard_20_Flavor_20_Object_20_Operations_2F_Known_20_IDs,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Pasteboard Flavor File URL/Known IDs",tempPersistent_Pasteboard_20_Flavor_20_File_20_URL_2F_Known_20_IDs,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Pasteboard Flavor Trash Label/Known IDs",tempPersistent_Pasteboard_20_Flavor_20_Trash_20_Label_2F_Known_20_IDs,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	return kNOERROR;

}

Nat4	load_Pasteboard_20_Service(V_Environment environment);
Nat4	load_Pasteboard_20_Service(V_Environment environment)
{

	loadClasses_Pasteboard_20_Service(environment);
	loadUniversals_Pasteboard_20_Service(environment);
	loadPersistents_Pasteboard_20_Service(environment);
	return kNOERROR;

}

