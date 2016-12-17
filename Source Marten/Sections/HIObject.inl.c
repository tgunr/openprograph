/* A VPL Section File */
/*

HIObject.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_HIObjectRef_20_To_20_Object_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_HIObjectRef_20_To_20_Object_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"OpaqueHIObjectRef",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_HIObjectRef_20_To_20_Object_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_HIObjectRef_20_To_20_Object_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_address_2D_to_2D_object,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_HIObjectRef_20_To_20_Object_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_HIObjectRef_20_To_20_Object_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_HIObjectRef_20_To_20_Object_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_HIObjectRef_20_To_20_Object_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_HIObjectRef_20_To_20_Object_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_HIObjectRef_20_To_20_Object_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_HIObjectRef_20_To_20_Object_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_HIObjectRef_20_To_20_Object_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"HIObjectDynamicCast = NULL",ROOT(2));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_HIObjectRef_20_To_20_Object_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_HIObjectRef_20_To_20_Object_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_HIObjectRef_20_To_20_Object_case_1_local_4(PARAMETERS,TERMINAL(0));

PUTPOINTER(void,*,HIObjectDynamicCast( GETPOINTER(0,OpaqueHIObjectRef,*,ROOT(4),TERMINAL(0)),GETCONSTPOINTER(__CFString,*,TERMINAL(2))),3);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(2)));
result = kSuccess;

result = vpx_method_HIObjectRef_20_To_20_Object_case_1_local_7(PARAMETERS,TERMINAL(3),ROOT(5));

result = vpx_method_HIObjectRef_20_To_20_Object_case_1_local_8(PARAMETERS,TERMINAL(5),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_HIObjectRef_20_To_20_Object_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_HIObjectRef_20_To_20_Object_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_HIObjectRef_20_To_20_Object(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_HIObjectRef_20_To_20_Object_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_HIObjectRef_20_To_20_Object_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}




	Nat4 tempAttribute_MacOS_20_HIObject_20_Service_2F_Name[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000009, 0X48494F62, 0X6A656374, 0X73000000
	};
	Nat4 tempAttribute_MacOS_20_HIObject_20_Service_2F_Required_20_Services[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MacOS_20_HIObject_20_Service_2F_Initial_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000EE00
	};
	Nat4 tempAttribute_MacOS_20_HIObject_20_Service_2F_Active_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MacOS_20_HIObject_20_Service_2F_Initial_20_Classes[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_HIObject_20_Class_2F_Class_20_ID[] = {
0000000000, 0X00000020, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0000000000, 0000000000
	};
	Nat4 tempAttribute_HIObject_20_Class_2F_Base_20_Class_20_ID[] = {
0000000000, 0X00000020, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0000000000, 0000000000
	};
	Nat4 tempAttribute_HIObject_20_Class_2F_HIObject_20_Instance_20_Type[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000008, 0X48494F62, 0X6A656374, 0000000000
	};
	Nat4 tempAttribute_HIObject_20_Class_2F_HIObject_20_Class_20_Callback[] = {
0000000000, 0X00000468, 0X000000DC, 0X00000032, 0X00000014, 0X00000510, 0X0000050C, 0X00000504,
0X0000039C, 0X000004BC, 0X000004B8, 0X000004B0, 0X00000398, 0X00000468, 0X00000464, 0X0000045C,
0X00000394, 0X00000414, 0X00000410, 0X00000408, 0X00000390, 0X000003C0, 0X000003BC, 0X000003B4,
0X0000038C, 0X00000384, 0X00000148, 0X00000144, 0X0000033C, 0X00000130, 0X00000310, 0X0000012C,
0X000002E4, 0X000002CC, 0X000002A4, 0X000002AC, 0X0000028C, 0X00000284, 0X00000124, 0X0000025C,
0X00000244, 0X0000021C, 0X00000224, 0X000001A0, 0X000001F8, 0X000001E0, 0X000001B8, 0X000001C0,
0X0000019C, 0X00000194, 0X00000120, 0X00000164, 0X0000011C, 0X000000F0, 0X000000F8, 0X006B0008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000114, 0X0000000F, 0X000000FC, 0X48494F62,
0X6A656374, 0X20436C61, 0X73732043, 0X616C6C62, 0X61636B00, 0000000000, 0000000000, 0X00000150,
0X00000180, 0X00000270, 0000000000, 0X000002FC, 0X00000328, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000358, 0X00000370, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000016C, 0X00000012, 0X2F434520, 0X48494F62, 0X6A656374, 0X20457665, 0X6E740000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000019C, 0X00000002, 0X000001A4,
0X00000208, 0X00150008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001E0, 0X00000001,
0X000001C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0X000001E4, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000200, 0X00000005,
0X4F776E65, 0X72000000, 0X00150008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000244,
0X00000001, 0X00000228, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965,
0X72000000, 0X00000248, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000264,
0X00000009, 0X54686520, 0X4576656E, 0X74000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000028C, 0X00000001, 0X00000290, 0X00160008, 0000000000, 0000000000, 0000000000,
0000000000, 0X000002CC, 0X00000001, 0X000002B0, 0X41747472, 0X69627574, 0X65204F75, 0X74707574,
0X20537065, 0X63696669, 0X65720000, 0X000002D0, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000002EC, 0X0000000F, 0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000318, 0X0000000F, 0X2F446F20, 0X48492043,
0X616C6C62, 0X61636B00, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000344,
0X00000013, 0X4576656E, 0X7448616E, 0X646C6572, 0X50726F63, 0X50747200, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000038C, 0X00000005, 0X000003A0, 0X000003F4, 0X00000448, 0X0000049C, 0X000004F0,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003BC, 0X00000002, 0X000003C4,
0X000003DC, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X68696F62, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000001, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000410, 0X00000002, 0X00000418, 0X00000430, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X68696F62, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000002, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000464,
0X00000002, 0X0000046C, 0X00000484, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X68696F62, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000003, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000004B8, 0X00000002, 0X000004C0, 0X000004D8,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X68696F62, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000050C, 0X00000002, 0X00000514, 0X0000052C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X68696F62, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000005
	};
	Nat4 tempAttribute_HIObject_20_Class_20_Callback_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000013, 0X6B457665, 0X6E74436C, 0X61737348,
0X494F626A, 0X65637400
	};
	Nat4 tempAttribute_HIObject_20_Class_20_Callback_2F_Method_20_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000012, 0X2F434520, 0X48494F62, 0X6A656374,
0X20457665, 0X6E740000
	};
	Nat4 tempAttribute_HIObject_20_Class_20_Callback_2F_Input_20_Specifiers[] = {
0000000000, 0X000000F0, 0X00000040, 0X0000000B, 0X00000014, 0X0000011C, 0X00000104, 0X000000DC,
0X000000E4, 0X00000060, 0X000000B8, 0X000000A0, 0X00000078, 0X00000080, 0X0000005C, 0X00000054,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000005C, 0X00000002, 0X00000064,
0X000000C8, 0X00150008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000A0, 0X00000001,
0X00000084, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0X000000A4, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000C0, 0X00000005,
0X4F776E65, 0X72000000, 0X00150008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000104,
0X00000001, 0X000000E8, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965,
0X72000000, 0X00000108, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000124,
0X00000009, 0X54686520, 0X4576656E, 0X74000000
	};
	Nat4 tempAttribute_HIObject_20_Class_20_Callback_2F_Output_20_Specifiers[] = {
0000000000, 0X0000008C, 0X0000002C, 0X00000006, 0X00000014, 0X000000A0, 0X00000088, 0X00000060,
0X00000068, 0X00000048, 0X00000040, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000048, 0X00000001, 0X0000004C, 0X00160008, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000088, 0X00000001, 0X0000006C, 0X41747472, 0X69627574, 0X65204F75, 0X74707574, 0X20537065,
0X63696669, 0X65720000, 0X0000008C, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000A8, 0X0000000F, 0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400
	};
	Nat4 tempAttribute_HIObject_20_Class_20_Callback_2F_Callback_20_Method_20_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000000F, 0X2F446F20, 0X48492043, 0X616C6C62,
0X61636B00
	};
	Nat4 tempAttribute_HIObject_20_Class_20_Callback_2F_ProcPtr_20_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000013, 0X4576656E, 0X7448616E, 0X646C6572,
0X50726F63, 0X50747200
	};
	Nat4 tempAttribute_HIObject_20_Class_20_Callback_2F_Callback_20_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_HIObject_20_Class_20_Callback_2F_Event_20_Types[] = {
0000000000, 0X000001D4, 0X00000068, 0X00000015, 0X00000014, 0X00000208, 0X00000204, 0X000001FC,
0X00000094, 0X000001B4, 0X000001B0, 0X000001A8, 0X00000090, 0X00000160, 0X0000015C, 0X00000154,
0X0000008C, 0X0000010C, 0X00000108, 0X00000100, 0X00000088, 0X000000B8, 0X000000B4, 0X000000AC,
0X00000084, 0X0000007C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000084,
0X00000005, 0X00000098, 0X000000EC, 0X00000140, 0X00000194, 0X000001E8, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X000000B4, 0X00000002, 0X000000BC, 0X000000D4, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X68696F62, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000001, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000108, 0X00000002, 0X00000110, 0X00000128, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X68696F62, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000002,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000015C, 0X00000002, 0X00000164,
0X0000017C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X68696F62, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000003, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X000001B0, 0X00000002, 0X000001B8, 0X000001D0, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X68696F62, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000204,
0X00000002, 0X0000020C, 0X00000224, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X68696F62, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000005
	};


Nat4 VPLC_MacOS_20_HIObject_20_Service_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_MacOS_20_HIObject_20_Service_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_MacOS_20_HIObject_20_Service_2F_Name,environment);
	tempAttribute = attribute_add("Required Services",tempClass,tempAttribute_MacOS_20_HIObject_20_Service_2F_Required_20_Services,environment);
	tempAttribute = attribute_add("Initial?",tempClass,tempAttribute_MacOS_20_HIObject_20_Service_2F_Initial_3F_,environment);
	tempAttribute = attribute_add("Active?",tempClass,tempAttribute_MacOS_20_HIObject_20_Service_2F_Active_3F_,environment);
	tempAttribute = attribute_add("Initial Classes",tempClass,tempAttribute_MacOS_20_HIObject_20_Service_2F_Initial_20_Classes,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Service Abstract");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_MacOS_20_HIObject_20_Service_2F_Open_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_HIObject_20_Service_2F_Open_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Make_20_Class(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Register_20_HIObject,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_MacOS_20_HIObject_20_Service_2F_Open_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_HIObject_20_Service_2F_Open_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_MacOS_20_HIObject_20_Service_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MacOS_20_HIObject_20_Service_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MacOS_20_HIObject_20_Service_2F_Open_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_MacOS_20_HIObject_20_Service_2F_Open_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_MacOS_20_HIObject_20_Service_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Initial_20_Classes,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_MacOS_20_HIObject_20_Service_2F_Open_case_1_local_3(PARAMETERS,LIST(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_HIObject_20_Class_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_HIObject_20_Class_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Class ID",tempClass,tempAttribute_HIObject_20_Class_2F_Class_20_ID,environment);
	tempAttribute = attribute_add("Base Class ID",tempClass,tempAttribute_HIObject_20_Class_2F_Base_20_Class_20_ID,environment);
	tempAttribute = attribute_add("HIObject Class Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("HIObject Instance Type",tempClass,tempAttribute_HIObject_20_Class_2F_HIObject_20_Instance_20_Type,environment);
	tempAttribute = attribute_add("HIObject Class Callback",tempClass,tempAttribute_HIObject_20_Class_2F_HIObject_20_Class_20_Callback,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 281 239 }{ 388 327 } */
enum opTrigger vpx_method_HIObject_20_Class_2F_Register_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_HIObject_20_Class_2F_Register_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Is_20_Registered,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Register_20_Subclass,2,0,TERMINAL(0),NONE);
FAILONFAILURE

result = kSuccess;

FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_Register_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_HIObject_20_Class_2F_Register_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_Register(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_HIObject_20_Class_2F_Register_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_HIObject_20_Class_2F_Register_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_HIObject_20_Class_2F_Unregister_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_HIObject_20_Class_2F_Unregister_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"HIObjectUnregisterClass",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Error,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(1));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_Unregister(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_HIObjectClassRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

PUTINTEGER(HIObjectUnregisterClass( GETPOINTER(0,OpaqueHIObjectClassRef,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_method_HIObject_20_Class_2F_Unregister_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_Is_20_Registered(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_HIObjectClassRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_Register_20_Subclass_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_HIObject_20_Class_2F_Register_20_Subclass_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_Register_20_Subclass_case_1_local_11_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_HIObject_20_Class_2F_Register_20_Subclass_case_1_local_11_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
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

enum opTrigger vpx_method_HIObject_20_Class_2F_Register_20_Subclass_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_HIObject_20_Class_2F_Register_20_Subclass_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(0)));
result = kSuccess;

result = vpx_method_HIObject_20_Class_2F_Register_20_Subclass_case_1_local_11_case_1_local_3(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_Register_20_Subclass_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_HIObject_20_Class_2F_Register_20_Subclass_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"HIObjectRegisterSubclass",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Error,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(1));

result = vpx_match(PARAMETERS,"-22080",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_Register_20_Subclass(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(15)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_HIObject_20_Class_2F_Register_20_Subclass_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Allocate_20_Class_20_ID,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Allocate_20_Base_20_Class_20_ID,1,1,TERMINAL(0),ROOT(4));

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_HIObject_20_Class_20_Callback,TERMINAL(0),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EventTypeSpec,1,2,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(7),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UPP_20_Pointer,1,1,TERMINAL(7),ROOT(10));

PUTINTEGER(HIObjectRegisterSubclass( GETCONSTPOINTER(__CFString,*,TERMINAL(3)),GETCONSTPOINTER(__CFString,*,TERMINAL(4)),GETINTEGER(TERMINAL(2)),GETPOINTER(4,int,*,ROOT(12),TERMINAL(10)),GETINTEGER(TERMINAL(8)),GETCONSTPOINTER(EventTypeSpec,*,TERMINAL(9)),GETPOINTER(0,void,*,ROOT(13),TERMINAL(5)),GETPOINTER(0,OpaqueHIObjectClassRef,**,ROOT(14),NONE)),11);
result = kSuccess;

result = vpx_method_HIObject_20_Class_2F_Register_20_Subclass_case_1_local_11(PARAMETERS,TERMINAL(3),TERMINAL(4));

result = vpx_method_HIObject_20_Class_2F_Register_20_Subclass_case_1_local_12(PARAMETERS,TERMINAL(0),TERMINAL(11));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_HIObjectClassRef,2,0,TERMINAL(0),TERMINAL(14));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(15)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_Allocate_20_Class_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Class_20_ID,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_Allocate_20_Base_20_Class_20_ID_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_HIObject_20_Class_2F_Allocate_20_Base_20_Class_20_ID_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Base_20_Class_20_ID,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"\"\"",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_Allocate_20_Base_20_Class_20_ID_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_HIObject_20_Class_2F_Allocate_20_Base_20_Class_20_ID_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_Allocate_20_Base_20_Class_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_HIObject_20_Class_2F_Allocate_20_Base_20_Class_20_ID_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_HIObject_20_Class_2F_Allocate_20_Base_20_Class_20_ID_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_HIObject_20_Class_2F_Make_20_HIObject_20_Instance(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_HIObject_20_Instance_20_Type,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_Make_20_Class(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_Report_20_Error(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_Dispose_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_HIObject_20_Class_2F_Dispose_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_HIObjectClassRef,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_Dispose_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_HIObject_20_Class_2F_Dispose_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_HIObject_20_Class_20_Callback,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_Dispose(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_HIObject_20_Class_2F_Dispose_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_HIObject_20_Class_2F_Dispose_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_Get_20_HIObjectClassRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_HIObject_20_Class_20_Reference,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_Set_20_HIObjectClassRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_HIObject_20_Class_20_Reference,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_Get_20_HIObject_20_Instance_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_HIObject_20_Instance_20_Type,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Event_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Event_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Class,1,1,TERMINAL(1),ROOT(2));

result = vpx_extmatch(PARAMETERS,kEventClassHIObject,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Kind,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_HIObject_20_Class_20_Event,3,1,TERMINAL(0),TERMINAL(3),TERMINAL(1),ROOT(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Event_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Event_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_User_20_Data,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_address_2D_to_2D_object,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_Handle_20_Event,2,1,TERMINAL(4),TERMINAL(1),ROOT(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Event_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Event_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Return_20_Event_20_Not_20_Handled,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Event(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Event_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Event_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Event_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Class_20_Event_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Class_20_Event_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kEventHIObjectConstruct,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_HIObject_20_Construct,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Class_20_Event_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Class_20_Event_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kEventHIObjectDestruct,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_HIObject_20_Destruct,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Class_20_Event_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Class_20_Event_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Return_20_Event_20_Not_20_Handled,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Class_20_Event(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Class_20_Event_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Class_20_Event_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Class_20_Event_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_EP_20_HIObject_20_Instance,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_HIObject_20_Instance,1,1,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_HIObject_20_Construct,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));
FAILONFAILURE

result = vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_case_1_local_4(PARAMETERS,TERMINAL(3),TERMINAL(2),TERMINAL(1),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_EP_20_HIObject_20_Instance,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"Set EP HIObject Instance",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_log_2D_error,2,0,TERMINAL(4),TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_HIObject_20_Instance,1,1,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_HIObject_20_Construct,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));
FAILONFAILURE

result = vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_case_2_local_4(PARAMETERS,TERMINAL(3),TERMINAL(2),TERMINAL(1),ROOT(4));

result = vpx_constant(PARAMETERS,"Set EP HIOI Err:",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_log_2D_error,2,0,TERMINAL(5),TERMINAL(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(6)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Destruct(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Return_20_Event_20_Not_20_Handled,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_HIObject_20_Class_2F_Dispose_20_Instance(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_HIObject_20_Class_20_Callback_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_HIObject_20_Class_20_Callback_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 153 460 }{ 224 388 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_HIObject_20_Class_20_Callback_2F_Name,environment);
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Method Name",tempClass,tempAttribute_HIObject_20_Class_20_Callback_2F_Method_20_Name,environment);
	tempAttribute = attribute_add("Input Specifiers",tempClass,tempAttribute_HIObject_20_Class_20_Callback_2F_Input_20_Specifiers,environment);
	tempAttribute = attribute_add("Output Specifiers",tempClass,tempAttribute_HIObject_20_Class_20_Callback_2F_Output_20_Specifiers,environment);
	tempAttribute = attribute_add("Attachments",tempClass,NULL,environment);
	tempAttribute = attribute_add("Callback Method Name",tempClass,tempAttribute_HIObject_20_Class_20_Callback_2F_Callback_20_Method_20_Name,environment);
	tempAttribute = attribute_add("ProcPtr Name",tempClass,tempAttribute_HIObject_20_Class_20_Callback_2F_ProcPtr_20_Name,environment);
	tempAttribute = attribute_add("UPP Allocate",tempClass,NULL,environment);
	tempAttribute = attribute_add("UPP Dispose",tempClass,NULL,environment);
	tempAttribute = attribute_add("Callback Pointer",tempClass,NULL,environment);
	tempAttribute = attribute_add("UPP Pointer",tempClass,NULL,environment);
	tempAttribute = attribute_add("Callback Result",tempClass,tempAttribute_HIObject_20_Class_20_Callback_2F_Callback_20_Result,environment);
	tempAttribute = attribute_add("Event Types",tempClass,tempAttribute_HIObject_20_Class_20_Callback_2F_Event_20_Types,environment);
	tempAttribute = attribute_add("The Event",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Method Callback");
	return kNOERROR;
}

/* Start Universals: { 372 427 }{ 426 299 } */
enum opTrigger vpx_method_HIObject_20_Class_20_Callback_2F_Open_20_UPP(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Callback_20_Pointer,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

PUTPOINTER(int,*,NewEventHandlerUPP( GETPOINTER(4,int,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_UPP_20_Pointer,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_HIObject_20_Class_20_Callback_2F_Get_20_EventTypeSpec_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_HIObject_20_Class_20_Callback_2F_Get_20_EventTypeSpec_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"4",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_integer_2D_to_2D_pointer,4,2,TERMINAL(1),TERMINAL(2),TERMINAL(5),TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_integer_2D_to_2D_pointer,4,2,TERMINAL(6),TERMINAL(7),TERMINAL(5),TERMINAL(4),ROOT(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_HIObject_20_Class_20_Callback_2F_Get_20_EventTypeSpec(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Event_20_Types,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"8",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2A2A_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"EventTypeSpec",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(6),TERMINAL(5),ROOT(7));

result = vpx_constant(PARAMETERS,"0",ROOT(8));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,8,9)
result = vpx_method_HIObject_20_Class_20_Callback_2F_Get_20_EventTypeSpec_case_1_local_9(PARAMETERS,LIST(2),TERMINAL(7),LOOP(0),ROOT(9));
REPEATFINISH
} else {
ROOTNULL(9,TERMINAL(8))
}

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_HIObject_20_Class_20_Callback_2F_Do_20_HI_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Use_20_Parameters,4,0,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Call,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Callback_20_Result,1,1,TERMINAL(0),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Clean_20_Up_20_Parameters,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_HIObject_20_Class_20_Callback_2F_Use_20_Parameters(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_EventRef_2F_New(PARAMETERS,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_The_20_Event,TERMINAL(0),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Return_20_Event_20_Not_20_Handled,1,1,TERMINAL(4),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Callback_20_Result,TERMINAL(0),TERMINAL(6),ROOT(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_HIObject_20_Class_20_Callback_2F_Close_20_UPP(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UPP_20_Pointer,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

DisposeEventHandlerUPP( GETPOINTER(4,int,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_UPP_20_Pointer,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_HIObject_20_Class_20_Callback_2F_Clean_20_Up_20_Parameters_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_HIObject_20_Class_20_Callback_2F_Clean_20_Up_20_Parameters_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_The_20_Event,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_The_20_Event,TERMINAL(0),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_HIObject_20_Class_20_Callback_2F_Clean_20_Up_20_Parameters(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_HIObject_20_Class_20_Callback_2F_Clean_20_Up_20_Parameters_case_1_local_2(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_HIObject_20_Class_20_Callback_2F_Get_20_Parameter_20_List_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_HIObject_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_HIObject_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("HIObject Reference",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 158 474 }{ 662 318 } */
enum opTrigger vpx_method_HIObject_2F_HIObject_20_Construct(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Register_20_Instance,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_retain_2D_object,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_HIObject_2F_HIObject_20_Initialize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,noErr,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Use_20_Initial_20_Parameters,2,0,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_HIObject_2F_HIObject_20_Destruct(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Unregister_20_Instance,1,0,TERMINAL(0));

result = vpx_call_primitive(PARAMETERS,VPLP_release_2D_object,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_HIObject_2F_HIObject_20_Is_20_Equal(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_HIObject_2F_HIObject_20_Print_20_Debug_20_Info(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_HIObject_2F_Use_20_Initial_20_Parameters(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_HIObject_2F_Register_20_HIObject(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_HIObject_20_Class,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_Make_20_Class(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Register,1,0,TERMINAL(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_HIObject_20_Class,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_HIObject_2F_Register_20_Instance(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_HIObject_2F_Unregister_20_Instance(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_HIObject_2F_CE_20_Handle_20_Event(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_HIObject_20_Event,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Event_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Event_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Class,1,1,TERMINAL(1),ROOT(2));

result = vpx_extmatch(PARAMETERS,kEventClassHIObject,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Kind,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_HIObject_20_Class_20_Event,3,1,TERMINAL(0),TERMINAL(3),TERMINAL(1),ROOT(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Event_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Event_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Class,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Kind,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_integer_2D_to_2D_string,1,1,TERMINAL(2),ROOT(4));

result = vpx_constant(PARAMETERS,"Unhandled event",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(3),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(6),ROOT(7));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(5),TERMINAL(7),NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Event_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Event_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Return_20_Event_20_Not_20_Handled,1,1,TERMINAL(1),ROOT(2));

result = vpx_method_HIObject_2F_CE_20_HIObject_20_Event_case_2_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Event(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_HIObject_2F_CE_20_HIObject_20_Event_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_HIObject_2F_CE_20_HIObject_20_Event_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Class_20_Event_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Class_20_Event_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kEventHIObjectConstruct,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_HIObject_20_Construct,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Class_20_Event_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Class_20_Event_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kEventHIObjectDestruct,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_HIObject_20_Destruct,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Class_20_Event_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Class_20_Event_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kEventHIObjectInitialize,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_HIObject_20_Initialize,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Class_20_Event_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Class_20_Event_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kEventHIObjectIsEqual,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_HIObject_20_Is_20_Equal,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Class_20_Event_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Class_20_Event_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kEventHIObjectPrintDebugInfo,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_HIObject_20_Print_20_Debug_20_Info,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Class_20_Event_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Class_20_Event_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Return_20_Event_20_Not_20_Handled,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Class_20_Event(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_HIObject_2F_CE_20_HIObject_20_Class_20_Event_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_HIObject_2F_CE_20_HIObject_20_Class_20_Event_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_HIObject_2F_CE_20_HIObject_20_Class_20_Event_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_HIObject_2F_CE_20_HIObject_20_Class_20_Event_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_HIObject_2F_CE_20_HIObject_20_Class_20_Event_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_HIObject_2F_CE_20_HIObject_20_Class_20_Event_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Construct(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kEventParamHIObjectInstance,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EP_20_HIObjectRef,2,2,TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_HIObject_20_Reference,2,0,TERMINAL(0),TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIObject_20_Construct,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_extconstant(PARAMETERS,noErr,ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Initialize_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Initialize_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Call Next Event Handler",ROOT(1));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Initialize_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Initialize_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Call_20_Next_20_Event_20_Handler,1,1,TERMINAL(1),ROOT(2));

result = vpx_method_HIObject_2F_CE_20_HIObject_20_Initialize_case_1_local_3(PARAMETERS,TERMINAL(2));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Initialize_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Initialize_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIObject_20_Initialize,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Initialize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_HIObject_2F_CE_20_HIObject_20_Initialize_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_HIObject_2F_CE_20_HIObject_20_Initialize_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Destruct(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,noErr,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIObject_20_Destruct,1,0,TERMINAL(0));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Is_20_Equal(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIObject_20_Is_20_Equal,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_extconstant(PARAMETERS,noErr,ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_HIObject_2F_CE_20_HIObject_20_Print_20_Debug_20_Info(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,noErr,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIObject_20_Print_20_Debug_20_Info,2,0,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_HIObject_2F_Set_20_HIObject_20_Reference(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_HIObject_20_Reference,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_HIObject_2F_Get_20_HIObject_20_Reference(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_HIObject_20_Reference,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_HIObject_2F_Get_20_HIObject_20_Class(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_HIObject_20_Class,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_HIObject_2F_Set_20_HIObject_20_Class(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_HIObject_20_Class,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_HIObject_2F_Dispose(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_HIObject_20_Reference,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_HIObject_2F_Debug_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_HIObject_2F_Debug_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_HIObjectRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

HIObjectPrintDebugInfo( GETPOINTER(0,OpaqueHIObjectRef,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_HIObject_2F_Debug_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_HIObject_2F_Debug_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_HIObject_2F_Debug(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_HIObject_2F_Debug_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_HIObject_2F_Debug_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_HIObject_2F_Get_20_HIObjectRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_HIObject_2F_Get_20_HIObjectRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_HIObject_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"OpaqueHIObjectRef",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(1),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_HIObject_2F_Get_20_HIObjectRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_HIObject_2F_Get_20_HIObjectRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_HIObject_2F_Get_20_HIObjectRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_HIObject_2F_Get_20_HIObjectRef_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_HIObject_2F_Get_20_HIObjectRef_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_HIObject_2F_Create_case_1_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_HIObject_2F_Create_case_1_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release_20_Event,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_HIObject_2F_Create_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_HIObject_2F_Create_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_HIObject_20_Class,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Allocate_20_Class_20_ID,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Reference,1,1,TERMINAL(1),ROOT(4));

PUTINTEGER(HIObjectCreate( GETCONSTPOINTER(__CFString,*,TERMINAL(3)),GETPOINTER(0,OpaqueEventRef,*,ROOT(6),TERMINAL(4)),GETPOINTER(0,OpaqueHIObjectRef,**,ROOT(7),NONE)),5);
result = kSuccess;

result = vpx_method_HIObject_2F_Create_case_1_local_4_case_1_local_6(PARAMETERS,TERMINAL(1));

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(3)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_HIObject_2F_Create_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_HIObject_2F_Create_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_HIObject_2F_Create_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_HIObject_2F_Create_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_HIObject_2F_Create_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_HIObject_2F_Create_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_HIObject_2F_Create_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_HIObject_2F_Create_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_HIObject_2F_Create_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_HIObject_2F_Create_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Register_20_HIObject,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_Make_20_Initialization_20_Event,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_method_HIObject_2F_Create_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_HIObject_2F_Create_case_1_local_5(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_HIObject_2F_Create_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_HIObject_2F_Create_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_HIObject_2F_Create(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_HIObject_2F_Create_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_HIObject_2F_Create_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_HIObject_2F_Create_20_Instance_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_HIObject_2F_Create_20_Instance_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_HIObject_20_Class,1,1,TERMINAL(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Class_20_ID,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_HIObjectRef_20_To_20_Object(PARAMETERS,TERMINAL(1),TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_HIObject_2F_Create_20_Instance_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_HIObject_2F_Create_20_Instance_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_HIObject_2F_Create_20_Instance_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_HIObject_2F_Create_20_Instance_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_HIObject_2F_Create_20_Instance_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method_HIObject_2F_Create_20_Instance_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method_HIObject_2F_Create_20_Instance(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_method_HIObject_2F_Create_20_Instance_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(0),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_HIObject_2F7E_Make_20_Initialization_20_Event(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_EventRef,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_HIObject_20_Initialization_20_Event,1,0,TERMINAL(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_Make_20_Initialization_20_Parameters,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_HIObject_2F7E_Make_20_Initialization_20_Parameters(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_HIObject_2F_Get_20_Carbon_20_EventTargetRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_HIObjectRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

PUTPOINTER(OpaqueEventTargetRef,*,HIObjectGetEventTarget( GETPOINTER(0,OpaqueHIObjectRef,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(4)
}

/* Stop Universals */






Nat4	loadClasses_HIObject(V_Environment environment);
Nat4	loadClasses_HIObject(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("MacOS HIObject Service",environment);
	if(result == NULL) return kERROR;
	VPLC_MacOS_20_HIObject_20_Service_class_load(result,environment);
	result = class_new("HIObject Class",environment);
	if(result == NULL) return kERROR;
	VPLC_HIObject_20_Class_class_load(result,environment);
	result = class_new("HIObject Class Callback",environment);
	if(result == NULL) return kERROR;
	VPLC_HIObject_20_Class_20_Callback_class_load(result,environment);
	result = class_new("HIObject",environment);
	if(result == NULL) return kERROR;
	VPLC_HIObject_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_HIObject(V_Environment environment);
Nat4	loadUniversals_HIObject(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("HIObjectRef To Object",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObjectRef_20_To_20_Object,NULL);

	result = method_new("MacOS HIObject Service/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MacOS_20_HIObject_20_Service_2F_Open,NULL);

	result = method_new("HIObject Class/Register",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_20_Class_2F_Register,NULL);

	result = method_new("HIObject Class/Unregister",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_20_Class_2F_Unregister,NULL);

	result = method_new("HIObject Class/Is Registered",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_20_Class_2F_Is_20_Registered,NULL);

	result = method_new("HIObject Class/Register Subclass",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_20_Class_2F_Register_20_Subclass,NULL);

	result = method_new("HIObject Class/Allocate Class ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_20_Class_2F_Allocate_20_Class_20_ID,NULL);

	result = method_new("HIObject Class/Allocate Base Class ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_20_Class_2F_Allocate_20_Base_20_Class_20_ID,NULL);

	result = method_new("HIObject Class/Make HIObject Instance",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_20_Class_2F_Make_20_HIObject_20_Instance,NULL);

	result = method_new("HIObject Class/Report Error",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_20_Class_2F_Report_20_Error,NULL);

	result = method_new("HIObject Class/Dispose",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_20_Class_2F_Dispose,NULL);

	result = method_new("HIObject Class/Get HIObjectClassRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_20_Class_2F_Get_20_HIObjectClassRef,NULL);

	result = method_new("HIObject Class/Set HIObjectClassRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_20_Class_2F_Set_20_HIObjectClassRef,NULL);

	result = method_new("HIObject Class/Get HIObject Instance Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_20_Class_2F_Get_20_HIObject_20_Instance_20_Type,NULL);

	result = method_new("HIObject Class/CE HIObject Event",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Event,NULL);

	result = method_new("HIObject Class/CE HIObject Class Event",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Class_20_Event,NULL);

	result = method_new("HIObject Class/CE HIObject Construct",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Construct,NULL);

	result = method_new("HIObject Class/CE HIObject Destruct",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_20_Class_2F_CE_20_HIObject_20_Destruct,NULL);

	result = method_new("HIObject Class/Dispose Instance",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_20_Class_2F_Dispose_20_Instance,NULL);

	result = method_new("HIObject Class Callback/Open UPP",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_20_Class_20_Callback_2F_Open_20_UPP,NULL);

	result = method_new("HIObject Class Callback/Get EventTypeSpec",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_20_Class_20_Callback_2F_Get_20_EventTypeSpec,NULL);

	result = method_new("HIObject Class Callback/Do HI Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_20_Class_20_Callback_2F_Do_20_HI_20_Callback,NULL);

	result = method_new("HIObject Class Callback/Use Parameters",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_20_Class_20_Callback_2F_Use_20_Parameters,NULL);

	result = method_new("HIObject Class Callback/Close UPP",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_20_Class_20_Callback_2F_Close_20_UPP,NULL);

	result = method_new("HIObject Class Callback/Clean Up Parameters",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_20_Class_20_Callback_2F_Clean_20_Up_20_Parameters,NULL);

	result = method_new("HIObject Class Callback/Get Parameter List?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_20_Class_20_Callback_2F_Get_20_Parameter_20_List_3F_,NULL);

	result = method_new("HIObject/HIObject Construct",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_HIObject_20_Construct,NULL);

	result = method_new("HIObject/HIObject Initialize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_HIObject_20_Initialize,NULL);

	result = method_new("HIObject/HIObject Destruct",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_HIObject_20_Destruct,NULL);

	result = method_new("HIObject/HIObject Is Equal",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_HIObject_20_Is_20_Equal,NULL);

	result = method_new("HIObject/HIObject Print Debug Info",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_HIObject_20_Print_20_Debug_20_Info,NULL);

	result = method_new("HIObject/Use Initial Parameters",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_Use_20_Initial_20_Parameters,NULL);

	result = method_new("HIObject/Register HIObject",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_Register_20_HIObject,NULL);

	result = method_new("HIObject/Register Instance",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_Register_20_Instance,NULL);

	result = method_new("HIObject/Unregister Instance",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_Unregister_20_Instance,NULL);

	result = method_new("HIObject/CE Handle Event",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_CE_20_Handle_20_Event,NULL);

	result = method_new("HIObject/CE HIObject Event",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_CE_20_HIObject_20_Event,NULL);

	result = method_new("HIObject/CE HIObject Class Event",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_CE_20_HIObject_20_Class_20_Event,NULL);

	result = method_new("HIObject/CE HIObject Construct",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_CE_20_HIObject_20_Construct,NULL);

	result = method_new("HIObject/CE HIObject Initialize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_CE_20_HIObject_20_Initialize,NULL);

	result = method_new("HIObject/CE HIObject Destruct",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_CE_20_HIObject_20_Destruct,NULL);

	result = method_new("HIObject/CE HIObject Is Equal",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_CE_20_HIObject_20_Is_20_Equal,NULL);

	result = method_new("HIObject/CE HIObject Print Debug Info",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_CE_20_HIObject_20_Print_20_Debug_20_Info,NULL);

	result = method_new("HIObject/Set HIObject Reference",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_Set_20_HIObject_20_Reference,NULL);

	result = method_new("HIObject/Get HIObject Reference",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_Get_20_HIObject_20_Reference,NULL);

	result = method_new("HIObject/Get HIObject Class",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_Get_20_HIObject_20_Class,NULL);

	result = method_new("HIObject/Set HIObject Class",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_Set_20_HIObject_20_Class,NULL);

	result = method_new("HIObject/Dispose",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_Dispose,NULL);

	result = method_new("HIObject/Debug",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_Debug,NULL);

	result = method_new("HIObject/Get HIObjectRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_Get_20_HIObjectRef,NULL);

	result = method_new("HIObject/Create",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_Create,NULL);

	result = method_new("HIObject/Create Instance",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_Create_20_Instance,NULL);

	result = method_new("HIObject/~Make Initialization Event",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F7E_Make_20_Initialization_20_Event,NULL);

	result = method_new("HIObject/~Make Initialization Parameters",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F7E_Make_20_Initialization_20_Parameters,NULL);

	result = method_new("HIObject/Get Carbon EventTargetRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_HIObject_2F_Get_20_Carbon_20_EventTargetRef,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_HIObject(V_Environment environment);
Nat4	loadPersistents_HIObject(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	tempPersistent = create_persistentNode("HIObject/HIObject Class",NULL,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	return kNOERROR;

}

Nat4	load_HIObject(V_Environment environment);
Nat4	load_HIObject(V_Environment environment)
{

	loadClasses_HIObject(environment);
	loadUniversals_HIObject(environment);
	loadPersistents_HIObject(environment);
	return kNOERROR;

}

