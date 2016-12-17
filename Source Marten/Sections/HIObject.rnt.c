/* A VPL Section File */
/*

HIObject.rnt.c
Copyright: 2002 Scott B. Anderson

*/

Nat4 VPLU_HIObjectRef_20_To_20_Object_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObjectRef_20_To_20_Object_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 289 674 }{ 255 339 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 74 33 79 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 26 68 53 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 47 37 52 42 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 49 97 65 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"To CFStringRef");
/* IO - VPL Terminal : { 44 146 49 151 }*/
/* IO - VPL Root : { 65 146 70 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 133 19 149 64 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"type");
/* IO - VPL Terminal : { 128 39 133 44 }*/
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 51 105 67 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"OpaqueHIObjectRef");
/* IO - VPL Root : { 67 154 72 159 }*/
/* End Operation */

/* Begin Operation: { 96 76 112 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"set-external-type");
/* IO - VPL Terminal : { 91 114 96 119 }*/
/* IO - VPL Terminal : { 91 154 96 159 }*/
/* End Operation */

/* Begin Operation: { 129 22 137 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 95 31 111 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,2,"HIObjectDynamicCast");
/* IO - VPL Terminal : { 90 74 95 79 }*/
/* IO - VPL Terminal : { 90 119 95 124 }*/
/* IO - VPL Root : { 111 74 116 79 }*/
/* IO - VPL Root : { 111 119 116 124 }*/
/* End Operation */

/* Begin Operation: { 95 180 111 255 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,0,"CFRelease");
/* IO - VPL Terminal : { 90 215 95 220 }*/
/* End Operation */

/* Begin Operation: { 132 92 148 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"valid?");
/* IO - VPL Terminal : { 127 116 132 121 }*/
/* IO - VPL Root : { 148 116 153 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 262 426 }{ 226 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 55 68 82 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 47 66 52 71 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 53 148 69 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 48 150 53 155 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 87 70 103 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"from-pointer");
/* IO - VPL Terminal : { 82 114 87 119 }*/
/* IO - VPL Root : { 103 114 108 119 }*/
/* End Operation */

/* Begin Operation: { 131 31 147 58 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 126 42 131 47 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 128 101 144 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"address-to-object");
/* IO - VPL Terminal : { 123 159 128 164 }*/
/* IO - VPL Root : { 144 159 149 164 }*/
/* End Operation */

/* Begin Operation: { 175 24 183 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 170 118 175 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 2] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 102 81 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 81 113 86 118 }*/
/* End Operation */

/* Begin Operation: { 110 19 118 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 105 113 110 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 169 132 185 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"debug");
/* IO - VPL Terminal : { 164 147 169 152 }*/
/* IO - VPL Terminal : { 164 163 169 168 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 26 68 53 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 47 37 52 42 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 44 133 60 290 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"HIObjectDynamicCast = NULL");
/* IO - VPL Root : { 60 209 65 214 }*/
/* End Operation */

/* Begin Operation: { 89 113 105 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 84 144 89 149 }*/
/* IO - VPL Terminal : { 84 177 89 182 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 143 20 151 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 202 25 210 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 197 116 202 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,2,0,2,7);
	result = connect_root_to_terminal(ptrA,1,6,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 103 75 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 75 114 80 119 }*/
/* End Operation */

/* Begin Operation: { 104 20 112 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 99 114 104 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}





	Nat4 tempAttribute_MacOS_20_HIObject_20_Service_2F_Name[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X09000000, 0X48494F62, 0X6A656374, 0X73000000
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
0000000000, 0000000000, 0000000000, 0X00000034, 0X08000000, 0X48494F62, 0X6A656374, 0000000000
	};
	Nat4 tempAttribute_HIObject_20_Class_2F_HIObject_20_Class_20_Callback[] = {
0000000000, 0X00000468, 0X000000DC, 0X00000032, 0X00000014, 0X00000510, 0X0000050C, 0X00000504,
0X0000039C, 0X000004BC, 0X000004B8, 0X000004B0, 0X00000398, 0X00000468, 0X00000464, 0X0000045C,
0X00000394, 0X00000414, 0X00000410, 0X00000408, 0X00000390, 0X000003C0, 0X000003BC, 0X000003B4,
0X0000038C, 0X00000384, 0X00000148, 0X00000144, 0X0000033C, 0X00000130, 0X00000310, 0X0000012C,
0X000002E4, 0X000002CC, 0X000002A4, 0X000002AC, 0X0000028C, 0X00000284, 0X00000124, 0X0000025C,
0X00000244, 0X0000021C, 0X00000224, 0X000001A0, 0X000001F8, 0X000001E0, 0X000001B8, 0X000001C0,
0X0000019C, 0X00000194, 0X00000120, 0X00000164, 0X0000011C, 0X000000F0, 0X000000F8, 0X6B000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000114, 0X0000000F, 0X000000FC, 0X48494F62,
0X6A656374, 0X20436C61, 0X73732043, 0X616C6C62, 0X61636B00, 0000000000, 0000000000, 0X00000150,
0X00000180, 0X00000270, 0000000000, 0X000002FC, 0X00000328, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000358, 0X00000370, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000016C, 0X12000000, 0X2F434520, 0X48494F62, 0X6A656374, 0X20457665, 0X6E740000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000019C, 0X00000002, 0X000001A4,
0X00000208, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001E0, 0X00000001,
0X000001C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0X000001E4, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000200, 0X05000000,
0X4F776E65, 0X72000000, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000244,
0X00000001, 0X00000228, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965,
0X72000000, 0X00000248, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000264,
0X09000000, 0X54686520, 0X4576656E, 0X74000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000028C, 0X00000001, 0X00000290, 0X16000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X000002CC, 0X00000001, 0X000002B0, 0X41747472, 0X69627574, 0X65204F75, 0X74707574,
0X20537065, 0X63696669, 0X65720000, 0X000002D0, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000002EC, 0X0F000000, 0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000318, 0X0F000000, 0X2F446F20, 0X48492043,
0X616C6C62, 0X61636B00, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000344,
0X13000000, 0X4576656E, 0X7448616E, 0X646C6572, 0X50726F63, 0X50747200, 0X00000004, 0000000000,
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
0000000000, 0000000000, 0000000000, 0X00000034, 0X13000000, 0X6B457665, 0X6E74436C, 0X61737348,
0X494F626A, 0X65637400
	};
	Nat4 tempAttribute_HIObject_20_Class_20_Callback_2F_Method_20_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X12000000, 0X2F434520, 0X48494F62, 0X6A656374,
0X20457665, 0X6E740000
	};
	Nat4 tempAttribute_HIObject_20_Class_20_Callback_2F_Input_20_Specifiers[] = {
0000000000, 0X000000F0, 0X00000040, 0X0000000B, 0X00000014, 0X0000011C, 0X00000104, 0X000000DC,
0X000000E4, 0X00000060, 0X000000B8, 0X000000A0, 0X00000078, 0X00000080, 0X0000005C, 0X00000054,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000005C, 0X00000002, 0X00000064,
0X000000C8, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000A0, 0X00000001,
0X00000084, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0X000000A4, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000C0, 0X05000000,
0X4F776E65, 0X72000000, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000104,
0X00000001, 0X000000E8, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965,
0X72000000, 0X00000108, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000124,
0X09000000, 0X54686520, 0X4576656E, 0X74000000
	};
	Nat4 tempAttribute_HIObject_20_Class_20_Callback_2F_Output_20_Specifiers[] = {
0000000000, 0X0000008C, 0X0000002C, 0X00000006, 0X00000014, 0X000000A0, 0X00000088, 0X00000060,
0X00000068, 0X00000048, 0X00000040, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000048, 0X00000001, 0X0000004C, 0X16000008, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000088, 0X00000001, 0X0000006C, 0X41747472, 0X69627574, 0X65204F75, 0X74707574, 0X20537065,
0X63696669, 0X65720000, 0X0000008C, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000A8, 0X0F000000, 0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400
	};
	Nat4 tempAttribute_HIObject_20_Class_20_Callback_2F_Callback_20_Method_20_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0F000000, 0X2F446F20, 0X48492043, 0X616C6C62,
0X61636B00
	};
	Nat4 tempAttribute_HIObject_20_Class_20_Callback_2F_ProcPtr_20_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X13000000, 0X4576656E, 0X7448616E, 0X646C6572,
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
Nat4 VPLU_MacOS_20_HIObject_20_Service_2F_Open_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_MacOS_20_HIObject_20_Service_2F_Open_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 109 33 114 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 62 76 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Initial Classes");
/* IO - VPL Terminal : { 55 109 60 114 }*/
/* IO - VPL Root : { 76 93 81 98 }*/
/* IO - VPL Root : { 76 126 81 131 }*/
/* End Operation */

/* Begin Operation: { 106 82 122 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"register class");
/* IO - VPL Terminal : { 101 126 106 131 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 314 119 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 49 76 65 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Make Class");
/* IO - VPL Terminal : { 44 114 49 119 }*/
/* IO - VPL Root : { 65 114 70 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 116 55 132 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Register HIObject");
/* IO - VPL Terminal : { 111 114 116 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 158 20 166 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 20 68 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 148 18 156 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
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
Nat4 VPLU_HIObject_20_Class_2F_Register_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_20_Class_2F_Register_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 22 21 30 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 111 35 116 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 63 72 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Is Registered");
/* IO - VPL Terminal : { 51 111 56 116 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 101 84 117 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Register Subclass");
/* IO - VPL Terminal : { 96 111 101 116 }*/
/* IO - VPL Terminal : { 96 173 101 178 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 131 19 139 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [0 to 0] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 20 68 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_20_Class_2F_Unregister_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_20_Class_2F_Unregister_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 108 58 }{ 298 313 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 76 33 81 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 71 75 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get HIObjectClassRef");
/* IO - VPL Terminal : { 54 141 59 146 }*/
/* IO - VPL Root : { 75 141 80 146 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 94 226 110 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 89 237 94 242 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 93 51 109 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,2,"HIObjectUnregisterClass");
/* IO - VPL Terminal : { 88 126 93 131 }*/
/* IO - VPL Root : { 109 100 114 105 }*/
/* IO - VPL Root : { 109 151 114 156 }*/
/* End Operation */

/* Begin Operation: { 130 60 146 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"report");
/* IO - VPL Terminal : { 125 76 130 81 }*/
/* IO - VPL Terminal : { 125 100 130 105 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 41 69 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"HIObjectUnregisterClass");
/* IO - VPL Root : { 69 106 74 111 }*/
/* End Operation */

/* Begin Operation: { 86 58 102 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Report Error");
/* IO - VPL Terminal : { 81 82 86 87 }*/
/* IO - VPL Terminal : { 81 106 86 111 }*/
/* IO - VPL Terminal : { 81 131 86 136 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 87 192 103 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 82 205 87 210 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 138 25 146 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,2,0,3,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 174 40 190 109 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Dispose");
/* IO - VPL Terminal : { 169 76 174 81 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 216 27 224 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_20_Class_2F_Is_20_Registered_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_20_Class_2F_Is_20_Registered_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 46 78 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get HIObjectClassRef");
/* IO - VPL Terminal : { 57 115 62 120 }*/
/* IO - VPL Root : { 78 115 83 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 99 104 115 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 94 115 99 120 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 138 24 146 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_20_Class_2F_Register_20_Subclass_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_20_Class_2F_Register_20_Subclass_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 396 267 }{ 466 480 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 76 33 81 }*/
/* IO - VPL Root : { 28 149 33 154 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 72 125 88 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"default options");
/* IO - VPL Terminal : { 67 173 72 178 }*/
/* IO - VPL Root : { 88 173 93 178 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 535 523 }{ 222 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 82 113 98 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 98 115 103 120 }*/
/* End Operation */

/* Begin Operation: { 113 21 121 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 108 115 113 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 166 25 182 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Allocate Class ID");
/* IO - VPL Terminal : { 161 79 166 84 }*/
/* IO - VPL Root : { 182 82 187 87 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 128 89 144 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Allocate Base Class ID");
/* IO - VPL Terminal : { 123 161 128 166 }*/
/* IO - VPL Root : { 144 161 149 166 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 207 204 223 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 223 215 228 220 }*/
/* End Operation */

/* Begin Operation: { 74 245 90 394 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"HIObject Class Callback");
/* IO - VPL Terminal : { 69 317 74 322 }*/
/* IO - VPL Root : { 90 292 95 297 }*/
/* IO - VPL Root : { 90 341 95 346 }*/
/* End Operation */

/* Begin Operation: { 163 229 179 360 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get EventTypeSpec");
/* IO - VPL Terminal : { 158 288 163 293 }*/
/* IO - VPL Root : { 179 262 184 267 }*/
/* IO - VPL Root : { 179 317 184 322 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 121 322 137 375 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 116 336 121 341 }*/
/* IO - VPL Terminal : { 116 359 121 364 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 205 353 221 468 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get UPP Pointer");
/* IO - VPL Terminal : { 200 407 205 412 }*/
/* IO - VPL Root : { 221 409 226 414 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 252 98 268 258 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,8,4,"HIObjectRegisterSubclass");
/* IO - VPL Terminal : { 247 113 252 118 }*/
/* IO - VPL Terminal : { 247 130 252 135 }*/
/* IO - VPL Terminal : { 247 147 252 152 }*/
/* IO - VPL Terminal : { 247 164 252 169 }*/
/* IO - VPL Terminal : { 247 181 252 186 }*/
/* IO - VPL Terminal : { 247 198 252 203 }*/
/* IO - VPL Terminal : { 247 215 252 220 }*/
/* IO - VPL Terminal : { 247 232 252 237 }*/
/* IO - VPL Root : { 268 128 273 133 }*/
/* IO - VPL Root : { 268 160 273 165 }*/
/* IO - VPL Root : { 268 192 273 197 }*/
/* IO - VPL Root : { 268 224 273 229 }*/
/* End Operation */

/* Begin Operation: { 251 14 267 75 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"release");
/* IO - VPL Terminal : { 246 32 251 37 }*/
/* IO - VPL Terminal : { 246 56 251 61 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 68 47 84 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,0,"CFRelease");
/* IO - VPL Terminal : { 63 82 68 87 }*/
/* End Operation */

/* Begin Operation: { 69 144 85 245 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"is null?");
/* IO - VPL Terminal : { 64 192 69 197 }*/
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 68 54 84 81 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 63 65 68 70 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 69 144 85 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,0,"CFRelease");
/* IO - VPL Terminal : { 64 179 69 184 }*/
/* End Operation */

/* Begin Operation: { 128 21 136 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 111 20 119 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 293 61 309 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"report");
/* IO - VPL Terminal : { 288 77 293 82 }*/
/* IO - VPL Terminal : { 288 101 293 106 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 205 392 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 38 69 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"HIObjectRegisterSubclass");
/* IO - VPL Root : { 69 106 74 111 }*/
/* End Operation */

/* Begin Operation: { 86 58 102 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Report Error");
/* IO - VPL Terminal : { 81 82 86 87 }*/
/* IO - VPL Terminal : { 81 106 86 111 }*/
/* IO - VPL Terminal : { 81 131 86 136 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 76 282 92 325 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"-22080");
/* IO - VPL Terminal : { 71 301 76 306 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 87 192 103 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 82 205 87 210 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 138 25 146 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,2,0,3,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 337 40 353 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set HIObjectClassRef");
/* IO - VPL Terminal : { 332 74 337 79 }*/
/* IO - VPL Terminal : { 332 138 337 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 397 21 405 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,2,5,1,6);
	result = connect_root_to_terminal(ptrA,2,5,1,7);
	result = connect_root_to_terminal(ptrA,1,0,2,7);
	result = connect_root_to_terminal(ptrA,2,5,1,8);
	result = connect_root_to_terminal(ptrA,1,2,1,9);
	result = connect_root_to_terminal(ptrA,1,3,2,9);
	result = connect_root_to_terminal(ptrA,1,1,3,9);
	result = connect_root_to_terminal(ptrA,1,8,4,9);
	result = connect_root_to_terminal(ptrA,1,6,5,9);
	result = connect_root_to_terminal(ptrA,2,6,6,9);
	result = connect_root_to_terminal(ptrA,1,4,7,9);
	result = connect_root_to_terminal(ptrA,1,2,1,10);
	result = connect_root_to_terminal(ptrA,1,3,2,10);
	result = connect_root_to_terminal(ptrA,1,0,1,11);
	result = connect_root_to_terminal(ptrA,1,9,2,11);
	result = connect_root_to_terminal(ptrA,1,0,1,12);
	result = connect_root_to_terminal(ptrA,4,9,2,12);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [8 to 7] */
/* Synchro [10 to 9] */
/* Synchro [11 to 10] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_20_Class_2F_Allocate_20_Class_20_ID_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_20_Class_2F_Allocate_20_Class_20_ID_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 113 33 118 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 83 80 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Class ID");
/* IO - VPL Terminal : { 59 113 64 118 }*/
/* IO - VPL Root : { 80 102 85 107 }*/
/* IO - VPL Root : { 80 123 85 128 }*/
/* End Operation */

/* Begin Operation: { 102 74 118 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"To CFStringRef");
/* IO - VPL Terminal : { 97 123 102 128 }*/
/* IO - VPL Root : { 118 123 123 128 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 143 18 151 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 112 143 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_20_Class_2F_Allocate_20_Base_20_Class_20_ID_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_20_Class_2F_Allocate_20_Base_20_Class_20_ID_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 138 62 }{ 244 303 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 113 33 118 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 68 80 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Base Class ID");
/* IO - VPL Terminal : { 59 113 64 118 }*/
/* IO - VPL Root : { 80 97 85 102 }*/
/* IO - VPL Root : { 80 128 85 133 }*/
/* End Operation */

/* Begin Operation: { 104 174 120 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\"\"");
/* IO - VPL Terminal : { 99 185 104 190 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 158 79 174 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"To CFStringRef");
/* IO - VPL Terminal : { 153 128 158 133 }*/
/* IO - VPL Root : { 174 128 179 133 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 207 20 215 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 202 114 207 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 138 62 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 89 104 105 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 105 115 110 120 }*/
/* End Operation */

/* Begin Operation: { 134 21 142 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 129 115 134 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_20_Class_2F_Make_20_HIObject_20_Instance_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_20_Class_2F_Make_20_HIObject_20_Instance_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 157 125 }{ 206 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 39 95 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get HIObject Instance Type");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 87 137 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Make Class");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Root : { 138 130 143 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 130 161 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_20_Class_2F_Report_20_Error_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_20_Class_2F_Report_20_Error_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 69 33 74 }*/
/* IO - VPL Root : { 28 117 33 122 }*/
/* IO - VPL Root : { 28 169 33 174 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 41 147 57 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 57 149 62 154 }*/
/* End Operation */

/* Begin Operation: { 76 53 92 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug Result");
/* IO - VPL Terminal : { 71 69 76 74 }*/
/* IO - VPL Terminal : { 71 87 76 92 }*/
/* IO - VPL Terminal : { 71 105 76 110 }*/
/* IO - VPL Terminal : { 71 123 76 128 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 107 23 115 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,3,0,3,2);
	result = connect_root_to_terminal(ptrA,1,1,4,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_20_Class_2F_Dispose_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_20_Class_2F_Dispose_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 107 33 112 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 73 76 89 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"ClassRef");
/* IO - VPL Terminal : { 68 107 73 112 }*/
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 46 151 62 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 62 162 67 167 }*/
/* End Operation */

/* Begin Operation: { 86 68 102 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set HIObjectClassRef");
/* IO - VPL Terminal : { 81 114 86 119 }*/
/* IO - VPL Terminal : { 81 162 86 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 23 150 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 74 165 90 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Callback");
/* IO - VPL Terminal : { 69 195 74 200 }*/
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 67 42 83 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"HIObject Class Callback");
/* IO - VPL Terminal : { 62 114 67 119 }*/
/* IO - VPL Root : { 83 89 88 94 }*/
/* IO - VPL Root : { 83 138 88 143 }*/
/* End Operation */

/* Begin Operation: { 109 112 125 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 104 138 109 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 152 23 160 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 124 22 132 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_20_Class_2F_Get_20_HIObjectClassRef_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_20_Class_2F_Get_20_HIObjectClassRef_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 110 33 115 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 63 33 79 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"HIObject Class Reference");
/* IO - VPL Terminal : { 58 110 63 115 }*/
/* IO - VPL Root : { 79 83 84 88 }*/
/* IO - VPL Root : { 79 135 84 140 }*/
/* End Operation */

/* Begin Operation: { 132 23 140 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 127 113 132 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_20_Class_2F_Set_20_HIObjectClassRef_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_20_Class_2F_Set_20_HIObjectClassRef_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 73 33 78 }*/
/* IO - VPL Root : { 28 149 33 154 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 35 70 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"HIObject Class Reference");
/* IO - VPL Terminal : { 49 85 54 90 }*/
/* IO - VPL Terminal : { 49 137 54 142 }*/
/* IO - VPL Root : { 70 112 75 117 }*/
/* End Operation */

/* Begin Operation: { 94 19 102 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_20_Class_2F_Get_20_HIObject_20_Instance_20_Type_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_20_Class_2F_Get_20_HIObject_20_Instance_20_Type_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 67 44 83 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"HIObject Instance Type");
/* IO - VPL Terminal : { 62 115 67 120 }*/
/* IO - VPL Root : { 83 90 88 95 }*/
/* IO - VPL Root : { 83 138 88 143 }*/
/* End Operation */

/* Begin Operation: { 123 21 131 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 118 116 123 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_20_Class_2F_CE_20_HIObject_20_Event_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_20_Class_2F_CE_20_HIObject_20_Event_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 279 703 }{ 309 344 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 71 33 76 }*/
/* IO - VPL Root : { 28 154 33 159 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 61 81 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Event Class");
/* IO - VPL Terminal : { 60 111 65 116 }*/
/* IO - VPL Root : { 81 114 86 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 110 85 126 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kEventClassHIObject");
/* IO - VPL Terminal : { 105 139 110 144 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 65 203 81 310 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Event Kind");
/* IO - VPL Terminal : { 60 256 65 261 }*/
/* IO - VPL Root : { 81 258 86 263 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 152 37 168 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/CE HIObject Class Event");
/* IO - VPL Terminal : { 147 68 152 73 }*/
/* IO - VPL Terminal : { 147 113 152 118 }*/
/* IO - VPL Terminal : { 147 166 152 171 }*/
/* IO - VPL Root : { 168 114 173 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 223 21 231 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 218 114 223 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,2,0,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 279 703 }{ 347 315 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 56 95 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get User Data");
/* IO - VPL Terminal : { 72 109 77 114 }*/
/* IO - VPL Root : { 96 109 101 114 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 184 137 262 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"external?");
/* IO - VPL Terminal : { 114 221 119 226 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 60 137 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"from-pointer");
/* IO - VPL Terminal : { 114 109 119 114 }*/
/* IO - VPL Root : { 138 109 143 114 }*/
/* End Operation */

/* Begin Operation: { 162 45 179 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"address-to-object");
/* IO - VPL Terminal : { 156 109 161 114 }*/
/* IO - VPL Root : { 180 109 185 114 }*/
/* End Operation */

/* Begin Operation: { 204 72 221 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 198 109 203 114 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 246 71 263 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/CE Handle Event");
/* IO - VPL Terminal : { 240 110 245 115 }*/
/* IO - VPL Terminal : { 240 162 245 167 }*/
/* IO - VPL Root : { 264 131 269 136 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 288 37 296 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 282 131 287 136 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,2,0,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 279 703 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 67 41 83 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Return Event Not Handled");
/* IO - VPL Terminal : { 62 119 67 124 }*/
/* IO - VPL Root : { 83 118 88 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 128 24 136 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 123 118 128 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_20_Class_2F_CE_20_HIObject_20_Class_20_Event_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_20_Class_2F_CE_20_HIObject_20_Class_20_Event_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 118 33 123 }*/
/* IO - VPL Root : { 28 173 33 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 90 73 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kEventHIObjectConstruct");
/* IO - VPL Terminal : { 52 156 57 161 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 89 53 105 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/CE HIObject Construct");
/* IO - VPL Terminal : { 84 66 89 71 }*/
/* IO - VPL Terminal : { 84 173 89 178 }*/
/* IO - VPL Root : { 105 120 110 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 142 21 150 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 137 147 142 152 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 166 100 }{ 217 262 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 118 33 123 }*/
/* IO - VPL Root : { 28 173 33 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 55 70 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kEventHIObjectDestruct");
/* IO - VPL Terminal : { 49 118 54 123 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 89 51 105 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/CE HIObject Destruct");
/* IO - VPL Terminal : { 84 66 89 71 }*/
/* IO - VPL Terminal : { 84 173 89 178 }*/
/* IO - VPL Root : { 105 120 110 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 142 21 150 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 137 147 142 152 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 114 33 119 }*/
/* IO - VPL Root : { 28 162 33 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 36 78 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Return Event Not Handled");
/* IO - VPL Terminal : { 57 118 62 123 }*/
/* IO - VPL Root : { 78 116 83 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 101 22 109 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 96 116 101 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 132 374 }{ 347 519 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 24 73 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Make HIObject Instance");
/* IO - VPL Terminal : { 52 97 57 102 }*/
/* IO - VPL Root : { 73 98 78 103 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 120 45 136 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/CE HIObject Construct");
/* IO - VPL Terminal : { 115 83 120 88 }*/
/* IO - VPL Terminal : { 115 146 120 151 }*/
/* IO - VPL Root : { 136 117 141 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 176 95 192 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"error?");
/* IO - VPL Terminal : { 171 106 176 111 }*/
/* IO - VPL Terminal : { 171 122 176 127 }*/
/* IO - VPL Terminal : { 171 141 176 146 }*/
/* IO - VPL Root : { 192 122 197 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 114 33 119 }*/
/* IO - VPL Root : { 28 162 33 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 35 71 66 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 50 48 55 53 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 98 33 114 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set EP HIObject Instance");
/* IO - VPL Terminal : { 93 73 98 78 }*/
/* IO - VPL Terminal : { 93 143 98 148 }*/
/* IO - VPL Root : { 114 114 119 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 170 20 178 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 165 114 170 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 114 33 119 }*/
/* IO - VPL Root : { 28 162 33 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 20 68 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 55 114 60 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 274 37 282 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 269 131 274 136 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,2,0,3,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 132 374 }{ 392 290 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 80 33 85 }*/
/* IO - VPL Root : { 28 150 33 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 34 75 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Make HIObject Instance");
/* IO - VPL Terminal : { 54 109 59 114 }*/
/* IO - VPL Root : { 75 111 80 116 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 100 39 116 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/CE HIObject Construct");
/* IO - VPL Terminal : { 95 75 100 80 }*/
/* IO - VPL Terminal : { 95 150 100 155 }*/
/* IO - VPL Root : { 116 93 121 98 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 158 85 174 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"error?");
/* IO - VPL Terminal : { 153 93 158 98 }*/
/* IO - VPL Terminal : { 153 112 158 117 }*/
/* IO - VPL Terminal : { 153 132 158 137 }*/
/* IO - VPL Root : { 174 116 179 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 357 436 }{ 222 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 114 33 119 }*/
/* IO - VPL Root : { 28 162 33 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 20 68 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 55 114 60 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 412 721 }{ 261 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 114 33 119 }*/
/* IO - VPL Root : { 28 162 33 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 33 69 64 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 48 46 53 51 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 93 38 109 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set EP HIObject Instance");
/* IO - VPL Terminal : { 88 82 93 87 }*/
/* IO - VPL Terminal : { 88 151 93 156 }*/
/* IO - VPL Root : { 109 117 114 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 116 -7 132 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Set EP HIObject Instance");
/* IO - VPL Root : { 132 58 137 63 }*/
/* End Operation */

/* Begin Operation: { 162 40 178 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"log-error");
/* IO - VPL Terminal : { 157 58 162 63 }*/
/* IO - VPL Terminal : { 157 96 162 101 }*/
/* End Operation */

/* Begin Operation: { 202 23 210 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 197 117 202 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 200 77 216 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Set EP HIOI Err:");
/* IO - VPL Root : { 216 119 221 124 }*/
/* End Operation */

/* Begin Operation: { 245 73 261 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"log-error");
/* IO - VPL Terminal : { 240 88 245 93 }*/
/* IO - VPL Terminal : { 240 127 245 132 }*/
/* End Operation */

/* Begin Operation: { 326 22 334 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 321 117 326 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,2,0,3,3);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,3,2,5);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_20_Class_2F_CE_20_HIObject_20_Destruct_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_20_Class_2F_CE_20_HIObject_20_Destruct_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 84 33 89 }*/
/* IO - VPL Root : { 28 150 33 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 73 38 89 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Return Event Not Handled");
/* IO - VPL Terminal : { 68 118 73 123 }*/
/* IO - VPL Root : { 89 117 94 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 128 21 136 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 123 117 128 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_20_Class_2F_Dispose_20_Instance_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_20_Class_2F_Dispose_20_Instance_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 74 33 79 }*/
/* IO - VPL Root : { 28 155 33 160 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 20 68 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
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
Nat4 VPLU_HIObject_20_Class_20_Callback_2F_Open_20_UPP_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_20_Class_20_Callback_2F_Open_20_UPP_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 348 585 }{ 241 318 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 111 33 116 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 131 68 270 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Callback Pointer");
/* IO - VPL Terminal : { 47 198 52 203 }*/
/* IO - VPL Root : { 68 198 73 203 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 91 222 107 249 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 86 233 91 238 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 124 133 140 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,2,"NewEventHandlerUPP");
/* IO - VPL Terminal : { 119 198 124 203 }*/
/* IO - VPL Root : { 140 176 145 181 }*/
/* IO - VPL Root : { 140 221 145 226 }*/
/* End Operation */

/* Begin Operation: { 165 86 181 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set UPP Pointer");
/* IO - VPL Terminal : { 160 111 165 116 }*/
/* IO - VPL Terminal : { 160 164 165 169 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 201 30 209 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_20_Class_20_Callback_2F_Get_20_EventTypeSpec_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_20_Class_20_Callback_2F_Get_20_EventTypeSpec_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 297 165 }{ 354 307 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 110 33 115 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 69 76 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Event Types");
/* IO - VPL Terminal : { 55 110 60 115 }*/
/* IO - VPL Root : { 76 96 81 101 }*/
/* IO - VPL Root : { 76 125 81 130 }*/
/* End Operation */

/* Begin Operation: { 99 36 115 100 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 94 66 99 71 }*/
/* IO - VPL Root : { 115 66 120 71 }*/
/* End Operation */

/* Begin Operation: { 89 184 105 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"8");
/* IO - VPL Root : { 105 186 110 191 }*/
/* End Operation */

/* Begin Operation: { 134 164 150 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"**");
/* IO - VPL Terminal : { 129 174 134 179 }*/
/* IO - VPL Terminal : { 129 186 134 191 }*/
/* IO - VPL Root : { 150 180 155 185 }*/
/* End Operation */

/* Begin Operation: { 133 69 149 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"EventTypeSpec");
/* IO - VPL Root : { 149 108 154 113 }*/
/* End Operation */

/* Begin Operation: { 170 116 186 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"make-external");
/* IO - VPL Terminal : { 165 147 170 152 }*/
/* IO - VPL Terminal : { 165 180 170 185 }*/
/* IO - VPL Root : { 186 164 191 169 }*/
/* End Operation */

/* Begin Operation: { 181 231 197 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 197 233 202 238 }*/
/* End Operation */

/* Begin Operation: { 219 105 235 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"poke values");
/* IO - VPL Terminal : { 214 124 219 129 }*/
/* IO - VPL Terminal : { 214 148 219 153 }*/
/* IO - VPL Terminal : { 214 173 219 178 }*/
/* IO - VPL Root : { 235 172 240 177 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 245 298 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
/* IO - VPL Root : { 28 170 33 175 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 56 71 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 50 82 55 87 }*/
/* IO - VPL Root : { 71 71 76 76 }*/
/* IO - VPL Root : { 71 92 76 97 }*/
/* End Operation */

/* Begin Operation: { 51 192 67 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 67 194 72 199 }*/
/* End Operation */

/* Begin Operation: { 105 124 121 246 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,2,"integer-to-pointer");
/* IO - VPL Terminal : { 100 146 105 151 }*/
/* IO - VPL Terminal : { 100 170 105 175 }*/
/* IO - VPL Terminal : { 100 194 105 199 }*/
/* IO - VPL Terminal : { 100 218 105 223 }*/
/* IO - VPL Root : { 121 146 126 151 }*/
/* IO - VPL Root : { 121 170 126 175 }*/
/* End Operation */

/* Begin Operation: { 159 124 175 246 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,2,"integer-to-pointer");
/* IO - VPL Terminal : { 154 146 159 151 }*/
/* IO - VPL Terminal : { 154 170 159 175 }*/
/* IO - VPL Terminal : { 154 194 159 199 }*/
/* IO - VPL Terminal : { 154 218 159 223 }*/
/* IO - VPL Root : { 175 162 180 167 }*/
/* IO - VPL Root : { 175 202 180 207 }*/
/* End Operation */

/* Begin Operation: { 202 29 210 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 197 202 202 207 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,3,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,1,1,4,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
	result = connect_root_to_terminal(ptrA,1,2,3,4);
	result = connect_root_to_terminal(ptrA,2,1,4,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 267 22 275 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 262 66 267 71 }*/
/* IO - VPL Terminal : { 262 164 267 169 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,4,2,6);
	result = connect_root_to_terminal(ptrA,2,1,1,8);
	result = connect_root_to_terminal(ptrA,1,6,2,8);
	result = connect_root_to_terminal(ptrA,1,7,3,8);
	result = connect_root_to_terminal(ptrA,1,8,3,8);
	result = connect_root_to_terminal(ptrA,1,2,1,9);
	result = connect_root_to_terminal(ptrA,1,6,2,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_20_Class_20_Callback_2F_Do_20_HI_20_Callback_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_20_Class_20_Callback_2F_Do_20_HI_20_Callback_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 219 123 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 55 33 60 }*/
/* IO - VPL Root : { 28 95 33 100 }*/
/* IO - VPL Root : { 28 137 33 142 }*/
/* IO - VPL Root : { 28 177 33 182 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 120 70 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Use Parameters");
/* IO - VPL Terminal : { 49 138 54 143 }*/
/* IO - VPL Terminal : { 49 167 54 172 }*/
/* IO - VPL Terminal : { 49 189 54 194 }*/
/* IO - VPL Terminal : { 49 211 54 216 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 33 71 82 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Call");
/* IO - VPL Terminal : { 50 55 55 60 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 110 -7 126 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Callback Result");
/* IO - VPL Terminal : { 105 55 110 60 }*/
/* IO - VPL Root : { 126 55 131 60 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 110 146 126 287 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Clean Up Parameters");
/* IO - VPL Terminal : { 105 214 110 219 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 159 22 167 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 154 115 159 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,3,1);
	result = connect_root_to_terminal(ptrA,4,0,4,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_20_Class_20_Callback_2F_Use_20_Parameters_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_20_Class_20_Callback_2F_Use_20_Parameters_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 279 307 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 64 33 69 }*/
/* IO - VPL Root : { 28 108 33 113 }*/
/* IO - VPL Root : { 28 139 33 144 }*/
/* IO - VPL Root : { 28 172 33 177 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 93 72 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"EventRef/New");
/* IO - VPL Terminal : { 51 108 56 113 }*/
/* IO - VPL Terminal : { 51 139 56 144 }*/
/* IO - VPL Terminal : { 51 172 56 177 }*/
/* IO - VPL Root : { 72 140 77 145 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 97 42 113 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"The Event");
/* IO - VPL Terminal : { 92 64 97 69 }*/
/* IO - VPL Terminal : { 92 88 97 93 }*/
/* IO - VPL Root : { 113 77 118 82 }*/
/* End Operation */

/* Begin Operation: { 138 61 154 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Return Event Not Handled");
/* IO - VPL Terminal : { 133 140 138 145 }*/
/* IO - VPL Root : { 154 141 159 146 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 181 32 197 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Callback Result");
/* IO - VPL Terminal : { 176 64 181 69 }*/
/* IO - VPL Terminal : { 176 98 181 103 }*/
/* IO - VPL Root : { 197 82 202 87 }*/
/* End Operation */

/* Begin Operation: { 220 21 228 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,2,1);
	result = connect_root_to_terminal(ptrA,4,0,3,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_20_Class_20_Callback_2F_Close_20_UPP_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_20_Class_20_Callback_2F_Close_20_UPP_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 163 469 }{ 242 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 60 70 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get UPP Pointer");
/* IO - VPL Terminal : { 49 114 54 119 }*/
/* IO - VPL Root : { 70 114 75 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 205 122 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 216 106 221 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 104 39 120 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"DisposeEventHandlerUPP");
/* IO - VPL Terminal : { 99 114 104 119 }*/
/* IO - VPL Root : { 120 82 125 87 }*/
/* End Operation */

/* Begin Operation: { 137 160 153 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 153 171 158 176 }*/
/* End Operation */

/* Begin Operation: { 174 83 190 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set UPP Pointer");
/* IO - VPL Terminal : { 169 114 174 119 }*/
/* IO - VPL Terminal : { 169 160 174 165 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 208 22 216 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_20_Class_20_Callback_2F_Clean_20_Up_20_Parameters_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_20_Class_20_Callback_2F_Clean_20_Up_20_Parameters_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 108 33 113 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 45 80 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"close event");
/* IO - VPL Terminal : { 59 83 64 88 }*/
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 293 295 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 79 76 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"The Event");
/* IO - VPL Terminal : { 55 114 60 119 }*/
/* IO - VPL Root : { 76 101 81 106 }*/
/* IO - VPL Root : { 76 125 81 130 }*/
/* End Operation */

/* Begin Operation: { 100 143 116 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 95 177 100 182 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 139 93 155 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Dispose");
/* IO - VPL Terminal : { 134 125 139 130 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 177 127 193 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 193 138 198 143 }*/
/* End Operation */

/* Begin Operation: { 222 92 238 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"The Event");
/* IO - VPL Terminal : { 217 114 222 119 }*/
/* IO - VPL Terminal : { 217 138 222 143 }*/
/* IO - VPL Root : { 238 127 243 132 }*/
/* End Operation */

/* Begin Operation: { 252 26 260 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 172 22 180 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_20_Class_20_Callback_2F_Get_20_Parameter_20_List_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_20_Class_20_Callback_2F_Get_20_Parameter_20_List_3F__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 176 299 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 109 33 114 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 94 76 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 76 109 81 114 }*/
/* End Operation */

/* Begin Operation: { 105 19 113 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 100 109 105 114 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
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
Nat4 VPLU_HIObject_2F_HIObject_20_Construct_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_HIObject_20_Construct_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 268 206 }{ 222 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 116 33 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 104 57 120 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Register Instance");
/* IO - VPL Terminal : { 99 116 104 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 61 141 77 235 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"retain-object");
/* IO - VPL Terminal : { 56 186 61 191 }*/
/* IO - VPL Root : { 77 186 82 191 }*/
/* End Operation */

/* Begin Operation: { 135 21 143 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_HIObject_20_Initialize_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_HIObject_20_Initialize_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 150 183 }{ 222 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 84 33 89 }*/
/* IO - VPL Root : { 28 150 33 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 143 106 159 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"noErr");
/* IO - VPL Root : { 159 119 164 124 }*/
/* End Operation */

/* Begin Operation: { 54 43 70 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Use Initial Parameters");
/* IO - VPL Terminal : { 49 84 54 89 }*/
/* IO - VPL Terminal : { 49 150 54 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 176 23 184 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 171 119 176 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_HIObject_20_Destruct_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_HIObject_20_Destruct_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 297 73 }{ 237 321 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 49 80 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Unregister Instance");
/* IO - VPL Terminal : { 59 114 64 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 100 66 116 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"release-object");
/* IO - VPL Terminal : { 95 114 100 119 }*/
/* End Operation */

/* Begin Operation: { 137 79 153 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Dispose");
/* IO - VPL Terminal : { 132 114 137 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 178 24 186 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_HIObject_20_Is_20_Equal_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_HIObject_20_Is_20_Equal_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 152 65 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 84 33 89 }*/
/* IO - VPL Root : { 28 150 33 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 91 86 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 86 106 91 111 }*/
/* End Operation */

/* Begin Operation: { 104 21 112 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 99 119 104 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_HIObject_20_Print_20_Debug_20_Info_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_HIObject_20_Print_20_Debug_20_Info_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 110 50 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 84 33 89 }*/
/* IO - VPL Root : { 28 144 33 149 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 105 22 113 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_Use_20_Initial_20_Parameters_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_Use_20_Initial_20_Parameters_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 79 33 84 }*/
/* IO - VPL Root : { 28 150 33 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 20 68 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_Register_20_HIObject_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_Register_20_HIObject_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 118 495 }{ 302 298 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 118 33 123 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 111 78 240 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get HIObject Class");
/* IO - VPL Terminal : { 57 171 62 176 }*/
/* IO - VPL Root : { 78 172 83 177 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 102 134 118 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Make Class");
/* IO - VPL Terminal : { 97 172 102 177 }*/
/* IO - VPL Root : { 118 172 123 177 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 147 137 163 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Register");
/* IO - VPL Terminal : { 142 172 147 177 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 185 81 201 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set HIObject Class");
/* IO - VPL Terminal : { 180 118 185 123 }*/
/* IO - VPL Terminal : { 180 172 185 177 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 226 31 234 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_Register_20_Instance_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_Register_20_Instance_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 20 68 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_Unregister_20_Instance_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_Unregister_20_Instance_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 116 33 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 20 68 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_CE_20_Handle_20_Event_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_CE_20_Handle_20_Event_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 65 95 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/CE HIObject Event");
/* IO - VPL Terminal : { 72 107 77 112 }*/
/* IO - VPL Terminal : { 72 151 77 156 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 130 119 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_CE_20_HIObject_20_Event_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_CE_20_HIObject_20_Event_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 123 186 }{ 287 344 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 71 33 76 }*/
/* IO - VPL Root : { 28 154 33 159 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 61 81 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Event Class");
/* IO - VPL Terminal : { 60 111 65 116 }*/
/* IO - VPL Root : { 81 114 86 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 110 85 126 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kEventClassHIObject");
/* IO - VPL Terminal : { 105 139 110 144 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 65 203 81 310 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Event Kind");
/* IO - VPL Terminal : { 60 256 65 261 }*/
/* IO - VPL Root : { 81 258 86 263 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 152 37 168 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/CE HIObject Class Event");
/* IO - VPL Terminal : { 147 68 152 73 }*/
/* IO - VPL Terminal : { 147 113 152 118 }*/
/* IO - VPL Terminal : { 147 166 152 171 }*/
/* IO - VPL Root : { 168 114 173 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 223 21 231 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 218 114 223 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,2,0,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 123 186 }{ 255 313 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 140 44 156 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Return Event Not Handled");
/* IO - VPL Terminal : { 135 122 140 127 }*/
/* IO - VPL Root : { 156 121 161 126 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 68 84 84 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"debug report");
/* IO - VPL Terminal : { 63 111 68 116 }*/
/* IO - VPL Terminal : { 63 146 68 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 297 357 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 71 95 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Event Class");
/* IO - VPL Terminal : { 72 129 77 134 }*/
/* IO - VPL Root : { 96 129 101 134 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 207 95 323 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Event Kind");
/* IO - VPL Terminal : { 72 263 77 268 }*/
/* IO - VPL Root : { 96 263 101 268 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 68 137 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"integer-to-string");
/* IO - VPL Terminal : { 114 129 119 134 }*/
/* IO - VPL Root : { 138 129 143 134 }*/
/* End Operation */

/* Begin Operation: { 162 69 179 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Unhandled event");
/* IO - VPL Root : { 180 118 185 123 }*/
/* End Operation */

/* Begin Operation: { 120 226 137 304 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 114 263 119 268 }*/
/* IO - VPL Root : { 138 263 143 268 }*/
/* End Operation */

/* Begin Operation: { 162 199 179 257 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 156 216 161 221 }*/
/* IO - VPL Terminal : { 156 235 161 240 }*/
/* IO - VPL Root : { 180 226 185 231 }*/
/* End Operation */

/* Begin Operation: { 204 80 221 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug Result");
/* IO - VPL Terminal : { 198 98 203 103 }*/
/* IO - VPL Terminal : { 198 118 203 123 }*/
/* IO - VPL Terminal : { 198 138 203 143 }*/
/* IO - VPL Terminal : { 198 158 203 163 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,4,2,7);
	result = connect_root_to_terminal(ptrA,1,6,3,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 201 27 209 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 196 121 201 126 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_CE_20_HIObject_20_Class_20_Event_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_CE_20_HIObject_20_Class_20_Event_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 118 33 123 }*/
/* IO - VPL Root : { 28 173 33 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 90 73 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kEventHIObjectConstruct");
/* IO - VPL Terminal : { 52 156 57 161 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 89 53 105 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/CE HIObject Construct");
/* IO - VPL Terminal : { 84 66 89 71 }*/
/* IO - VPL Terminal : { 84 173 89 178 }*/
/* IO - VPL Root : { 105 120 110 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 142 21 150 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 137 120 142 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 166 100 }{ 217 262 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 118 33 123 }*/
/* IO - VPL Root : { 28 173 33 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 55 70 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kEventHIObjectDestruct");
/* IO - VPL Terminal : { 49 118 54 123 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 89 51 105 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/CE HIObject Destruct");
/* IO - VPL Terminal : { 84 66 89 71 }*/
/* IO - VPL Terminal : { 84 173 89 178 }*/
/* IO - VPL Root : { 105 120 110 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 142 21 150 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 137 120 142 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 223 243 }{ 212 378 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 118 33 123 }*/
/* IO - VPL Root : { 28 173 33 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 54 70 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kEventHIObjectInitialize");
/* IO - VPL Terminal : { 49 118 54 123 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 89 50 105 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/CE HIObject Initialize");
/* IO - VPL Terminal : { 84 96 89 101 }*/
/* IO - VPL Terminal : { 84 144 89 149 }*/
/* IO - VPL Root : { 105 120 110 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 142 21 150 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 137 120 142 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 256 268 }{ 207 396 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 118 33 123 }*/
/* IO - VPL Root : { 28 173 33 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 60 70 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kEventHIObjectIsEqual");
/* IO - VPL Terminal : { 49 118 54 123 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 89 54 105 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/CE HIObject Is Equal");
/* IO - VPL Terminal : { 84 97 89 102 }*/
/* IO - VPL Terminal : { 84 142 89 147 }*/
/* IO - VPL Root : { 105 120 110 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 142 21 150 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 137 120 142 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 291 289 }{ 212 461 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 118 33 123 }*/
/* IO - VPL Root : { 28 173 33 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 39 70 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kEventHIObjectPrintDebugInfo");
/* IO - VPL Terminal : { 49 118 54 123 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 89 31 105 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/CE HIObject Print Debug Info");
/* IO - VPL Terminal : { 84 90 89 95 }*/
/* IO - VPL Terminal : { 84 151 89 156 }*/
/* IO - VPL Root : { 105 120 110 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 142 21 150 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 137 120 142 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 114 33 119 }*/
/* IO - VPL Root : { 28 162 33 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 36 78 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Return Event Not Handled");
/* IO - VPL Terminal : { 57 118 62 123 }*/
/* IO - VPL Root : { 78 116 83 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 101 22 109 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 96 116 101 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_CE_20_HIObject_20_Construct_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_CE_20_HIObject_20_Construct_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 431 457 }{ 362 323 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 81 33 86 }*/
/* IO - VPL Root : { 28 144 33 149 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 125 86 287 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kEventParamHIObjectInstance");
/* IO - VPL Root : { 86 204 91 209 }*/
/* End Operation */

/* Begin Operation: { 102 115 118 246 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get EP HIObjectRef");
/* IO - VPL Terminal : { 97 144 102 149 }*/
/* IO - VPL Terminal : { 97 204 102 209 }*/
/* IO - VPL Root : { 118 143 123 148 }*/
/* IO - VPL Root : { 118 202 123 207 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 154 202 170 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 149 215 154 220 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 153 16 169 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set HIObject Reference");
/* IO - VPL Terminal : { 148 54 153 59 }*/
/* IO - VPL Terminal : { 148 124 153 129 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 189 36 205 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/HIObject Construct");
/* IO - VPL Terminal : { 184 102 189 107 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 239 104 255 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"noErr");
/* IO - VPL Root : { 255 117 260 122 }*/
/* End Operation */

/* Begin Operation: { 272 33 280 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 267 131 272 136 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_CE_20_HIObject_20_Initialize_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_CE_20_HIObject_20_Initialize_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 43 69 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Call Next Event Handler");
/* IO - VPL Terminal : { 48 117 53 122 }*/
/* IO - VPL Root : { 69 117 74 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 95 52 111 103 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"debug");
/* IO - VPL Terminal : { 90 74 95 79 }*/
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 91 76 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Call Next Event Handler");
/* IO - VPL Root : { 76 154 81 159 }*/
/* End Operation */

/* Begin Operation: { 105 71 121 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 100 102 105 107 }*/
/* IO - VPL Terminal : { 100 135 105 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 25 150 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 97 147 113 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 92 160 97 165 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 151 23 159 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 146 117 151 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 272 187 }{ 191 273 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 84 33 89 }*/
/* IO - VPL Root : { 28 150 33 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 50 57 66 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/HIObject Initialize");
/* IO - VPL Terminal : { 45 92 50 97 }*/
/* IO - VPL Terminal : { 45 147 50 152 }*/
/* IO - VPL Root : { 66 119 71 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 87 23 95 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 82 119 87 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_CE_20_HIObject_20_Destruct_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_CE_20_HIObject_20_Destruct_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 200 63 }{ 205 273 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 84 33 89 }*/
/* IO - VPL Root : { 28 150 33 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 95 106 111 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"noErr");
/* IO - VPL Root : { 111 119 116 124 }*/
/* End Operation */

/* Begin Operation: { 55 25 71 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/HIObject Destruct");
/* IO - VPL Terminal : { 50 84 55 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 131 23 139 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 126 119 131 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_CE_20_HIObject_20_Is_20_Equal_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_CE_20_HIObject_20_Is_20_Equal_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 534 474 }{ 244 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 84 33 89 }*/
/* IO - VPL Root : { 28 150 33 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 61 78 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/HIObject Is Equal");
/* IO - VPL Terminal : { 57 94 62 99 }*/
/* IO - VPL Terminal : { 57 142 62 147 }*/
/* IO - VPL Root : { 78 121 83 126 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 127 106 143 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"noErr");
/* IO - VPL Root : { 143 119 148 124 }*/
/* End Operation */

/* Begin Operation: { 176 23 184 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 171 119 176 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_CE_20_HIObject_20_Print_20_Debug_20_Info_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_CE_20_HIObject_20_Print_20_Debug_20_Info_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 200 63 }{ 192 294 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 84 33 89 }*/
/* IO - VPL Root : { 28 150 33 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 89 106 105 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"noErr");
/* IO - VPL Root : { 105 119 110 124 }*/
/* End Operation */

/* Begin Operation: { 58 38 74 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/HIObject Print Debug Info");
/* IO - VPL Terminal : { 53 84 58 89 }*/
/* IO - VPL Terminal : { 53 150 58 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 123 23 131 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 118 119 123 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_Set_20_HIObject_20_Reference_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_Set_20_HIObject_20_Reference_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 74 33 79 }*/
/* IO - VPL Root : { 28 148 33 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 56 70 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"HIObject Reference");
/* IO - VPL Terminal : { 49 95 54 100 }*/
/* IO - VPL Terminal : { 49 136 54 141 }*/
/* IO - VPL Root : { 70 116 75 121 }*/
/* End Operation */

/* Begin Operation: { 97 20 105 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_Get_20_HIObject_20_Reference_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_Get_20_HIObject_20_Reference_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 112 33 117 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 63 52 79 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"HIObject Reference");
/* IO - VPL Terminal : { 58 112 63 117 }*/
/* IO - VPL Root : { 79 91 84 96 }*/
/* IO - VPL Root : { 79 132 84 137 }*/
/* End Operation */

/* Begin Operation: { 115 19 123 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 110 114 115 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_Get_20_HIObject_20_Class_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_Get_20_HIObject_20_Class_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 119 33 124 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 66 71 82 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"HIObject Class");
/* IO - VPL Terminal : { 61 119 66 124 }*/
/* IO - VPL Root : { 82 102 87 107 }*/
/* IO - VPL Root : { 82 135 87 140 }*/
/* End Operation */

/* Begin Operation: { 114 24 122 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 109 121 114 126 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_Set_20_HIObject_20_Class_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_Set_20_HIObject_20_Class_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 92 88 }{ 194 263 } */
/* Begin Operation: { 20 33 28 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 85 33 90 }*/
/* IO - VPL Root : { 28 160 33 165 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 75 71 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"HIObject Class");
/* IO - VPL Terminal : { 50 106 55 111 }*/
/* IO - VPL Terminal : { 50 139 55 144 }*/
/* IO - VPL Root : { 71 123 76 128 }*/
/* End Operation */

/* Begin Operation: { 100 32 108 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_Dispose_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_Dispose_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 167 165 }{ 222 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 113 33 118 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 167 75 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 75 178 80 183 }*/
/* End Operation */

/* Begin Operation: { 98 69 114 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set HIObject Reference");
/* IO - VPL Terminal : { 93 113 98 118 }*/
/* IO - VPL Terminal : { 93 178 98 183 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 146 21 154 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_Debug_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_Debug_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 231 281 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 111 33 116 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 59 78 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get HIObjectRef");
/* IO - VPL Terminal : { 57 111 62 116 }*/
/* IO - VPL Root : { 78 111 83 116 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 101 58 117 85 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 96 69 101 74 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 157 40 173 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"HIObjectPrintDebugInfo");
/* IO - VPL Terminal : { 152 111 157 116 }*/
/* IO - VPL Root : { 173 111 178 116 }*/
/* End Operation */

/* Begin Operation: { 193 24 201 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 20 68 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_Get_20_HIObjectRef_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_Get_20_HIObjectRef_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 103 33 108 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 71 32 87 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get HIObject Reference");
/* IO - VPL Terminal : { 66 103 71 108 }*/
/* IO - VPL Root : { 87 104 92 109 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 111 55 127 82 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 106 66 111 71 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 74 208 90 310 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"OpaqueHIObjectRef");
/* IO - VPL Root : { 90 257 95 262 }*/
/* End Operation */

/* Begin Operation: { 113 133 129 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"set-external-type");
/* IO - VPL Terminal : { 108 171 113 176 }*/
/* IO - VPL Terminal : { 108 211 113 216 }*/
/* End Operation */

/* Begin Operation: { 158 20 166 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 153 104 158 109 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 63 103 79 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 79 114 84 119 }*/
/* End Operation */

/* Begin Operation: { 108 20 116 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 103 114 108 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_Create_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_Create_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 89 331 }{ 253 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 80 33 85 }*/
/* IO - VPL Root : { 28 147 33 152 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 22 81 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Register HIObject");
/* IO - VPL Terminal : { 60 80 65 85 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 98 30 114 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/~Make Initialization Event");
/* IO - VPL Terminal : { 93 84 98 89 }*/
/* IO - VPL Terminal : { 93 140 98 145 }*/
/* IO - VPL Root : { 114 113 119 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 139 77 155 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"HIObject Create");
/* IO - VPL Terminal : { 134 109 139 114 }*/
/* IO - VPL Terminal : { 134 147 139 152 }*/
/* IO - VPL Root : { 155 108 160 113 }*/
/* IO - VPL Root : { 155 148 160 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 417 579 }{ 263 359 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 21 71 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get HIObject Class");
/* IO - VPL Terminal : { 50 82 55 87 }*/
/* IO - VPL Root : { 71 83 76 88 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 99 39 115 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Allocate Class ID");
/* IO - VPL Terminal : { 94 98 99 103 }*/
/* IO - VPL Root : { 115 98 120 103 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 49 170 65 308 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Event Reference");
/* IO - VPL Terminal : { 44 237 49 242 }*/
/* IO - VPL Root : { 65 237 70 242 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 139 106 155 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,3,3,"HIObjectCreate");
/* IO - VPL Terminal : { 134 129 139 134 }*/
/* IO - VPL Terminal : { 134 154 139 159 }*/
/* IO - VPL Terminal : { 134 179 139 184 }*/
/* IO - VPL Root : { 155 129 160 134 }*/
/* IO - VPL Root : { 155 154 160 159 }*/
/* IO - VPL Root : { 155 179 160 184 }*/
/* End Operation */

/* Begin Operation: { 108 215 124 264 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"close");
/* IO - VPL Terminal : { 103 237 108 242 }*/
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 297 637 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 65 73 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release Event");
/* IO - VPL Terminal : { 52 114 57 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 97 83 113 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Dispose");
/* IO - VPL Terminal : { 92 114 97 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 139 21 147 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 136 12 152 87 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,0,"CFRelease");
/* IO - VPL Terminal : { 131 47 136 52 }*/
/* End Operation */

/* Begin Operation: { 180 20 188 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 175 82 180 87 }*/
/* IO - VPL Terminal : { 175 146 180 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,2,0,1,5);
	result = connect_root_to_terminal(ptrA,1,2,1,6);
	result = connect_root_to_terminal(ptrA,1,4,1,7);
	result = connect_root_to_terminal(ptrA,3,4,2,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [5 to 4] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 171 96 187 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"valid?");
/* IO - VPL Terminal : { 166 112 171 117 }*/
/* IO - VPL Terminal : { 166 133 171 138 }*/
/* IO - VPL Root : { 187 113 192 118 }*/
/* IO - VPL Root : { 187 134 192 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 51 53 67 84 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 46 66 51 71 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 20 114 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 101 82 106 87 }*/
/* IO - VPL Terminal : { 101 146 106 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 135 69 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 69 146 74 151 }*/
/* End Operation */

/* Begin Operation: { 98 20 106 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 93 82 98 87 }*/
/* IO - VPL Terminal : { 93 146 98 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 206 25 214 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 201 88 206 93 }*/
/* IO - VPL Terminal : { 201 148 206 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 89 331 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 58 74 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"paramErr");
/* IO - VPL Root : { 74 82 79 87 }*/
/* End Operation */

/* Begin Operation: { 57 135 73 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 73 146 78 151 }*/
/* End Operation */

/* Begin Operation: { 102 20 110 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 97 82 102 87 }*/
/* IO - VPL Terminal : { 97 146 102 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_Create_20_Instance_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_Create_20_Instance_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 366 526 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 72 33 77 }*/
/* IO - VPL Root : { 28 149 33 154 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 67 53 83 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create");
/* IO - VPL Terminal : { 62 72 67 77 }*/
/* IO - VPL Terminal : { 62 95 67 100 }*/
/* IO - VPL Root : { 83 73 88 78 }*/
/* IO - VPL Root : { 83 97 88 102 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 109 71 125 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"find instance");
/* IO - VPL Terminal : { 104 92 109 97 }*/
/* IO - VPL Terminal : { 104 115 109 120 }*/
/* IO - VPL Terminal : { 104 142 109 147 }*/
/* IO - VPL Root : { 125 102 130 107 }*/
/* IO - VPL Root : { 125 131 130 136 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 403 513 }{ 235 301 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 114 33 119 }*/
/* IO - VPL Root : { 28 162 33 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 48 28 64 59 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 43 41 48 46 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 50 138 66 267 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get HIObject Class");
/* IO - VPL Terminal : { 45 198 50 203 }*/
/* IO - VPL Root : { 66 199 71 204 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 90 169 106 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Class ID");
/* IO - VPL Terminal : { 85 199 90 204 }*/
/* IO - VPL Root : { 106 188 111 193 }*/
/* IO - VPL Root : { 106 209 111 214 }*/
/* End Operation */

/* Begin Operation: { 134 83 150 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"HIObjectRef To Object");
/* IO - VPL Terminal : { 129 128 134 133 }*/
/* IO - VPL Terminal : { 129 175 134 180 }*/
/* IO - VPL Root : { 150 151 155 156 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 193 25 201 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 188 87 193 92 }*/
/* IO - VPL Terminal : { 188 151 193 156 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 403 513 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 114 33 119 }*/
/* IO - VPL Root : { 28 162 33 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 74 137 90 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 90 148 95 153 }*/
/* End Operation */

/* Begin Operation: { 119 22 127 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 84 119 89 }*/
/* IO - VPL Terminal : { 114 148 119 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 154 22 162 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 149 74 154 79 }*/
/* IO - VPL Terminal : { 149 152 154 157 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,2,2);
	result = connect_root_to_terminal(ptrA,1,0,3,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F7E_Make_20_Initialization_20_Event_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F7E_Make_20_Initialization_20_Event_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 168 348 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 64 33 69 }*/
/* IO - VPL Root : { 28 175 33 180 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 49 86 65 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"EventRef");
/* IO - VPL Terminal : { 44 118 49 123 }*/
/* IO - VPL Root : { 65 118 70 123 }*/
/* End Operation */

/* Begin Operation: { 88 8 104 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create HIObject Initialization Event");
/* IO - VPL Terminal : { 83 118 88 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 126 16 142 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/~Make Initialization Parameters");
/* IO - VPL Terminal : { 121 64 126 69 }*/
/* IO - VPL Terminal : { 121 118 126 123 }*/
/* IO - VPL Terminal : { 121 175 126 180 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 161 21 169 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 118 161 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,2,0,3,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F7E_Make_20_Initialization_20_Parameters_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F7E_Make_20_Initialization_20_Parameters_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 63 33 68 }*/
/* IO - VPL Root : { 28 115 33 120 }*/
/* IO - VPL Root : { 28 168 33 173 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 20 68 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_HIObject_2F_Get_20_Carbon_20_EventTargetRef_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_HIObject_2F_Get_20_Carbon_20_EventTargetRef_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 385 56 }{ 323 294 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 110 33 115 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 55 75 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get HIObjectRef");
/* IO - VPL Terminal : { 54 110 59 115 }*/
/* IO - VPL Root : { 75 110 80 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 98 26 114 53 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 93 37 98 42 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 136 37 152 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,2,"HIObjectGetEventTarget");
/* IO - VPL Terminal : { 131 110 136 115 }*/
/* IO - VPL Root : { 152 85 157 90 }*/
/* IO - VPL Root : { 152 135 157 140 }*/
/* End Operation */

/* Begin Operation: { 179 44 195 71 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 174 55 179 60 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 211 18 219 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 206 108 211 113 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
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
	VPLU_HIObjectRef_20_To_20_Object_universal_load(result,environment);

	result = method_new("MacOS HIObject Service/Open",environment);
	if(result == NULL) return kERROR;
	VPLU_MacOS_20_HIObject_20_Service_2F_Open_universal_load(result,environment);

	result = method_new("HIObject Class/Register",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_20_Class_2F_Register_universal_load(result,environment);

	result = method_new("HIObject Class/Unregister",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_20_Class_2F_Unregister_universal_load(result,environment);

	result = method_new("HIObject Class/Is Registered",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_20_Class_2F_Is_20_Registered_universal_load(result,environment);

	result = method_new("HIObject Class/Register Subclass",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_20_Class_2F_Register_20_Subclass_universal_load(result,environment);

	result = method_new("HIObject Class/Allocate Class ID",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_20_Class_2F_Allocate_20_Class_20_ID_universal_load(result,environment);

	result = method_new("HIObject Class/Allocate Base Class ID",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_20_Class_2F_Allocate_20_Base_20_Class_20_ID_universal_load(result,environment);

	result = method_new("HIObject Class/Make HIObject Instance",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_20_Class_2F_Make_20_HIObject_20_Instance_universal_load(result,environment);

	result = method_new("HIObject Class/Report Error",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_20_Class_2F_Report_20_Error_universal_load(result,environment);

	result = method_new("HIObject Class/Dispose",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_20_Class_2F_Dispose_universal_load(result,environment);

	result = method_new("HIObject Class/Get HIObjectClassRef",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_20_Class_2F_Get_20_HIObjectClassRef_universal_load(result,environment);

	result = method_new("HIObject Class/Set HIObjectClassRef",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_20_Class_2F_Set_20_HIObjectClassRef_universal_load(result,environment);

	result = method_new("HIObject Class/Get HIObject Instance Type",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_20_Class_2F_Get_20_HIObject_20_Instance_20_Type_universal_load(result,environment);

	result = method_new("HIObject Class/CE HIObject Event",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_20_Class_2F_CE_20_HIObject_20_Event_universal_load(result,environment);

	result = method_new("HIObject Class/CE HIObject Class Event",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_20_Class_2F_CE_20_HIObject_20_Class_20_Event_universal_load(result,environment);

	result = method_new("HIObject Class/CE HIObject Construct",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_20_Class_2F_CE_20_HIObject_20_Construct_universal_load(result,environment);

	result = method_new("HIObject Class/CE HIObject Destruct",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_20_Class_2F_CE_20_HIObject_20_Destruct_universal_load(result,environment);

	result = method_new("HIObject Class/Dispose Instance",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_20_Class_2F_Dispose_20_Instance_universal_load(result,environment);

	result = method_new("HIObject Class Callback/Open UPP",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_20_Class_20_Callback_2F_Open_20_UPP_universal_load(result,environment);

	result = method_new("HIObject Class Callback/Get EventTypeSpec",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_20_Class_20_Callback_2F_Get_20_EventTypeSpec_universal_load(result,environment);

	result = method_new("HIObject Class Callback/Do HI Callback",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_20_Class_20_Callback_2F_Do_20_HI_20_Callback_universal_load(result,environment);

	result = method_new("HIObject Class Callback/Use Parameters",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_20_Class_20_Callback_2F_Use_20_Parameters_universal_load(result,environment);

	result = method_new("HIObject Class Callback/Close UPP",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_20_Class_20_Callback_2F_Close_20_UPP_universal_load(result,environment);

	result = method_new("HIObject Class Callback/Clean Up Parameters",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_20_Class_20_Callback_2F_Clean_20_Up_20_Parameters_universal_load(result,environment);

	result = method_new("HIObject Class Callback/Get Parameter List?",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_20_Class_20_Callback_2F_Get_20_Parameter_20_List_3F__universal_load(result,environment);

	result = method_new("HIObject/HIObject Construct",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_HIObject_20_Construct_universal_load(result,environment);

	result = method_new("HIObject/HIObject Initialize",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_HIObject_20_Initialize_universal_load(result,environment);

	result = method_new("HIObject/HIObject Destruct",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_HIObject_20_Destruct_universal_load(result,environment);

	result = method_new("HIObject/HIObject Is Equal",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_HIObject_20_Is_20_Equal_universal_load(result,environment);

	result = method_new("HIObject/HIObject Print Debug Info",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_HIObject_20_Print_20_Debug_20_Info_universal_load(result,environment);

	result = method_new("HIObject/Use Initial Parameters",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_Use_20_Initial_20_Parameters_universal_load(result,environment);

	result = method_new("HIObject/Register HIObject",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_Register_20_HIObject_universal_load(result,environment);

	result = method_new("HIObject/Register Instance",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_Register_20_Instance_universal_load(result,environment);

	result = method_new("HIObject/Unregister Instance",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_Unregister_20_Instance_universal_load(result,environment);

	result = method_new("HIObject/CE Handle Event",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_CE_20_Handle_20_Event_universal_load(result,environment);

	result = method_new("HIObject/CE HIObject Event",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_CE_20_HIObject_20_Event_universal_load(result,environment);

	result = method_new("HIObject/CE HIObject Class Event",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_CE_20_HIObject_20_Class_20_Event_universal_load(result,environment);

	result = method_new("HIObject/CE HIObject Construct",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_CE_20_HIObject_20_Construct_universal_load(result,environment);

	result = method_new("HIObject/CE HIObject Initialize",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_CE_20_HIObject_20_Initialize_universal_load(result,environment);

	result = method_new("HIObject/CE HIObject Destruct",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_CE_20_HIObject_20_Destruct_universal_load(result,environment);

	result = method_new("HIObject/CE HIObject Is Equal",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_CE_20_HIObject_20_Is_20_Equal_universal_load(result,environment);

	result = method_new("HIObject/CE HIObject Print Debug Info",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_CE_20_HIObject_20_Print_20_Debug_20_Info_universal_load(result,environment);

	result = method_new("HIObject/Set HIObject Reference",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_Set_20_HIObject_20_Reference_universal_load(result,environment);

	result = method_new("HIObject/Get HIObject Reference",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_Get_20_HIObject_20_Reference_universal_load(result,environment);

	result = method_new("HIObject/Get HIObject Class",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_Get_20_HIObject_20_Class_universal_load(result,environment);

	result = method_new("HIObject/Set HIObject Class",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_Set_20_HIObject_20_Class_universal_load(result,environment);

	result = method_new("HIObject/Dispose",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_Dispose_universal_load(result,environment);

	result = method_new("HIObject/Debug",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_Debug_universal_load(result,environment);

	result = method_new("HIObject/Get HIObjectRef",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_Get_20_HIObjectRef_universal_load(result,environment);

	result = method_new("HIObject/Create",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_Create_universal_load(result,environment);

	result = method_new("HIObject/Create Instance",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_Create_20_Instance_universal_load(result,environment);

	result = method_new("HIObject/~Make Initialization Event",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F7E_Make_20_Initialization_20_Event_universal_load(result,environment);

	result = method_new("HIObject/~Make Initialization Parameters",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F7E_Make_20_Initialization_20_Parameters_universal_load(result,environment);

	result = method_new("HIObject/Get Carbon EventTargetRef",environment);
	if(result == NULL) return kERROR;
	VPLU_HIObject_2F_Get_20_Carbon_20_EventTargetRef_universal_load(result,environment);

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

