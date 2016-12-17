/* A VPL Section File */
/*

Common Blocks.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_INFO_3A20_SizeOf_20_Structure_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_INFO_3A20_SizeOf_20_Structure_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_sizeof,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"\" ) = \"",ROOT(3));

result = vpx_constant(PARAMETERS,"\"sizeof( \"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_show,4,0,TERMINAL(4),TERMINAL(0),TERMINAL(3),TERMINAL(2));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_INFO_3A20_SizeOf_20_Structure_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_INFO_3A20_SizeOf_20_Structure_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"The structure \"\"\"",ROOT(1));

result = vpx_constant(PARAMETERS,"\"\"\" was not found.\"",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_show,3,0,TERMINAL(1),TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_INFO_3A20_SizeOf_20_Structure_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_INFO_3A20_SizeOf_20_Structure_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_INFO_3A20_SizeOf_20_Structure_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_INFO_3A20_SizeOf_20_Structure_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_INFO_3A20_SizeOf_20_Structure(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Loookup size of",ROOT(0));

result = vpx_constant(PARAMETERS,"FSRef",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_ask,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_method_INFO_3A20_SizeOf_20_Structure_case_1_local_6(PARAMETERS,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Create_20_Block_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Block_20_Allocate(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(3),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Block_20_Allocate_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Block_20_Allocate_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"void",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(2),TERMINAL(0),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Block_20_Allocate_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Block_20_Allocate_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"1",TERMINAL(1));
NEXTCASEONFAILURE

PUTPOINTER(char,*,NewPtr( GETINTEGER(TERMINAL(0))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Block_20_Allocate_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Block_20_Allocate_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"2",TERMINAL(1));
NEXTCASEONFAILURE

PUTPOINTER(char,**,NewHandle( GETINTEGER(TERMINAL(0))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Block_20_Allocate_case_1_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Block_20_Allocate_case_1_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Block_20_Allocate_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Block_20_Allocate_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Block_20_Allocate_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Block_20_Allocate_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Block_20_Allocate_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Block_20_Allocate_case_1_local_3_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Block_20_Allocate(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_Block_20_Allocate_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Block_20_Free_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Block_20_Free_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"1",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"char",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(1),TERMINAL(2));

DisposePtr( GETPOINTER(1,char,*,ROOT(3),TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Block_20_Free_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Block_20_Free_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"2",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"char",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(1),TERMINAL(2));

DisposeHandle( GETPOINTER(1,char,**,ROOT(3),TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Block_20_Free_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Block_20_Free_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Block_20_Free_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Block_20_Free_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Block_20_Free_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Block_20_Free_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Block_20_Free_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Block_20_Free_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Block_20_Free_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_level,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_Block_20_Free_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Block_20_Free_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Block_20_Free_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Block_20_Free(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Block_20_Free_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Block_20_Free_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Block_20_Size_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Block_20_Size_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"char",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Block_20_Size_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Block_20_Size_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"1",TERMINAL(0));
NEXTCASEONFAILURE

PUTINTEGER(GetPtrSize( GETPOINTER(1,char,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Block_20_Size_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Block_20_Size_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"2",TERMINAL(0));
NEXTCASEONFAILURE

PUTINTEGER(GetHandleSize( GETPOINTER(1,char,**,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Block_20_Size_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Block_20_Size_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_size,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Block_20_Size_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Block_20_Size_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Block_20_Size_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Block_20_Size_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Block_20_Size_case_1_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Block_20_Size_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Block_20_Size_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_level,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_Block_20_Size_case_1_local_4(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_method_Block_20_Size_case_1_local_5(PARAMETERS,TERMINAL(1),TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Block_20_Size_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Block_20_Size_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Block_20_Size(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Block_20_Size_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Block_20_Size_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Block_20_Copy_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Block_20_Copy_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Block_20_Size(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"-1",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Block_20_Copy_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Block_20_Copy_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_sizeof,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Block_20_Copy_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Block_20_Copy_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Block_20_Copy_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Block_20_Copy_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Block_20_Copy_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Block_20_Copy_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_level,1,1,TERMINAL(1),ROOT(2));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Block_20_Copy_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Block_20_Copy_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Block_20_Copy_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Block_20_Copy_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Block_20_Copy_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Block_20_Copy_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Block_20_Copy_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Block_20_Copy_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_method_Block_20_Copy_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(4));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_block,3,3,TERMINAL(0),TERMINAL(3),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_type,1,1,TERMINAL(0),ROOT(8));

result = vpx_method_Block_20_Copy_case_1_local_6(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(9));

result = vpx_method_Create_20_Block_20_Type(PARAMETERS,TERMINAL(8),TERMINAL(4),TERMINAL(9),ROOT(10));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_block,4,2,TERMINAL(10),TERMINAL(3),TERMINAL(4),TERMINAL(7),ROOT(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTER(13)
}

enum opTrigger vpx_method_Block_20_Copy_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Block_20_Copy_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Block_20_Size(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"-1",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Block_20_Copy_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Block_20_Copy_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_sizeof,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Block_20_Copy_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Block_20_Copy_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Block_20_Copy_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Block_20_Copy_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Block_20_Copy_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Block_20_Copy_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_level,1,1,TERMINAL(1),ROOT(2));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Block_20_Copy_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Block_20_Copy_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Block_20_Copy_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Block_20_Copy_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Block_20_Copy_case_2_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Block_20_Copy_case_2_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Block_20_Copy_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Block_20_Copy_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_method_Block_20_Copy_case_2_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(4));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(0),TERMINAL(3),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_type,1,1,TERMINAL(0),ROOT(8));

result = vpx_method_Block_20_Copy_case_2_local_6(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(9));

result = vpx_method_Create_20_Block_20_Type(PARAMETERS,TERMINAL(8),TERMINAL(4),TERMINAL(9),ROOT(10));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_text,4,2,TERMINAL(10),TERMINAL(3),TERMINAL(4),TERMINAL(7),ROOT(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTER(13)
}

enum opTrigger vpx_method_Block_20_Copy(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Block_20_Copy_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Block_20_Copy_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Block_20_Array_20_New_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Block_20_Array_20_New_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_sizeof,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__2A2A_,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_method_Create_20_Block_20_Type(PARAMETERS,TERMINAL(0),TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Block_20_Array_20_New_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Block_20_Array_20_New_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Block_20_Array_20_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Block_20_Array_20_New_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Block_20_Array_20_New_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_pointer,1,1,TERMINAL(0),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_block,3,3,TERMINAL(4),TERMINAL(3),TERMINAL(2),ROOT(5),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(7),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_pointer,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(3),TERMINAL(1));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_method_Block_20_Copy(PARAMETERS,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(1),TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(1),TERMINAL(3));
FINISHONSUCCESS

result = vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(0),TERMINAL(2),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_pointer,1,1,TERMINAL(0),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_block,3,3,TERMINAL(4),TERMINAL(3),TERMINAL(2),ROOT(5),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(7),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_pointer,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(3),TERMINAL(1));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_method_Block_20_Copy(PARAMETERS,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_2_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_2_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_2_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(1),TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3E_,2,0,TERMINAL(4),TERMINAL(3));
FINISHONSUCCESS

result = vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_2_local_4(PARAMETERS,TERMINAL(1),TERMINAL(0),TERMINAL(2),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1))
vpx_method_Block_20_Array_20_To_20_List_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_sizeof,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(0),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(1),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2A2A_,2,1,TERMINAL(5),TERMINAL(3),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(6),TERMINAL(4),ROOT(7));

LISTROOTBEGIN(1)
REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,4,8)
result = vpx_method_Block_20_Array_20_To_20_List_case_1_local_11(PARAMETERS,TERMINAL(2),LOOP(0),TERMINAL(3),TERMINAL(7),ROOT(8),ROOT(9));
LISTROOT(9,0)
REPEATFINISH
LISTROOTFINISH(9,0)
LISTROOTEND

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Block_20_Array_20_To_20_List_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"(  )",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Block_20_Array_20_To_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Block_20_Array_20_To_20_List_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Block_20_Array_20_To_20_List_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_New_20_UInt8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(2));

result = vpx_method_New_20_Integer_20_Block_20_Type(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(1),NONE,ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_New_20_UInt16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2",ROOT(2));

result = vpx_method_New_20_Integer_20_Block_20_Type(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(1),NONE,ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_New_20_UInt32(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_constant(PARAMETERS,"unsigned long",ROOT(3));

result = vpx_method_New_20_Integer_20_Block_20_Type(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_New_20_Integer_20_Block_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_New_20_Integer_20_Block_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_sizeof,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_New_20_Integer_20_Block_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_New_20_Integer_20_Block_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_New_20_Integer_20_Block_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_New_20_Integer_20_Block_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_New_20_Integer_20_Block_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_New_20_Integer_20_Block_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_New_20_Integer_20_Block_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_New_20_Integer_20_Block_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_New_20_Integer_20_Block_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_New_20_Integer_20_Block_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_New_20_Integer_20_Block_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_min,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_New_20_Integer_20_Block_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_New_20_Integer_20_Block_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_New_20_Integer_20_Block(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_New_20_Integer_20_Block_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(3));
FAILONFAILURE

result = vpx_method_Block_20_Allocate(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));
FAILONFAILURE

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(0),ROOT(5));

result = vpx_method_New_20_Integer_20_Block_case_1_local_5(PARAMETERS,TERMINAL(3),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(3),TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(4),TERMINAL(7),TERMINAL(6),TERMINAL(5),ROOT(8),ROOT(9));

result = vpx_method_New_20_Integer_20_Block_case_1_local_8(PARAMETERS,TERMINAL(4),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"1",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"char",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"2",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"short",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2_case_2_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2_case_2_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"4",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"long",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2_case_2_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2_case_2_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2_case_2_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2_case_2_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2_case_2_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2_case_2_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2_case_2_local_2(PARAMETERS,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3_case_1_local_2(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_New_20_Integer_20_Block_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_New_20_Integer_20_Block(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(4));
FAILONFAILURE

result = vpx_method_New_20_Integer_20_Block_20_Type_case_1_local_3(PARAMETERS,TERMINAL(4),TERMINAL(3),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Get_20_UInt8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Get_20_UInt8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"1",ROOT(2));

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(0),TERMINAL(3),TERMINAL(2),ROOT(4),ROOT(5),ROOT(6));

result = vpx_method_Unsign_20_Integer(PARAMETERS,TERMINAL(6),TERMINAL(2),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Get_20_UInt8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Get_20_UInt8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Get_20_UInt8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_UInt8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Get_20_UInt8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Get_20_UInt16_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Get_20_UInt16_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"2",ROOT(2));

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(0),TERMINAL(3),TERMINAL(2),ROOT(4),ROOT(5),ROOT(6));

result = vpx_method_Unsign_20_Integer(PARAMETERS,TERMINAL(6),TERMINAL(2),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Get_20_UInt16_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Get_20_UInt16_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Get_20_UInt16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_UInt16_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Get_20_UInt16_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Get_20_UInt32_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Get_20_UInt32_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(0),TERMINAL(3),TERMINAL(2),ROOT(4),ROOT(5),ROOT(6));

result = vpx_method_Unsign_20_Integer(PARAMETERS,TERMINAL(6),TERMINAL(2),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Get_20_UInt32_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Get_20_UInt32_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Get_20_UInt32(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_UInt32_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Get_20_UInt32_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Get_20_SInt8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Get_20_SInt8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"1",ROOT(2));

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(0),TERMINAL(3),TERMINAL(2),ROOT(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Get_20_SInt8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Get_20_SInt8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Get_20_SInt8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_SInt8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Get_20_SInt8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Get_20_SInt16_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Get_20_SInt16_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"2",ROOT(2));

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(0),TERMINAL(3),TERMINAL(2),ROOT(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Get_20_SInt16_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Get_20_SInt16_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Get_20_SInt16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_SInt16_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Get_20_SInt16_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Get_20_SInt32_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Get_20_SInt32_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(0),TERMINAL(3),TERMINAL(2),ROOT(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Get_20_SInt32_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Get_20_SInt32_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Get_20_SInt32(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_SInt32_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Get_20_SInt32_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Put_20_UInt32(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_method_Coerce_20_Integer(PARAMETERS,TERMINAL(2),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(0),TERMINAL(3),TERMINAL(4),TERMINAL(5),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Put_20_UInt16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"2",ROOT(4));

result = vpx_method_Coerce_20_Integer(PARAMETERS,TERMINAL(2),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(0),TERMINAL(3),TERMINAL(4),TERMINAL(5),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Put_20_UInt8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_method_Coerce_20_Integer(PARAMETERS,TERMINAL(2),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(0),TERMINAL(3),TERMINAL(4),TERMINAL(5),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Unsign_20_Integer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Unsign_20_Integer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3C_,2,0,TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"8",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__2A2A_,2,1,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"2",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_power,2,1,TERMINAL(6),TERMINAL(5),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_trunc,1,2,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,3,1,TERMINAL(0),TERMINAL(8),TERMINAL(8),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_Unsign_20_Integer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Unsign_20_Integer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Unsign_20_Integer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Unsign_20_Integer_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Unsign_20_Integer_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Coerce_20_Pointer_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Coerce_20_Pointer_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_pointer,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Coerce_20_Pointer_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Coerce_20_Pointer_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"1",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Coerce_20_Pointer_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Coerce_20_Pointer_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"2",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_pointer,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Coerce_20_Pointer_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Coerce_20_Pointer_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Coerce_20_Pointer_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Coerce_20_Pointer_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Coerce_20_Pointer_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Coerce_20_Pointer_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Coerce_20_Pointer_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Coerce_20_Pointer_case_1_local_4_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Coerce_20_Pointer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Coerce_20_Pointer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_level,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_Coerce_20_Pointer_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Coerce_20_Pointer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Coerce_20_Pointer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_object_2D_to_2D_address,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_pointer,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Coerce_20_Pointer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Coerce_20_Pointer_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Coerce_20_Pointer_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}









Nat4	loadClasses_Common_20_Blocks(V_Environment environment);
Nat4	loadClasses_Common_20_Blocks(V_Environment environment)
{
	V_Class result = NULL;

	return kNOERROR;

}

Nat4	loadUniversals_Common_20_Blocks(V_Environment environment);
Nat4	loadUniversals_Common_20_Blocks(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("INFO: SizeOf Structure",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_INFO_3A20_SizeOf_20_Structure,"Tool");

	result = method_new("Create Block Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Create_20_Block_20_Type,NULL);

	result = method_new("Block Allocate",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Block_20_Allocate,NULL);

	result = method_new("Block Free",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Block_20_Free,NULL);

	result = method_new("Block Size",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Block_20_Size,NULL);

	result = method_new("Block Copy",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Block_20_Copy,NULL);

	result = method_new("Block Array New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Block_20_Array_20_New,NULL);

	result = method_new("Block Array To List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Block_20_Array_20_To_20_List,NULL);

	result = method_new("New UInt8",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_New_20_UInt8,NULL);

	result = method_new("New UInt16",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_New_20_UInt16,NULL);

	result = method_new("New UInt32",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_New_20_UInt32,NULL);

	result = method_new("New Integer Block",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_New_20_Integer_20_Block,NULL);

	result = method_new("New Integer Block Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_New_20_Integer_20_Block_20_Type,NULL);

	result = method_new("Get UInt8",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_UInt8,NULL);

	result = method_new("Get UInt16",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_UInt16,NULL);

	result = method_new("Get UInt32",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_UInt32,NULL);

	result = method_new("Get SInt8",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_SInt8,NULL);

	result = method_new("Get SInt16",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_SInt16,NULL);

	result = method_new("Get SInt32",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_SInt32,NULL);

	result = method_new("Put UInt32",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Put_20_UInt32,NULL);

	result = method_new("Put UInt16",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Put_20_UInt16,NULL);

	result = method_new("Put UInt8",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Put_20_UInt8,NULL);

	result = method_new("Unsign Integer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Unsign_20_Integer,NULL);

	result = method_new("Coerce Pointer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Coerce_20_Pointer,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_Common_20_Blocks(V_Environment environment);
Nat4	loadPersistents_Common_20_Blocks(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_Common_20_Blocks(V_Environment environment);
Nat4	load_Common_20_Blocks(V_Environment environment)
{

	loadClasses_Common_20_Blocks(environment);
	loadUniversals_Common_20_Blocks(environment);
	loadPersistents_Common_20_Blocks(environment);
	return kNOERROR;

}

