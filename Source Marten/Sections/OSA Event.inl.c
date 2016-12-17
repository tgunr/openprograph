/* A VPL Section File */
/*

OSA Event.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeAppleScript,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Simple_20_Run_20_OSA_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Simple_20_Run_20_OSA_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_To_20_AEDesc(PARAMETERS,TERMINAL(0),NONE,ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_byte_2D_length,1,1,TERMINAL(0),ROOT(1));

result = vpx_extconstant(PARAMETERS,typeChar,ROOT(2));

PUTINTEGER(AECreateDesc( GETINTEGER(TERMINAL(2)),GETCONSTPOINTER(void,*,TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETPOINTER(8,AEDesc,*,ROOT(4),NONE)),3);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Simple_20_Run_20_OSA_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Simple_20_Run_20_OSA_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(0));

result = vpx_method_To_20_AEDesc(PARAMETERS,TERMINAL(0),NONE,ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kOSANullScript,ROOT(0));

result = vpx_method_New_20_UInt32(PARAMETERS,TERMINAL(0),NONE,ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_2_case_1_local_2(PARAMETERS,ROOT(2));
FAILONFAILURE

result = vpx_extconstant(PARAMETERS,kOSAModeNull,ROOT(3));

PUTINTEGER(OSACompile( GETPOINTER(4,ComponentInstanceRecord,*,ROOT(5),TERMINAL(0)),GETCONSTPOINTER(AEDesc,*,TERMINAL(1)),GETINTEGER(TERMINAL(3)),GETPOINTER(4,unsigned int,*,ROOT(6),TERMINAL(2))),4);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(4));
FAILONFAILURE

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(6),NONE,ROOT(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kOSANullScript,ROOT(0));

result = vpx_method_New_20_UInt32(PARAMETERS,TERMINAL(0),NONE,ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,errOSAScriptError,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kOSAErrorMessage,ROOT(4));

result = vpx_extconstant(PARAMETERS,typeChar,ROOT(5));

PUTINTEGER(OSAScriptError( GETPOINTER(4,ComponentInstanceRecord,*,ROOT(7),TERMINAL(0)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(5)),GETPOINTER(8,AEDesc,*,ROOT(8),TERMINAL(3))),6);
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kOSANullScript,ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
OUTPUT(1,TERMINAL(8))
FOOTER(10)
}

enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extmatch(PARAMETERS,kOSANullScript,TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_extconstant(PARAMETERS,typeChar,ROOT(4));

result = vpx_extconstant(PARAMETERS,kOSAModeNull,ROOT(5));

PUTINTEGER(OSADisplay( GETPOINTER(4,ComponentInstanceRecord,*,ROOT(7),TERMINAL(0)),GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(5)),GETPOINTER(8,AEDesc,*,ROOT(8),TERMINAL(3))),6);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1))
if(vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1))
vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_7_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_2(PARAMETERS,ROOT(3));
FAILONFAILURE

result = vpx_extconstant(PARAMETERS,kOSAModeNull,ROOT(4));

result = vpx_extconstant(PARAMETERS,kOSANullScript,ROOT(5));

PUTINTEGER(OSAExecute( GETPOINTER(4,ComponentInstanceRecord,*,ROOT(7),TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(5)),GETINTEGER(TERMINAL(4)),GETPOINTER(4,unsigned int,*,ROOT(8),TERMINAL(3))),6);
result = kSuccess;

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(8),NONE,ROOT(9),ROOT(10));

result = vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_7(PARAMETERS,TERMINAL(0),TERMINAL(6),TERMINAL(10),TERMINAL(2),ROOT(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
OUTPUT(1,TERMINAL(12))
FOOTERSINGLECASEWITHNONE(13)
}

enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kOSANullScript,TERMINAL(0));
TERMINATEONSUCCESS

PUTINTEGER(OSADispose( GETPOINTER(4,ComponentInstanceRecord,*,ROOT(3),TERMINAL(1)),GETINTEGER(TERMINAL(0))),2);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kOSANullScript,TERMINAL(0));
TERMINATEONSUCCESS

PUTINTEGER(OSADispose( GETPOINTER(4,ComponentInstanceRecord,*,ROOT(3),TERMINAL(1)),GETINTEGER(TERMINAL(0))),2);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_5_case_1_local_2(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_5_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

result = vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(3),TERMINAL(2),ROOT(4),ROOT(5));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(6));

result = vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(3),TERMINAL(4));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(5))
FOOTER(7)
}

enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

PUTINTEGER(AEDisposeDesc( GETPOINTER(8,AEDesc,*,ROOT(6),TERMINAL(2))),5);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(7)
}

enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method_Simple_20_Run_20_OSA_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTINTEGER(AEDisposeDesc( GETPOINTER(8,AEDesc,*,ROOT(3),TERMINAL(0))),2);
result = kSuccess;

PUTINTEGER(CloseComponent( GETPOINTER(4,ComponentInstanceRecord,*,ROOT(5),TERMINAL(1))),4);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kOSAComponentType,ROOT(2));

result = vpx_method_Simple_20_Run_20_OSA_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(3));

PUTPOINTER(ComponentInstanceRecord,*,OpenDefaultComponent( GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(3))),4);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_method_Simple_20_Run_20_OSA_case_1_local_6(PARAMETERS,TERMINAL(0),ROOT(5));
NEXTCASEONFAILURE

result = vpx_method_Simple_20_Run_20_OSA_case_1_local_7(PARAMETERS,ROOT(6));
NEXTCASEONFAILURE

result = vpx_method_Simple_20_Run_20_OSA_case_1_local_8(PARAMETERS,TERMINAL(4),TERMINAL(5),TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_method_Simple_20_Run_20_OSA_case_1_local_9(PARAMETERS,TERMINAL(5),TERMINAL(4));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_method_From_20_AEDesc(PARAMETERS,TERMINAL(8),ROOT(9));
NEXTCASEONFAILURE

PUTINTEGER(AEDisposeDesc( GETPOINTER(8,AEDesc,*,ROOT(11),TERMINAL(8))),10);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(12)
}

enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Simple_20_Run_20_OSA_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Simple_20_Run_20_OSA(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Simple_20_Run_20_OSA_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Simple_20_Run_20_OSA_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}




	Nat4 tempAttribute_OSA_20_Compile_2F_Component_20_Type[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X61736372
	};
	Nat4 tempAttribute_OSA_20_Compile_2F_Original_20_Text[] = {
0000000000, 0X000000A4, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X86000000, 0X74656C6C, 0X20617070, 0X6C696361,
0X74696F6E, 0X20225A65, 0X70686972, 0X20537461, 0X74696F6E, 0X22206F66, 0X206D6163, 0X68696E65,
0X20226570, 0X70633A2F, 0X2F416D6F, 0X6E2E6C6F, 0X63616C22, 0X0A096669, 0X7265207A, 0X65706869,
0X7220636F, 0X6D6D616E, 0X6420226D, 0X75746522, 0X206F6620, 0X636F6D70, 0X6F6E656E, 0X74202253,
0X6F6E795F, 0X54565F4B, 0X56323758, 0X42523335, 0X220A656E, 0X64207465, 0X6C6C0000
	};
	Nat4 tempAttribute_OSA_20_Compile_2F_Ref_20_ID[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_OSA_20_Compile_2F_Result_20_ID[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_OSA_20_Compile_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_OSA_20_Compile_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 251 501 }{ 200 300 } */
	tempAttribute = attribute_add("Component Type",tempClass,tempAttribute_OSA_20_Compile_2F_Component_20_Type,environment);
	tempAttribute = attribute_add("Original Text",tempClass,tempAttribute_OSA_20_Compile_2F_Original_20_Text,environment);
	tempAttribute = attribute_add("Text Descriptor",tempClass,NULL,environment);
	tempAttribute = attribute_add("Component Ref",tempClass,NULL,environment);
	tempAttribute = attribute_add("Ref ID",tempClass,tempAttribute_OSA_20_Compile_2F_Ref_20_ID,environment);
	tempAttribute = attribute_add("Result Ref",tempClass,NULL,environment);
	tempAttribute = attribute_add("Result ID",tempClass,tempAttribute_OSA_20_Compile_2F_Result_20_ID,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 178 379 }{ 344 310 } */
enum opTrigger vpx_method_OSA_20_Compile_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_OSA_20_Compile,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Original_20_Text,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Component,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Compile_20_Text,1,0,TERMINAL(0));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeAppleScript,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_To_20_AEDesc(PARAMETERS,TERMINAL(0),NONE,ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_byte_2D_length,1,1,TERMINAL(0),ROOT(1));

result = vpx_extconstant(PARAMETERS,typeChar,ROOT(2));

PUTINTEGER(AECreateDesc( GETINTEGER(TERMINAL(2)),GETCONSTPOINTER(void,*,TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETPOINTER(8,AEDesc,*,ROOT(4),NONE)),3);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(0));

result = vpx_method_To_20_AEDesc(PARAMETERS,TERMINAL(0),NONE,ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kOSANullScript,ROOT(0));

result = vpx_method_New_20_UInt32(PARAMETERS,TERMINAL(0),NONE,ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_2_case_1_local_2(PARAMETERS,ROOT(2));
FAILONFAILURE

result = vpx_extconstant(PARAMETERS,kOSAModeNull,ROOT(3));

PUTINTEGER(OSACompile( GETPOINTER(4,ComponentInstanceRecord,*,ROOT(5),TERMINAL(0)),GETCONSTPOINTER(AEDesc,*,TERMINAL(1)),GETINTEGER(TERMINAL(3)),GETPOINTER(4,unsigned int,*,ROOT(6),TERMINAL(2))),4);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(4));
FAILONFAILURE

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(6),NONE,ROOT(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kOSANullScript,ROOT(0));

result = vpx_method_New_20_UInt32(PARAMETERS,TERMINAL(0),NONE,ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,errOSAScriptError,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kOSAErrorMessage,ROOT(4));

result = vpx_extconstant(PARAMETERS,typeChar,ROOT(5));

PUTINTEGER(OSAScriptError( GETPOINTER(4,ComponentInstanceRecord,*,ROOT(7),TERMINAL(0)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(5)),GETPOINTER(8,AEDesc,*,ROOT(8),TERMINAL(3))),6);
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kOSANullScript,ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
OUTPUT(1,TERMINAL(8))
FOOTER(10)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extmatch(PARAMETERS,kOSANullScript,TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_extconstant(PARAMETERS,typeChar,ROOT(4));

result = vpx_extconstant(PARAMETERS,kOSAModeNull,ROOT(5));

PUTINTEGER(OSADisplay( GETPOINTER(4,ComponentInstanceRecord,*,ROOT(7),TERMINAL(0)),GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(5)),GETPOINTER(8,AEDesc,*,ROOT(8),TERMINAL(3))),6);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1))
if(vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1))
vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_7_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1);
return outcome;
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_2(PARAMETERS,ROOT(3));
FAILONFAILURE

result = vpx_extconstant(PARAMETERS,kOSAModeNull,ROOT(4));

result = vpx_extconstant(PARAMETERS,kOSANullScript,ROOT(5));

PUTINTEGER(OSAExecute( GETPOINTER(4,ComponentInstanceRecord,*,ROOT(7),TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(5)),GETINTEGER(TERMINAL(4)),GETPOINTER(4,unsigned int,*,ROOT(8),TERMINAL(3))),6);
result = kSuccess;

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(8),NONE,ROOT(9),ROOT(10));

result = vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3_case_1_local_7(PARAMETERS,TERMINAL(0),TERMINAL(6),TERMINAL(10),TERMINAL(2),ROOT(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
OUTPUT(1,TERMINAL(12))
FOOTERSINGLECASEWITHNONE(13)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kOSANullScript,TERMINAL(0));
TERMINATEONSUCCESS

PUTINTEGER(OSADispose( GETPOINTER(4,ComponentInstanceRecord,*,ROOT(3),TERMINAL(1)),GETINTEGER(TERMINAL(0))),2);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kOSANullScript,TERMINAL(0));
TERMINATEONSUCCESS

PUTINTEGER(OSADispose( GETPOINTER(4,ComponentInstanceRecord,*,ROOT(3),TERMINAL(1)),GETINTEGER(TERMINAL(0))),2);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_5_case_1_local_2(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_5_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

result = vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(3),TERMINAL(2),ROOT(4),ROOT(5));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(6));

result = vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(3),TERMINAL(4));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(5))
FOOTER(7)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

PUTINTEGER(AEDisposeDesc( GETPOINTER(8,AEDesc,*,ROOT(6),TERMINAL(2))),5);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(7)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTINTEGER(AEDisposeDesc( GETPOINTER(8,AEDesc,*,ROOT(3),TERMINAL(0))),2);
result = kSuccess;

PUTINTEGER(CloseComponent( GETPOINTER(4,ComponentInstanceRecord,*,ROOT(5),TERMINAL(1))),4);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kOSAComponentType,ROOT(2));

result = vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(3));

PUTPOINTER(ComponentInstanceRecord,*,OpenDefaultComponent( GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(3))),4);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_6(PARAMETERS,TERMINAL(0),ROOT(5));
NEXTCASEONFAILURE

result = vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_7(PARAMETERS,ROOT(6));
NEXTCASEONFAILURE

result = vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_8(PARAMETERS,TERMINAL(4),TERMINAL(5),TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1_local_9(PARAMETERS,TERMINAL(5),TERMINAL(4));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_method_From_20_AEDesc(PARAMETERS,TERMINAL(8),ROOT(9));
NEXTCASEONFAILURE

PUTINTEGER(AEDisposeDesc( GETPOINTER(8,AEDesc,*,ROOT(11),TERMINAL(8))),10);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(12)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Open_20_Component(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kOSAComponentType,ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Component_20_Type,TERMINAL(0),ROOT(2),ROOT(3));

PUTPOINTER(ComponentInstanceRecord,*,OpenDefaultComponent( GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(3))),4);
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Component_20_Ref,TERMINAL(0),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Compile_20_Text_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Compile_20_Text_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Text_20_Descriptor,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Compile_20_Text_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Compile_20_Text_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Original_20_Text,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_To_20_AEDesc(PARAMETERS,TERMINAL(2),NONE,ROOT(3));
FAILONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Text_20_Descriptor,TERMINAL(0),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Compile_20_Text_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Compile_20_Text_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_OSA_20_Compile_2F_Compile_20_Text_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_OSA_20_Compile_2F_Compile_20_Text_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Compile_20_Text_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Compile_20_Text_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Ref_20_ID,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_New_20_UInt32(PARAMETERS,TERMINAL(2),NONE,ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Compile_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(12)
INPUT(0,0)
result = kSuccess;

result = vpx_method_OSA_20_Compile_2F_Compile_20_Text_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_method_OSA_20_Compile_2F_Compile_20_Text_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_extconstant(PARAMETERS,kOSAModeNull,ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Component_20_Ref,TERMINAL(0),ROOT(4),ROOT(5));

PUTINTEGER(OSACompile( GETPOINTER(4,ComponentInstanceRecord,*,ROOT(7),TERMINAL(5)),GETCONSTPOINTER(AEDesc,*,TERMINAL(1)),GETINTEGER(TERMINAL(3)),GETPOINTER(4,unsigned int,*,ROOT(8),TERMINAL(2))),6);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(6));
FAILONFAILURE

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(8),NONE,ROOT(9),ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Ref_20_ID,TERMINAL(0),TERMINAL(10),ROOT(11));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(12)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Compile_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Compile_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Text_20_Descriptor,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Compile_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Compile_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Original_20_Text,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_To_20_AEDesc(PARAMETERS,TERMINAL(2),NONE,ROOT(3));
FAILONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Text_20_Descriptor,TERMINAL(0),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Compile_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Compile_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_OSA_20_Compile_2F_Compile_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_OSA_20_Compile_2F_Compile_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Compile_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Compile_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Ref_20_ID,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_New_20_UInt32(PARAMETERS,TERMINAL(2),NONE,ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Compile(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(14)
INPUT(0,0)
result = kSuccess;

result = vpx_method_OSA_20_Compile_2F_Compile_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_method_OSA_20_Compile_2F_Compile_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_extconstant(PARAMETERS,kOSAModeNull,ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Component_20_Ref,TERMINAL(0),ROOT(4),ROOT(5));

PUTINTEGER(OSACompile( GETPOINTER(4,ComponentInstanceRecord,*,ROOT(7),TERMINAL(5)),GETCONSTPOINTER(AEDesc,*,TERMINAL(1)),GETINTEGER(TERMINAL(3)),GETPOINTER(4,unsigned int,*,ROOT(8),TERMINAL(2))),6);
result = kSuccess;

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(8),NONE,ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Extract_20_Error_3F_,3,2,TERMINAL(0),TERMINAL(6),TERMINAL(10),ROOT(11),ROOT(12));
FAILONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Ref_20_ID,TERMINAL(0),TERMINAL(11),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTERSINGLECASEWITHNONE(14)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Execute_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Execute_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Result_20_ID,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_New_20_UInt32(PARAMETERS,TERMINAL(2),NONE,ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Execute_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Execute_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(0));

result = vpx_method_To_20_AEDesc(PARAMETERS,TERMINAL(0),TERMINAL(0),ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Execute_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_OSA_20_Compile_2F_Execute_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,errOSAScriptError,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kOSAErrorMessage,ROOT(4));

result = vpx_extconstant(PARAMETERS,typeChar,ROOT(5));

PUTINTEGER(OSAScriptError( GETPOINTER(4,ComponentInstanceRecord,*,ROOT(7),TERMINAL(0)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(5)),GETPOINTER(8,AEDesc,*,ROOT(8),TERMINAL(3))),6);
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kOSANullScript,ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
OUTPUT(1,TERMINAL(8))
FOOTER(10)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Execute_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_OSA_20_Compile_2F_Execute_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extmatch(PARAMETERS,kOSANullScript,TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_extconstant(PARAMETERS,typeChar,ROOT(4));

result = vpx_extconstant(PARAMETERS,kOSAModeNull,ROOT(5));

PUTINTEGER(OSADisplay( GETPOINTER(4,ComponentInstanceRecord,*,ROOT(7),TERMINAL(0)),GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(5)),GETPOINTER(8,AEDesc,*,ROOT(8),TERMINAL(3))),6);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Execute_case_1_local_10_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_OSA_20_Compile_2F_Execute_case_1_local_10_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Execute_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_OSA_20_Compile_2F_Execute_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_OSA_20_Compile_2F_Execute_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1))
if(vpx_method_OSA_20_Compile_2F_Execute_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1))
vpx_method_OSA_20_Compile_2F_Execute_case_1_local_10_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1);
return outcome;
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Execute_case_1_local_12_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Execute_case_1_local_12_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_From_20_AEDesc(PARAMETERS,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Execute_case_1_local_12_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Execute_case_1_local_12_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Execute_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Execute_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_OSA_20_Compile_2F_Execute_case_1_local_12_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_OSA_20_Compile_2F_Execute_case_1_local_12_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Execute(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(20)
INPUT(0,0)
result = kSuccess;

result = vpx_method_OSA_20_Compile_2F_Execute_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_method_OSA_20_Compile_2F_Execute_case_1_local_3(PARAMETERS,ROOT(2));
FAILONFAILURE

result = vpx_extconstant(PARAMETERS,kOSANullScript,ROOT(3));

result = vpx_extconstant(PARAMETERS,kOSAModeNull,ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Ref_20_ID,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Component_20_Ref,TERMINAL(0),ROOT(7),ROOT(8));

PUTINTEGER(OSAExecute( GETPOINTER(4,ComponentInstanceRecord,*,ROOT(10),TERMINAL(8)),GETINTEGER(TERMINAL(6)),GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(4)),GETPOINTER(4,unsigned int,*,ROOT(11),TERMINAL(1))),9);
result = kSuccess;

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(11),NONE,ROOT(12),ROOT(13));

result = vpx_method_OSA_20_Compile_2F_Execute_case_1_local_10(PARAMETERS,TERMINAL(8),TERMINAL(9),TERMINAL(13),TERMINAL(2),ROOT(14),ROOT(15));

result = vpx_set(PARAMETERS,kVPXValue_Result_20_Ref,TERMINAL(0),TERMINAL(14),ROOT(16));

result = vpx_method_OSA_20_Compile_2F_Execute_case_1_local_12(PARAMETERS,TERMINAL(15),ROOT(17));

PUTINTEGER(AEDisposeDesc( GETPOINTER(8,AEDesc,*,ROOT(19),TERMINAL(15))),18);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(17))
FOOTERSINGLECASEWITHNONE(20)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(0));

result = vpx_method_To_20_AEDesc(PARAMETERS,TERMINAL(0),TERMINAL(0),ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F__case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F__case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,errOSAScriptError,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kOSAErrorMessage,ROOT(4));

result = vpx_extconstant(PARAMETERS,typeChar,ROOT(5));

PUTINTEGER(OSAScriptError( GETPOINTER(4,ComponentInstanceRecord,*,ROOT(7),TERMINAL(0)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(5)),GETPOINTER(8,AEDesc,*,ROOT(8),TERMINAL(3))),6);
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kOSANullScript,ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
OUTPUT(1,TERMINAL(8))
FOOTER(10)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F__case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F__case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F__case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F__case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extmatch(PARAMETERS,kOSANullScript,TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_extconstant(PARAMETERS,typeChar,ROOT(4));

result = vpx_extconstant(PARAMETERS,kOSAModeNull,ROOT(5));

PUTINTEGER(OSADisplay( GETPOINTER(4,ComponentInstanceRecord,*,ROOT(7),TERMINAL(0)),GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(5)),GETPOINTER(8,AEDesc,*,ROOT(8),TERMINAL(3))),6);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F__case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1))
if(vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F__case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1))
vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F__case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1);
return outcome;
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F__case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F__case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_From_20_AEDesc(PARAMETERS,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F__case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F__case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F__case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F__case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F__case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F__case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F__case_1_local_2(PARAMETERS,ROOT(3));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Component_20_Ref,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F__case_1_local_4(PARAMETERS,TERMINAL(5),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F__case_1_local_5(PARAMETERS,TERMINAL(7),ROOT(8));

PUTINTEGER(AEDisposeDesc( GETPOINTER(8,AEDesc,*,ROOT(10),TERMINAL(7))),9);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(8))
FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Get_20_Original_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Original_20_Text,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Set_20_Original_20_Text_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Set_20_Original_20_Text_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Text_20_Descriptor,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

PUTINTEGER(AEDisposeDesc( GETPOINTER(8,AEDesc,*,ROOT(4),TERMINAL(2))),3);
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Text_20_Descriptor,TERMINAL(1),TERMINAL(5),ROOT(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Set_20_Original_20_Text_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_OSA_20_Compile_2F_Set_20_Original_20_Text_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Ref_20_ID,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Set_20_Original_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Original_20_Text,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_OSA_20_Compile_2F_Set_20_Original_20_Text_case_1_local_3(PARAMETERS,TERMINAL(2));

result = vpx_method_OSA_20_Compile_2F_Set_20_Original_20_Text_case_1_local_4(PARAMETERS,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Get_20_Component_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Component_20_Type,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_Set_20_Component_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Component_20_Type,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_TEST_20_Script_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_TEST_20_Script_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"tell application \"Finder\" to activate",ROOT(0));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_TEST_20_Script_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_OSA_20_Compile_2F_TEST_20_Script_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"tell application \"Zephir Station\" of machine \"eppc://Amon.local\"\n\tget commandList\nend tell",ROOT(0));

result = vpx_constant(PARAMETERS,"\"tell application \"Zephir Station\" of machine \"eppc://Amon.local\"\n\tfire zephir command \"mute\" of component \"Sony_TV_KV27XBR35\"\nend tell\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_OSA_20_Compile_2F_TEST_20_Script(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_OSA_20_Compile_2F_TEST_20_Script_case_1(environment, &outcome, inputRepeat, contextIndex,root0))
vpx_method_OSA_20_Compile_2F_TEST_20_Script_case_2(environment, &outcome, inputRepeat, contextIndex,root0);
return outcome;
}

enum opTrigger vpx_method_OSA_20_Compile_2F_TEST(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(3)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_OSA_20_Compile,1,1,NONE,ROOT(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Component,1,0,TERMINAL(0));

result = vpx_call_context_method(PARAMETERS,kVPXMethod_TEST_20_Script,0,1,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Original_20_Text,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Compile_20_Text,1,0,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Execute,1,1,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

/* Stop Universals */






Nat4	loadClasses_OSA_20_Event(V_Environment environment);
Nat4	loadClasses_OSA_20_Event(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("OSA Compile",environment);
	if(result == NULL) return kERROR;
	VPLC_OSA_20_Compile_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_OSA_20_Event(V_Environment environment);
Nat4	loadUniversals_OSA_20_Event(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Simple Run OSA",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Simple_20_Run_20_OSA,NULL);

	result = method_new("OSA Compile/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_OSA_20_Compile_2F_New,NULL);

	result = method_new("OSA Compile/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_OSA_20_Compile_2F_Open,NULL);

	result = method_new("OSA Compile/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_OSA_20_Compile_2F_Close,NULL);

	result = method_new("OSA Compile/Simple Run OSA",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_OSA_20_Compile_2F_Simple_20_Run_20_OSA,NULL);

	result = method_new("OSA Compile/Open Component",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_OSA_20_Compile_2F_Open_20_Component,NULL);

	result = method_new("OSA Compile/Compile Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_OSA_20_Compile_2F_Compile_20_Text,NULL);

	result = method_new("OSA Compile/Compile",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_OSA_20_Compile_2F_Compile,NULL);

	result = method_new("OSA Compile/Execute",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_OSA_20_Compile_2F_Execute,NULL);

	result = method_new("OSA Compile/Extract Error?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_OSA_20_Compile_2F_Extract_20_Error_3F_,NULL);

	result = method_new("OSA Compile/Get Original Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_OSA_20_Compile_2F_Get_20_Original_20_Text,NULL);

	result = method_new("OSA Compile/Set Original Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_OSA_20_Compile_2F_Set_20_Original_20_Text,NULL);

	result = method_new("OSA Compile/Get Component Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_OSA_20_Compile_2F_Get_20_Component_20_Type,NULL);

	result = method_new("OSA Compile/Set Component Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_OSA_20_Compile_2F_Set_20_Component_20_Type,NULL);

	result = method_new("OSA Compile/TEST Script",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_OSA_20_Compile_2F_TEST_20_Script,NULL);

	result = method_new("OSA Compile/TEST",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_OSA_20_Compile_2F_TEST,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_OSA_20_Event(V_Environment environment);
Nat4	loadPersistents_OSA_20_Event(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_OSA_20_Event(V_Environment environment);
Nat4	load_OSA_20_Event(V_Environment environment)
{

	loadClasses_OSA_20_Event(environment);
	loadUniversals_OSA_20_Event(environment);
	loadPersistents_OSA_20_Event(environment);
	return kNOERROR;

}

