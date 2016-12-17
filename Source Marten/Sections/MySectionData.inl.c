/* A VPL Section File */
/*

MySectionData.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(17)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"poin",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"2",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(5),TERMINAL(6),TERMINAL(8),ROOT(9),ROOT(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(9),TERMINAL(10),TERMINAL(8),ROOT(12),ROOT(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(11),TERMINAL(14),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(15),ROOT(16));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(6))
OUTPUT(2,TERMINAL(5))
OUTPUT(3,TERMINAL(16))
FOOTER(17)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(20)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"\"rgb \"",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"2",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(5),TERMINAL(6),TERMINAL(8),ROOT(9),ROOT(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(9),TERMINAL(10),TERMINAL(8),ROOT(12),ROOT(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(12),TERMINAL(13),TERMINAL(8),ROOT(15),ROOT(16),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(11),TERMINAL(14),TERMINAL(17),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(18),ROOT(19));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(6))
OUTPUT(2,TERMINAL(5))
OUTPUT(3,TERMINAL(19))
FOOTER(20)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(23)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"rect",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"2",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(5),TERMINAL(6),TERMINAL(8),ROOT(9),ROOT(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(9),TERMINAL(10),TERMINAL(8),ROOT(12),ROOT(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(12),TERMINAL(13),TERMINAL(8),ROOT(15),ROOT(16),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(15),TERMINAL(16),TERMINAL(8),ROOT(18),ROOT(19),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(11),TERMINAL(14),TERMINAL(17),TERMINAL(20),ROOT(21));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(21),ROOT(22));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(6))
OUTPUT(2,TERMINAL(5))
OUTPUT(3,TERMINAL(22))
FOOTER(23)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"\"\"\"  \"",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"\"",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(8),ROOT(9));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(6))
OUTPUT(2,TERMINAL(5))
OUTPUT(3,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"\"()  \"",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( )",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(8),ROOT(9));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(6))
OUTPUT(2,TERMINAL(5))
OUTPUT(3,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"\"+1  \"",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"1",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(8),ROOT(9));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(6))
OUTPUT(2,TERMINAL(5))
OUTPUT(3,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"\"-1  \"",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"-1",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(8),ROOT(9));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(6))
OUTPUT(2,TERMINAL(5))
OUTPUT(3,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"\"0   \"",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(8),ROOT(9));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(6))
OUTPUT(2,TERMINAL(5))
OUTPUT(3,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"true",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(8),ROOT(9));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(6))
OUTPUT(2,TERMINAL(5))
OUTPUT(3,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"fals",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(8),ROOT(9));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(6))
OUTPUT(2,TERMINAL(5))
OUTPUT(3,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_11(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_11(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"null",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(8),ROOT(9));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(6))
OUTPUT(2,TERMINAL(5))
OUTPUT(3,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_12(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_12(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"none",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NONE",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(8),ROOT(9));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(6))
OUTPUT(2,TERMINAL(5))
OUTPUT(3,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_13(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_13(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"undf",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"UNDEFINED",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(8),ROOT(9));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(6))
OUTPUT(2,TERMINAL(5))
OUTPUT(3,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_14_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_14_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
FINISHONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_14(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_14(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(16)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"text",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"1",ROOT(8));

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,6,9)
result = vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_14_local_6(PARAMETERS,TERMINAL(5),LOOP(0),TERMINAL(8),ROOT(9));
REPEATFINISH

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(9),TERMINAL(6),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(5),TERMINAL(6),TERMINAL(11),ROOT(12),ROOT(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(14),ROOT(15));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(13))
OUTPUT(2,TERMINAL(12))
OUTPUT(3,TERMINAL(15))
FOOTER(16)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_15(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_15(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"\"int \"",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"4",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(5),TERMINAL(6),TERMINAL(8),ROOT(9),ROOT(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(11),ROOT(12));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(10))
OUTPUT(2,TERMINAL(9))
OUTPUT(3,TERMINAL(12))
FOOTER(13)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_16(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_16(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"real",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"10",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_real,3,3,TERMINAL(5),TERMINAL(6),TERMINAL(8),ROOT(9),ROOT(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(11),ROOT(12));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(10))
OUTPUT(2,TERMINAL(9))
OUTPUT(3,TERMINAL(12))
FOOTER(13)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_17(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_17(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"list",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_VPXCPXParseTag,1,1,NONE,ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(8),ROOT(9));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(6))
OUTPUT(2,TERMINAL(5))
OUTPUT(3,TERMINAL(9))
FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_18_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_18_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"VPXCPXParseTag",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
OUTPUT(2,NONE)
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_18_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_18_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(1))
OUTPUT(1,NONE)
OUTPUT(2,TERMINAL(2))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_18_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_18_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_18_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2))
vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_18_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_18(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_18(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"8",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"end list",TERMINAL(7));
NEXTCASEONFAILURE

LISTROOTBEGIN(1)
REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,3,8)
result = vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_18_local_5(PARAMETERS,LOOP(0),ROOT(8),ROOT(9),ROOT(10));
LISTROOT(9,0)
REPEATFINISH
LISTROOTFINISH(9,0)
LISTROOTEND

result = vpx_call_primitive(PARAMETERS,VPLP_reverse,1,1,TERMINAL(9),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(8),TERMINAL(11),ROOT(12));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(6))
OUTPUT(2,TERMINAL(5))
OUTPUT(3,TERMINAL(12))
FOOTER(13)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_19_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_19_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(1),TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"crid",TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"2",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(3),TERMINAL(4),TERMINAL(6),ROOT(7),ROOT(8),ROOT(9));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_19_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_19_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_size,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3E3D_,2,0,TERMINAL(2),TERMINAL(3));
FINISHONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,NONE)
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_19_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_19_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_19_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_19_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_19(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_19(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"inst",TERMINAL(7));
NEXTCASEONFAILURE

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,6,8)
result = vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_19_local_5(PARAMETERS,LOOP(0),TERMINAL(5),ROOT(8),ROOT(9));
REPEATFINISH

result = vpx_instantiate(PARAMETERS,kVPXClass_VPXCPXParseTag,1,1,NONE,ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Class_20_Name_20_ID,TERMINAL(10),TERMINAL(9),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(11),ROOT(12));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(8))
OUTPUT(2,TERMINAL(5))
OUTPUT(3,TERMINAL(12))
FOOTERWITHNONE(13)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_20_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_20_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"VPXCPXParseTag",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
OUTPUT(2,NONE)
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_20_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_20_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(1))
OUTPUT(1,NONE)
OUTPUT(2,TERMINAL(2))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_20_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_20_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_20_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2))
vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_20_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_20(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_20(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADERWITHNONE(20)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"8",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"end inst",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Instance_20_Value_20_Data,1,1,NONE,ROOT(8));

LISTROOTBEGIN(1)
REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,3,9)
result = vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_20_local_6(PARAMETERS,LOOP(0),ROOT(9),ROOT(10),ROOT(11));
LISTROOT(10,0)
REPEATFINISH
LISTROOTFINISH(10,0)
LISTROOTEND

result = vpx_call_primitive(PARAMETERS,VPLP_reverse,1,1,TERMINAL(10),ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Attributes,TERMINAL(8),TERMINAL(12),ROOT(13));

result = vpx_constant(PARAMETERS,"/Set Text",ROOT(14));

result = vpx_get(PARAMETERS,kVPXValue_Class_20_Name_20_ID,TERMINAL(11),ROOT(15),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(13),TERMINAL(16),TERMINAL(14),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(17),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(9),TERMINAL(13),ROOT(19));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(18))
OUTPUT(1,TERMINAL(6))
OUTPUT(2,TERMINAL(5))
OUTPUT(3,TERMINAL(19))
FOOTERWITHNONE(20)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_21(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_21(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_size,1,1,TERMINAL(2),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__3E3D_,2,0,TERMINAL(4),TERMINAL(5));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(4))
OUTPUT(2,TERMINAL(2))
OUTPUT(3,TERMINAL(3))
FOOTER(6)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2,root3))
if(vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2,root3))
if(vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2,root3))
if(vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2,root3))
if(vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2,root3))
if(vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2,root3))
if(vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2,root3))
if(vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_8(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2,root3))
if(vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_9(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2,root3))
if(vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_10(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2,root3))
if(vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_11(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2,root3))
if(vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_12(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2,root3))
if(vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_13(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2,root3))
if(vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_14(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2,root3))
if(vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_15(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2,root3))
if(vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_16(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2,root3))
if(vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_17(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2,root3))
if(vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_18(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2,root3))
if(vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_19(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2,root3))
if(vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_20(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2,root3))
vpx_method_Parse_20_CPX_20_Object_case_1_local_2_case_21(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2,root3);
return outcome;
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"1",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"VPXCPXParseTag",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTER(4)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Parse_20_CPX_20_Object_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Parse_20_CPX_20_Object_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Parse_20_CPX_20_Object_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Parse_20_CPX_20_Object(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

REPEATBEGIN
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,1,5)
LOOPTERMINAL(1,3,7)
result = vpx_method_Parse_20_CPX_20_Object_case_1_local_2(PARAMETERS,TERMINAL(0),LOOP(0),TERMINAL(2),LOOP(1),ROOT(4),ROOT(5),ROOT(6),ROOT(7));
FAILONFAILURE
REPEATFINISH

result = vpx_method_Parse_20_CPX_20_Object_case_1_local_3(PARAMETERS,TERMINAL(7));
FINISHONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
OUTPUT(2,TERMINAL(6))
OUTPUT(3,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Parse_20_Object_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(3));

REPEATBEGIN
LOOPTERMINALBEGIN(4)
LOOPTERMINAL(0,0,4)
LOOPTERMINAL(1,1,5)
LOOPTERMINAL(2,2,6)
LOOPTERMINAL(3,3,7)
result = vpx_method_Parse_20_CPX_20_Object(PARAMETERS,LOOP(0),LOOP(1),LOOP(2),LOOP(3),ROOT(4),ROOT(5),ROOT(6),ROOT(7));
REPEATFINISH

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
OUTPUT(2,TERMINAL(6))
OUTPUT(3,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"poin",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"2",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(4),TERMINAL(5),TERMINAL(7),ROOT(8),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(8),TERMINAL(9),TERMINAL(7),ROOT(11),ROOT(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(10),TERMINAL(13),ROOT(14));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(5))
OUTPUT(2,TERMINAL(4))
OUTPUT(3,TERMINAL(14))
FOOTER(15)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(18)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"\"rgb \"",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"2",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(4),TERMINAL(5),TERMINAL(7),ROOT(8),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(8),TERMINAL(9),TERMINAL(7),ROOT(11),ROOT(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(11),TERMINAL(12),TERMINAL(7),ROOT(14),ROOT(15),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(10),TERMINAL(13),TERMINAL(16),ROOT(17));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(5))
OUTPUT(2,TERMINAL(4))
OUTPUT(3,TERMINAL(17))
FOOTER(18)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(21)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"rect",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"2",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(4),TERMINAL(5),TERMINAL(7),ROOT(8),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(8),TERMINAL(9),TERMINAL(7),ROOT(11),ROOT(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(11),TERMINAL(12),TERMINAL(7),ROOT(14),ROOT(15),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(14),TERMINAL(15),TERMINAL(7),ROOT(17),ROOT(18),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(10),TERMINAL(13),TERMINAL(16),TERMINAL(19),ROOT(20));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(5))
OUTPUT(2,TERMINAL(4))
OUTPUT(3,TERMINAL(20))
FOOTER(21)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"\"\"\"  \"",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"\"\"\"",ROOT(7));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(5))
OUTPUT(2,TERMINAL(4))
OUTPUT(3,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"\"()  \"",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( )",ROOT(7));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(5))
OUTPUT(2,TERMINAL(4))
OUTPUT(3,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"\"+1  \"",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"1",ROOT(7));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(5))
OUTPUT(2,TERMINAL(4))
OUTPUT(3,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"\"-1  \"",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"-1",ROOT(7));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(5))
OUTPUT(2,TERMINAL(4))
OUTPUT(3,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"\"0   \"",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(7));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(5))
OUTPUT(2,TERMINAL(4))
OUTPUT(3,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"true",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(7));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(5))
OUTPUT(2,TERMINAL(4))
OUTPUT(3,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"fals",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(7));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(5))
OUTPUT(2,TERMINAL(4))
OUTPUT(3,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_11(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_11(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"null",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(7));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(5))
OUTPUT(2,TERMINAL(4))
OUTPUT(3,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_12(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_12(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"none",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NONE",ROOT(7));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(5))
OUTPUT(2,TERMINAL(4))
OUTPUT(3,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_13(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_13(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"undf",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"UNDEFINED",ROOT(7));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(5))
OUTPUT(2,TERMINAL(4))
OUTPUT(3,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_14_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_14_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
FINISHONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_14(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_14(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"text",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"1",ROOT(7));

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,5,8)
result = vpx_method_Parse_20_Object_case_2_local_2_case_14_local_6(PARAMETERS,TERMINAL(4),LOOP(0),TERMINAL(7),ROOT(8));
REPEATFINISH

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(8),TERMINAL(5),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(4),TERMINAL(5),TERMINAL(10),ROOT(11),ROOT(12),ROOT(13));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(12))
OUTPUT(2,TERMINAL(11))
OUTPUT(3,TERMINAL(13))
FOOTER(14)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_15(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_15(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"\"int \"",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"4",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(4),TERMINAL(5),TERMINAL(7),ROOT(8),ROOT(9),ROOT(10));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(9))
OUTPUT(2,TERMINAL(8))
OUTPUT(3,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_16(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_16(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"real",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"10",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_real,3,3,TERMINAL(4),TERMINAL(5),TERMINAL(7),ROOT(8),ROOT(9),ROOT(10));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(9))
OUTPUT(2,TERMINAL(8))
OUTPUT(3,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_17(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_17(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"list",TERMINAL(6));
NEXTCASEONFAILURE

LISTROOTBEGIN(1)
REPEATBEGIN
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,0,7)
LOOPTERMINAL(1,5,8)
result = vpx_method_Parse_20_Object(PARAMETERS,LOOP(0),LOOP(1),TERMINAL(4),ROOT(7),ROOT(8),ROOT(9),ROOT(10));
LISTROOT(10,0)
REPEATFINISH
LISTROOTFINISH(10,0)
LISTROOTEND

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(10),ROOT(11),ROOT(12));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(7))
OUTPUT(1,TERMINAL(8))
OUTPUT(2,TERMINAL(9))
OUTPUT(3,TERMINAL(11))
FOOTER(13)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_18(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_18(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"8",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"end list",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(7));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(5))
OUTPUT(2,TERMINAL(4))
OUTPUT(3,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_19_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_19_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(1),TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"crid",TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"2",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(3),TERMINAL(4),TERMINAL(6),ROOT(7),ROOT(8),ROOT(9));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_19_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_19_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_size,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3E3D_,2,0,TERMINAL(2),TERMINAL(3));
FINISHONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,NONE)
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_19_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_19_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Parse_20_Object_case_2_local_2_case_19_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Parse_20_Object_case_2_local_2_case_19_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_19(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_19(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADERWITHNONE(20)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"inst",TERMINAL(6));
NEXTCASEONFAILURE

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,5,7)
result = vpx_method_Parse_20_Object_case_2_local_2_case_19_local_5(PARAMETERS,LOOP(0),TERMINAL(4),ROOT(7),ROOT(8));
REPEATFINISH

LISTROOTBEGIN(1)
REPEATBEGIN
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,0,9)
LOOPTERMINAL(1,7,10)
result = vpx_method_Parse_20_Object(PARAMETERS,LOOP(0),LOOP(1),TERMINAL(4),ROOT(9),ROOT(10),ROOT(11),ROOT(12));
LISTROOT(12,0)
REPEATFINISH
LISTROOTFINISH(12,0)
LISTROOTEND

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(12),ROOT(13),ROOT(14));

result = vpx_instantiate(PARAMETERS,kVPXClass_Instance_20_Value_20_Data,1,1,NONE,ROOT(15));

result = vpx_set(PARAMETERS,kVPXValue_Attributes,TERMINAL(15),TERMINAL(13),ROOT(16));

result = vpx_constant(PARAMETERS,"/Set Text",ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(16),TERMINAL(8),TERMINAL(17),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(9),TERMINAL(18),ROOT(19));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(19))
OUTPUT(1,TERMINAL(10))
OUTPUT(2,TERMINAL(11))
OUTPUT(3,TERMINAL(16))
FOOTERWITHNONE(20)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_20(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_20(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"8",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"end inst",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(7));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(5))
OUTPUT(2,TERMINAL(4))
OUTPUT(3,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_21(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2_case_21(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_size,1,1,TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3E3D_,2,0,TERMINAL(3),TERMINAL(4));
FINISHONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(3))
OUTPUT(2,TERMINAL(2))
OUTPUT(3,NONE)
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Parse_20_Object_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Parse_20_Object_case_2_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
if(vpx_method_Parse_20_Object_case_2_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
if(vpx_method_Parse_20_Object_case_2_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
if(vpx_method_Parse_20_Object_case_2_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
if(vpx_method_Parse_20_Object_case_2_local_2_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
if(vpx_method_Parse_20_Object_case_2_local_2_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
if(vpx_method_Parse_20_Object_case_2_local_2_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
if(vpx_method_Parse_20_Object_case_2_local_2_case_8(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
if(vpx_method_Parse_20_Object_case_2_local_2_case_9(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
if(vpx_method_Parse_20_Object_case_2_local_2_case_10(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
if(vpx_method_Parse_20_Object_case_2_local_2_case_11(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
if(vpx_method_Parse_20_Object_case_2_local_2_case_12(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
if(vpx_method_Parse_20_Object_case_2_local_2_case_13(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
if(vpx_method_Parse_20_Object_case_2_local_2_case_14(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
if(vpx_method_Parse_20_Object_case_2_local_2_case_15(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
if(vpx_method_Parse_20_Object_case_2_local_2_case_16(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
if(vpx_method_Parse_20_Object_case_2_local_2_case_17(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
if(vpx_method_Parse_20_Object_case_2_local_2_case_18(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
if(vpx_method_Parse_20_Object_case_2_local_2_case_19(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
if(vpx_method_Parse_20_Object_case_2_local_2_case_20(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
vpx_method_Parse_20_Object_case_2_local_2_case_21(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3);
return outcome;
}

enum opTrigger vpx_method_Parse_20_Object_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

REPEATBEGIN
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,0,3)
LOOPTERMINAL(1,1,4)
result = vpx_method_Parse_20_Object_case_2_local_2(PARAMETERS,LOOP(0),LOOP(1),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5),ROOT(6));
NEXTCASEONFAILURE
REPEATFINISH

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
OUTPUT(2,TERMINAL(5))
OUTPUT(3,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Parse_20_Object_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Parse_20_Object_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_constant(PARAMETERS,"12",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(1),TERMINAL(4),ROOT(5));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(5))
OUTPUT(2,TERMINAL(2))
OUTPUT(3,TERMINAL(3))
FOOTER(6)
}

enum opTrigger vpx_method_Parse_20_Object(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Parse_20_Object_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
if(vpx_method_Parse_20_Object_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3))
vpx_method_Parse_20_Object_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2,root3);
return outcome;
}




	Nat4 tempAttribute_Section_20_Data_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000010, 0X556E7469, 0X746C6564, 0X20536563,
0X74696F6E, 0000000000
	};
	Nat4 tempAttribute_Section_20_Data_2F_Dirty[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_Section_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Section_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 712 693 }{ 89 404 } */
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Section_20_Data_2F_Name,environment);
	tempAttribute = attribute_add("Dirty",tempClass,tempAttribute_Section_20_Data_2F_Dirty,environment);
	tempAttribute = attribute_add("File",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Helper Data");
	return kNOERROR;
}

/* Start Universals: { 133 472 }{ 663 337 } */
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_1_local_8_case_1_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_1_local_8_case_1_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(2),TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"\", \"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_plus_2D_one,1,1,TERMINAL(2),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_1_local_8_case_1_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_1_local_8_case_1_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\",\n\"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"1",ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_1_local_8_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_1_local_8_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_1_local_8_case_1_local_13_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1))
vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_1_local_8_case_1_local_13_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(19)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\tNat4 tempAttribute_\"",ROOT(2));

result = vpx_constant(PARAMETERS,"\"[] = {\n\"",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Full_20_Name,1,1,TERMINAL(1),ROOT(4));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(2),TERMINAL(5),TERMINAL(3),ROOT(6));

result = vpx_constant(PARAMETERS,"\"\n\t};\n\"",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Direct_20_Value,1,1,TERMINAL(1),ROOT(8));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(8));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_archive_2D_to_2D_list,1,1,TERMINAL(8),ROOT(9));

result = vpx_constant(PARAMETERS,"1",ROOT(10));

result = vpx_constant(PARAMETERS,"8",ROOT(11));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(9))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,6,12)
LOOPTERMINAL(1,10,13)
result = vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_1_local_8_case_1_local_13(PARAMETERS,LOOP(0),LIST(9),LOOP(1),TERMINAL(11),ROOT(12),ROOT(13));
REPEATFINISH
} else {
ROOTNULL(12,TERMINAL(6))
ROOTNULL(13,TERMINAL(10))
}

result = vpx_constant(PARAMETERS,"2",ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(12),TERMINAL(14),ROOT(15),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(15),TERMINAL(7),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(17),ROOT(18));

result = kSuccess;

OUTPUT(0,TERMINAL(18))
FOOTER(19)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Export_20_Text,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Class Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"\"\n\"",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Attributes,1,1,TERMINAL(0),ROOT(6));

result = vpx_constant(PARAMETERS,"\n",ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,7,8)
result = vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_1_local_8(PARAMETERS,LOOP(0),LIST(6),ROOT(8));
REPEATFINISH
} else {
ROOTNULL(8,TERMINAL(7))
}

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(8),TERMINAL(7),TERMINAL(5),ROOT(9));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,9,10)
result = vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_1_local_10(PARAMETERS,LOOP(0),LIST(4),ROOT(10));
REPEATFINISH
} else {
ROOTNULL(10,TERMINAL(9))
}

result = vpx_constant(PARAMETERS,"\"\n\n\"",ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(10),TERMINAL(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTER(13)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\n/* CLASS DATA NOT FOUND! */\n\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Universals_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Universals_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Export_20_Text,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Universals_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Universals_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Universal Data\"",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"\"\n\"",ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,5,6)
result = vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Universals_case_1_local_6(PARAMETERS,LOOP(0),LIST(4),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(6,TERMINAL(5))
}

result = vpx_constant(PARAMETERS,"\"\n\n\"",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Universals_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Universals_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\n/* ATTRIBUTE DATA NOT FOUND! */\n\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Universals(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Universals_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Universals_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Header_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Header_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Export_20_Mode,0,1,ROOT(1));

result = vpx_match(PARAMETERS,"Experimental",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"/* A VPL Section File */\n/*\n\n\"",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_File_20_Name,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"\"\nCopyright: 2004 Andescotia LLC\n\n*/\n\"",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"\"\n#include \"\"\"",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_constant(PARAMETERS,"\"\"\"\n\"",ROOT(9));

result = vpx_constant(PARAMETERS,"MartenInlineProject.h",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(8),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(11),TERMINAL(9),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTER(13)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Header_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Header_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"/* A VPL Section File */\n/*\n\n\"",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_File_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"\"\nCopyright: 2002 Scott B. Anderson\n\n*/\n\"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Header_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Header_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(14)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Export_20_Mode,0,1,ROOT(1));

result = vpx_match(PARAMETERS,"Experimental",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"/* A VPL Section File */\n/*\n\n\"",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_File_20_Name,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"\"\nCopyright: 2004 Andescotia LLC\n\n*/\n\"",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"\"\n#include \"\"\"",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_constant(PARAMETERS,"\"\"\"\n\"",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_H_20_File_20_Name,1,1,TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(8),TERMINAL(11),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(12),TERMINAL(9),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
FOOTER(14)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Header(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_C_20_Code_20_Header_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Section_20_Data_2F_C_20_Code_20_Header_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Section_20_Data_2F_C_20_Code_20_Header_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Classes_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Classes_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(17)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"\",environment);\n\"",ROOT(2));

result = vpx_constant(PARAMETERS,"\"\tresult = class_new(\"\"\"",ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,",environment);\n",ROOT(7));

result = vpx_method_Escape_20_Text(PARAMETERS,TERMINAL(5),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(3),TERMINAL(8),TERMINAL(2),ROOT(9));

result = vpx_constant(PARAMETERS,"_class_load(result",ROOT(10));

result = vpx_constant(PARAMETERS,"\tVPLC_",ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(11),TERMINAL(6),TERMINAL(10),TERMINAL(7),ROOT(12));

result = vpx_constant(PARAMETERS,"\tif(result == NULL) return kERROR;\n",ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(9),TERMINAL(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(14),TERMINAL(12),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(15),ROOT(16));

result = kSuccess;

OUTPUT(0,TERMINAL(16))
FOOTERSINGLECASE(17)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Classes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Classes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(18)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Class Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"\nNat4\tloadClasses_",ROOT(8));

result = vpx_constant(PARAMETERS,"(V_Environment environment);\n",ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(8),TERMINAL(7),TERMINAL(9),ROOT(10));

result = vpx_constant(PARAMETERS,"(V_Environment environment)\n{\n\tV_Class result = NULL;\n\n",ROOT(11));

result = vpx_constant(PARAMETERS,"Nat4\tloadClasses_",ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(12),TERMINAL(7),TERMINAL(11),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(10),TERMINAL(13),ROOT(14));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,14,15)
result = vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Classes_case_1_local_14(PARAMETERS,LOOP(0),LIST(4),ROOT(15));
REPEATFINISH
} else {
ROOTNULL(15,TERMINAL(14))
}

result = vpx_constant(PARAMETERS,"\treturn kNOERROR;\n\n}\n\n",ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(15),TERMINAL(16),ROOT(17));

result = kSuccess;

OUTPUT(0,TERMINAL(17))
FOOTER(18)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Classes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Classes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\n/* SECTION DATA NOT FOUND! */\n\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Classes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Classes_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Classes_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_15_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_15_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Class Attribute Data\"",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_15_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_15_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_15_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_15_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_18_case_1_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_18_case_1_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(2),TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"\", \"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_plus_2D_one,1,1,TERMINAL(2),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_18_case_1_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_18_case_1_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\",\n\"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"1",ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_18_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_18_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_18_case_1_local_14_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1))
vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_18_case_1_local_14_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_18_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_18_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(21)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"\"\tNat4 tempPersistent_\"",ROOT(4));

result = vpx_constant(PARAMETERS,"\"[] = {\n\"",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Direct_20_Value,1,1,TERMINAL(3),ROOT(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Full_20_Name,1,1,TERMINAL(3),ROOT(7));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(4),TERMINAL(8),TERMINAL(5),ROOT(9));

result = vpx_constant(PARAMETERS,"\"\n\t};\n\"",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_archive_2D_to_2D_list,1,1,TERMINAL(6),ROOT(11));

result = vpx_constant(PARAMETERS,"1",ROOT(12));

result = vpx_constant(PARAMETERS,"8",ROOT(13));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(11))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,9,14)
LOOPTERMINAL(1,12,15)
result = vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_18_case_1_local_14(PARAMETERS,LOOP(0),LIST(11),LOOP(1),TERMINAL(13),ROOT(14),ROOT(15));
REPEATFINISH
} else {
ROOTNULL(14,TERMINAL(9))
ROOTNULL(15,TERMINAL(12))
}

result = vpx_constant(PARAMETERS,"2",ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(14),TERMINAL(16),ROOT(17),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(17),TERMINAL(10),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(19),ROOT(20));

result = kSuccess;

OUTPUT(0,TERMINAL(20))
FOOTER(21)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_18_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_18_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_18(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_18(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_18_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_18_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_25_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_25_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,",",ROOT(2));

result = vpx_constant(PARAMETERS,"\"NULL\"",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_25_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_25_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,",tempPersistent_",ROOT(2));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(0),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_25_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_25_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_25_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_25_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_25(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_25(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(17)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"\ttempPersistent = create_persistentNode(",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Full_20_Name,1,1,TERMINAL(3),ROOT(5));

result = vpx_method_Escape_20_Text(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_method_VPL_20_String_20_To_20_C_20_String(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(7),ROOT(8));

result = vpx_constant(PARAMETERS,",environment);\n",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Direct_20_Value,1,1,TERMINAL(3),ROOT(10));

result = vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_25_case_1_local_10(PARAMETERS,TERMINAL(5),TERMINAL(10),ROOT(11),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(8),TERMINAL(11),TERMINAL(12),TERMINAL(9),ROOT(13));

result = vpx_constant(PARAMETERS,"\tadd_node(dictionary,tempPersistent->objectName,tempPersistent);\n\n",ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(13),TERMINAL(14),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(15),ROOT(16));

result = kSuccess;

OUTPUT(0,TERMINAL(16))
FOOTERSINGLECASE(17)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(30)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Persistent Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"Nat4\tloadPersistents_",ROOT(8));

result = vpx_constant(PARAMETERS,"(V_Environment environment)\n{\n\tV_Value tempPersistent = NULL;\n",ROOT(9));

result = vpx_constant(PARAMETERS,"\tV_Dictionary dictionary = environment->persistentsTable;\n\n",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(8),TERMINAL(7),TERMINAL(9),TERMINAL(10),ROOT(11));

result = vpx_constant(PARAMETERS,"\n",ROOT(12));

result = vpx_constant(PARAMETERS,"Class Data",ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(13),ROOT(14));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(14),ROOT(15),ROOT(16));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(16))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_15(PARAMETERS,LIST(16),ROOT(17));
LISTROOT(17,0)
REPEATFINISH
LISTROOTFINISH(17,0)
LISTROOTEND
} else {
ROOTEMPTY(17)
}

result = vpx_method_Lists_20_To_20_List(PARAMETERS,TERMINAL(17),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(4),TERMINAL(18),ROOT(19));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(19))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,12,20)
result = vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_18(PARAMETERS,LOOP(0),LIST(19),ROOT(20));
REPEATFINISH
} else {
ROOTNULL(20,TERMINAL(12))
}

result = vpx_constant(PARAMETERS,"\n",ROOT(21));

result = vpx_constant(PARAMETERS,"(V_Environment environment);\n",ROOT(22));

result = vpx_constant(PARAMETERS,"Nat4\tloadPersistents_",ROOT(23));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(23),TERMINAL(7),TERMINAL(22),ROOT(24));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(20),TERMINAL(21),TERMINAL(24),ROOT(25));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(25),TERMINAL(11),ROOT(26));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(19))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,26,27)
result = vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1_local_25(PARAMETERS,LOOP(0),LIST(19),ROOT(27));
REPEATFINISH
} else {
ROOTNULL(27,TERMINAL(26))
}

result = vpx_constant(PARAMETERS,"\treturn kNOERROR;\n\n}\n\n",ROOT(28));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(27),TERMINAL(28),ROOT(29));

result = kSuccess;

OUTPUT(0,TERMINAL(29))
FOOTER(30)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\n/* PERSISTENT DATA NOT FOUND! */\n\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_1_local_15_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_1_local_15_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Universal Data\"",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_1_local_15_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_1_local_15_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_1_local_15_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_1_local_15_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_1_local_22(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_1_local_22(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(23)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"\"\"\",environment);\n\"",ROOT(4));

result = vpx_constant(PARAMETERS,"\"\tresult = method_new(\"\"\"",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Full_20_Name,1,1,TERMINAL(3),ROOT(6));

result = vpx_method_Escape_20_Text(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(5),TERMINAL(7),TERMINAL(4),ROOT(8));

result = vpx_constant(PARAMETERS,"\");\n\n\"",ROOT(9));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(6),ROOT(10));

result = vpx_constant(PARAMETERS,"\"\tvpx_method_initialize(environment,result,\"",ROOT(11));

result = vpx_constant(PARAMETERS,"vpx_method_",ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(12),TERMINAL(10),ROOT(13));

result = vpx_constant(PARAMETERS,"\",\"",ROOT(14));

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(3),ROOT(15),ROOT(16));

result = vpx_method_VPL_20_String_20_To_20_C_20_String(PARAMETERS,TERMINAL(16),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,5,1,TERMINAL(11),TERMINAL(13),TERMINAL(14),TERMINAL(17),TERMINAL(9),ROOT(18));

result = vpx_constant(PARAMETERS,"\tif(result == NULL) return kERROR;\n",ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(8),TERMINAL(19),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(20),TERMINAL(18),ROOT(21));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(21),ROOT(22));

result = kSuccess;

OUTPUT(0,TERMINAL(22))
FOOTERSINGLECASE(23)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(26)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Export_20_Mode,0,1,ROOT(1));

result = vpx_match(PARAMETERS,"Experimental",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Universal Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(6),ROOT(7));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_constant(PARAMETERS,"Nat4\tloadUniversals_",ROOT(9));

result = vpx_constant(PARAMETERS,"(V_Environment environment)\n{\n\tV_Method result = NULL;\n\n",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(9),TERMINAL(8),TERMINAL(10),ROOT(11));

result = vpx_constant(PARAMETERS,"Class Data",ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(12),ROOT(13));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(13),ROOT(14),ROOT(15));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(15))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_1_local_15(PARAMETERS,LIST(15),ROOT(16));
LISTROOT(16,0)
REPEATFINISH
LISTROOTFINISH(16,0)
LISTROOTEND
} else {
ROOTEMPTY(16)
}

result = vpx_method_Lists_20_To_20_List(PARAMETERS,TERMINAL(16),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(5),TERMINAL(17),ROOT(18));

result = vpx_constant(PARAMETERS,"(V_Environment environment);\n",ROOT(19));

result = vpx_constant(PARAMETERS,"Nat4\tloadUniversals_",ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(20),TERMINAL(8),TERMINAL(19),ROOT(21));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(21),TERMINAL(11),ROOT(22));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(18))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,22,23)
result = vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_1_local_22(PARAMETERS,LOOP(0),LIST(18),ROOT(23));
REPEATFINISH
} else {
ROOTNULL(23,TERMINAL(22))
}

result = vpx_constant(PARAMETERS,"\treturn kNOERROR;\n\n}\n\n",ROOT(24));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(23),TERMINAL(24),ROOT(25));

result = kSuccess;

OUTPUT(0,TERMINAL(25))
FOOTER(26)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_2_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_2_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Universal Data\"",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_2_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_2_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_2_local_13_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_2_local_13_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_2_local_20(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_2_local_20(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(17)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"\"\"\",environment);\n\"",ROOT(4));

result = vpx_constant(PARAMETERS,"\"\tresult = method_new(\"\"\"",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Full_20_Name,1,1,TERMINAL(3),ROOT(6));

result = vpx_method_Escape_20_Text(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(5),TERMINAL(7),TERMINAL(4),ROOT(8));

result = vpx_constant(PARAMETERS,"_universal_load(result,environment);\n\n",ROOT(9));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(6),ROOT(10));

result = vpx_constant(PARAMETERS,"\tVPLU_",ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(11),TERMINAL(10),TERMINAL(9),ROOT(12));

result = vpx_constant(PARAMETERS,"\tif(result == NULL) return kERROR;\n",ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(8),TERMINAL(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(14),TERMINAL(12),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(15),ROOT(16));

result = kSuccess;

OUTPUT(0,TERMINAL(16))
FOOTERSINGLECASE(17)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(25)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Universal Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"Nat4\tloadUniversals_",ROOT(8));

result = vpx_constant(PARAMETERS,"(V_Environment environment)\n{\n\tV_Method result = NULL;\n\n",ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(8),TERMINAL(7),TERMINAL(9),ROOT(10));

result = vpx_constant(PARAMETERS,"Class Data",ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(11),ROOT(12));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(12),ROOT(13),ROOT(14));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(14))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_2_local_13(PARAMETERS,LIST(14),ROOT(15));
LISTROOT(15,0)
REPEATFINISH
LISTROOTFINISH(15,0)
LISTROOTEND
} else {
ROOTEMPTY(15)
}

result = vpx_method_Lists_20_To_20_List(PARAMETERS,TERMINAL(15),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(4),TERMINAL(16),ROOT(17));

result = vpx_constant(PARAMETERS,"(V_Environment environment);\n",ROOT(18));

result = vpx_constant(PARAMETERS,"Nat4\tloadUniversals_",ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(19),TERMINAL(7),TERMINAL(18),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(20),TERMINAL(10),ROOT(21));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(17))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,21,22)
result = vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_2_local_20(PARAMETERS,LOOP(0),LIST(17),ROOT(22));
REPEATFINISH
} else {
ROOTNULL(22,TERMINAL(21))
}

result = vpx_constant(PARAMETERS,"\treturn kNOERROR;\n\n}\n\n",ROOT(23));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(22),TERMINAL(23),ROOT(24));

result = kSuccess;

OUTPUT(0,TERMINAL(24))
FOOTER(25)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\n/* SECTION DATA NOT FOUND! */\n\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_All_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_All_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(27)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"\n",ROOT(3));

result = vpx_constant(PARAMETERS,"\n",ROOT(4));

result = vpx_constant(PARAMETERS,"(V_Environment environment)\n{",ROOT(5));

result = vpx_constant(PARAMETERS,"Nat4\tload_",ROOT(6));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(2),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(6),TERMINAL(7),TERMINAL(5),TERMINAL(3),ROOT(8));

result = vpx_constant(PARAMETERS,"Nat4\tload_",ROOT(9));

result = vpx_constant(PARAMETERS,"(V_Environment environment);\n",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(9),TERMINAL(7),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(11),TERMINAL(8),TERMINAL(4),ROOT(12));

result = vpx_constant(PARAMETERS,"\treturn kNOERROR;\n\n}\n\n",ROOT(13));

result = vpx_constant(PARAMETERS,"(environment);\n",ROOT(14));

result = vpx_constant(PARAMETERS,"\"\tloadClasses_\"",ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(15),TERMINAL(7),TERMINAL(14),ROOT(16));

result = vpx_constant(PARAMETERS,"(environment);\n",ROOT(17));

result = vpx_constant(PARAMETERS,"\"\tloadUniversals_\"",ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(18),TERMINAL(7),TERMINAL(17),ROOT(19));

result = vpx_constant(PARAMETERS,"(environment);\n",ROOT(20));

result = vpx_constant(PARAMETERS,"\"\tloadPersistents_\"",ROOT(21));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(21),TERMINAL(7),TERMINAL(20),ROOT(22));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(12),TERMINAL(16),ROOT(23));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(23),TERMINAL(19),ROOT(24));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(24),TERMINAL(22),ROOT(25));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(25),TERMINAL(13),ROOT(26));

result = kSuccess;

OUTPUT(0,TERMINAL(26))
FOOTER(27)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_All_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_All_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\n/* PERSISTENT DATA NOT FOUND! */\n\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_All(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_All_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_All_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_5_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Section_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_5_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_Section_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_5_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Delete,1,0,TERMINAL(3));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parent,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_method_Section_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_method_Section_20_Data_2F_C_20_Code_20_Export_case_1_local_4_case_1_local_5(PARAMETERS,TERMINAL(2),TERMINAL(3));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Export_20_Source,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Export_20_Header,2,0,TERMINAL(0),TERMINAL(1));
TERMINATEONFAILURE

result = vpx_method_Section_20_Data_2F_C_20_Code_20_Export_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_File_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_file,1,3,TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(6)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
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
FOOTER(5)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Coerce_20_FSSpec,1,1,TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FX_20_ScriptCode,1,1,TERMINAL(1),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_File_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_file,1,3,TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source_case_2_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source_case_2_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source_case_2_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_create_2D_text_2D_file,2,0,TERMINAL(2),TERMINAL(3));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_open_2D_file,1,1,TERMINAL(2),ROOT(4));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Export_20_Text,1,1,TERMINAL(0),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_write_2D_text,2,0,TERMINAL(4),TERMINAL(5));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_close_2D_file,1,0,TERMINAL(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(6)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Header(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_C_20_File_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Section_20_Data_2F_Export_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(14)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Header,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Load_20_Classes,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Export_20_Classes,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Export_20_Universals,1,1,TERMINAL(0),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Load_20_Universals,1,1,TERMINAL(0),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(5),TERMINAL(3),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(7),TERMINAL(2),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(8),TERMINAL(6),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Load_20_Persistents,1,1,TERMINAL(0),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(9),TERMINAL(10),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Load_20_All,1,1,TERMINAL(0),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(11),TERMINAL(12),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_Section_20_Data_2F_Full_20_Universal_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(1),ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Attributes_case_1_local_5_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Attributes_case_1_local_5_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Attributes_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Attributes_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Section_20_Data_2F_Get_20_Attributes_case_1_local_5_case_1_local_6(PARAMETERS,LIST(6),ROOT(7));
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

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Attributes_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Attributes_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Attributes_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Attributes_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_Get_20_Attributes_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Section_20_Data_2F_Get_20_Attributes_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Attributes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Attributes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Class Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Section_20_Data_2F_Get_20_Attributes_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
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

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Attributes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Attributes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Attributes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_Get_20_Attributes_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Section_20_Data_2F_Get_20_Attributes_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Class_20_Attributes_case_1_local_5_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Class_20_Attributes_case_1_local_5_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Class_20_Attributes_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Class_20_Attributes_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"Class Attribute Data",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Section_20_Data_2F_Get_20_Class_20_Attributes_case_1_local_5_case_1_local_6(PARAMETERS,LIST(6),ROOT(7));
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

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Class_20_Attributes_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Class_20_Attributes_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Class_20_Attributes_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Class_20_Attributes_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_Get_20_Class_20_Attributes_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Section_20_Data_2F_Get_20_Class_20_Attributes_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Class_20_Attributes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Class_20_Attributes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Class Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Section_20_Data_2F_Get_20_Class_20_Attributes_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
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

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Class_20_Attributes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Class_20_Attributes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Class_20_Attributes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_Get_20_Class_20_Attributes_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Section_20_Data_2F_Get_20_Class_20_Attributes_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Classes_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Classes_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Classes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Classes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Class Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Section_20_Data_2F_Get_20_Classes_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Classes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Classes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Classes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_Get_20_Classes_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Section_20_Data_2F_Get_20_Classes_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Methods_case_1_local_5_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Methods_case_1_local_5_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Methods_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Methods_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"Universal Data",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Section_20_Data_2F_Get_20_Methods_case_1_local_5_case_1_local_6(PARAMETERS,LIST(6),ROOT(7));
LISTROOT(7,0)
REPEATFINISH
LISTROOTFINISH(7,0)
LISTROOTEND
} else {
ROOTEMPTY(7)
}

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Methods(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Class Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Section_20_Data_2F_Get_20_Methods_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
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

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Persistents_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Persistents_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Persistents_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Persistents_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Persistent Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Section_20_Data_2F_Get_20_Persistents_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Persistents_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Persistents_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Persistents(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_Get_20_Persistents_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Section_20_Data_2F_Get_20_Persistents_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Universals_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Universals_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Universals_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Universals_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Universal Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Section_20_Data_2F_Get_20_Universals_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Universals_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Universals_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Universals(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_Get_20_Universals_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Section_20_Data_2F_Get_20_Universals_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_Initialize_20_Item_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(2));

result = vpx_constant(PARAMETERS,"\"Persistent Data\"",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(5));

result = vpx_constant(PARAMETERS,"\"Class Data\"",ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"\"Universal Data\"",ROOT(8));

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(9),TERMINAL(8),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(7),TERMINAL(10),TERMINAL(4),ROOT(11));

result = vpx_set(PARAMETERS,kVPXValue_Lists,TERMINAL(1),TERMINAL(11),ROOT(12));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(13)
}

enum opTrigger vpx_method_Section_20_Data_2F_Parse_20_Line(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,".h",ROOT(2));

result = vpx_constant(PARAMETERS,"\"\"\"\"",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(1),TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(6),TERMINAL(2),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_minus_2D_one,1,1,TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(6),TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(9),ROOT(11));

result = kSuccess;

FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Section_20_Data_2F_Remove_20_Self(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Universals,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Methods,1,1,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Self,1,0,LIST(2));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Self,1,0,LIST(3));
REPEATFINISH
} else {
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Self,1,0,LIST(1));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Persistents,1,1,TERMINAL(0),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Self,1,0,LIST(4));
REPEATFINISH
} else {
}

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Remove_20_Self,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Section_20_Data_2F_Update_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Persistents,1,1,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Value,1,0,LIST(2));
REPEATFINISH
} else {
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Value,1,0,LIST(1));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Class_20_Attributes,1,1,TERMINAL(0),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Value,1,0,LIST(3));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Section_20_Data_2F_Parse_20_CPX_20_Buffer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Section_20_Data_2F_Parse_20_CPX_20_Buffer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(16)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"clas",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(0),TERMINAL(1),ROOT(8));

result = vpx_instantiate(PARAMETERS,kVPXClass_Class_20_Data,1,1,NONE,ROOT(9));

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(10));

result = vpx_constant(PARAMETERS,"Class Data",ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(11),ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(10),TERMINAL(12),ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(13),TERMINAL(9));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(9),TERMINAL(13),ROOT(14));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Item_20_Data,2,0,TERMINAL(14),TERMINAL(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(14),TERMINAL(12));

result = vpx_constant(PARAMETERS,"( )",ROOT(15));

result = vpx_persistent(PARAMETERS,kVPXValue_Attribute_20_Indices,1,0,TERMINAL(15));

result = vpx_persistent(PARAMETERS,kVPXValue_Class_20_Attribute_20_Indices,1,0,TERMINAL(15));

result = kSuccess;

OUTPUT(0,TERMINAL(14))
OUTPUT(1,TERMINAL(8))
OUTPUT(2,TERMINAL(6))
FOOTERWITHNONE(16)
}

enum opTrigger vpx_method_Section_20_Data_2F_Parse_20_CPX_20_Buffer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Section_20_Data_2F_Parse_20_CPX_20_Buffer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"pers",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(0),TERMINAL(1),ROOT(8));

result = vpx_instantiate(PARAMETERS,kVPXClass_Persistent_20_Data,1,1,NONE,ROOT(9));

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(10));

result = vpx_constant(PARAMETERS,"Persistent Data",ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(11),ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(10),TERMINAL(12),ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(13),TERMINAL(9));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(9),TERMINAL(13),ROOT(14));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Item_20_Data,2,0,TERMINAL(14),TERMINAL(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(14),TERMINAL(12));

result = kSuccess;

OUTPUT(0,TERMINAL(14))
OUTPUT(1,TERMINAL(8))
OUTPUT(2,TERMINAL(6))
FOOTERWITHNONE(15)
}

enum opTrigger vpx_method_Section_20_Data_2F_Parse_20_CPX_20_Buffer_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Section_20_Data_2F_Parse_20_CPX_20_Buffer_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"8",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"end sect",TERMINAL(7));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
OUTPUT(2,TERMINAL(6))
FOOTER(8)
}

enum opTrigger vpx_method_Section_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
FINISHONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Section_20_Data_2F_Parse_20_CPX_20_Buffer_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Section_20_Data_2F_Parse_20_CPX_20_Buffer_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"comm",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"1",ROOT(8));

result = vpx_constant(PARAMETERS,"6",ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(6),TERMINAL(9),ROOT(10));

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,10,11)
result = vpx_method_Section_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_8(PARAMETERS,TERMINAL(5),LOOP(0),TERMINAL(8),ROOT(11));
REPEATFINISH

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
OUTPUT(2,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_Section_20_Data_2F_Parse_20_CPX_20_Buffer_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Section_20_Data_2F_Parse_20_CPX_20_Buffer_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_size,1,1,TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__3E3D_,2,0,TERMINAL(4),TERMINAL(5));
FINISHONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
OUTPUT(2,TERMINAL(4))
FOOTER(6)
}

enum opTrigger vpx_method_Section_20_Data_2F_Parse_20_CPX_20_Buffer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_Parse_20_CPX_20_Buffer_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Section_20_Data_2F_Parse_20_CPX_20_Buffer_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Section_20_Data_2F_Parse_20_CPX_20_Buffer_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Section_20_Data_2F_Parse_20_CPX_20_Buffer_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
vpx_method_Section_20_Data_2F_Parse_20_CPX_20_Buffer_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_Set_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Section_20_Data_2F_Set_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

enum opTrigger vpx_method_Section_20_Data_2F_Set_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Section_20_Data_2F_Set_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

enum opTrigger vpx_method_Section_20_Data_2F_Set_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_Set_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Section_20_Data_2F_Set_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_Section_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Section_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Section_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh_20_Data,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Section_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Section_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Editor,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Reinstall_20_Data,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Section_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Section_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Section_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Section_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Section_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_Set_20_Name_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Section_20_Data_2F_Set_20_Name_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Section_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5(PARAMETERS,LIST(4));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Section_20_Data_2F_Set_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Section_20_Data_2F_Set_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_Section_20_Data_2F_Set_20_Name_case_1_local_4(PARAMETERS,TERMINAL(4),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Section_20_Dirty,1,0,TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(3));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Section_20_Data_2F_Set_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Section_20_Data_2F_Set_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_Set_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_Set_20_Name_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Section_20_Data_2F_Set_20_Name_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_Make_20_Dirty_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Section_20_Data_2F_Make_20_Dirty_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
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

enum opTrigger vpx_method_Section_20_Data_2F_Make_20_Dirty_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Section_20_Data_2F_Make_20_Dirty_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Section_20_Data_2F_Make_20_Dirty(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_Make_20_Dirty_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Section_20_Data_2F_Make_20_Dirty_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_Make_20_Section_20_Dirty_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Section_20_Data_2F_Make_20_Section_20_Dirty_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Dirty,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Dirty,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Section_20_Data_2F_Make_20_Section_20_Dirty_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Section_20_Data_2F_Make_20_Section_20_Dirty_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Section_20_Data_2F_Make_20_Section_20_Dirty(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_Make_20_Section_20_Dirty_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Section_20_Data_2F_Make_20_Section_20_Dirty_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_Object_20_File_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Section_20_Data_2F_Object_20_File_20_Extension(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\".vpl\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_Object_20_File_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\'vplS\'",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_Set_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_File,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Section_20_Data,1,1,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Section_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_Get_20_All_20_Breakpoints(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Breakpoints,TERMINAL(3),ROOT(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Section_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_5(PARAMETERS,LIST(5),TERMINAL(0),ROOT(6));
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

enum opTrigger vpx_method_Section_20_Data_2F_Isolate(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(1),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(3))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Section_20_Data_2F_Integrate(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(1),ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Section_20_Data_2F_Have_20_Row_20_Values_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
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

enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Mark_20_Instances,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_13_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_13_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_13_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_13_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_13_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_13_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_13_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_13_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
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
result = vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_13_case_1_local_7(PARAMETERS,TERMINAL(0),LIST(7),ROOT(8));
REPEATFINISH
} else {
ROOTNULL(8,NULL)
}

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(8));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(9)
}

enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_13_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_13_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_15_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_15_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"( )",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_15_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_15_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_15_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_15_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_15_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_15_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_15_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_15_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_15_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_15_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(3));

result = vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_15_case_2_local_4(PARAMETERS,TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3E_,2,0,TERMINAL(3),TERMINAL(4));
FAILONSUCCESS

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_15_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_15_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(16)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(7),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_post_2D_load,3,0,TERMINAL(10),TERMINAL(8),TERMINAL(6));
TERMINATEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_9(PARAMETERS,TERMINAL(4),LIST(1));
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"Section Data",ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(3),TERMINAL(11),ROOT(12));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(12),ROOT(13),ROOT(14));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(14))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_13(PARAMETERS,TERMINAL(4),LIST(14),ROOT(15));
LISTROOT(15,0)
REPEATFINISH
LISTROOTFINISH(15,0)
LISTROOTEND
} else {
ROOTEMPTY(15)
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Unmark_20_Heap,1,0,TERMINAL(4));

result = vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1_local_15(PARAMETERS,TERMINAL(0),TERMINAL(15));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(16)
}

enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"The section \"",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Select_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"\" can not be deleted because it contains classes with existing instances.\"",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_show,3,0,TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = kSuccess;
FAILONSUCCESS

FOOTER(4)
}

enum opTrigger vpx_method_Section_20_Data_2F_Can_20_Delete_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Section_20_Data_2F_Can_20_Delete_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_VPXCPXParseTag_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPXCPXParseTag_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 262 825 }{ 217 337 } */
	tempAttribute = attribute_add("Class Name ID",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
/* Stop Universals */






Nat4	loadClasses_MySectionData(V_Environment environment);
Nat4	loadClasses_MySectionData(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Section Data",environment);
	if(result == NULL) return kERROR;
	VPLC_Section_20_Data_class_load(result,environment);
	result = class_new("VPXCPXParseTag",environment);
	if(result == NULL) return kERROR;
	VPLC_VPXCPXParseTag_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_MySectionData(V_Environment environment);
Nat4	loadUniversals_MySectionData(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Parse CPX Object",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Parse_20_CPX_20_Object,NULL);

	result = method_new("Parse Object",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Parse_20_Object,NULL);

	result = method_new("Section Data/C Code Export Classes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Classes,NULL);

	result = method_new("Section Data/C Code Export Universals",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Universals,NULL);

	result = method_new("Section Data/C Code Header",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_C_20_Code_20_Header,NULL);

	result = method_new("Section Data/C Code Load Classes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Classes,NULL);

	result = method_new("Section Data/C Code Load Persistents",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Persistents,NULL);

	result = method_new("Section Data/C Code Load Universals",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_Universals,NULL);

	result = method_new("Section Data/C Code Load All",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_C_20_Code_20_Load_20_All,NULL);

	result = method_new("Section Data/C Code Export",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_C_20_Code_20_Export,NULL);

	result = method_new("Section Data/C Code Export Source",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Source,NULL);

	result = method_new("Section Data/C Code Export Header",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_C_20_Code_20_Export_20_Header,NULL);

	result = method_new("Section Data/C File Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_C_20_File_20_Name,NULL);

	result = method_new("Section Data/Export Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Export_20_Text,NULL);

	result = method_new("Section Data/Full Universal Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Full_20_Universal_20_Name,NULL);

	result = method_new("Section Data/Get Attributes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Get_20_Attributes,NULL);

	result = method_new("Section Data/Get Class Attributes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Get_20_Class_20_Attributes,NULL);

	result = method_new("Section Data/Get Classes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Get_20_Classes,NULL);

	result = method_new("Section Data/Get Methods",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Get_20_Methods,NULL);

	result = method_new("Section Data/Get Persistents",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Get_20_Persistents,NULL);

	result = method_new("Section Data/Get Universals",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Get_20_Universals,NULL);

	result = method_new("Section Data/Initialize Item Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Initialize_20_Item_20_Data,NULL);

	result = method_new("Section Data/Parse Line",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Parse_20_Line,NULL);

	result = method_new("Section Data/Remove Self",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Remove_20_Self,NULL);

	result = method_new("Section Data/Update Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Update_20_Value,NULL);

	result = method_new("Section Data/Parse CPX Buffer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Parse_20_CPX_20_Buffer,NULL);

	result = method_new("Section Data/Set Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Set_20_Value,NULL);

	result = method_new("Section Data/Get Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Get_20_Value,NULL);

	result = method_new("Section Data/Get Section Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Get_20_Section_20_Data,NULL);

	result = method_new("Section Data/Set Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Set_20_Name,NULL);

	result = method_new("Section Data/Make Dirty",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Make_20_Dirty,NULL);

	result = method_new("Section Data/Make Section Dirty",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Make_20_Section_20_Dirty,NULL);

	result = method_new("Section Data/Object File Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Object_20_File_20_Name,NULL);

	result = method_new("Section Data/Object File Extension",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Object_20_File_20_Extension,NULL);

	result = method_new("Section Data/Object File Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Object_20_File_20_Type,NULL);

	result = method_new("Section Data/Set File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Set_20_File,NULL);

	result = method_new("Section Data/Get File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Get_20_File,NULL);

	result = method_new("Section Data/Get All Breakpoints",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Get_20_All_20_Breakpoints,NULL);

	result = method_new("Section Data/Isolate",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Isolate,NULL);

	result = method_new("Section Data/Integrate",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Integrate,NULL);

	result = method_new("Section Data/Have Row Values?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Have_20_Row_20_Values_3F_,NULL);

	result = method_new("Section Data/Can Delete?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Section_20_Data_2F_Can_20_Delete_3F_,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_MySectionData(V_Environment environment);
Nat4	loadPersistents_MySectionData(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_MySectionData(V_Environment environment);
Nat4	load_MySectionData(V_Environment environment)
{

	loadClasses_MySectionData(environment);
	loadUniversals_MySectionData(environment);
	loadPersistents_MySectionData(environment);
	return kNOERROR;

}

