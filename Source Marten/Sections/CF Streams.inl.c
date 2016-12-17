/* A VPL Section File */
/*

CF Streams.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_TEST_20_CFReadStream_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_TEST_20_CFReadStream_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_URL,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_String,3,0,TERMINAL(2),TERMINAL(1),NONE);
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Create_20_With_20_URL,2,0,TERMINAL(0),TERMINAL(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_TEST_20_CFReadStream_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_CFReadStream_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"file:///Developer/Examples/About Examples.rtf",ROOT(0));

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Read_20_Stream,1,1,NONE,ROOT(1));

result = vpx_method_TEST_20_CFReadStream_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Open,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Read_20_Text,2,1,TERMINAL(1),NONE,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Close,1,0,TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(1));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_TEST_20_CFReadStream_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_CFReadStream_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_TEST_20_CFReadStream(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_TEST_20_CFReadStream_case_1(environment, &outcome, inputRepeat, contextIndex))
vpx_method_TEST_20_CFReadStream_case_2(environment, &outcome, inputRepeat, contextIndex);
return outcome;
}




	Nat4 tempAttribute_CF_20_Read_20_Stream_2F_Release_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_CF_20_Read_20_Stream_2F_Client_20_Callback[] = {
0000000000, 0X00000260, 0X00000074, 0X00000018, 0X00000014, 0X000000D4, 0X00000298, 0X000000C0,
0X00000264, 0X000000BC, 0X000000B8, 0X000000B4, 0X000001FC, 0X000001D8, 0X000001E0, 0X00000164,
0X000001B4, 0X0000019C, 0X0000017C, 0X00000184, 0X00000160, 0X00000158, 0X000000B0, 0X00000120,
0X000000AC, 0X000000EC, 0X000000A4, 0X00000088, 0X00000090, 0X19000008, 0000000000, 0000000000,
0000000000, 0000000000, 0X000000A4, 0X0000000D, 0X00000094, 0X4D657468, 0X6F642043, 0X616C6C62,
0X61636B00, 0X000000D8, 0000000000, 0X0000010C, 0X00000144, 0X00000218, 0X00000234, 0X00000250,
0X00000284, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002BC, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000000F4, 0X15000000, 0X43465265, 0X61645374, 0X7265616D,
0X2043616C, 0X6C626163, 0X6B000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000128, 0X19000000, 0X2F434652, 0X65616420, 0X5374616E, 0X64617264, 0X2043616C, 0X6C626163,
0X6B000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000160, 0X00000002,
0X00000168, 0X000001C4, 0X18000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000019C,
0X00000001, 0X00000188, 0X41747472, 0X69627574, 0X65205370, 0X65636966, 0X69657200, 0X000001A0,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001BC, 0X05000000, 0X4F776E65,
0X72000000, 0X17000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001FC, 0X00000001,
0X000001E4, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000200,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000002, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000026C, 0X16000000, 0X2F446F20, 0X43616C6C, 0X6261636B, 0X204E6F20, 0X52657375,
0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002A0, 0X1A000000,
0X43465265, 0X61645374, 0X7265616D, 0X436C6965, 0X6E744361, 0X6C6C4261, 0X636B0000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_CF_20_Read_20_Stream_2F_Timeout_20_Timer[] = {
0000000000, 0X000002B8, 0X0000007C, 0X0000001A, 0X00000014, 0X000000F0, 0X000000EC, 0X000000E4,
0X000002C8, 0X000000D8, 0X00000294, 0X000000D4, 0X00000260, 0X000000D0, 0X00000234, 0X000000CC,
0X000000C8, 0X000000C4, 0X000001D8, 0X000001C0, 0X000001A0, 0X000001A8, 0X00000188, 0X00000180,
0X000000C0, 0X00000148, 0X000000BC, 0X0000010C, 0X000000B4, 0X00000090, 0X00000098, 0X28000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X000000B4, 0X00000011, 0X0000009C, 0X43617262,
0X6F6E2054, 0X696D6572, 0X2043616C, 0X6C626163, 0X6B000000, 0X000000F8, 0000000000, 0X00000134,
0X0000016C, 0X000001E8, 0X00000204, 0X00000220, 0X0000024C, 0X00000280, 0X000002B4, 0000000000,
0000000000, 0X000002EC, 0000000000, 0X00000304, 0X0000031C, 0000000000, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X1E000000, 0X4E657477, 0X6F726B20, 0X54696D65,
0X6F757420, 0X54696D65, 0X72204361, 0X6C6C6261, 0X636B0000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000150, 0X1A000000, 0X2F537461, 0X6E646172, 0X64205469, 0X6D656F75,
0X74204361, 0X6C6C6261, 0X636B0000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000001, 0X0000018C, 0X18000008, 0000000000, 0000000000, 0000000000, 0000000000,
0X000001C0, 0X00000001, 0X000001AC, 0X41747472, 0X69627574, 0X65205370, 0X65636966, 0X69657200,
0X000001C4, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001E0, 0X05000000,
0X4F776E65, 0X72000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000023C, 0X0F000000, 0X2F446F20,
0X43542043, 0X616C6C62, 0X61636B00, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000268, 0X15000000, 0X4576656E, 0X744C6F6F, 0X7054696D, 0X65725072, 0X6F635074, 0X72000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000029C, 0X14000000, 0X4E657745,
0X76656E74, 0X4C6F6F70, 0X54696D65, 0X72555050, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X000002D0, 0X18000000, 0X44697370, 0X6F736545, 0X76656E74, 0X4C6F6F70,
0X54696D65, 0X72555050, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000005, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_CF_20_Read_20_Stream_2F_Completion_20_Callback[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_CF_20_Write_20_Stream_2F_Release_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_CF_20_Write_20_Stream_2F_Client_20_Callback[] = {
0000000000, 0X00000260, 0X00000074, 0X00000018, 0X00000014, 0X000000D4, 0X00000298, 0X000000C0,
0X00000264, 0X000000BC, 0X000000B8, 0X000000B4, 0X000001FC, 0X000001D8, 0X000001E0, 0X00000164,
0X000001B4, 0X0000019C, 0X0000017C, 0X00000184, 0X00000160, 0X00000158, 0X000000B0, 0X00000120,
0X000000AC, 0X000000EC, 0X000000A4, 0X00000088, 0X00000090, 0X19000008, 0000000000, 0000000000,
0000000000, 0000000000, 0X000000A4, 0X0000000D, 0X00000094, 0X4D657468, 0X6F642043, 0X616C6C62,
0X61636B00, 0X000000D8, 0000000000, 0X0000010C, 0X00000144, 0X00000218, 0X00000234, 0X00000250,
0X00000284, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002BC, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000000F4, 0X16000000, 0X43465772, 0X69746553, 0X74726561,
0X6D204361, 0X6C6C6261, 0X636B0000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000128, 0X1A000000, 0X2F434657, 0X72697465, 0X20537461, 0X6E646172, 0X64204361, 0X6C6C6261,
0X636B0000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000160, 0X00000002,
0X00000168, 0X000001C4, 0X18000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000019C,
0X00000001, 0X00000188, 0X41747472, 0X69627574, 0X65205370, 0X65636966, 0X69657200, 0X000001A0,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001BC, 0X05000000, 0X4F776E65,
0X72000000, 0X17000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001FC, 0X00000001,
0X000001E4, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000200,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000002, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000026C, 0X16000000, 0X2F446F20, 0X43616C6C, 0X6261636B, 0X204E6F20, 0X52657375,
0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002A0, 0X1B000000,
0X43465772, 0X69746553, 0X74726561, 0X6D436C69, 0X656E7443, 0X616C6C42, 0X61636B00, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_CF_20_Write_20_Stream_2F_Timeout_20_Timer[] = {
0000000000, 0X000002B8, 0X0000007C, 0X0000001A, 0X00000014, 0X000000F0, 0X000000EC, 0X000000E4,
0X000002C8, 0X000000D8, 0X00000294, 0X000000D4, 0X00000260, 0X000000D0, 0X00000234, 0X000000CC,
0X000000C8, 0X000000C4, 0X000001D8, 0X000001C0, 0X000001A0, 0X000001A8, 0X00000188, 0X00000180,
0X000000C0, 0X00000148, 0X000000BC, 0X0000010C, 0X000000B4, 0X00000090, 0X00000098, 0X28000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X000000B4, 0X00000011, 0X0000009C, 0X43617262,
0X6F6E2054, 0X696D6572, 0X2043616C, 0X6C626163, 0X6B000000, 0X000000F8, 0000000000, 0X00000134,
0X0000016C, 0X000001E8, 0X00000204, 0X00000220, 0X0000024C, 0X00000280, 0X000002B4, 0000000000,
0000000000, 0X000002EC, 0000000000, 0X00000304, 0X0000031C, 0000000000, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X1E000000, 0X4E657477, 0X6F726B20, 0X54696D65,
0X6F757420, 0X54696D65, 0X72204361, 0X6C6C6261, 0X636B0000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000150, 0X1A000000, 0X2F537461, 0X6E646172, 0X64205469, 0X6D656F75,
0X74204361, 0X6C6C6261, 0X636B0000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000001, 0X0000018C, 0X18000008, 0000000000, 0000000000, 0000000000, 0000000000,
0X000001C0, 0X00000001, 0X000001AC, 0X41747472, 0X69627574, 0X65205370, 0X65636966, 0X69657200,
0X000001C4, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001E0, 0X05000000,
0X4F776E65, 0X72000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000023C, 0X0F000000, 0X2F446F20,
0X43542043, 0X616C6C62, 0X61636B00, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000268, 0X15000000, 0X4576656E, 0X744C6F6F, 0X7054696D, 0X65725072, 0X6F635074, 0X72000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000029C, 0X14000000, 0X4E657745,
0X76656E74, 0X4C6F6F70, 0X54696D65, 0X72555050, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X000002D0, 0X18000000, 0X44697370, 0X6F736545, 0X76656E74, 0X4C6F6F70,
0X54696D65, 0X72555050, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000005, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_CF_20_Write_20_Stream_2F_Completion_20_Callback[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_CF_20_Read_20_Stream_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CF_20_Read_20_Stream_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 295 894 }{ 184 328 } */
	tempAttribute = attribute_add("Allocator",tempClass,NULL,environment);
	tempAttribute = attribute_add("CF Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Release?",tempClass,tempAttribute_CF_20_Read_20_Stream_2F_Release_3F_,environment);
	tempAttribute = attribute_add("Client Callback",tempClass,tempAttribute_CF_20_Read_20_Stream_2F_Client_20_Callback,environment);
	tempAttribute = attribute_add("Timeout Timer",tempClass,tempAttribute_CF_20_Read_20_Stream_2F_Timeout_20_Timer,environment);
	tempAttribute = attribute_add("Completion Callback",tempClass,tempAttribute_CF_20_Read_20_Stream_2F_Completion_20_Callback,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"CF Base");
	return kNOERROR;
}

/* Start Universals: { 118 690 }{ 614 416 } */
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(CFReadStreamOpen( GETPOINTER(0,__CFReadStream,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Open_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Open_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Close_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Close_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

CFReadStreamClose( GETPOINTER(0,__CFReadStream,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Close_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Close_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Close_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Close_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTPOINTER(__CFRunLoop,*,CFRunLoopGetCurrent(),2);
result = kSuccess;

result = vpx_constant(PARAMETERS,"kCFRunLoopCommonModes",ROOT(3));

result = vpx_constant(PARAMETERS,"__CFString",ROOT(4));

result = vpx_method_Get_20_CF_20_Constant(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTPOINTER(__CFRunLoop,*,CFRunLoopGetCurrent(),2);
result = kSuccess;

result = vpx_constant(PARAMETERS,"kCFRunLoopCommonModes",ROOT(3));

result = vpx_constant(PARAMETERS,"__CFString",ROOT(4));

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(3),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(4),ROOT(5));
NEXTCASEONFAILURE

CFReadStreamScheduleWithRunLoop( GETPOINTER(0,__CFReadStream,*,ROOT(6),TERMINAL(3)),GETPOINTER(0,__CFRunLoop,*,ROOT(7),TERMINAL(4)),GETCONSTPOINTER(__CFString,*,TERMINAL(5)));
result = kSuccess;

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTPOINTER(__CFRunLoop,*,CFRunLoopGetCurrent(),2);
result = kSuccess;

result = vpx_constant(PARAMETERS,"kCFRunLoopCommonModes",ROOT(3));

result = vpx_constant(PARAMETERS,"__CFString",ROOT(4));

result = vpx_method_Get_20_CF_20_Constant(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(4),ROOT(5));
NEXTCASEONFAILURE

CFReadStreamUnscheduleFromRunLoop( GETPOINTER(0,__CFReadStream,*,ROOT(6),TERMINAL(3)),GETPOINTER(0,__CFRunLoop,*,ROOT(7),TERMINAL(4)),GETCONSTPOINTER(__CFString,*,TERMINAL(5)));
result = kSuccess;

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(0),TERMINAL(1),TERMINAL(3),TERMINAL(2),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"\"CFStreamClientContext\"",ROOT(1));

result = vpx_constant(PARAMETERS,"20",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_constant(PARAMETERS,"( 0 0 0 0 0 )",ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,4,6)
result = vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4_case_2_local_8(PARAMETERS,TERMINAL(3),LOOP(0),LIST(5),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(6,TERMINAL(4))
}

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(7)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Client_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Client_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4(PARAMETERS,TERMINAL(3),ROOT(5));

PUTINTEGER(CFReadStreamSetClient( GETPOINTER(0,__CFReadStream,*,ROOT(7),TERMINAL(4)),GETINTEGER(TERMINAL(1)),GETPOINTER(0,void,*,ROOT(8),TERMINAL(2)),GETPOINTER(20,CFStreamClientContext,*,ROOT(9),TERMINAL(5))),6);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(10)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Client_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Client_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Client(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Client_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Client_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Create_20_For_20_HTTP_20_Request_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Create_20_For_20_HTTP_20_Request_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Create_20_For_20_HTTP_20_Request_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Create_20_For_20_HTTP_20_Request_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Create_20_For_20_HTTP_20_Request_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Create_20_For_20_HTTP_20_Request_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Create_20_For_20_HTTP_20_Request_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Create_20_For_20_HTTP_20_Request_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Create_20_For_20_HTTP_20_Request_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Create_20_For_20_HTTP_20_Request_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Create_20_For_20_HTTP_20_Request_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Create_20_For_20_HTTP_20_Request(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Create_20_For_20_HTTP_20_Request_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(3));
FAILONFAILURE

PUTPOINTER(__CFReadStream,*,CFReadStreamCreateForHTTPRequest( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETPOINTER(0,__CFHTTPMessage,*,ROOT(5),TERMINAL(3))),4);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Create_20_With_20_URL(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(1),ROOT(3));

PUTPOINTER(__CFReadStream,*,CFReadStreamCreateWithFile( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETCONSTPOINTER(__CFURL,*,TERMINAL(3))),4);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_boolean_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_To_20_CFBooleanRef(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_number_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_To_20_CFNumberRef(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_Get_20_CFNullRef(PARAMETERS,ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
OUTPUT(1,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(4));
NEXTCASEONFAILURE

result = vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5(PARAMETERS,TERMINAL(2),ROOT(5),ROOT(6));
NEXTCASEONFAILURE

PUTINTEGER(CFReadStreamSetProperty( GETPOINTER(0,__CFReadStream,*,ROOT(8),TERMINAL(3)),GETCONSTPOINTER(__CFString,*,TERMINAL(4)),GETCONSTPOINTER(void,*,TERMINAL(5))),7);
result = kSuccess;

result = vpx_method_CF_20_Release(PARAMETERS,TERMINAL(6));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(9)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Copy_20_Property_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Copy_20_Property_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

PUTPOINTER(void,*,CFReadStreamCopyProperty( GETPOINTER(0,__CFReadStream,*,ROOT(5),TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(3))),4);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(6)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Copy_20_Property_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Copy_20_Property_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Copy_20_Property(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Copy_20_Property_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Copy_20_Property_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Status_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Status_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(CFReadStreamGetStatus( GETPOINTER(0,__CFReadStream,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Status_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Status_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Status(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Status_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Status_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"8192",ROOT(1));

PUTPOINTER(char,*,NewPtr( GETINTEGER(TERMINAL(1))),2);
result = kSuccess;

result = vpx_constant(PARAMETERS,"unsigned char",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(2),TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(1))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3E_,2,0,TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_case_1_local_4(PARAMETERS,TERMINAL(0),ROOT(2),ROOT(3));

PUTINTEGER(CFReadStreamRead( GETPOINTER(0,__CFReadStream,*,ROOT(5),TERMINAL(1)),GETPOINTER(1,unsigned char,*,ROOT(6),TERMINAL(2)),GETINTEGER(TERMINAL(3))),4);
result = kSuccess;

result = vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_case_1_local_6(PARAMETERS,TERMINAL(4),TERMINAL(2),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"-1",ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_20_Text_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_20_Text_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUTF8,ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Read,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_20_Text_case_1_local_5(PARAMETERS,TERMINAL(1),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,4,3,TERMINAL(3),TERMINAL(4),TERMINAL(2),TERMINAL(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(6));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_20_Text_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_20_Text_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Error_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Error_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_extget(PARAMETERS,"domain",1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_extget(PARAMETERS,"error",1,2,TERMINAL(0),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Error_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Error_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Error_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Error_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Error_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Error_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Error_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Error_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTSTRUCTURE(8,CFStreamError,CFReadStreamGetError( GETPOINTER(0,__CFReadStream,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Error_case_1_local_5(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Error_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Error_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Error(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Error_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Error_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3E_,2,0,TERMINAL(0),TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Read_20_Bytes,3,0,TERMINAL(1),TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Terminate_20_Download,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1_local_6_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1_local_6_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Timeout_20_Timer,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"30",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Next_20_Fire_20_Time,2,0,TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1_local_6_case_2_local_2(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFStreamEventHasBytesAvailable,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Read,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1_local_4(PARAMETERS,TERMINAL(2),TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(3));

result = vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1_local_6(PARAMETERS,TERMINAL(4),TERMINAL(0));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFStreamEventEndEncountered,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFStreamEventErrorOccurred,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_2_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_2_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_2_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_2_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_2_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_2_local_2(PARAMETERS,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Terminate_20_Download,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"CFRead Callback",ROOT(3));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(3),TERMINAL(2));

result = kSuccess;
NEXTCASEONSUCCESS

FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3E_,2,0,TERMINAL(0),TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Read_20_Bytes,3,0,TERMINAL(1),TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Terminate_20_Download,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2_local_6_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2_local_6_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Timeout_20_Timer,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"5",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Next_20_Fire_20_Time,2,0,TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2_local_6_case_2_local_2(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFStreamEventHasBytesAvailable,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Read,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2_local_4(PARAMETERS,TERMINAL(2),TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(3));

result = vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2_local_6(PARAMETERS,TERMINAL(4),TERMINAL(0));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_3_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_3_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFStreamEventEndEncountered,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_3_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_3_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFStreamEventErrorOccurred,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_3_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_3_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_3_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_3_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_3_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_3_local_2(PARAMETERS,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Terminate_20_Download,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Read_20_Bytes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Read_20_Bytes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Read_20_Bytes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Read_20_Bytes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(3),TERMINAL(1),ROOT(4),ROOT(5),ROOT(6));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Read_20_Bytes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Read_20_Bytes_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_CF_20_Read_20_Stream_2F_Read_20_Bytes_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Install_20_Client_20_Callback_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Install_20_Client_20_Callback_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Install_20_Client_20_Callback_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Install_20_Client_20_Callback_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFStreamEventOpenCompleted,ROOT(1));

result = vpx_extconstant(PARAMETERS,kCFStreamEventHasBytesAvailable,ROOT(2));

result = vpx_extconstant(PARAMETERS,kCFStreamEventEndEncountered,ROOT(3));

result = vpx_extconstant(PARAMETERS,kCFStreamEventErrorOccurred,ROOT(4));

result = vpx_call_evaluate(PARAMETERS,"A|B|C|D",4,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Install_20_Client_20_Callback_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Install_20_Client_20_Callback_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Install_20_Client_20_Callback_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Read_20_Stream_2F_Install_20_Client_20_Callback_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Install_20_Client_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CF_20_Read_20_Stream_2F_Install_20_Client_20_Callback_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Client_20_Callback,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(4),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Callback_20_Pointer,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Set_20_Client,4,1,TERMINAL(3),TERMINAL(2),TERMINAL(5),NONE,ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Install_20_Client_20_Callback_20_With_20_Owner_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Install_20_Client_20_Callback_20_With_20_Owner_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Install_20_Client_20_Callback_20_With_20_Owner_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Install_20_Client_20_Callback_20_With_20_Owner_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFStreamEventOpenCompleted,ROOT(1));

result = vpx_extconstant(PARAMETERS,kCFStreamEventHasBytesAvailable,ROOT(2));

result = vpx_extconstant(PARAMETERS,kCFStreamEventEndEncountered,ROOT(3));

result = vpx_extconstant(PARAMETERS,kCFStreamEventErrorOccurred,ROOT(4));

result = vpx_call_evaluate(PARAMETERS,"A|B|C|D",4,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Install_20_Client_20_Callback_20_With_20_Owner_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Install_20_Client_20_Callback_20_With_20_Owner_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Install_20_Client_20_Callback_20_With_20_Owner_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Read_20_Stream_2F_Install_20_Client_20_Callback_20_With_20_Owner_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Install_20_Client_20_Callback_20_With_20_Owner(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_CF_20_Read_20_Stream_2F_Install_20_Client_20_Callback_20_With_20_Owner_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Client_20_Callback,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(5),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Callback_20_Pointer,1,1,TERMINAL(5),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Set_20_Client,4,1,TERMINAL(4),TERMINAL(3),TERMINAL(7),NONE,ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Remove_20_Client_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Client_20_Callback,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_extconstant(PARAMETERS,kCFStreamEventNone,ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Set_20_Client,4,1,TERMINAL(0),TERMINAL(3),TERMINAL(4),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Terminate_20_Download_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Terminate_20_Download_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Timeout_20_Timer,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Terminate_20_Download(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CF_20_Read_20_Stream_2F_Terminate_20_Download_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Client_20_Callback,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Unschedule_20_From_20_Run_20_Loop,3,0,TERMINAL(0),NONE,NONE);

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Close,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Do_20_Completion_20_Callback,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Standard_20_Timeout_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Timeout_20_Download,1,0,TERMINAL(0));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Terminate_20_Download,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Timeout_20_Download(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Download timeout!",ROOT(1));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Initiate_20_Download_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Initiate_20_Download_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Timeout_20_Timer,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(2),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Initiate_20_Download_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Initiate_20_Download_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Client_20_Callback,2,1,TERMINAL(0),NONE,ROOT(1));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Schedule_20_With_20_Run_20_Loop,3,0,TERMINAL(0),NONE,NONE);

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Open,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_Read_20_Stream_2F_Initiate_20_Download_case_1_local_7(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Initiate_20_Download_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Initiate_20_Download_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Terminate_20_Download,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;
FAILONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Initiate_20_Download(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Initiate_20_Download_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_CF_20_Read_20_Stream_2F_Initiate_20_Download_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Initiate_20_Download_20_With_20_Owner_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Initiate_20_Download_20_With_20_Owner_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Timeout_20_Timer,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(2),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Initiate_20_Download_20_With_20_Owner_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Initiate_20_Download_20_With_20_Owner_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Client_20_Callback_20_With_20_Owner,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Schedule_20_With_20_Run_20_Loop,3,0,TERMINAL(0),NONE,NONE);

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Open,1,1,TERMINAL(0),ROOT(4));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_Read_20_Stream_2F_Initiate_20_Download_20_With_20_Owner_case_1_local_7(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Initiate_20_Download_20_With_20_Owner_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Initiate_20_Download_20_With_20_Owner_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Terminate_20_Download,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;
FAILONSUCCESS

FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Initiate_20_Download_20_With_20_Owner(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Read_20_Stream_2F_Initiate_20_Download_20_With_20_Owner_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_CF_20_Read_20_Stream_2F_Initiate_20_Download_20_With_20_Owner_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Get_20_Completion_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Completion_20_Callback,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Set_20_Completion_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Completion_20_Callback,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Do_20_Completion_20_Callback_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Do_20_Completion_20_Callback_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Valid?",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Do_20_Completion_20_Callback_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Do_20_Completion_20_Callback_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Do_20_Completion_20_Callback_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Do_20_Completion_20_Callback_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Do_20_Completion_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Completion_20_Callback,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_CF_20_Read_20_Stream_2F_Do_20_Completion_20_Callback_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_method_CF_20_Read_20_Stream_2F_Do_20_Completion_20_Callback_case_1_local_4(PARAMETERS,TERMINAL(2),TERMINAL(0));

result = vpx_method_Execute_20_Callback_20_With_20_Attachments(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_method_CF_20_Read_20_Stream_2F_Do_20_Completion_20_Callback_case_1_local_6(PARAMETERS,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Read_20_Stream,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_Read_20_Stream_2F_Get_20_Class_20_Type_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CFReadStreamGetTypeID(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_CF_20_Write_20_Stream_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CF_20_Write_20_Stream_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 300 373 }{ 184 328 } */
	tempAttribute = attribute_add("Allocator",tempClass,NULL,environment);
	tempAttribute = attribute_add("CF Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Release?",tempClass,tempAttribute_CF_20_Write_20_Stream_2F_Release_3F_,environment);
	tempAttribute = attribute_add("Client Callback",tempClass,tempAttribute_CF_20_Write_20_Stream_2F_Client_20_Callback,environment);
	tempAttribute = attribute_add("Timeout Timer",tempClass,tempAttribute_CF_20_Write_20_Stream_2F_Timeout_20_Timer,environment);
	tempAttribute = attribute_add("Completion Callback",tempClass,tempAttribute_CF_20_Write_20_Stream_2F_Completion_20_Callback,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"CF Base");
	return kNOERROR;
}

/* Start Universals: { 163 125 }{ 675 383 } */
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(CFWriteStreamOpen( GETPOINTER(0,__CFWriteStream,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Open_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Open_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Close_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Close_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

CFWriteStreamClose( GETPOINTER(0,__CFWriteStream,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Close_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Close_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Close_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Close_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTPOINTER(__CFRunLoop,*,CFRunLoopGetCurrent(),2);
result = kSuccess;

result = vpx_constant(PARAMETERS,"kCFRunLoopCommonModes",ROOT(3));

result = vpx_constant(PARAMETERS,"__CFString",ROOT(4));

result = vpx_method_Get_20_CF_20_Constant(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTPOINTER(__CFRunLoop,*,CFRunLoopGetCurrent(),2);
result = kSuccess;

result = vpx_constant(PARAMETERS,"kCFRunLoopCommonModes",ROOT(3));

result = vpx_constant(PARAMETERS,"__CFString",ROOT(4));

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(3),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(4),ROOT(5));
NEXTCASEONFAILURE

CFWriteStreamScheduleWithRunLoop( GETPOINTER(0,__CFWriteStream,*,ROOT(6),TERMINAL(3)),GETPOINTER(0,__CFRunLoop,*,ROOT(7),TERMINAL(4)),GETCONSTPOINTER(__CFString,*,TERMINAL(5)));
result = kSuccess;

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTPOINTER(__CFRunLoop,*,CFRunLoopGetCurrent(),2);
result = kSuccess;

result = vpx_constant(PARAMETERS,"kCFRunLoopCommonModes",ROOT(3));

result = vpx_constant(PARAMETERS,"__CFString",ROOT(4));

result = vpx_method_Get_20_CF_20_Constant(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(4),ROOT(5));
NEXTCASEONFAILURE

CFWriteStreamUnscheduleFromRunLoop( GETPOINTER(0,__CFWriteStream,*,ROOT(6),TERMINAL(3)),GETPOINTER(0,__CFRunLoop,*,ROOT(7),TERMINAL(4)),GETCONSTPOINTER(__CFString,*,TERMINAL(5)));
result = kSuccess;

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(0),TERMINAL(1),TERMINAL(3),TERMINAL(2),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"\"CFStreamClientContext\"",ROOT(1));

result = vpx_constant(PARAMETERS,"20",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_constant(PARAMETERS,"( 0 0 0 0 0 )",ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,4,6)
result = vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4_case_2_local_8(PARAMETERS,TERMINAL(3),LOOP(0),LIST(5),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(6,TERMINAL(4))
}

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(7)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Client_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Client_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Client_case_1_local_4(PARAMETERS,TERMINAL(3),ROOT(5));

PUTINTEGER(CFWriteStreamSetClient( GETPOINTER(0,__CFWriteStream,*,ROOT(7),TERMINAL(4)),GETINTEGER(TERMINAL(1)),GETPOINTER(0,void,*,ROOT(8),TERMINAL(2)),GETPOINTER(20,CFStreamClientContext,*,ROOT(9),TERMINAL(5))),6);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(10)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Client_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Client_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Client(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Client_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Client_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Allocated_20_Buffers_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Allocated_20_Buffers_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Allocated_20_Buffers_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Allocated_20_Buffers_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Allocated_20_Buffers_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Allocated_20_Buffers_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Allocated_20_Buffers_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Allocated_20_Buffers_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Allocated_20_Buffers_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Allocated_20_Buffers_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Allocated_20_Buffers_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Allocated_20_Buffers(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Allocated_20_Buffers_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(3));

PUTPOINTER(__CFWriteStream,*,CFWriteStreamCreateWithAllocatedBuffers( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETCONSTPOINTER(__CFAllocator,*,TERMINAL(3))),4);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Buffer_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Buffer_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Buffer_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Buffer_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Block_20_Size(PARAMETERS,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Buffer_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Buffer_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Buffer_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Buffer_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Buffer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(3));

result = vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Buffer_case_1_local_3(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(4));

PUTPOINTER(__CFWriteStream,*,CFWriteStreamCreateWithBuffer( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(3)),GETPOINTER(1,unsigned char,*,ROOT(6),TERMINAL(1)),GETINTEGER(TERMINAL(4))),5);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(1),ROOT(3));

PUTPOINTER(__CFWriteStream,*,CFWriteStreamCreateWithFile( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETCONSTPOINTER(__CFURL,*,TERMINAL(3))),4);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_boolean_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_To_20_CFBooleanRef(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_number_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_To_20_CFNumberRef(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_Get_20_CFNullRef(PARAMETERS,ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
OUTPUT(1,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(4));
NEXTCASEONFAILURE

result = vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1_local_5(PARAMETERS,TERMINAL(2),ROOT(5),ROOT(6));
NEXTCASEONFAILURE

PUTINTEGER(CFWriteStreamSetProperty( GETPOINTER(0,__CFWriteStream,*,ROOT(8),TERMINAL(3)),GETCONSTPOINTER(__CFString,*,TERMINAL(4)),GETCONSTPOINTER(void,*,TERMINAL(5))),7);
result = kSuccess;

result = vpx_method_CF_20_Release(PARAMETERS,TERMINAL(6));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(9)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Copy_20_Property_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Copy_20_Property_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Copy_20_Property_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

PUTPOINTER(void,*,CFWriteStreamCopyProperty( GETPOINTER(0,__CFWriteStream,*,ROOT(5),TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(3))),4);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(6)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Copy_20_Property_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Copy_20_Property_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Copy_20_Property(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Copy_20_Property_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Copy_20_Property_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Status_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Status_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(CFWriteStreamGetStatus( GETPOINTER(0,__CFWriteStream,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Status_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Status_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Status(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Status_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Status_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_Block_20_Size(PARAMETERS,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_byte_2D_length,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_case_1_local_4_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(4));
NEXTCASEONFAILURE

PUTINTEGER(CFWriteStreamWrite( GETPOINTER(0,__CFWriteStream,*,ROOT(6),TERMINAL(3)),GETCONSTPOINTER(unsigned char,*,TERMINAL(1)),GETINTEGER(TERMINAL(4))),5);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(7)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"-1",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_20_Text_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_20_Text_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_String,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_String,3,0,TERMINAL(2),TERMINAL(0),NONE);

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CString,2,2,TERMINAL(2),TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_20_Text_case_1_local_2(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"unsigned char",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(3),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Write,3,1,TERMINAL(0),TERMINAL(3),TERMINAL(5),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_20_Text_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_20_Text_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Error_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Error_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_extget(PARAMETERS,"domain",1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_extget(PARAMETERS,"error",1,2,TERMINAL(0),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Error_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Error_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Error_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Error_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Error_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Error_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Error_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Error_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTSTRUCTURE(8,CFStreamError,CFWriteStreamGetError( GETPOINTER(0,__CFWriteStream,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Error_case_1_local_5(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Error_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Error_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Error(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Error_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Error_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Can_20_Accept_20_Bytes_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Can_20_Accept_20_Bytes_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(CFWriteStreamCanAcceptBytes( GETPOINTER(0,__CFWriteStream,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Can_20_Accept_20_Bytes_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Can_20_Accept_20_Bytes_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Can_20_Accept_20_Bytes_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Can_20_Accept_20_Bytes_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Can_20_Accept_20_Bytes_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"CFWrite Callback",ROOT(3));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(3),TERMINAL(2));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3E_,2,0,TERMINAL(0),TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Read_20_Bytes,3,0,TERMINAL(1),TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Terminate_20_Download,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2_local_6_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2_local_6_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Timeout_20_Timer,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"30",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Next_20_Fire_20_Time,2,0,TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2_local_6_case_2_local_2(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFStreamEventHasBytesAvailable,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Read,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2_local_4(PARAMETERS,TERMINAL(2),TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(3));

result = vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2_local_6(PARAMETERS,TERMINAL(4),TERMINAL(0));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_3_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_3_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFStreamEventEndEncountered,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_3_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_3_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFStreamEventErrorOccurred,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_3_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_3_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_3_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_3_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_3_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_3_local_2(PARAMETERS,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Terminate_20_Download,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"CFWrite Callback",ROOT(3));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(3),TERMINAL(2));

result = kSuccess;
NEXTCASEONSUCCESS

FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3E_,2,0,TERMINAL(0),TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Read_20_Bytes,3,0,TERMINAL(1),TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Terminate_20_Download,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3_local_6_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3_local_6_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Timeout_20_Timer,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"5",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Next_20_Fire_20_Time,2,0,TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3_local_6_case_2_local_2(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFStreamEventHasBytesAvailable,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Read,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3_local_4(PARAMETERS,TERMINAL(2),TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(3));

result = vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3_local_6(PARAMETERS,TERMINAL(4),TERMINAL(0));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_4_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_4_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFStreamEventEndEncountered,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_4_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_4_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFStreamEventErrorOccurred,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_4_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_4_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_4_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_4_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_4_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_4_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_4_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_4_local_2(PARAMETERS,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Terminate_20_Download,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Install_20_Client_20_Callback_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Install_20_Client_20_Callback_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Install_20_Client_20_Callback_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Install_20_Client_20_Callback_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFStreamEventOpenCompleted,ROOT(1));

result = vpx_extconstant(PARAMETERS,kCFStreamEventCanAcceptBytes,ROOT(2));

result = vpx_extconstant(PARAMETERS,kCFStreamEventEndEncountered,ROOT(3));

result = vpx_extconstant(PARAMETERS,kCFStreamEventErrorOccurred,ROOT(4));

result = vpx_call_evaluate(PARAMETERS,"A|B|C|D",4,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Install_20_Client_20_Callback_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Install_20_Client_20_Callback_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Install_20_Client_20_Callback_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Write_20_Stream_2F_Install_20_Client_20_Callback_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Install_20_Client_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CF_20_Write_20_Stream_2F_Install_20_Client_20_Callback_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Client_20_Callback,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(4),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Callback_20_Pointer,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Set_20_Client,4,1,TERMINAL(3),TERMINAL(2),TERMINAL(5),NONE,ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Install_20_Client_20_Callback_20_With_20_Owner_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Install_20_Client_20_Callback_20_With_20_Owner_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Install_20_Client_20_Callback_20_With_20_Owner_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Install_20_Client_20_Callback_20_With_20_Owner_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFStreamEventOpenCompleted,ROOT(1));

result = vpx_extconstant(PARAMETERS,kCFStreamEventCanAcceptBytes,ROOT(2));

result = vpx_extconstant(PARAMETERS,kCFStreamEventEndEncountered,ROOT(3));

result = vpx_extconstant(PARAMETERS,kCFStreamEventErrorOccurred,ROOT(4));

result = vpx_call_evaluate(PARAMETERS,"A|B|C|D",4,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Install_20_Client_20_Callback_20_With_20_Owner_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Install_20_Client_20_Callback_20_With_20_Owner_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Install_20_Client_20_Callback_20_With_20_Owner_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Write_20_Stream_2F_Install_20_Client_20_Callback_20_With_20_Owner_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Install_20_Client_20_Callback_20_With_20_Owner(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_CF_20_Write_20_Stream_2F_Install_20_Client_20_Callback_20_With_20_Owner_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Client_20_Callback,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(5),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Callback_20_Pointer,1,1,TERMINAL(5),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Set_20_Client,4,1,TERMINAL(4),TERMINAL(3),TERMINAL(7),NONE,ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Remove_20_Client_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Client_20_Callback,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_extconstant(PARAMETERS,kCFStreamEventNone,ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Set_20_Client,4,1,TERMINAL(0),TERMINAL(3),TERMINAL(4),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Get_20_Completion_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Completion_20_Callback,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Set_20_Completion_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Completion_20_Callback,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Do_20_Completion_20_Callback_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Do_20_Completion_20_Callback_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Valid?",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Do_20_Completion_20_Callback_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Do_20_Completion_20_Callback_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Do_20_Completion_20_Callback_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Do_20_Completion_20_Callback_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Do_20_Completion_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Completion_20_Callback,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_CF_20_Write_20_Stream_2F_Do_20_Completion_20_Callback_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_method_CF_20_Write_20_Stream_2F_Do_20_Completion_20_Callback_case_1_local_4(PARAMETERS,TERMINAL(2),TERMINAL(0));

result = vpx_method_Execute_20_Callback_20_With_20_Attachments(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_method_CF_20_Write_20_Stream_2F_Do_20_Completion_20_Callback_case_1_local_6(PARAMETERS,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Write_20_Stream,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Get_20_Class_20_Type_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CFWriteStreamGetTypeID(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Read_20_Bytes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Read_20_Bytes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Read_20_Bytes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Read_20_Bytes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(2),TERMINAL(3),TERMINAL(1),ROOT(4),ROOT(5),ROOT(6));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Read_20_Bytes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Read_20_Bytes_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_CF_20_Write_20_Stream_2F_Read_20_Bytes_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Initiate_20_Download_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Initiate_20_Download_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Timeout_20_Timer,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(2),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Initiate_20_Download_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Initiate_20_Download_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Client_20_Callback,2,1,TERMINAL(0),NONE,ROOT(1));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Schedule_20_With_20_Run_20_Loop,3,0,TERMINAL(0),NONE,NONE);

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Open,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_Write_20_Stream_2F_Initiate_20_Download_case_1_local_7(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Initiate_20_Download_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Initiate_20_Download_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Terminate_20_Download,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;
FAILONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Initiate_20_Download(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Initiate_20_Download_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_CF_20_Write_20_Stream_2F_Initiate_20_Download_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Initiate_20_Download_20_With_20_Owner_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Initiate_20_Download_20_With_20_Owner_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Timeout_20_Timer,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(2),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Initiate_20_Download_20_With_20_Owner_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Initiate_20_Download_20_With_20_Owner_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Client_20_Callback_20_With_20_Owner,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Schedule_20_With_20_Run_20_Loop,3,0,TERMINAL(0),NONE,NONE);

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Open,1,1,TERMINAL(0),ROOT(4));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_Write_20_Stream_2F_Initiate_20_Download_20_With_20_Owner_case_1_local_7(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Initiate_20_Download_20_With_20_Owner_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Initiate_20_Download_20_With_20_Owner_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Terminate_20_Download,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;
FAILONSUCCESS

FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Initiate_20_Download_20_With_20_Owner(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Write_20_Stream_2F_Initiate_20_Download_20_With_20_Owner_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_CF_20_Write_20_Stream_2F_Initiate_20_Download_20_With_20_Owner_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Terminate_20_Download_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Terminate_20_Download_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Timeout_20_Timer,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Terminate_20_Download(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CF_20_Write_20_Stream_2F_Terminate_20_Download_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Client_20_Callback,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Unschedule_20_From_20_Run_20_Loop,3,0,TERMINAL(0),NONE,NONE);

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stream_20_Close,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Do_20_Completion_20_Callback,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Standard_20_Timeout_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Timeout_20_Download,1,0,TERMINAL(0));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Terminate_20_Download,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_Write_20_Stream_2F_Timeout_20_Download(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Download timeout!",ROOT(1));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

/* Stop Universals */






Nat4	loadClasses_CF_20_Streams(V_Environment environment);
Nat4	loadClasses_CF_20_Streams(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("CF Read Stream",environment);
	if(result == NULL) return kERROR;
	VPLC_CF_20_Read_20_Stream_class_load(result,environment);
	result = class_new("CF Write Stream",environment);
	if(result == NULL) return kERROR;
	VPLC_CF_20_Write_20_Stream_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_CF_20_Streams(V_Environment environment);
Nat4	loadUniversals_CF_20_Streams(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("TEST CFReadStream",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_CFReadStream,NULL);

	result = method_new("CF Read Stream/Stream Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Open,NULL);

	result = method_new("CF Read Stream/Stream Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Close,NULL);

	result = method_new("CF Read Stream/Stream Schedule With Run Loop",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop,NULL);

	result = method_new("CF Read Stream/Stream Unschedule From Run Loop",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop,NULL);

	result = method_new("CF Read Stream/Stream Set Client",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Client,NULL);

	result = method_new("CF Read Stream/Stream Create For HTTP Request",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Create_20_For_20_HTTP_20_Request,NULL);

	result = method_new("CF Read Stream/Stream Create With URL",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Create_20_With_20_URL,NULL);

	result = method_new("CF Read Stream/Stream Set Property",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Set_20_Property,NULL);

	result = method_new("CF Read Stream/Stream Copy Property",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Copy_20_Property,NULL);

	result = method_new("CF Read Stream/Stream Get Status",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Status,NULL);

	result = method_new("CF Read Stream/Stream Read",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read,NULL);

	result = method_new("CF Read Stream/Stream Read Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Read_20_Text,NULL);

	result = method_new("CF Read Stream/Stream Get Error",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Stream_20_Get_20_Error,NULL);

	result = method_new("CF Read Stream/CFRead Standard Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Standard_20_Callback,NULL);

	result = method_new("CF Read Stream/CFRead Debug Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_CFRead_20_Debug_20_Callback,NULL);

	result = method_new("CF Read Stream/Read Bytes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Read_20_Bytes,NULL);

	result = method_new("CF Read Stream/Install Client Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Install_20_Client_20_Callback,NULL);

	result = method_new("CF Read Stream/Install Client Callback With Owner",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Install_20_Client_20_Callback_20_With_20_Owner,NULL);

	result = method_new("CF Read Stream/Remove Client Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Remove_20_Client_20_Callback,NULL);

	result = method_new("CF Read Stream/Terminate Download",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Terminate_20_Download,NULL);

	result = method_new("CF Read Stream/Standard Timeout Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Standard_20_Timeout_20_Callback,NULL);

	result = method_new("CF Read Stream/Timeout Download",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Timeout_20_Download,NULL);

	result = method_new("CF Read Stream/Initiate Download",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Initiate_20_Download,NULL);

	result = method_new("CF Read Stream/Initiate Download With Owner",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Initiate_20_Download_20_With_20_Owner,NULL);

	result = method_new("CF Read Stream/Get Completion Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Get_20_Completion_20_Callback,NULL);

	result = method_new("CF Read Stream/Set Completion Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Set_20_Completion_20_Callback,NULL);

	result = method_new("CF Read Stream/Do Completion Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Do_20_Completion_20_Callback,NULL);

	result = method_new("CF Read Stream/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_New,NULL);

	result = method_new("CF Read Stream/Get Class Type ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Read_20_Stream_2F_Get_20_Class_20_Type_20_ID,NULL);

	result = method_new("CF Write Stream/Stream Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Open,NULL);

	result = method_new("CF Write Stream/Stream Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Close,NULL);

	result = method_new("CF Write Stream/Stream Schedule With Run Loop",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Schedule_20_With_20_Run_20_Loop,NULL);

	result = method_new("CF Write Stream/Stream Unschedule From Run Loop",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Unschedule_20_From_20_Run_20_Loop,NULL);

	result = method_new("CF Write Stream/Stream Set Client",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Client,NULL);

	result = method_new("CF Write Stream/Stream Create With Allocated Buffers",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Allocated_20_Buffers,NULL);

	result = method_new("CF Write Stream/Stream Create With Buffer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_Buffer,NULL);

	result = method_new("CF Write Stream/Stream Create With File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Create_20_With_20_File,NULL);

	result = method_new("CF Write Stream/Stream Set Property",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Set_20_Property,NULL);

	result = method_new("CF Write Stream/Stream Copy Property",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Copy_20_Property,NULL);

	result = method_new("CF Write Stream/Stream Get Status",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Status,NULL);

	result = method_new("CF Write Stream/Stream Write",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write,NULL);

	result = method_new("CF Write Stream/Stream Write Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Write_20_Text,NULL);

	result = method_new("CF Write Stream/Stream Get Error",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Get_20_Error,NULL);

	result = method_new("CF Write Stream/Stream Can Accept Bytes?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Stream_20_Can_20_Accept_20_Bytes_3F_,NULL);

	result = method_new("CF Write Stream/CFWrite Standard Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Standard_20_Callback,NULL);

	result = method_new("CF Write Stream/CFWrite Debug Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_CFWrite_20_Debug_20_Callback,NULL);

	result = method_new("CF Write Stream/Install Client Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Install_20_Client_20_Callback,NULL);

	result = method_new("CF Write Stream/Install Client Callback With Owner",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Install_20_Client_20_Callback_20_With_20_Owner,NULL);

	result = method_new("CF Write Stream/Remove Client Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Remove_20_Client_20_Callback,NULL);

	result = method_new("CF Write Stream/Get Completion Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Get_20_Completion_20_Callback,NULL);

	result = method_new("CF Write Stream/Set Completion Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Set_20_Completion_20_Callback,NULL);

	result = method_new("CF Write Stream/Do Completion Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Do_20_Completion_20_Callback,NULL);

	result = method_new("CF Write Stream/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_New,NULL);

	result = method_new("CF Write Stream/Get Class Type ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Get_20_Class_20_Type_20_ID,NULL);

	result = method_new("CF Write Stream/Read Bytes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Read_20_Bytes,NULL);

	result = method_new("CF Write Stream/Initiate Download",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Initiate_20_Download,NULL);

	result = method_new("CF Write Stream/Initiate Download With Owner",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Initiate_20_Download_20_With_20_Owner,NULL);

	result = method_new("CF Write Stream/Terminate Download",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Terminate_20_Download,NULL);

	result = method_new("CF Write Stream/Standard Timeout Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Standard_20_Timeout_20_Callback,NULL);

	result = method_new("CF Write Stream/Timeout Download",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Write_20_Stream_2F_Timeout_20_Download,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_CF_20_Streams(V_Environment environment);
Nat4	loadPersistents_CF_20_Streams(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_CF_20_Streams(V_Environment environment);
Nat4	load_CF_20_Streams(V_Environment environment)
{

	loadClasses_CF_20_Streams(environment);
	loadUniversals_CF_20_Streams(environment);
	loadPersistents_CF_20_Streams(environment);
	return kNOERROR;

}

