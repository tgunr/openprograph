/* A VPL Section File */
/*

Text Document.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_TEST_20_Read_20_Text_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_Read_20_Text_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(1)
result = kSuccess;

result = vpx_method_Open_20_Text_20_File(PARAMETERS,NONE);

result = kSuccess;

FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_TEST_20_Read_20_Text_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_Read_20_Text_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kWindowModalityAppModal,ROOT(0));

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_constant(PARAMETERS,"Nav Read Text Callback",ROOT(2));

result = vpx_constant(PARAMETERS,"(  )",ROOT(3));

result = vpx_method_Nav_20_Get_20_File(PARAMETERS,TERMINAL(3),TERMINAL(0),TERMINAL(1),TERMINAL(2));
TERMINATEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_TEST_20_Read_20_Text_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_TEST_20_Read_20_Text_20_File_case_1(environment, &outcome, inputRepeat, contextIndex))
vpx_method_TEST_20_Read_20_Text_20_File_case_2(environment, &outcome, inputRepeat, contextIndex);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Read_20_Text_20_Callback_case_1_local_2_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Text_20_Callback_case_1_local_2_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Nav_20_Read_20_Text_20_Callback_case_1_local_2_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Text_20_Callback_case_1_local_2_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Nav_20_Read_20_Text_20_Callback_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Text_20_Callback_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Read_20_Text_20_Callback_case_1_local_2_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Nav_20_Read_20_Text_20_Callback_case_1_local_2_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Read_20_Text_20_Callback_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Nav_20_Read_20_Text_20_Callback_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Canceled_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reply_20_Selection,1,1,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Items:",ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Nav_20_Read_20_Text_20_Callback_case_1_local_2_case_1_local_6(PARAMETERS,LIST(2),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
OUTPUT(2,TERMINAL(2))
FOOTER(5)
}

enum opTrigger vpx_method_Nav_20_Read_20_Text_20_Callback_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Nav_20_Read_20_Text_20_Callback_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Cancel",ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_constant(PARAMETERS,"(  )",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
OUTPUT(2,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Nav_20_Read_20_Text_20_Callback_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Nav_20_Read_20_Text_20_Callback_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Read_20_Text_20_Callback_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2))
vpx_method_Nav_20_Read_20_Text_20_Callback_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Read_20_Text_20_Callback_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Read_20_Text_20_Callback_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Nav_20_Read_20_Text_20_Callback_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Nav_20_Read_20_Text_20_Callback_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"User Selected: \"",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(3));

result = vpx_method_Nav_20_Read_20_Text_20_Callback_case_1_local_3_case_1_local_5(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Nav_20_Read_20_Text_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Nav_20_Read_20_Text_20_Callback_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2),ROOT(3));

result = vpx_method_Nav_20_Read_20_Text_20_Callback_case_1_local_3(PARAMETERS,TERMINAL(1),TERMINAL(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Read_20_Text_20_File,1,1,TERMINAL(4),ROOT(5));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_log_2D_string_2D_return,1,0,TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Open_20_Text_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Open_20_Text_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Text_20_File_20_Window,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_With_20_File,2,0,TERMINAL(1),TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Open_20_Text_20_File_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Open_20_Text_20_File_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(13)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kTXNTextensionFile,ROOT(0));

result = vpx_extconstant(PARAMETERS,kTXNTextFile,ROOT(1));

result = vpx_extconstant(PARAMETERS,kTXNPictureFile,ROOT(2));

result = vpx_extconstant(PARAMETERS,kTXNMovieFile,ROOT(3));

result = vpx_extconstant(PARAMETERS,kTXNSoundFile,ROOT(4));

result = vpx_extconstant(PARAMETERS,kTXNAIFFFile,ROOT(5));

result = vpx_extconstant(PARAMETERS,kTXNUnicodeTextFile,ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,7,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"\'RTF \'",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(7),TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(8),ROOT(11));

result = vpx_constant(PARAMETERS,"(  )",ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Open_20_Text_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Open_20_Text_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Open_20_Text_20_File_case_2_local_2(PARAMETERS,ROOT(1));

result = vpx_extconstant(PARAMETERS,kWindowModalityNone,ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_constant(PARAMETERS,"Open Text File Callback",ROOT(4));

result = vpx_method_New_20_Callback(PARAMETERS,TERMINAL(4),NONE,NONE,ROOT(5));

result = vpx_method_Nav_20_Get_20_File(PARAMETERS,TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(5));
TERMINATEONFAILURE

result = kSuccess;

FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Open_20_Text_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Text_20_File_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Open_20_Text_20_File_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Open_20_Text_20_File_20_Callback_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Open_20_Text_20_File_20_Callback_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Open_20_Text_20_File(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Open_20_Text_20_File_20_Callback_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Open_20_Text_20_File_20_Callback_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Open_20_Text_20_File_20_Callback_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Open_20_Text_20_File_20_Callback_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Text_20_File_20_Callback_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Open_20_Text_20_File_20_Callback_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Open_20_Text_20_File_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Open_20_Text_20_File_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Canceled_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reply_20_Selection,1,1,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Open_20_Text_20_File_20_Callback_case_1_local_5(PARAMETERS,LIST(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Open_20_Text_20_File_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Open_20_Text_20_File_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Open_20_Text_20_File_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Text_20_File_20_Callback_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Open_20_Text_20_File_20_Callback_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_New_20_Text_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Text_20_File_20_Window,1,1,NONE,ROOT(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(1)
}




	Nat4 tempAttribute_Text_20_File_20_Window_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X10000000, 0X54657874, 0X2046696C, 0X65205769,
0X6E646F77, 0000000000
	};
	Nat4 tempAttribute_Text_20_File_20_Window_2F_Window_20_Event_20_Handler[] = {
0000000000, 0X000005A8, 0X00000114, 0X00000040, 0X00000014, 0X00000688, 0X00000684, 0X0000067C,
0X00000418, 0X00000634, 0X00000630, 0X00000628, 0X00000414, 0X000005E0, 0X000005DC, 0X000005D4,
0X00000410, 0X0000058C, 0X00000588, 0X00000580, 0X0000040C, 0X00000538, 0X00000534, 0X0000052C,
0X00000408, 0X000004E4, 0X000004E0, 0X000004D8, 0X00000404, 0X00000490, 0X0000048C, 0X00000484,
0X00000400, 0X0000043C, 0X00000438, 0X00000430, 0X000003FC, 0X000003F4, 0X00000180, 0X0000017C,
0X000003AC, 0X00000168, 0X00000380, 0X00000164, 0X00000354, 0X0000033C, 0X00000314, 0X0000031C,
0X000002FC, 0X000002F4, 0X0000015C, 0X000002CC, 0X000002B4, 0X0000028C, 0X00000294, 0X00000210,
0X00000268, 0X00000250, 0X00000228, 0X00000230, 0X0000020C, 0X00000204, 0X00000158, 0X000001D4,
0X00000154, 0X000001A4, 0X0000014C, 0X00000128, 0X00000130, 0X22000008, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000014C, 0X00000011, 0X00000134, 0X43617262, 0X6F6E2045, 0X76656E74,
0X2043616C, 0X6C626163, 0X6B000000, 0X00000190, 0000000000, 0X000001C0, 0X000001F0, 0X000002E0,
0000000000, 0X0000036C, 0X00000398, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C8,
0X000003E0, 0000000000, 0000000000, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000001AC, 0X11000000, 0X6B457665, 0X6E745769, 0X6E646F77, 0X436C6173, 0X73000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X10000000, 0X2F434520,
0X48616E64, 0X6C652045, 0X76656E74, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0X00000278, 0X13000008, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000250, 0X00000001, 0X00000234, 0X41747472, 0X69627574, 0X6520496E,
0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X00000254, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000270, 0X05000000, 0X4F776E65, 0X72000000, 0X13000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000002B4, 0X00000001, 0X00000298, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000002B8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000002D4, 0X09000000, 0X54686520, 0X4576656E, 0X74000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002FC, 0X00000001, 0X00000300,
0X14000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000033C, 0X00000001, 0X00000320,
0X41747472, 0X69627574, 0X65204F75, 0X74707574, 0X20537065, 0X63696669, 0X65720000, 0X00000340,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000035C, 0X0F000000, 0X43616C6C,
0X6261636B, 0X20526573, 0X756C7400, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000388, 0X0F000000, 0X2F446F20, 0X43452043, 0X616C6C62, 0X61636B00, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000003B4, 0X13000000, 0X4576656E, 0X7448616E, 0X646C6572,
0X50726F63, 0X50747200, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003FC, 0X00000008, 0X0000041C,
0X00000470, 0X000004C4, 0X00000518, 0X0000056C, 0X000005C0, 0X00000614, 0X00000668, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000438, 0X00000002, 0X00000440, 0X00000458,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X636D6473, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000048C, 0X00000002, 0X00000494, 0X000004AC, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X636D6473, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000004E0, 0X00000002,
0X000004E8, 0X00000500, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000048, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000534, 0X00000002, 0X0000053C, 0X00000554, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000005, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000588, 0X00000002, 0X00000590, 0X000005A8, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000005DC, 0X00000002, 0X000005E4,
0X000005FC, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000002, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000630, 0X00000002, 0X00000638, 0X00000650, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000001B, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000684,
0X00000002, 0X0000068C, 0X000006A4, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000050
	};
	Nat4 tempAttribute_HITextView_20_Control_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X10000000, 0X556E7469, 0X746C6564, 0X20436F6E,
0X74726F6C, 0000000000
	};
	Nat4 tempAttribute_HITextView_20_Control_2F_Control_20_Event_20_Handler[] = {
0000000000, 0X00000344, 0X000000A4, 0X00000024, 0X00000014, 0X000003B4, 0X000003B0, 0X000003A8,
0X00000390, 0X00000388, 0X00000110, 0X0000010C, 0X00000340, 0X000000F8, 0X00000314, 0X000000F4,
0X000002E8, 0X000002D0, 0X000002A8, 0X000002B0, 0X00000290, 0X00000288, 0X000000EC, 0X00000260,
0X00000248, 0X00000220, 0X00000228, 0X000001A4, 0X000001FC, 0X000001E4, 0X000001BC, 0X000001C4,
0X000001A0, 0X00000198, 0X000000E8, 0X00000168, 0X000000E4, 0X00000134, 0X000000DC, 0X000000B8,
0X000000C0, 0X22000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000DC, 0X00000011,
0X000000C4, 0X43617262, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000120,
0000000000, 0X00000154, 0X00000184, 0X00000274, 0000000000, 0X00000300, 0X0000032C, 0000000000,
0000000000, 0000000000, 0000000000, 0X0000035C, 0X00000374, 0000000000, 0000000000, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000013C, 0X16000000, 0X436F6E74,
0X726F6C20, 0X4576656E, 0X74204361, 0X6C6C6261, 0X636B0000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000170, 0X10000000, 0X2F434520, 0X48616E64, 0X6C652045, 0X76656E74,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001A0, 0X00000002,
0X000001A8, 0X0000020C, 0X13000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001E4,
0X00000001, 0X000001C8, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965,
0X72000000, 0X000001E8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000204,
0X05000000, 0X4F776E65, 0X72000000, 0X13000008, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000248, 0X00000001, 0X0000022C, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563,
0X69666965, 0X72000000, 0X0000024C, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000268, 0X09000000, 0X54686520, 0X4576656E, 0X74000000, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000290, 0X00000001, 0X00000294, 0X14000008, 0000000000, 0000000000,
0000000000, 0000000000, 0X000002D0, 0X00000001, 0X000002B4, 0X41747472, 0X69627574, 0X65204F75,
0X74707574, 0X20537065, 0X63696669, 0X65720000, 0X000002D4, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X000002F0, 0X0F000000, 0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000031C, 0X0F000000, 0X2F446F20,
0X43452043, 0X616C6C62, 0X61636B00, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000348, 0X13000000, 0X4576656E, 0X7448616E, 0X646C6572, 0X50726F63, 0X50747200, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000390, 0X00000001, 0X00000394, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X000003B0, 0X00000002, 0X000003B8, 0X000003D0, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X636E746C, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X000003E9
	};


Nat4 VPLC_Text_20_File_20_Window_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Text_20_File_20_Window_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 287 702 }{ 183 458 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Text_20_File_20_Window_2F_Name,environment);
	tempAttribute = attribute_add("WindowRef",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Event Handler",tempClass,tempAttribute_Text_20_File_20_Window_2F_Window_20_Event_20_Handler,environment);
	tempAttribute = attribute_add("File",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Window");
	return kNOERROR;
}

/* Start Universals: { 635 500 }{ 200 300 } */
enum opTrigger vpx_method_Text_20_File_20_Window_2F_New_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Text_20_File_20_Window_2F_New_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\'ttxt\'",ROOT(1));

result = vpx_constant(PARAMETERS,"\'TEXT\'",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_Set_20_Proxy_20_Type,4,0,TERMINAL(0),TERMINAL(1),TERMINAL(2),NONE);
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Text_20_File_20_Window_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Load_20_From_20_Nib,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Show,1,0,TERMINAL(0));

result = vpx_method_Text_20_File_20_Window_2F_New_case_1_local_4(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Text_20_File_20_Window_2F_Load_20_From_20_Nib_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Text_20_File_20_Window_2F_Load_20_From_20_Nib_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Text_20_Item,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Text_20_File_20_Window_2F_Load_20_From_20_Nib(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"main",ROOT(1));

result = vpx_constant(PARAMETERS,"Text Window",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Nib_20_Window,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));
FAILONFAILURE

result = vpx_method_Text_20_File_20_Window_2F_Load_20_From_20_Nib_case_1_local_5(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Text_20_File_20_Window_2F_Find_20_Text_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Text_20_File_20_Window_2F_Find_20_Text_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( \'TDoc\' 1 )",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Control,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Text_20_File_20_Window_2F_Find_20_Text_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Text_20_File_20_Window_2F_Find_20_Text_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_HITextView_20_Control,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"( \'TDoc\' 1 )",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_ID,3,0,TERMINAL(1),TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Text_20_File_20_Window_2F_Find_20_Text_20_Item_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Text_20_File_20_Window_2F_Find_20_Text_20_Item_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Text_20_File_20_Window_2F_Find_20_Text_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Text_20_File_20_Window_2F_Find_20_Text_20_Item_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Text_20_File_20_Window_2F_Find_20_Text_20_Item_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Text_20_File_20_Window_2F_Find_20_Text_20_Item_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Text_20_File_20_Window_2F_Load_20_File_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Text_20_File_20_Window_2F_Load_20_File_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Text_20_Item,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Full_20_Path_20_CFURL,1,1,TERMINAL(3),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Data_20_From_20_CFURL,2,0,TERMINAL(1),TERMINAL(4));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Text_20_File_20_Window_2F_Load_20_File_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Text_20_File_20_Window_2F_Load_20_File_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Alias,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Alias_20_Record,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_Set_20_Proxy_20_Alias,2,0,TERMINAL(0),TERMINAL(3));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Text_20_File_20_Window_2F_Load_20_File_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Text_20_File_20_Window_2F_Load_20_File_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Display_20_Name,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Title,2,0,TERMINAL(0),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Text_20_File_20_Window_2F_Load_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_File,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_Text_20_File_20_Window_2F_Load_20_File_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_method_Text_20_File_20_Window_2F_Load_20_File_case_1_local_4(PARAMETERS,TERMINAL(0));

result = vpx_method_Text_20_File_20_Window_2F_Load_20_File_case_1_local_5(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Text_20_File_20_Window_2F_Open_20_With_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Load_20_From_20_Nib,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Load_20_File,2,0,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Show,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_HITextView_20_Control_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_HITextView_20_Control_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_HITextView_20_Control_2F_Name,environment);
	tempAttribute = attribute_add("ControlRef",tempClass,NULL,environment);
	tempAttribute = attribute_add("Control Event Handler",tempClass,tempAttribute_HITextView_20_Control_2F_Control_20_Event_20_Handler,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Window Control");
	return kNOERROR;
}

/* Start Universals: { 532 963 }{ 200 300 } */
enum opTrigger vpx_method_HITextView_20_Control_2F_Get_20_TXNObject(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_ControlRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

PUTPOINTER(OpaqueTXNObject,*,HITextViewGetTXNObject( GETPOINTER(0,OpaqueControlRef,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_HITextView_20_Control_2F_Set_20_Data_20_From_20_CFURL_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_HITextView_20_Control_2F_Set_20_Data_20_From_20_CFURL_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kTXNStartOffset,ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_HITextView_20_Control_2F_Set_20_Data_20_From_20_CFURL_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_HITextView_20_Control_2F_Set_20_Data_20_From_20_CFURL_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kTXNEndOffset,ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_HITextView_20_Control_2F_Set_20_Data_20_From_20_CFURL(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(17)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_TXNObject,1,1,TERMINAL(0),ROOT(4));
NEXTCASEONFAILURE

result = vpx_method_HITextView_20_Control_2F_Set_20_Data_20_From_20_CFURL_case_1_local_3(PARAMETERS,TERMINAL(2),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(1),ROOT(6));

result = vpx_method_HITextView_20_Control_2F_Set_20_Data_20_From_20_CFURL_case_1_local_5(PARAMETERS,TERMINAL(3),ROOT(7));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
NEXTCASEONSUCCESS

result = vpx_extconstant(PARAMETERS,kTXNStartOffset,ROOT(8));

result = vpx_extconstant(PARAMETERS,kTXNEndOffset,ROOT(9));

PUTINTEGER(TXNSetDataFromCFURLRef( GETPOINTER(0,OpaqueTXNObject,*,ROOT(11),TERMINAL(4)),GETCONSTPOINTER(__CFURL,*,TERMINAL(6)),GETINTEGER(TERMINAL(8)),GETINTEGER(TERMINAL(9))),10);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(12));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(12));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(12),ROOT(13));

PUTINTEGER(TXNAttachObjectToWindowRef( GETPOINTER(0,OpaqueTXNObject,*,ROOT(15),TERMINAL(4)),GETPOINTER(0,OpaqueWindowPtr,*,ROOT(16),TERMINAL(13))),14);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(17)
}

enum opTrigger vpx_method_HITextView_20_Control_2F_Set_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_HITextView_20_Control_2F_Set_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_TXNObject,1,1,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_extconstant(PARAMETERS,kTXNStartOffset,ROOT(3));

result = vpx_extconstant(PARAMETERS,kTXNEndOffset,ROOT(4));

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UniChar,1,2,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(5));

result = vpx_extconstant(PARAMETERS,kTXNUnicodeTextData,ROOT(8));

PUTINTEGER(TXNSetData( GETPOINTER(0,OpaqueTXNObject,*,ROOT(10),TERMINAL(2)),GETINTEGER(TERMINAL(8)),GETCONSTPOINTER(void,*,TERMINAL(6)),GETINTEGER(TERMINAL(7)),GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(4))),9);
result = kSuccess;

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_HITextView_20_Control_2F_Set_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_HITextView_20_Control_2F_Set_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_extconstant(PARAMETERS,kControlNoPart,ROOT(3));

result = vpx_extconstant(PARAMETERS,kControlEditTextCFStringTag,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Control_20_Data_20_Ptr,4,1,TERMINAL(0),TERMINAL(3),TERMINAL(4),TERMINAL(2),ROOT(5));

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(2)));
result = kSuccess;

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_HITextView_20_Control_2F_Set_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_HITextView_20_Control_2F_Set_20_Text_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_HITextView_20_Control_2F_Set_20_Text_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

/* Stop Universals */






Nat4	loadClasses_Text_20_Document(V_Environment environment);
Nat4	loadClasses_Text_20_Document(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Text File Window",environment);
	if(result == NULL) return kERROR;
	VPLC_Text_20_File_20_Window_class_load(result,environment);
	result = class_new("HITextView Control",environment);
	if(result == NULL) return kERROR;
	VPLC_HITextView_20_Control_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Text_20_Document(V_Environment environment);
Nat4	loadUniversals_Text_20_Document(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("TEST Read Text File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_Read_20_Text_20_File,NULL);

	result = method_new("Nav Read Text Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Read_20_Text_20_Callback,NULL);

	result = method_new("Open Text File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Open_20_Text_20_File,NULL);

	result = method_new("Open Text File Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Open_20_Text_20_File_20_Callback,NULL);

	result = method_new("New Text File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_New_20_Text_20_File,NULL);

	result = method_new("Text File Window/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Text_20_File_20_Window_2F_New,NULL);

	result = method_new("Text File Window/Load From Nib",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Text_20_File_20_Window_2F_Load_20_From_20_Nib,NULL);

	result = method_new("Text File Window/Find Text Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Text_20_File_20_Window_2F_Find_20_Text_20_Item,NULL);

	result = method_new("Text File Window/Load File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Text_20_File_20_Window_2F_Load_20_File,NULL);

	result = method_new("Text File Window/Open With File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Text_20_File_20_Window_2F_Open_20_With_20_File,NULL);

	result = method_new("HITextView Control/Get TXNObject",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HITextView_20_Control_2F_Get_20_TXNObject,NULL);

	result = method_new("HITextView Control/Set Data From CFURL",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HITextView_20_Control_2F_Set_20_Data_20_From_20_CFURL,NULL);

	result = method_new("HITextView Control/Set Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HITextView_20_Control_2F_Set_20_Text,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_Text_20_Document(V_Environment environment);
Nat4	loadPersistents_Text_20_Document(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_Text_20_Document(V_Environment environment);
Nat4	load_Text_20_Document(V_Environment environment)
{

	loadClasses_Text_20_Document(environment);
	loadUniversals_Text_20_Document(environment);
	loadPersistents_Text_20_Document(environment);
	return kNOERROR;

}

