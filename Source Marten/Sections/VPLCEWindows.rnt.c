/* A VPL Section File */
/*

VPLCEWindows.rnt.c
Copyright: 2002 Scott B. Anderson

*/

Nat4 VPLU_Get_20_Port_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Get_20_Port_universal_load(V_Method method,V_Environment environment)
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
/* End Operation */

/* Begin Operation: { 65 82 81 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"GetPort");
/* IO - VPL Terminal : { 60 113 65 118 }*/
/* IO - VPL Root : { 81 113 86 118 }*/
/* End Operation */

/* Begin Operation: { 107 21 115 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 113 107 118 }*/
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


Nat4 VPLU_Set_20_Port_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Set_20_Port_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 108 23 113 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 40 60 69 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 39 52 44 57 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 81 77 97 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"SetPort");
/* IO - VPL Terminal : { 76 108 81 113 }*/
/* IO - VPL Root : { 97 108 102 113 }*/
/* End Operation */

/* Begin Operation: { 120 17 128 209 } */
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


Nat4 VPLU_Set_20_Target_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Set_20_Target_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 63 39 79 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Application");
/* IO - VPL Root : { 79 90 84 95 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 103 72 119 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Target");
/* IO - VPL Terminal : { 98 90 103 95 }*/
/* IO - VPL Terminal : { 98 110 103 115 }*/
/* IO - VPL Root : { 119 100 124 105 }*/
/* End Operation */

/* Begin Operation: { 148 20 156 212 } */
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



	return kNOERROR;
}


Nat4 VPLU_Get_20_Target_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Get_20_Target_universal_load(V_Method method,V_Environment environment)
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
/* End Operation */

/* Begin Operation: { 52 64 68 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Application");
/* IO - VPL Root : { 68 115 73 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 88 31 104 107 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 83 67 88 72 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 118 87 134 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Target");
/* IO - VPL Terminal : { 113 115 118 120 }*/
/* IO - VPL Root : { 134 105 139 110 }*/
/* IO - VPL Root : { 134 125 139 130 }*/
/* End Operation */

/* Begin Operation: { 155 18 163 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 150 113 155 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
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
/* End Operation */

/* Begin Operation: { 57 100 73 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 73 111 78 116 }*/
/* End Operation */

/* Begin Operation: { 102 17 110 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 97 111 102 116 }*/
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


Nat4 VPLU_Clear_20_Target_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Clear_20_Target_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 271 295 } */
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 110 23 115 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 39 60 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Application");
/* IO - VPL Root : { 60 90 65 95 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 62 94 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Target");
/* IO - VPL Terminal : { 73 90 78 95 }*/
/* IO - VPL Root : { 94 80 99 85 }*/
/* IO - VPL Root : { 94 100 99 105 }*/
/* End Operation */

/* Begin Operation: { 112 92 128 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 107 100 112 105 }*/
/* IO - VPL Terminal : { 107 110 112 115 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 73 185 89 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 89 196 94 201 }*/
/* End Operation */

/* Begin Operation: { 112 158 128 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Target");
/* IO - VPL Terminal : { 107 176 112 181 }*/
/* IO - VPL Terminal : { 107 196 112 201 }*/
/* IO - VPL Root : { 128 186 133 191 }*/
/* End Operation */

/* Begin Operation: { 146 20 154 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Change_20_Target_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Change_20_Target_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 299 342 }{ 314 335 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 112 35 117 }*/
/* IO - VPL Root : { 30 162 35 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 68 80 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Default NULL");
/* IO - VPL Terminal : { 59 112 64 117 }*/
/* IO - VPL Root : { 80 112 85 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 176 80 270 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Default TRUE");
/* IO - VPL Terminal : { 59 221 64 226 }*/
/* IO - VPL Root : { 80 221 85 226 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 41 122 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Application");
/* IO - VPL Root : { 122 92 127 97 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 127 164 257 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Exit Current Target");
/* IO - VPL Terminal : { 142 157 147 162 }*/
/* IO - VPL Terminal : { 142 189 147 194 }*/
/* IO - VPL Terminal : { 142 221 147 226 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);

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
/* IO - VPL Root : { 29 115 34 120 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 63 54 79 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Target");
/* IO - VPL Terminal : { 58 82 63 87 }*/
/* IO - VPL Root : { 79 72 84 77 }*/
/* IO - VPL Root : { 79 92 84 97 }*/
/* End Operation */

/* Begin Operation: { 108 19 124 95 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 103 55 108 60 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 113 216 130 260 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 107 228 112 233 }*/
/* IO - VPL Terminal : { 107 242 112 247 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 111 138 127 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Exit");
/* IO - VPL Terminal : { 106 153 111 158 }*/
/* IO - VPL Terminal : { 106 173 111 178 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 141 19 149 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 74 206 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Target");
/* IO - VPL Terminal : { 185 92 190 97 }*/
/* IO - VPL Terminal : { 185 112 190 117 }*/
/* IO - VPL Root : { 206 102 211 107 }*/
/* End Operation */

/* Begin Operation: { 232 41 248 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Enter New Target");
/* IO - VPL Terminal : { 227 102 232 107 }*/
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

/* Begin Operation: { 58 86 74 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Target");
/* IO - VPL Terminal : { 53 114 58 119 }*/
/* IO - VPL Root : { 74 104 79 109 }*/
/* IO - VPL Root : { 74 124 79 129 }*/
/* End Operation */

/* Begin Operation: { 104 27 120 103 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 99 63 104 68 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 103 152 119 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Enter");
/* IO - VPL Terminal : { 98 180 103 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 144 23 152 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 274 22 282 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,2,3,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,1,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [5 to 4] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}





	Nat4 tempAttribute_VPLCEWindow_2F_Name[] = {
0000000000, 0X00000038, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X18000000, 0X556E7469, 0X746C6564, 0X20446F63,
0X756D656E, 0X74205769, 0X6E646F77, 0000000000
	};
	Nat4 tempAttribute_VPLCEWindow_2F_Window_20_Event_20_Handler[] = {
0000000000, 0X000007B8, 0X00000174, 0X00000058, 0X00000014, 0X000008F8, 0X000008F4, 0X000008EC,
0X00000490, 0X000008A4, 0X000008A0, 0X00000898, 0X0000048C, 0X00000850, 0X0000084C, 0X00000844,
0X00000488, 0X000007FC, 0X000007F8, 0X000007F0, 0X00000484, 0X000007A8, 0X000007A4, 0X0000079C,
0X00000480, 0X00000754, 0X00000750, 0X00000748, 0X0000047C, 0X00000700, 0X000006FC, 0X000006F4,
0X00000478, 0X000006AC, 0X000006A8, 0X000006A0, 0X00000474, 0X00000658, 0X00000654, 0X0000064C,
0X00000470, 0X00000604, 0X00000600, 0X000005F8, 0X0000046C, 0X000005B0, 0X000005AC, 0X000005A4,
0X00000468, 0X0000055C, 0X00000558, 0X00000550, 0X00000464, 0X00000508, 0X00000504, 0X000004FC,
0X00000460, 0X000004B4, 0X000004B0, 0X000004A8, 0X0000045C, 0X00000454, 0X000001E0, 0X000001DC,
0X0000040C, 0X000001C8, 0X000003E0, 0X000001C4, 0X000003B4, 0X0000039C, 0X00000374, 0X0000037C,
0X0000035C, 0X00000354, 0X000001BC, 0X0000032C, 0X00000314, 0X000002EC, 0X000002F4, 0X00000270,
0X000002C8, 0X000002B0, 0X00000288, 0X00000290, 0X0000026C, 0X00000264, 0X000001B8, 0X00000234,
0X000001B4, 0X00000204, 0X000001AC, 0X00000188, 0X00000190, 0X27000008, 0000000000, 0000000000,
0000000000, 0000000000, 0X000001AC, 0X00000011, 0X00000194, 0X43617262, 0X6F6E2045, 0X76656E74,
0X2043616C, 0X6C626163, 0X6B000000, 0X000001F0, 0000000000, 0X00000220, 0X00000250, 0X00000340,
0000000000, 0X000003CC, 0X000003F8, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000428,
0X00000440, 0000000000, 0000000000, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X11000000, 0X6B457665, 0X6E745769, 0X6E646F77, 0X436C6173, 0X73000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000023C, 0X10000000, 0X2F434520,
0X48616E64, 0X6C652045, 0X76656E74, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000026C, 0X00000002, 0X00000274, 0X000002D8, 0X15000008, 0000000000, 0000000000,
0000000000, 0000000000, 0X000002B0, 0X00000001, 0X00000294, 0X41747472, 0X69627574, 0X6520496E,
0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000002B4, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X000002D0, 0X05000000, 0X4F776E65, 0X72000000, 0X15000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000314, 0X00000001, 0X000002F8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X00000318, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000334, 0X09000000, 0X54686520, 0X4576656E, 0X74000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000035C, 0X00000001, 0X00000360,
0X16000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000039C, 0X00000001, 0X00000380,
0X41747472, 0X69627574, 0X65204F75, 0X74707574, 0X20537065, 0X63696669, 0X65720000, 0X000003A0,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003BC, 0X0F000000, 0X43616C6C,
0X6261636B, 0X20526573, 0X756C7400, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X000003E8, 0X0F000000, 0X2F446F20, 0X43452043, 0X616C6C62, 0X61636B00, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000414, 0X13000000, 0X4576656E, 0X7448616E, 0X646C6572,
0X50726F63, 0X50747200, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000045C, 0X0000000E, 0X00000494,
0X000004E8, 0X0000053C, 0X00000590, 0X000005E4, 0X00000638, 0X0000068C, 0X000006E0, 0X00000734,
0X00000788, 0X000007DC, 0X00000830, 0X00000884, 0X000008D8, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X000004B0, 0X00000002, 0X000004B8, 0X000004D0, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X636D6473, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000001, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000504,
0X00000002, 0X0000050C, 0X00000524, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X636D6473, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000002, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000558, 0X00000002, 0X00000560, 0X00000578,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000048, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X000005AC, 0X00000002, 0X000005B4, 0X000005CC, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000005, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000600, 0X00000002,
0X00000608, 0X00000620, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000654, 0X00000002, 0X0000065C, 0X00000674, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000006A8, 0X00000002, 0X000006B0, 0X000006C8, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000001B,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000006FC, 0X00000002, 0X00000704,
0X0000071C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000050, 0X02910007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000750, 0X00000002, 0X00000758, 0X00000770, 0X02960004, 0000000000,
0000000000, 0000000000, 0000000000, 0X77696E64, 0X02950004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000025, 0X06160007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000007A4,
0X00000002, 0X000007AC, 0X000007C4, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X6B657962, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000001, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000007F8, 0X00000002, 0X00000800, 0X00000818,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X6B657962, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000002, 0X03520007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000084C, 0X00000002, 0X00000854, 0X0000086C, 0X03560004, 0000000000, 0000000000,
0000000000, 0000000000, 0X6D6F7573, 0X03500004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000001, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000008A0, 0X00000002,
0X000008A8, 0X000008C0, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000001D, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X000008F4, 0X00000002, 0X000008FC, 0X00000914, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000001F
	};
	Nat4 tempAttribute_VPLCEWindow_2F_Drawers[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLCEWindow_2F_Frame[] = {
0000000000, 0X0000008C, 0X00000028, 0X00000005, 0X00000014, 0X00000050, 0X0000004C, 0X00000048,
0X00000044, 0X0000003C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000044,
0X00000004, 0X00000054, 0X0000006C, 0X00000084, 0X0000009C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000032, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000032, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000C8, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000258
	};
	Nat4 tempAttribute_VPLCEWindow_2F_Window_20_Pasteboard_20_Handler[] = {
0000000000, 0X00000084, 0X00000024, 0X00000004, 0X00000014, 0X00000068, 0X00000064, 0X00000038,
0X00000040, 0X3F000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000060, 0X00000004,
0X00000044, 0X57696E64, 0X6F772050, 0X61737465, 0X626F6172, 0X64204861, 0X6E646C65, 0X72000000,
0000000000, 0X00000070, 0X0000008C, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLWindow_2F_Name[] = {
0000000000, 0X00000038, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X18000000, 0X556E7469, 0X746C6564, 0X20446F63,
0X756D656E, 0X74205769, 0X6E646F77, 0000000000
	};
	Nat4 tempAttribute_VPLWindow_2F_Window_20_Event_20_Handler[] = {
0000000000, 0X00000760, 0X00000164, 0X00000054, 0X00000014, 0X00000890, 0X0000088C, 0X00000884,
0X0000047C, 0X0000083C, 0X00000838, 0X00000830, 0X00000478, 0X000007E8, 0X000007E4, 0X000007DC,
0X00000474, 0X00000794, 0X00000790, 0X00000788, 0X00000470, 0X00000740, 0X0000073C, 0X00000734,
0X0000046C, 0X000006EC, 0X000006E8, 0X000006E0, 0X00000468, 0X00000698, 0X00000694, 0X0000068C,
0X00000464, 0X00000644, 0X00000640, 0X00000638, 0X00000460, 0X000005F0, 0X000005EC, 0X000005E4,
0X0000045C, 0X0000059C, 0X00000598, 0X00000590, 0X00000458, 0X00000548, 0X00000544, 0X0000053C,
0X00000454, 0X000004F4, 0X000004F0, 0X000004E8, 0X00000450, 0X000004A0, 0X0000049C, 0X00000494,
0X0000044C, 0X00000444, 0X000001D0, 0X000001CC, 0X000003FC, 0X000001B8, 0X000003D0, 0X000001B4,
0X000003A4, 0X0000038C, 0X00000364, 0X0000036C, 0X0000034C, 0X00000344, 0X000001AC, 0X0000031C,
0X00000304, 0X000002DC, 0X000002E4, 0X00000260, 0X000002B8, 0X000002A0, 0X00000278, 0X00000280,
0X0000025C, 0X00000254, 0X000001A8, 0X00000224, 0X000001A4, 0X000001F4, 0X0000019C, 0X00000178,
0X00000180, 0X27000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000019C, 0X00000011,
0X00000184, 0X43617262, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X000001E0,
0000000000, 0X00000210, 0X00000240, 0X00000330, 0000000000, 0X000003BC, 0X000003E8, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000418, 0X00000430, 0000000000, 0000000000, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001FC, 0X11000000, 0X6B457665,
0X6E745769, 0X6E646F77, 0X436C6173, 0X73000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000022C, 0X10000000, 0X2F434520, 0X48616E64, 0X6C652045, 0X76656E74, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0X000002C8, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002A0, 0X00000001,
0X00000284, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0X000002A4, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002C0, 0X05000000,
0X4F776E65, 0X72000000, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000304,
0X00000001, 0X000002E8, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965,
0X72000000, 0X00000308, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000324,
0X09000000, 0X54686520, 0X4576656E, 0X74000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000034C, 0X00000001, 0X00000350, 0X16000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000038C, 0X00000001, 0X00000370, 0X41747472, 0X69627574, 0X65204F75, 0X74707574,
0X20537065, 0X63696669, 0X65720000, 0X00000390, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000003AC, 0X0F000000, 0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X000003D8, 0X0F000000, 0X2F446F20, 0X43452043,
0X616C6C62, 0X61636B00, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000404,
0X13000000, 0X4576656E, 0X7448616E, 0X646C6572, 0X50726F63, 0X50747200, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000044C, 0X0000000D, 0X00000480, 0X000004D4, 0X00000528, 0X0000057C, 0X000005D0,
0X00000624, 0X00000678, 0X000006CC, 0X00000720, 0X00000774, 0X000007C8, 0X0000081C, 0X00000870,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000049C, 0X00000002, 0X000004A4,
0X000004BC, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X636D6473, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000001, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X000004F0, 0X00000002, 0X000004F8, 0X00000510, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X636D6473, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000002, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000544,
0X00000002, 0X0000054C, 0X00000564, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000048, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000598, 0X00000002, 0X000005A0, 0X000005B8,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X0000004A, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X000005EC, 0X00000002, 0X000005F4, 0X0000060C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000005, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000640, 0X00000002,
0X00000648, 0X00000660, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000694, 0X00000002, 0X0000069C, 0X000006B4, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000006E8, 0X00000002, 0X000006F0, 0X00000708, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000001B,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000073C, 0X00000002, 0X00000744,
0X0000075C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000050, 0X02910007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000790, 0X00000002, 0X00000798, 0X000007B0, 0X02960004, 0000000000,
0000000000, 0000000000, 0000000000, 0X77696E64, 0X02950004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000025, 0X06160007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000007E4,
0X00000002, 0X000007EC, 0X00000804, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X6B657962, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000001, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000838, 0X00000002, 0X00000840, 0X00000858,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X6B657962, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000002, 0X03520007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000088C, 0X00000002, 0X00000894, 0X000008AC, 0X03560004, 0000000000, 0000000000,
0000000000, 0000000000, 0X6D6F7573, 0X03500004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000001
	};
	Nat4 tempAttribute_VPLWindow_2F_Drawers[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLWindow_2F_Frame[] = {
0000000000, 0X0000008C, 0X00000028, 0X00000005, 0X00000014, 0X00000050, 0X0000004C, 0X00000048,
0X00000044, 0X0000003C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000044,
0X00000004, 0X00000054, 0X0000006C, 0X00000084, 0X0000009C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000032, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000032, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000C8, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000258
	};
	Nat4 tempAttribute_VPLEvent_2F_Shut_20_Down_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLEvent_2F_Double_20_Down[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLEvent_2F_Contextual_20_Menu_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00002850
	};


Nat4 VPLC_VPLCEWindow_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLCEWindow_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 410 200 }{ 220 420 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_VPLCEWindow_2F_Name,environment);
	tempAttribute = attribute_add("WindowRef",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Event Handler",tempClass,tempAttribute_VPLCEWindow_2F_Window_20_Event_20_Handler,environment);
	tempAttribute = attribute_add("Drawers",tempClass,tempAttribute_VPLCEWindow_2F_Drawers,environment);
	tempAttribute = attribute_add("View",tempClass,NULL,environment);
	tempAttribute = attribute_add("Frame",tempClass,tempAttribute_VPLCEWindow_2F_Frame,environment);
	tempAttribute = attribute_add("Target",tempClass,NULL,environment);
	tempAttribute = attribute_add("Title",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Pasteboard Handler",tempClass,tempAttribute_VPLCEWindow_2F_Window_20_Pasteboard_20_Handler,environment);
	tempAttribute = attribute_add("Window Printing Handler",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Document Window");
	return kNOERROR;
}

/* Start Universals: { 68 487 }{ 828 332 } */
Nat4 VPLU_VPLCEWindow_2F_Open_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Open_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 324 486 }{ 229 269 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 60 33 65 }*/
/* IO - VPL Root : { 28 168 33 173 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 105 78 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Save Parent?");
/* IO - VPL Terminal : { 57 134 62 139 }*/
/* IO - VPL Terminal : { 57 168 62 173 }*/
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

/* Begin Operation: { 99 114 115 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create Window");
/* IO - VPL Terminal : { 94 165 99 170 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 138 54 154 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Controls");
/* IO - VPL Terminal : { 133 105 138 110 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 102 31 118 89 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Show");
/* IO - VPL Terminal : { 97 60 102 65 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 179 20 187 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [3 to 2] */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Open_20_With_20_Data_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Open_20_With_20_Data_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 522 953 }{ 253 331 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 22 80 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get WindowRef");
/* IO - VPL Terminal : { 59 75 64 80 }*/
/* IO - VPL Root : { 80 75 85 80 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 64 122 91 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 75 106 80 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 64 148 80 240 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Data");
/* IO - VPL Terminal : { 59 173 64 178 }*/
/* IO - VPL Terminal : { 59 212 64 217 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 164 122 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"View");
/* IO - VPL Terminal : { 101 187 106 192 }*/
/* IO - VPL Root : { 122 178 127 183 }*/
/* IO - VPL Root : { 122 194 127 199 }*/
/* End Operation */

/* Begin Operation: { 148 150 164 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Target Self");
/* IO - VPL Terminal : { 143 194 148 199 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 52 164 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Refresh");
/* IO - VPL Terminal : { 143 84 148 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 22 198 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* Synchro [6 to 5] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 309 685 }{ 222 284 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 62 35 67 }*/
/* IO - VPL Root : { 30 170 35 175 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 111 80 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Data");
/* IO - VPL Terminal : { 59 138 64 143 }*/
/* IO - VPL Terminal : { 59 170 64 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 144 122 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create Window");
/* IO - VPL Terminal : { 101 194 106 199 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 106 11 122 115 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Controls");
/* IO - VPL Terminal : { 101 62 106 67 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 33 80 91 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Show");
/* IO - VPL Terminal : { 59 62 64 67 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 36 156 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [3 to 2] */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Create_20_Window_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Create_20_Window_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 106 546 }{ 330 348 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 172 84 188 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kDocumentWindowClass");
/* IO - VPL Root : { 188 146 193 151 }*/
/* End Operation */

/* Begin Operation: { 133 95 149 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Creation Attributes");
/* IO - VPL Terminal : { 128 173 133 178 }*/
/* IO - VPL Root : { 149 174 154 179 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 161 73 247 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Frame");
/* IO - VPL Terminal : { 52 201 57 206 }*/
/* IO - VPL Root : { 73 202 78 207 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 94 159 110 249 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"list-to-Rect");
/* IO - VPL Terminal : { 89 202 94 207 }*/
/* IO - VPL Root : { 110 202 115 207 }*/
/* End Operation */

/* Begin Operation: { 214 83 230 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create Window Class");
/* IO - VPL Terminal : { 209 114 214 119 }*/
/* IO - VPL Terminal : { 209 146 214 151 }*/
/* IO - VPL Terminal : { 209 174 214 179 }*/
/* IO - VPL Terminal : { 209 202 214 207 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 255 25 263 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,1,2,5);
	result = connect_root_to_terminal(ptrA,1,2,3,5);
	result = connect_root_to_terminal(ptrA,1,4,4,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Get_20_Creation_20_Attributes_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Get_20_Creation_20_Attributes_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 88 312 }{ 341 303 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 48 10 64 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kWindowStandardDocumentAttributes");
/* IO - VPL Root : { 64 110 69 115 }*/
/* End Operation */

/* Begin Operation: { 82 40 98 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kWindowCompositingAttribute");
/* IO - VPL Root : { 98 120 103 125 }*/
/* End Operation */

/* Begin Operation: { 117 44 133 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kWindowInWindowMenuAttribute");
/* IO - VPL Root : { 133 130 138 135 }*/
/* End Operation */

/* Begin Operation: { 148 63 164 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kWindowLiveResizeAttribute");
/* IO - VPL Root : { 164 140 169 145 }*/
/* End Operation */

/* Begin Operation: { 184 54 200 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kWindowStandardHandlerAttribute");
/* IO - VPL Root : { 200 146 205 151 }*/
/* End Operation */

/* Begin Operation: { 217 109 233 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"++");
/* IO - VPL Terminal : { 212 110 217 115 }*/
/* IO - VPL Terminal : { 212 130 217 135 }*/
/* IO - VPL Terminal : { 212 138 217 143 }*/
/* IO - VPL Terminal : { 212 146 217 151 }*/
/* IO - VPL Root : { 233 126 238 131 }*/
/* End Operation */

/* Begin Operation: { 258 32 266 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 253 126 258 131 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,1,3,2,6);
	result = connect_root_to_terminal(ptrA,1,4,3,6);
	result = connect_root_to_terminal(ptrA,1,5,4,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Open_20_Controls_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Open_20_Controls_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 578 208 }{ 237 313 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 45 95 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Open View");
/* IO - VPL Terminal : { 72 84 77 89 }*/
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

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 90 94 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"View");
/* IO - VPL Terminal : { 73 113 78 118 }*/
/* IO - VPL Root : { 94 104 99 109 }*/
/* IO - VPL Root : { 94 120 99 125 }*/
/* End Operation */

/* Begin Operation: { 120 140 136 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 115 176 120 181 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 120 68 136 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 115 85 120 90 }*/
/* IO - VPL Terminal : { 115 104 120 109 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 86 178 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Target");
/* IO - VPL Terminal : { 157 104 162 109 }*/
/* IO - VPL Terminal : { 157 120 162 125 }*/
/* IO - VPL Root : { 178 114 183 119 }*/
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,2,1,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 43 137 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Pasteboard Handler");
/* IO - VPL Terminal : { 114 130 119 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 52 179 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Printing Handler");
/* IO - VPL Terminal : { 156 130 161 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
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


Nat4 VPLU_VPLCEWindow_2F_Draw_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Draw_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 443 711 }{ 391 340 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 93 49 98 }*/
/* IO - VPL Root : { 44 165 49 170 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 56 94 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"View");
/* IO - VPL Terminal : { 73 79 78 84 }*/
/* IO - VPL Root : { 94 70 99 75 }*/
/* IO - VPL Root : { 94 86 99 91 }*/
/* End Operation */

/* Begin Operation: { 120 36 136 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 115 72 120 77 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 120 144 136 264 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Begin CGContext");
/* IO - VPL Terminal : { 115 202 120 207 }*/
/* IO - VPL Root : { 136 206 141 211 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 122 94 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Get Update Rgn");
/* IO - VPL Terminal : { 73 169 78 174 }*/
/* IO - VPL Root : { 94 169 99 174 }*/
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

/* Start Operations: { 226 357 }{ 250 421 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 80 80 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Port");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 35 122 62 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 46 106 51 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 64 204 80 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,0,1,"NewRgn");
/* IO - VPL Root : { 80 234 85 239 }*/
/* End Operation */

/* Begin Operation: { 106 116 122 252 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,3,"GetPortVisibleRegion");
/* IO - VPL Terminal : { 101 159 106 164 }*/
/* IO - VPL Terminal : { 101 204 106 209 }*/
/* IO - VPL Root : { 122 148 127 153 }*/
/* IO - VPL Root : { 122 182 127 187 }*/
/* IO - VPL Root : { 122 216 127 221 }*/
/* End Operation */

/* Begin Operation: { 190 22 198 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 116 190 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,3,4,1,5);
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

/* Begin Operation: { 56 103 72 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 72 114 77 119 }*/
/* End Operation */

/* Begin Operation: { 101 20 109 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 96 114 101 119 }*/
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

/* Begin Operation: { 162 64 178 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Draw Event CG");
/* IO - VPL Terminal : { 157 86 162 91 }*/
/* IO - VPL Terminal : { 157 116 162 121 }*/
/* IO - VPL Terminal : { 157 146 162 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 64 221 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"draw target on top");
/* IO - VPL Terminal : { 198 93 203 98 }*/
/* IO - VPL Terminal : { 198 124 203 129 }*/
/* IO - VPL Terminal : { 198 155 203 160 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 151 175 }{ 342 328 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 82 50 87 }*/
/* IO - VPL Root : { 45 130 50 135 }*/
/* IO - VPL Root : { 45 178 50 183 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 192 95 246 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"View");
/* IO - VPL Terminal : { 72 217 77 222 }*/
/* IO - VPL Root : { 96 208 101 213 }*/
/* IO - VPL Root : { 96 226 101 231 }*/
/* End Operation */

/* Begin Operation: { 78 52 95 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Target");
/* IO - VPL Terminal : { 72 82 77 87 }*/
/* IO - VPL Root : { 96 71 101 76 }*/
/* IO - VPL Root : { 96 92 101 97 }*/
/* End Operation */

/* Begin Operation: { 120 200 137 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 114 212 119 217 }*/
/* IO - VPL Terminal : { 114 226 119 231 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 120 98 137 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Item Edit Text");
/* IO - VPL Root : { 138 139 143 144 }*/
/* End Operation */

/* Begin Operation: { 162 47 179 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Is Or Is Descendant?");
/* IO - VPL Terminal : { 156 92 161 97 }*/
/* IO - VPL Terminal : { 156 139 161 144 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 204 50 221 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Text Editor");
/* IO - VPL Terminal : { 198 92 203 97 }*/
/* IO - VPL Root : { 222 77 227 82 }*/
/* IO - VPL Root : { 222 106 227 111 }*/
/* End Operation */

/* Begin Operation: { 246 69 263 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 240 106 245 111 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 204 162 221 278 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Draw Event CG");
/* IO - VPL Terminal : { 198 189 203 194 }*/
/* IO - VPL Terminal : { 198 218 203 223 }*/
/* IO - VPL Terminal : { 198 247 203 252 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 288 44 296 236 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,2,1,2,3);
	result = connect_root_to_terminal(ptrA,2,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,2,2,1,6);
	result = connect_root_to_terminal(ptrA,2,6,1,7);
	result = connect_root_to_terminal(ptrA,2,2,1,8);
	result = connect_root_to_terminal(ptrA,2,0,2,8);
	result = connect_root_to_terminal(ptrA,3,0,3,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 204 217 221 277 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"/Flush");
/* IO - VPL Terminal : { 198 245 203 250 }*/
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

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 80 95 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Is Tiger?");
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);

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

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 149 95 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 96 167 101 172 }*/
/* End Operation */

/* Begin Operation: { 78 59 95 105 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( 10 4 )");
/* IO - VPL Root : { 96 80 101 85 }*/
/* End Operation */

/* Begin Operation: { 120 87 137 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Is MacOS?");
/* IO - VPL Terminal : { 114 112 119 117 }*/
/* IO - VPL Terminal : { 114 139 119 144 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 101 137 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Flush");
/* IO - VPL Terminal : { 114 130 119 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 246 59 262 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/End CGContext");
/* IO - VPL Terminal : { 241 93 246 98 }*/
/* IO - VPL Terminal : { 241 129 246 134 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 246 178 262 249 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"release?");
/* IO - VPL Terminal : { 241 211 246 216 }*/
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

/* Start Operations: { 60 60 }{ 164 301 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 56 80 83 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 59 67 64 72 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 64 127 80 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"DisposeRgn");
/* IO - VPL Terminal : { 59 167 64 172 }*/
/* IO - VPL Root : { 80 167 85 172 }*/
/* End Operation */

/* Begin Operation: { 106 26 114 218 } */
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

/* Begin Operation: { 288 36 296 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,1,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,3,3,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,4,2,6);
	result = connect_root_to_terminal(ptrA,1,3,3,6);
	result = connect_root_to_terminal(ptrA,1,3,1,7);
	result = connect_root_to_terminal(ptrA,1,0,1,8);
	result = connect_root_to_terminal(ptrA,1,3,2,8);
	result = connect_root_to_terminal(ptrA,1,4,1,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [6 to 5] */
/* Synchro [7 to 6] */
/* Synchro [8 to 7] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 443 711 }{ 203 351 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 77 33 82 }*/
/* IO - VPL Root : { 28 149 33 154 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 71 54 87 104 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"View");
/* IO - VPL Terminal : { 66 77 71 82 }*/
/* IO - VPL Root : { 87 68 92 73 }*/
/* IO - VPL Root : { 87 84 92 89 }*/
/* End Operation */

/* Begin Operation: { 120 11 136 87 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 115 47 120 52 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 71 126 87 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Port Bounds");
/* IO - VPL Terminal : { 66 184 71 189 }*/
/* IO - VPL Root : { 87 183 92 188 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 123 146 139 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Draw");
/* IO - VPL Terminal : { 118 163 123 168 }*/
/* IO - VPL Terminal : { 118 183 123 188 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 163 22 171 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Idle_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Idle_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 162 33 167 }*/
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


Nat4 VPLU_VPLCEWindow_2F_Initialize_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Initialize_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 67 14 83 100 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Initialize");
/* IO - VPL Terminal : { 62 57 67 62 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 67 132 83 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Initialize Title");
/* IO - VPL Terminal : { 62 181 67 186 }*/
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

/* Start Operations: { 60 60 }{ 245 302 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 71 91 87 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Title");
/* IO - VPL Terminal : { 66 114 71 119 }*/
/* IO - VPL Root : { 87 105 92 110 }*/
/* IO - VPL Root : { 87 121 92 126 }*/
/* End Operation */

/* Begin Operation: { 107 142 123 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 102 172 107 177 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 109 49 125 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Title");
/* IO - VPL Terminal : { 104 73 109 78 }*/
/* IO - VPL Terminal : { 104 100 109 105 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 153 20 161 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 122 50 138 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Constrain Window");
/* IO - VPL Terminal : { 117 113 122 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 161 18 169 210 } */
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


Nat4 VPLU_VPLCEWindow_2F_Constrain_20_Window_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Constrain_20_Window_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 381 315 } */
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 112 23 117 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 20 60 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get WindowRef");
/* IO - VPL Terminal : { 39 72 44 77 }*/
/* IO - VPL Root : { 60 72 65 77 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 25 94 52 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 73 36 78 41 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 75 82 91 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kWindowContentRgn");
/* IO - VPL Root : { 91 134 96 139 }*/
/* End Operation */

/* Begin Operation: { 130 169 146 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 146 180 151 185 }*/
/* End Operation */

/* Begin Operation: { 124 97 140 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"options");
/* IO - VPL Root : { 140 126 145 131 }*/
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

/* Start Operations: { 60 60 }{ 248 297 } */
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 27 60 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kWindowConstrainMayResize");
/* IO - VPL Root : { 60 104 65 109 }*/
/* End Operation */

/* Begin Operation: { 78 20 94 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kWindowConstrainMoveRegardlessOfFit");
/* IO - VPL Root : { 94 125 99 130 }*/
/* End Operation */

/* Begin Operation: { 112 97 128 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 107 104 112 109 }*/
/* IO - VPL Terminal : { 107 125 112 130 }*/
/* IO - VPL Root : { 128 114 133 119 }*/
/* End Operation */

/* Begin Operation: { 146 20 154 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 141 114 146 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 175 47 191 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,5,3,"ConstrainWindowToScreen");
/* IO - VPL Terminal : { 170 72 175 77 }*/
/* IO - VPL Terminal : { 170 99 175 104 }*/
/* IO - VPL Terminal : { 170 126 175 131 }*/
/* IO - VPL Terminal : { 170 153 175 158 }*/
/* IO - VPL Terminal : { 170 180 175 185 }*/
/* IO - VPL Root : { 191 86 196 91 }*/
/* IO - VPL Root : { 191 127 196 132 }*/
/* IO - VPL Root : { 191 168 196 173 }*/
/* End Operation */

/* Begin Operation: { 219 68 235 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"reset frame");
/* IO - VPL Terminal : { 214 112 219 117 }*/
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

/* Start Operations: { 187 382 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 92 80 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window Bounds");
/* IO - VPL Terminal : { 59 154 64 159 }*/
/* IO - VPL Root : { 80 154 85 159 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 110 85 126 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Change Frame");
/* IO - VPL Terminal : { 105 114 110 119 }*/
/* IO - VPL Terminal : { 105 154 110 159 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 152 18 160 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 260 29 268 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,1,3,2,6);
	result = connect_root_to_terminal(ptrA,1,5,3,6);
	result = connect_root_to_terminal(ptrA,1,4,4,6);
	result = connect_root_to_terminal(ptrA,1,4,5,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Get_20_Frame_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Get_20_Frame_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 67 81 83 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 62 107 67 112 }*/
/* IO - VPL Root : { 83 97 88 102 }*/
/* IO - VPL Root : { 83 115 88 120 }*/
/* End Operation */

/* Begin Operation: { 127 18 135 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 122 105 127 110 }*/
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


Nat4 VPLU_VPLCEWindow_2F_Set_20_Frame_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Set_20_Frame_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 290 417 }{ 370 304 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 68 35 73 }*/
/* IO - VPL Root : { 30 144 35 149 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 30 80 108 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 59 68 64 73 }*/
/* IO - VPL Root : { 80 60 85 65 }*/
/* IO - VPL Root : { 80 76 85 81 }*/
/* End Operation */

/* Begin Operation: { 148 30 164 108 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 143 60 148 65 }*/
/* IO - VPL Terminal : { 143 76 148 81 }*/
/* IO - VPL Root : { 164 68 169 73 }*/
/* End Operation */

/* Begin Operation: { 106 108 122 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Compute Delta");
/* IO - VPL Terminal : { 101 131 106 136 }*/
/* IO - VPL Terminal : { 101 187 106 192 }*/
/* IO - VPL Root : { 122 132 127 137 }*/
/* IO - VPL Root : { 122 188 127 193 }*/
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

/* Start Cases: { 381 322 }{ 50 316 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 340 334 }{ 333 290 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 88 33 93 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 50 102 66 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,4,"unpack");
/* IO - VPL Terminal : { 45 142 50 147 }*/
/* IO - VPL Root : { 66 111 71 116 }*/
/* IO - VPL Root : { 66 128 71 133 }*/
/* IO - VPL Root : { 66 145 71 150 }*/
/* IO - VPL Root : { 66 166 71 171 }*/
/* End Operation */

/* Begin Operation: { 89 48 105 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,4,"unpack");
/* IO - VPL Terminal : { 84 88 89 93 }*/
/* IO - VPL Root : { 105 57 110 62 }*/
/* IO - VPL Root : { 105 74 110 79 }*/
/* IO - VPL Root : { 105 91 110 96 }*/
/* IO - VPL Root : { 105 112 110 117 }*/
/* End Operation */

/* Begin Operation: { 124 5 140 85 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"iminus");
/* IO - VPL Terminal : { 119 30 124 35 }*/
/* IO - VPL Terminal : { 119 57 124 62 }*/
/* IO - VPL Root : { 140 44 145 49 }*/
/* End Operation */

/* Begin Operation: { 159 87 175 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"iminus");
/* IO - VPL Terminal : { 154 112 159 117 }*/
/* IO - VPL Terminal : { 154 139 159 144 }*/
/* IO - VPL Root : { 175 126 180 131 }*/
/* End Operation */

/* Begin Operation: { 89 142 105 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"iminus");
/* IO - VPL Terminal : { 84 167 89 172 }*/
/* IO - VPL Terminal : { 84 194 89 199 }*/
/* IO - VPL Root : { 105 181 110 186 }*/
/* End Operation */

/* Begin Operation: { 127 141 143 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"iminus");
/* IO - VPL Terminal : { 122 166 127 171 }*/
/* IO - VPL Terminal : { 122 193 127 198 }*/
/* IO - VPL Root : { 143 180 148 185 }*/
/* End Operation */

/* Begin Operation: { 206 49 222 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"iminus");
/* IO - VPL Terminal : { 201 74 206 79 }*/
/* IO - VPL Terminal : { 201 101 206 106 }*/
/* IO - VPL Root : { 222 88 227 93 }*/
/* End Operation */

/* Begin Operation: { 243 103 259 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"iminus");
/* IO - VPL Terminal : { 238 128 243 133 }*/
/* IO - VPL Terminal : { 238 155 243 160 }*/
/* IO - VPL Root : { 259 142 264 147 }*/
/* End Operation */

/* Begin Operation: { 281 20 289 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 276 88 281 93 }*/
/* IO - VPL Terminal : { 276 142 281 147 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,3,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,4,2,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,3,1,1,5);
	result = connect_root_to_terminal(ptrA,1,1,2,5);
	result = connect_root_to_terminal(ptrA,4,1,1,6);
	result = connect_root_to_terminal(ptrA,2,1,2,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,3,2,7);
	result = connect_root_to_terminal(ptrA,1,6,1,8);
	result = connect_root_to_terminal(ptrA,1,4,2,8);
	result = connect_root_to_terminal(ptrA,1,7,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 138 206 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 185 153 190 158 }*/
/* IO - VPL Terminal : { 185 172 190 177 }*/
/* IO - VPL Root : { 206 160 211 165 }*/
/* End Operation */

/* Begin Operation: { 231 179 247 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( 0 0 )");
/* IO - VPL Terminal : { 226 196 231 201 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 190 33 206 105 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"View");
/* IO - VPL Terminal : { 185 68 190 73 }*/
/* IO - VPL Root : { 206 60 211 65 }*/
/* IO - VPL Root : { 206 76 211 81 }*/
/* End Operation */

/* Begin Operation: { 232 55 248 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Resize");
/* IO - VPL Terminal : { 227 76 232 81 }*/
/* IO - VPL Terminal : { 227 122 232 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 22 282 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,2,1,6);
	result = connect_root_to_terminal(ptrA,2,6,1,7);
	result = connect_root_to_terminal(ptrA,1,4,2,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Change_20_Frame_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Change_20_Frame_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 494 353 }{ 148 271 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 77 33 82 }*/
/* IO - VPL Root : { 28 152 33 157 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 76 75 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Frame");
/* IO - VPL Terminal : { 54 99 59 104 }*/
/* IO - VPL Terminal : { 54 134 59 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 103 22 111 214 } */
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


Nat4 VPLU_VPLCEWindow_2F_Get_20_Port_20_Bounds_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Get_20_Port_20_Bounds_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 105 23 110 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 54 60 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get WindowRef");
/* IO - VPL Terminal : { 39 105 44 110 }*/
/* IO - VPL Root : { 60 105 65 110 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 34 94 61 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 73 45 78 50 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 78 95 94 237 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,3,"GetWindowPortBounds");
/* IO - VPL Terminal : { 73 140 78 145 }*/
/* IO - VPL Terminal : { 73 187 78 192 }*/
/* IO - VPL Root : { 94 128 99 133 }*/
/* IO - VPL Root : { 94 163 99 168 }*/
/* IO - VPL Root : { 94 198 99 203 }*/
/* End Operation */

/* Begin Operation: { 112 63 128 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"Rect-to-list");
/* IO - VPL Terminal : { 107 106 112 111 }*/
/* IO - VPL Root : { 128 106 133 111 }*/
/* End Operation */

/* Begin Operation: { 146 20 154 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 141 106 146 111 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,3,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 114 23 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 86 60 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( 0 0 0 0 )");
/* IO - VPL Root : { 60 114 65 119 }*/
/* End Operation */

/* Begin Operation: { 78 20 86 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 73 114 78 119 }*/
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


Nat4 VPLU_VPLCEWindow_2F_Refresh_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Refresh_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 227 22 }{ 284 299 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 105 81 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Port Bounds");
/* IO - VPL Terminal : { 60 162 65 167 }*/
/* IO - VPL Root : { 81 162 86 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 109 119 125 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"list-to-Rect");
/* IO - VPL Terminal : { 104 162 109 167 }*/
/* IO - VPL Root : { 125 162 130 167 }*/
/* End Operation */

/* Begin Operation: { 153 85 169 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Invalidate Rect");
/* IO - VPL Terminal : { 148 114 153 119 }*/
/* IO - VPL Terminal : { 148 162 153 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 197 21 205 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Set_20_Target_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Set_20_Target_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 692 942 }{ 276 280 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 65 33 70 }*/
/* IO - VPL Root : { 28 122 33 127 }*/
/* IO - VPL Root : { 28 179 33 184 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 79 74 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Exit Current Target");
/* IO - VPL Terminal : { 53 109 58 114 }*/
/* IO - VPL Terminal : { 53 179 58 184 }*/
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

/* Begin Operation: { 63 54 79 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Target");
/* IO - VPL Terminal : { 58 82 63 87 }*/
/* IO - VPL Root : { 79 72 84 77 }*/
/* IO - VPL Root : { 79 92 84 97 }*/
/* End Operation */

/* Begin Operation: { 108 19 124 95 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 103 55 108 60 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 111 138 127 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Exit");
/* IO - VPL Terminal : { 106 153 111 158 }*/
/* IO - VPL Terminal : { 106 173 111 178 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 141 19 149 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 95 47 111 107 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Target");
/* IO - VPL Terminal : { 90 65 95 70 }*/
/* IO - VPL Terminal : { 90 85 95 90 }*/
/* IO - VPL Root : { 111 75 116 80 }*/
/* End Operation */

/* Begin Operation: { 137 14 153 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Enter New Target");
/* IO - VPL Terminal : { 132 75 137 80 }*/
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

/* Begin Operation: { 58 86 74 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Target");
/* IO - VPL Terminal : { 53 114 58 119 }*/
/* IO - VPL Root : { 74 104 79 109 }*/
/* IO - VPL Root : { 74 124 79 129 }*/
/* End Operation */

/* Begin Operation: { 104 27 120 103 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 99 63 104 68 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 103 152 119 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Enter");
/* IO - VPL Terminal : { 98 180 103 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 144 23 152 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 178 83 194 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Set Target");
/* IO - VPL Terminal : { 173 122 178 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 221 20 229 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Is_20_Front_20_Window_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Is_20_Front_20_Window_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 719 709 }{ 288 413 } */
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 110 23 115 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 37 160 53 322 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,0,1,"ActiveNonFloatingWindow");
/* IO - VPL Root : { 53 239 58 244 }*/
/* End Operation */

/* Begin Operation: { 80 313 96 340 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 75 324 80 329 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 44 20 60 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get WindowRef");
/* IO - VPL Terminal : { 39 73 44 78 }*/
/* IO - VPL Root : { 60 73 65 78 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 21 94 48 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 73 32 78 37 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 78 82 94 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"from-pointer");
/* IO - VPL Terminal : { 73 127 78 132 }*/
/* IO - VPL Root : { 94 127 99 132 }*/
/* End Operation */

/* Begin Operation: { 78 194 94 288 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"from-pointer");
/* IO - VPL Terminal : { 73 239 78 244 }*/
/* IO - VPL Root : { 94 239 99 244 }*/
/* End Operation */

/* Begin Operation: { 112 221 128 251 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 107 229 112 234 }*/
/* IO - VPL Terminal : { 107 239 112 244 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 210 100 226 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 226 112 231 117 }*/
/* End Operation */

/* Begin Operation: { 130 61 146 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,0,1,"GetUserFocusWindow");
/* IO - VPL Root : { 146 127 151 132 }*/
/* End Operation */

/* Begin Operation: { 168 95 184 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 163 106 168 111 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 168 185 184 279 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"from-pointer");
/* IO - VPL Terminal : { 163 230 168 235 }*/
/* IO - VPL Root : { 184 230 189 235 }*/
/* End Operation */

/* Begin Operation: { 202 212 218 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 197 220 202 225 }*/
/* IO - VPL Terminal : { 197 230 202 235 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 244 22 252 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 239 112 244 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
	result = connect_root_to_terminal(ptrA,1,9,1,11);
	result = connect_root_to_terminal(ptrA,1,5,1,12);
	result = connect_root_to_terminal(ptrA,1,11,2,12);
	result = connect_root_to_terminal(ptrA,1,8,1,13);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 114 23 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 101 60 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 60 116 65 121 }*/
/* End Operation */

/* Begin Operation: { 78 22 86 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 73 116 78 121 }*/
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


Nat4 VPLU_VPLCEWindow_2F_Set_20_Port_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Set_20_Port_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 111 23 116 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 58 60 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get WindowRef");
/* IO - VPL Terminal : { 39 111 44 116 }*/
/* IO - VPL Root : { 60 111 65 116 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 39 94 66 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 73 50 78 55 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 78 100 94 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"SetPortWindowPort");
/* IO - VPL Terminal : { 73 162 78 167 }*/
/* IO - VPL Root : { 94 162 99 167 }*/
/* End Operation */

/* Begin Operation: { 112 20 120 212 } */
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



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Get_20_Port_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Get_20_Port_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 110 23 115 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 60 60 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGrafPtr");
/* IO - VPL Terminal : { 39 110 44 115 }*/
/* IO - VPL Root : { 60 110 65 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 18 86 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 73 110 78 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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


Nat4 VPLU_VPLCEWindow_2F_Select_20_Window_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Select_20_Window_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 111 23 116 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 97 78 113 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Process?");
/* IO - VPL Terminal : { 92 111 97 116 }*/
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

/* Start Operations: { 279 161 }{ 307 474 } */
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 114 23 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 20 60 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,2,"GetFrontProcess");
/* IO - VPL Terminal : { 39 74 44 79 }*/
/* IO - VPL Root : { 60 55 65 60 }*/
/* IO - VPL Root : { 60 92 65 97 }*/
/* End Operation */

/* Begin Operation: { 44 150 60 276 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,2,"GetCurrentProcess");
/* IO - VPL Terminal : { 39 211 44 216 }*/
/* IO - VPL Root : { 60 190 65 195 }*/
/* IO - VPL Root : { 60 232 65 237 }*/
/* End Operation */

/* Begin Operation: { 78 104 94 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,3,2,"SameProcess");
/* IO - VPL Terminal : { 73 125 78 130 }*/
/* IO - VPL Terminal : { 73 148 78 153 }*/
/* IO - VPL Terminal : { 73 171 78 176 }*/
/* IO - VPL Root : { 94 133 99 138 }*/
/* IO - VPL Root : { 94 164 99 169 }*/
/* End Operation */

/* Begin Operation: { 112 142 128 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get UInt8");
/* IO - VPL Terminal : { 107 164 112 169 }*/
/* IO - VPL Terminal : { 107 188 112 193 }*/
/* IO - VPL Root : { 128 164 133 169 }*/
/* IO - VPL Root : { 128 188 133 193 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 146 128 162 252 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Boolean To Integer");
/* IO - VPL Terminal : { 141 188 146 193 }*/
/* IO - VPL Root : { 162 188 167 193 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 180 176 196 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 175 188 180 193 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 180 244 196 436 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kSetFrontProcessFrontWindowOnly");
/* IO - VPL Root : { 196 338 201 343 }*/
/* End Operation */

/* Begin Operation: { 214 176 230 352 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"SetFrontProcessWithOptions");
/* IO - VPL Terminal : { 209 232 214 237 }*/
/* IO - VPL Terminal : { 209 290 214 295 }*/
/* IO - VPL Root : { 230 262 235 267 }*/
/* End Operation */

/* Begin Operation: { 248 38 256 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,2,2,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,2,2,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 44 21 60 85 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Select");
/* IO - VPL Terminal : { 39 50 44 55 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 142 60 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Focus");
/* IO - VPL Terminal : { 39 167 44 172 }*/
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
/* IO - VPL Root : { 28 112 33 117 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 61 73 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get WindowRef");
/* IO - VPL Terminal : { 52 112 57 117 }*/
/* IO - VPL Root : { 73 112 78 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 116 56 132 83 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 111 67 116 72 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 116 117 132 252 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,2,"SetUserFocusWindow");
/* IO - VPL Terminal : { 111 182 116 187 }*/
/* IO - VPL Root : { 132 160 137 165 }*/
/* IO - VPL Root : { 132 205 137 210 }*/
/* End Operation */

/* Begin Operation: { 160 21 168 213 } */
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 163 20 171 212 } */
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


Nat4 VPLU_VPLCEWindow_2F_Mouse_20_Down_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Mouse_20_Down_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 233 317 } */
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 70 23 75 }*/
/* IO - VPL Root : { 18 155 23 160 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 23 60 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Select Window");
/* IO - VPL Terminal : { 39 70 44 75 }*/
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

/* Start Operations: { 299 246 }{ 216 298 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 36 95 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"official select");
/* IO - VPL Terminal : { 72 82 77 87 }*/
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

/* Start Operations: { 60 60 }{ 264 278 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 101 95 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Is Front Window");
/* IO - VPL Terminal : { 72 161 77 166 }*/
/* IO - VPL Root : { 96 161 101 166 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 145 137 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 114 161 119 166 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 162 75 179 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Select Window");
/* IO - VPL Terminal : { 156 130 161 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 78 148 95 240 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"target select");
/* IO - VPL Terminal : { 72 192 77 197 }*/
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

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 68 95 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Is Tiger?");
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);

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

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 149 95 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 96 167 101 172 }*/
/* End Operation */

/* Begin Operation: { 78 59 95 105 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( 10 4 )");
/* IO - VPL Root : { 96 80 101 85 }*/
/* End Operation */

/* Begin Operation: { 120 87 137 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Is MacOS?");
/* IO - VPL Terminal : { 114 112 119 117 }*/
/* IO - VPL Terminal : { 114 139 119 144 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 96 137 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"new targ");
/* IO - VPL Terminal : { 114 130 119 135 }*/
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

/* Start Operations: { 557 693 }{ 225 316 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 100 95 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Target");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 119 101 124 }*/
/* IO - VPL Root : { 96 140 101 145 }*/
/* End Operation */

/* Begin Operation: { 120 181 137 259 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 114 218 119 223 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 52 137 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Change Target");
/* IO - VPL Terminal : { 114 86 119 91 }*/
/* IO - VPL Terminal : { 114 122 119 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 557 693 }{ 230 299 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 105 95 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"View");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 121 101 126 }*/
/* IO - VPL Root : { 96 139 101 144 }*/
/* End Operation */

/* Begin Operation: { 120 94 137 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Target Self");
/* IO - VPL Terminal : { 114 139 119 144 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
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

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
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

/* Begin Operation: { 78 35 94 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Port");
/* IO - VPL Terminal : { 73 70 78 75 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 79 130 95 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Up Drawing");
/* IO - VPL Terminal : { 74 182 79 187 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 112 47 128 97 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"View");
/* IO - VPL Terminal : { 107 70 112 75 }*/
/* IO - VPL Root : { 128 61 133 66 }*/
/* IO - VPL Root : { 128 77 133 82 }*/
/* End Operation */

/* Begin Operation: { 146 20 162 96 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 141 56 146 61 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 146 130 162 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Mouse Down");
/* IO - VPL Terminal : { 141 160 146 165 }*/
/* IO - VPL Terminal : { 141 191 146 196 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 180 20 188 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,4,1,6);
	result = connect_root_to_terminal(ptrA,2,0,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Key_20_Down_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Key_20_Down_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 97 49 102 }*/
/* IO - VPL Root : { 44 169 49 174 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 36 86 228 } */
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


Nat4 VPLU_VPLCEWindow_2F_Hilite_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Hilite_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 77 23 82 }*/
/* IO - VPL Root : { 18 148 23 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 20 60 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Hilite Window");
/* IO - VPL Terminal : { 39 47 44 52 }*/
/* IO - VPL Terminal : { 39 89 44 94 }*/
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

/* Start Operations: { 450 557 }{ 200 300 } */
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 82 23 87 }*/
/* IO - VPL Root : { 18 146 23 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 28 60 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get WindowRef");
/* IO - VPL Terminal : { 39 82 44 87 }*/
/* IO - VPL Root : { 60 82 65 87 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 20 94 47 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 73 31 78 36 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 78 86 94 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"HiliteWindow");
/* IO - VPL Terminal : { 73 115 78 120 }*/
/* IO - VPL Terminal : { 73 146 78 151 }*/
/* IO - VPL Root : { 94 131 99 136 }*/
/* End Operation */

/* Begin Operation: { 112 20 120 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 44 136 60 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Hilite View");
/* IO - VPL Terminal : { 39 158 44 163 }*/
/* IO - VPL Terminal : { 39 189 44 194 }*/
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
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 82 23 87 }*/
/* IO - VPL Root : { 18 146 23 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 59 60 109 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"View");
/* IO - VPL Terminal : { 39 82 44 87 }*/
/* IO - VPL Root : { 60 73 65 78 }*/
/* IO - VPL Root : { 60 89 65 94 }*/
/* End Operation */

/* Begin Operation: { 78 22 94 98 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 73 58 78 63 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 78 132 94 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Hilite");
/* IO - VPL Terminal : { 73 148 78 153 }*/
/* IO - VPL Terminal : { 73 170 78 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 112 20 120 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 78 20 86 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Get_20_Window_20_Origin_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Get_20_Window_20_Origin_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 374 335 }{ 148 273 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 97 69 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( 0 0 )");
/* IO - VPL Root : { 69 115 74 120 }*/
/* End Operation */

/* Begin Operation: { 93 20 101 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 88 115 93 120 }*/
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


Nat4 VPLU_VPLCEWindow_2F_Get_20_Window_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Get_20_Window_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 384 325 }{ 117 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 20 63 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 50 115 55 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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


Nat4 VPLU_VPLCEWindow_2F_Get_20_Application_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Get_20_Application_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 384 325 }{ 185 318 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 81 64 97 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Application");
/* IO - VPL Root : { 97 115 102 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 127 20 135 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 122 115 127 120 }*/
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


Nat4 VPLU_VPLCEWindow_2F_Close_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Close_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 320 293 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 43 179 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close Pasteboard Handler");
/* IO - VPL Terminal : { 156 130 161 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 63 137 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Clear and Exit Target");
/* IO - VPL Terminal : { 114 130 119 135 }*/
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

/* Start Operations: { 60 60 }{ 265 287 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 66 86 82 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Target");
/* IO - VPL Terminal : { 61 114 66 119 }*/
/* IO - VPL Root : { 82 104 87 109 }*/
/* IO - VPL Root : { 82 124 87 129 }*/
/* End Operation */

/* Begin Operation: { 108 25 124 101 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 103 61 108 66 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 111 151 127 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Clear Target");
/* IO - VPL Terminal : { 106 195 111 200 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 146 134 162 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 162 146 167 151 }*/
/* End Operation */

/* Begin Operation: { 191 110 207 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Exit");
/* IO - VPL Terminal : { 186 124 191 129 }*/
/* IO - VPL Terminal : { 186 146 191 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 228 22 236 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,1,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 78 36 95 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Close");
/* IO - VPL Terminal : { 72 69 77 74 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 78 150 95 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Close View");
/* IO - VPL Terminal : { 72 190 77 195 }*/
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
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 114 23 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 91 60 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"View");
/* IO - VPL Terminal : { 39 114 44 119 }*/
/* IO - VPL Root : { 60 105 65 110 }*/
/* IO - VPL Root : { 60 121 65 126 }*/
/* End Operation */

/* Begin Operation: { 78 28 94 104 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 73 64 78 69 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 78 143 94 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 73 170 78 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 112 20 120 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 204 52 221 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close Printing Handler");
/* IO - VPL Terminal : { 198 130 203 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Set_20_Up_20_Drawing_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Set_20_Up_20_Drawing_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 110 23 115 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 110 60 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 60 113 65 118 }*/
/* End Operation */

/* Begin Operation: { 78 79 94 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,0,"SetOrigin");
/* IO - VPL Terminal : { 73 101 78 106 }*/
/* IO - VPL Terminal : { 73 125 78 130 }*/
/* End Operation */

/* Begin Operation: { 112 21 120 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Setup_20_Drawing_20_CG_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Setup_20_Drawing_20_CG_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 236 106 }{ 454 602 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 104 221 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0.0");
/* IO - VPL Root : { 222 114 227 119 }*/
/* End Operation */

/* Begin Operation: { 120 46 137 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Size");
/* IO - VPL Terminal : { 114 83 119 88 }*/
/* IO - VPL Root : { 138 83 143 88 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 51 179 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 156 83 161 88 }*/
/* IO - VPL Root : { 180 71 185 76 }*/
/* IO - VPL Root : { 180 93 185 98 }*/
/* End Operation */

/* Begin Operation: { 246 60 263 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Translate CTM");
/* IO - VPL Terminal : { 240 86 245 91 }*/
/* IO - VPL Terminal : { 240 114 245 119 }*/
/* IO - VPL Terminal : { 240 142 245 147 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 174 137 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1.0");
/* IO - VPL Root : { 138 184 143 189 }*/
/* End Operation */

/* Begin Operation: { 120 214 137 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"-1.0");
/* IO - VPL Root : { 138 227 143 232 }*/
/* End Operation */

/* Begin Operation: { 162 142 179 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Scale CTM");
/* IO - VPL Terminal : { 156 162 161 167 }*/
/* IO - VPL Terminal : { 156 184 161 189 }*/
/* IO - VPL Terminal : { 156 206 161 211 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 288 36 296 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
	result = connect_root_to_terminal(ptrA,2,0,1,7);
	result = connect_root_to_terminal(ptrA,1,5,2,7);
	result = connect_root_to_terminal(ptrA,1,6,3,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 236 106 }{ 200 279 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 279 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 82 35 87 }*/
/* IO - VPL Root : { 30 157 35 162 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 28 80 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Up Drawing");
/* IO - VPL Terminal : { 59 82 64 87 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 45 122 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Sync CGContext Origin");
/* IO - VPL Terminal : { 101 82 106 87 }*/
/* IO - VPL Terminal : { 101 157 106 162 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
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



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Sync_20_CGContext_20_Origin_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Sync_20_CGContext_20_Origin_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 459 612 }{ 404 366 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 63 169 79 245 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Port");
/* IO - VPL Terminal : { 58 204 63 209 }*/
/* IO - VPL Root : { 79 205 84 210 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 218 122 320 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,3,"GetPortBounds");
/* IO - VPL Terminal : { 101 250 106 255 }*/
/* IO - VPL Terminal : { 101 284 106 289 }*/
/* IO - VPL Root : { 122 241 127 246 }*/
/* IO - VPL Root : { 122 266 127 271 }*/
/* IO - VPL Root : { 122 291 127 296 }*/
/* End Operation */

/* Begin Operation: { 148 256 164 330 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Rect Size");
/* IO - VPL Terminal : { 143 291 148 296 }*/
/* IO - VPL Root : { 164 291 169 296 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 278 206 308 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"v");
/* IO - VPL Terminal : { 185 291 190 296 }*/
/* IO - VPL Root : { 206 286 211 291 }*/
/* IO - VPL Root : { 206 296 211 301 }*/
/* End Operation */

/* Begin Operation: { 106 22 122 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Sync Origin With CGrafPort");
/* IO - VPL Terminal : { 101 66 106 71 }*/
/* IO - VPL Terminal : { 101 149 106 154 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 99 206 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0.0");
/* IO - VPL Root : { 206 107 211 112 }*/
/* End Operation */

/* Begin Operation: { 232 54 248 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Translate CTM");
/* IO - VPL Terminal : { 227 73 232 78 }*/
/* IO - VPL Terminal : { 227 107 232 112 }*/
/* IO - VPL Terminal : { 227 145 232 150 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 162 290 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1.0");
/* IO - VPL Root : { 290 170 295 175 }*/
/* End Operation */

/* Begin Operation: { 274 199 290 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"-1.0");
/* IO - VPL Root : { 290 210 295 215 }*/
/* End Operation */

/* Begin Operation: { 316 127 332 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Scale CTM");
/* IO - VPL Terminal : { 311 146 316 151 }*/
/* IO - VPL Terminal : { 311 170 316 175 }*/
/* IO - VPL Terminal : { 311 200 316 205 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 318 16 334 88 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Text Flip");
/* IO - VPL Terminal : { 313 49 318 54 }*/
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

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 121 628 }{ 364 302 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 7 94 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 73 65 78 70 }*/
/* IO - VPL Root : { 94 65 99 70 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 121 26 137 53 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 116 37 121 42 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 140 131 156 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1.0");
/* IO - VPL Root : { 156 139 161 144 }*/
/* End Operation */

/* Begin Operation: { 140 175 156 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0.0");
/* IO - VPL Root : { 156 183 161 188 }*/
/* End Operation */

/* Begin Operation: { 185 124 201 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"New Affine Transform");
/* IO - VPL Terminal : { 180 139 185 144 }*/
/* IO - VPL Terminal : { 180 159 185 164 }*/
/* IO - VPL Terminal : { 180 183 185 188 }*/
/* IO - VPL Terminal : { 180 207 185 212 }*/
/* IO - VPL Terminal : { 180 230 185 235 }*/
/* IO - VPL Terminal : { 180 255 185 260 }*/
/* IO - VPL Root : { 201 194 206 199 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 130 243 }{ 334 310 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 47 35 52 }*/
/* IO - VPL Root : { 30 74 35 79 }*/
/* IO - VPL Root : { 30 101 35 106 }*/
/* IO - VPL Root : { 30 128 35 133 }*/
/* IO - VPL Root : { 30 155 35 160 }*/
/* IO - VPL Root : { 30 182 35 187 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 25 80 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"CGAffineTransform");
/* IO - VPL Root : { 80 76 85 81 }*/
/* End Operation */

/* Begin Operation: { 106 100 122 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"24");
/* IO - VPL Root : { 122 106 127 111 }*/
/* End Operation */

/* Begin Operation: { 106 133 122 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 122 136 127 141 }*/
/* End Operation */

/* Begin Operation: { 148 48 164 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Create Block Type");
/* IO - VPL Terminal : { 143 76 148 81 }*/
/* IO - VPL Terminal : { 143 106 148 111 }*/
/* IO - VPL Terminal : { 143 136 148 141 }*/
/* IO - VPL Root : { 164 107 169 112 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 190 80 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,6,1,"pack");
/* IO - VPL Terminal : { 59 190 64 195 }*/
/* IO - VPL Terminal : { 59 198 64 203 }*/
/* IO - VPL Terminal : { 59 207 64 212 }*/
/* IO - VPL Terminal : { 59 217 64 222 }*/
/* IO - VPL Terminal : { 59 226 64 231 }*/
/* IO - VPL Terminal : { 59 234 64 239 }*/
/* IO - VPL Root : { 80 212 85 217 }*/
/* End Operation */

/* Begin Operation: { 190 162 206 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 206 165 211 170 }*/
/* End Operation */

/* Begin Operation: { 190 196 206 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 206 199 211 204 }*/
/* End Operation */

/* Begin Operation: { 232 162 248 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,2,"put-real");
/* IO - VPL Terminal : { 227 173 232 178 }*/
/* IO - VPL Terminal : { 227 186 232 191 }*/
/* IO - VPL Terminal : { 227 199 232 204 }*/
/* IO - VPL Terminal : { 227 212 232 217 }*/
/* IO - VPL Root : { 248 173 253 178 }*/
/* IO - VPL Root : { 248 186 253 191 }*/
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,4,iList);
/* End Operation */

/* Begin Operation: { 274 28 282 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 269 122 274 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,2,0,2,5);
	result = connect_root_to_terminal(ptrA,3,0,3,5);
	result = connect_root_to_terminal(ptrA,4,0,4,5);
	result = connect_root_to_terminal(ptrA,5,0,5,5);
	result = connect_root_to_terminal(ptrA,6,0,6,5);
	result = connect_root_to_terminal(ptrA,1,4,1,8);
	result = connect_root_to_terminal(ptrA,1,8,1,8);
	result = connect_root_to_terminal(ptrA,1,6,2,8);
	result = connect_root_to_terminal(ptrA,2,8,2,8);
	result = connect_root_to_terminal(ptrA,1,7,3,8);
	result = connect_root_to_terminal(ptrA,1,5,4,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 130 243 }{ 491 305 } */
/* Begin Operation: { 22 20 30 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 45 35 50 }*/
/* IO - VPL Root : { 30 72 35 77 }*/
/* IO - VPL Root : { 30 99 35 104 }*/
/* IO - VPL Root : { 30 126 35 131 }*/
/* IO - VPL Root : { 30 153 35 158 }*/
/* IO - VPL Root : { 30 180 35 185 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 25 80 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"CGAffineTransform");
/* IO - VPL Root : { 80 76 85 81 }*/
/* End Operation */

/* Begin Operation: { 106 100 122 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"24");
/* IO - VPL Root : { 122 106 127 111 }*/
/* End Operation */

/* Begin Operation: { 106 133 122 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 122 136 127 141 }*/
/* End Operation */

/* Begin Operation: { 148 48 164 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Create Block Type");
/* IO - VPL Terminal : { 143 76 148 81 }*/
/* IO - VPL Terminal : { 143 106 148 111 }*/
/* IO - VPL Terminal : { 143 136 148 141 }*/
/* IO - VPL Root : { 164 107 169 112 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 27 206 57 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"a");
/* IO - VPL Terminal : { 185 35 190 40 }*/
/* IO - VPL Terminal : { 185 45 190 50 }*/
/* IO - VPL Root : { 206 40 211 45 }*/
/* End Operation */

/* Begin Operation: { 232 54 248 84 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"b");
/* IO - VPL Terminal : { 227 62 232 67 }*/
/* IO - VPL Terminal : { 227 72 232 77 }*/
/* IO - VPL Root : { 248 67 253 72 }*/
/* End Operation */

/* Begin Operation: { 274 81 290 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"c");
/* IO - VPL Terminal : { 269 89 274 94 }*/
/* IO - VPL Terminal : { 269 99 274 104 }*/
/* IO - VPL Root : { 290 94 295 99 }*/
/* End Operation */

/* Begin Operation: { 274 127 290 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"d");
/* IO - VPL Terminal : { 269 135 274 140 }*/
/* IO - VPL Terminal : { 269 145 274 150 }*/
/* IO - VPL Root : { 290 140 295 145 }*/
/* End Operation */

/* Begin Operation: { 316 131 332 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"tx");
/* IO - VPL Terminal : { 311 141 316 146 }*/
/* IO - VPL Terminal : { 311 153 316 158 }*/
/* IO - VPL Root : { 332 147 337 152 }*/
/* End Operation */

/* Begin Operation: { 358 158 374 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"ty");
/* IO - VPL Terminal : { 353 168 358 173 }*/
/* IO - VPL Terminal : { 353 180 358 185 }*/
/* IO - VPL Root : { 374 174 379 179 }*/
/* End Operation */

/* Begin Operation: { 400 28 408 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 395 122 400 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,0,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,2,0,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,3,0,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,4,0,2,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,5,0,2,9);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
	result = connect_root_to_terminal(ptrA,6,0,2,10);
	result = connect_root_to_terminal(ptrA,1,4,1,11);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 236 65 252 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"CGContextSetTextMatrix");
/* IO - VPL Terminal : { 231 115 236 120 }*/
/* IO - VPL Terminal : { 231 167 236 172 }*/
/* IO - VPL Root : { 252 142 257 147 }*/
/* End Operation */

/* Begin Operation: { 298 22 306 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,4,3,5);
	result = connect_root_to_terminal(ptrA,1,3,4,5);
	result = connect_root_to_terminal(ptrA,1,4,5,5);
	result = connect_root_to_terminal(ptrA,1,4,6,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 358 22 366 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,3,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,1,5);
	result = connect_root_to_terminal(ptrA,1,1,2,5);
	result = connect_root_to_terminal(ptrA,2,0,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,2,4,3,7);
	result = connect_root_to_terminal(ptrA,2,0,1,10);
	result = connect_root_to_terminal(ptrA,1,8,2,10);
	result = connect_root_to_terminal(ptrA,1,9,3,10);
	result = connect_root_to_terminal(ptrA,2,0,1,11);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 459 612 }{ 404 366 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 358 22 366 214 } */
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


Nat4 VPLU_VPLCEWindow_2F_Click_20_Content_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Click_20_Content_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 275 740 }{ 301 300 } */
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 82 23 87 }*/
/* IO - VPL Root : { 18 146 23 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 83 60 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"VPLEvent");
/* IO - VPL Terminal : { 39 118 44 123 }*/
/* IO - VPL Root : { 60 118 65 123 }*/
/* End Operation */

/* Begin Operation: { 78 30 94 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Convert Mouse EventRef");
/* IO - VPL Terminal : { 73 70 78 75 }*/
/* IO - VPL Terminal : { 73 146 78 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 112 55 128 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Mouse Down");
/* IO - VPL Terminal : { 107 82 112 87 }*/
/* IO - VPL Terminal : { 107 118 112 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 146 103 162 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"noErr");
/* IO - VPL Root : { 162 118 167 123 }*/
/* End Operation */

/* Begin Operation: { 180 24 188 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 175 118 180 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
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
/* IO - VPL Root : { 28 74 33 79 }*/
/* IO - VPL Root : { 28 160 33 165 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 63 31 79 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Return Event Not Handled");
/* IO - VPL Terminal : { 58 114 63 119 }*/
/* IO - VPL Root : { 79 115 84 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 111 20 119 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 106 115 111 120 }*/
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


Nat4 VPLU_VPLCEWindow_2F_CE_20_Handle_20_Event_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_CE_20_Handle_20_Event_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 245 250 }{ 242 377 } */
/* Begin Operation: { 20 53 28 245 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 75 33 80 }*/
/* IO - VPL Root : { 28 179 33 184 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 66 25 82 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Event Class");
/* IO - VPL Terminal : { 61 80 66 85 }*/
/* IO - VPL Root : { 82 80 87 85 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 102 23 118 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kEventClassKeyboard");
/* IO - VPL Terminal : { 97 80 102 85 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 65 204 81 311 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Event Kind");
/* IO - VPL Terminal : { 60 255 65 260 }*/
/* IO - VPL Root : { 81 255 86 260 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 158 69 174 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/CE Keyboard Event");
/* IO - VPL Terminal : { 153 99 158 104 }*/
/* IO - VPL Terminal : { 153 131 158 136 }*/
/* IO - VPL Terminal : { 153 163 158 168 }*/
/* IO - VPL Root : { 174 132 179 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 198 38 206 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 193 132 198 137 }*/
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

/* Start Operations: { 245 250 }{ 242 377 } */
/* Begin Operation: { 20 53 28 245 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 75 33 80 }*/
/* IO - VPL Root : { 28 179 33 184 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 66 25 82 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Event Class");
/* IO - VPL Terminal : { 61 80 66 85 }*/
/* IO - VPL Root : { 82 80 87 85 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 102 31 118 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kEventClassMouse");
/* IO - VPL Terminal : { 97 80 102 85 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 65 204 81 311 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Event Kind");
/* IO - VPL Terminal : { 60 255 65 260 }*/
/* IO - VPL Root : { 81 255 86 260 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 158 77 174 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/CE Mouse Event");
/* IO - VPL Terminal : { 153 103 158 108 }*/
/* IO - VPL Terminal : { 153 131 158 136 }*/
/* IO - VPL Terminal : { 153 159 158 164 }*/
/* IO - VPL Root : { 174 132 179 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 198 38 206 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 193 132 198 137 }*/
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

/* Start Operations: { 245 250 }{ 247 310 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 76 33 81 }*/
/* IO - VPL Root : { 28 147 33 152 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 53 75 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//CE Handle Event");
/* IO - VPL Terminal : { 54 88 59 93 }*/
/* IO - VPL Terminal : { 54 139 59 144 }*/
/* IO - VPL Root : { 75 111 80 116 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 106 20 114 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 101 111 106 116 }*/
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


Nat4 VPLU_VPLCEWindow_2F_CE_20_Mouse_20_Event_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_CE_20_Mouse_20_Event_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 111 221 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 65 33 70 }*/
/* IO - VPL Root : { 28 116 33 121 }*/
/* IO - VPL Root : { 28 176 33 181 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 68 68 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kEventMouseDown");
/* IO - VPL Terminal : { 47 116 52 121 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 99 65 115 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Click Content");
/* IO - VPL Terminal : { 94 96 99 101 }*/
/* IO - VPL Terminal : { 94 140 99 145 }*/
/* IO - VPL Root : { 115 115 120 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 146 18 154 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 141 115 146 120 }*/
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

/* Start Operations: { 273 287 }{ 200 300 } */
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

/* Begin Operation: { 60 63 76 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kEventMouseMoved");
/* IO - VPL Terminal : { 55 114 60 119 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 101 58 117 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/CE Mouse Moved");
/* IO - VPL Terminal : { 96 94 101 99 }*/
/* IO - VPL Terminal : { 96 142 101 147 }*/
/* IO - VPL Root : { 117 116 122 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 146 22 154 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 141 116 146 121 }*/
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

/* Start Operations: { 273 287 }{ 200 300 } */
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

/* Begin Operation: { 60 48 76 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kEventMouseWheelMoved");
/* IO - VPL Terminal : { 55 114 60 119 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 101 42 117 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/CE Mouse Wheel Moved");
/* IO - VPL Terminal : { 96 90 101 95 }*/
/* IO - VPL Terminal : { 96 140 101 145 }*/
/* IO - VPL Root : { 117 116 122 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 146 22 154 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 141 116 146 121 }*/
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

/* Begin Operation: { 73 32 89 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Return Event Not Handled");
/* IO - VPL Terminal : { 68 116 73 121 }*/
/* IO - VPL Root : { 89 115 94 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 117 21 125 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 112 115 117 120 }*/
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


Nat4 VPLU_VPLCEWindow_2F_CE_20_Mouse_20_Moved_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_CE_20_Mouse_20_Moved_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 69 32 85 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Return Event Not Handled");
/* IO - VPL Terminal : { 64 111 69 116 }*/
/* IO - VPL Root : { 85 111 90 116 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 122 20 130 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 117 111 122 116 }*/
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


Nat4 VPLU_VPLCEWindow_2F_CE_20_Mouse_20_Wheel_20_Moved_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_CE_20_Mouse_20_Wheel_20_Moved_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 37 80 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Return Event Not Handled");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 22 114 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 101 116 106 121 }*/
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


Nat4 VPLU_VPLCEWindow_2F_CE_20_Keyboard_20_Event_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_CE_20_Keyboard_20_Event_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 303 318 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 64 35 69 }*/
/* IO - VPL Root : { 30 120 35 125 }*/
/* IO - VPL Root : { 30 181 35 186 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 34 80 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kEventRawKeyModifiersChanged");
/* IO - VPL Terminal : { 59 120 64 125 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 27 122 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/CE Raw Key Modifiers Changed");
/* IO - VPL Terminal : { 101 64 106 69 }*/
/* IO - VPL Terminal : { 101 181 106 186 }*/
/* IO - VPL Root : { 122 119 127 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 119 148 124 }*/
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
/* IO - VPL Root : { 28 116 33 121 }*/
/* IO - VPL Root : { 28 175 33 180 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 64 71 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kEventRawKeyDown");
/* IO - VPL Terminal : { 50 116 55 121 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 100 57 116 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/CE Raw Key Down");
/* IO - VPL Terminal : { 95 96 100 101 }*/
/* IO - VPL Terminal : { 95 137 100 142 }*/
/* IO - VPL Root : { 116 117 121 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 159 21 167 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 154 117 159 122 }*/
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
/* IO - VPL Root : { 28 116 33 121 }*/
/* IO - VPL Root : { 28 175 33 180 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 60 71 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kEventRawKeyRepeat");
/* IO - VPL Terminal : { 50 116 55 121 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 100 53 116 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/CE Raw Key Repeat");
/* IO - VPL Terminal : { 95 95 100 100 }*/
/* IO - VPL Terminal : { 95 139 100 144 }*/
/* IO - VPL Root : { 116 117 121 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 159 21 167 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 154 117 159 122 }*/
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

/* Begin Operation: { 77 35 93 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Return Event Not Handled");
/* IO - VPL Terminal : { 72 115 77 120 }*/
/* IO - VPL Root : { 93 114 98 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 128 20 136 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 123 114 128 119 }*/
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


Nat4 VPLU_VPLCEWindow_2F_CE_20_Raw_20_Key_20_Down_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_CE_20_Raw_20_Key_20_Down_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 280 405 }{ 319 307 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 78 35 83 }*/
/* IO - VPL Root : { 30 153 35 158 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 145 38 161 123 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"get target?");
/* IO - VPL Terminal : { 140 78 145 83 }*/
/* IO - VPL Root : { 161 78 166 83 }*/
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
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 88 80 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Target");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 106 85 111 }*/
/* IO - VPL Root : { 80 126 85 131 }*/
/* End Operation */

/* Begin Operation: { 106 128 122 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 101 164 106 169 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 24 156 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 118 148 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
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

/* Begin Operation: { 63 91 79 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"View");
/* IO - VPL Terminal : { 58 114 63 119 }*/
/* IO - VPL Root : { 79 105 84 110 }*/
/* IO - VPL Root : { 79 121 84 126 }*/
/* End Operation */

/* Begin Operation: { 128 23 136 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 123 117 128 122 }*/
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 22 206 98 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 185 58 190 63 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 64 69 80 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"VPLEvent");
/* IO - VPL Terminal : { 59 104 64 109 }*/
/* IO - VPL Root : { 80 104 85 109 }*/
/* End Operation */

/* Begin Operation: { 106 55 122 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Convert Key EventRef");
/* IO - VPL Terminal : { 101 104 106 109 }*/
/* IO - VPL Terminal : { 101 153 106 158 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 190 151 206 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Key Down");
/* IO - VPL Terminal : { 185 176 190 181 }*/
/* IO - VPL Terminal : { 185 203 190 208 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 232 102 248 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"noErr");
/* IO - VPL Root : { 248 117 253 122 }*/
/* End Operation */

/* Begin Operation: { 274 25 282 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 269 117 274 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,3,2,5);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_CE_20_Raw_20_Key_20_Repeat_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_CE_20_Raw_20_Key_20_Repeat_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 155 33 160 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 79 59 95 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/CE Raw Key Down");
/* IO - VPL Terminal : { 74 98 79 103 }*/
/* IO - VPL Terminal : { 74 139 79 144 }*/
/* IO - VPL Root : { 95 119 100 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 148 23 156 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 119 148 124 }*/
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


Nat4 VPLU_VPLCEWindow_2F_CE_20_Raw_20_Key_20_Modifiers_20_Changed_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_CE_20_Raw_20_Key_20_Modifiers_20_Changed_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 165 7 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 69 34 85 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Return Event Not Handled");
/* IO - VPL Terminal : { 64 114 69 119 }*/
/* IO - VPL Root : { 85 114 90 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 115 20 123 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 110 114 115 119 }*/
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


Nat4 VPLU_VPLCEWindow_2F_Adjust_20_Frame_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Adjust_20_Frame_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 506 633 }{ 197 312 } */
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 74 23 79 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 53 60 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window Bounds");
/* IO - VPL Terminal : { 39 90 44 95 }*/
/* IO - VPL Terminal : { 39 148 44 153 }*/
/* IO - VPL Root : { 60 115 65 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 79 181 95 247 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Target?");
/* IO - VPL Terminal : { 74 209 79 214 }*/
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

/* Start Operations: { 60 60 }{ 261 289 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 118 95 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"View");
/* IO - VPL Terminal : { 72 143 77 148 }*/
/* IO - VPL Root : { 96 134 101 139 }*/
/* IO - VPL Root : { 96 152 101 157 }*/
/* End Operation */

/* Begin Operation: { 120 194 137 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 114 210 119 215 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 120 110 137 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"\xE2\x88\x86 target");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Terminal : { 114 152 119 157 }*/
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

/* Start Operations: { 173 208 }{ 255 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 36 95 100 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Target");
/* IO - VPL Terminal : { 72 66 77 71 }*/
/* IO - VPL Root : { 96 55 101 60 }*/
/* IO - VPL Root : { 96 76 101 81 }*/
/* End Operation */

/* Begin Operation: { 120 47 137 91 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 114 59 119 64 }*/
/* IO - VPL Terminal : { 114 73 119 78 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 162 74 179 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 156 90 161 95 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 187 95 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 96 203 101 208 }*/
/* End Operation */

/* Begin Operation: { 120 124 137 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Target");
/* IO - VPL Terminal : { 114 144 119 149 }*/
/* IO - VPL Terminal : { 114 166 119 171 }*/
/* IO - VPL Terminal : { 114 188 119 193 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,2,0,2,5);
	result = connect_root_to_terminal(ptrA,1,4,3,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 173 208 }{ 264 437 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 82 251 99 333 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Case Window");
/* IO - VPL Root : { 100 290 105 295 }*/
/* End Operation */

/* Begin Operation: { 124 198 141 340 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Is Or Is Descendant?");
/* IO - VPL Terminal : { 118 243 123 248 }*/
/* IO - VPL Terminal : { 118 290 123 295 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 68 95 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Target");
/* IO - VPL Terminal : { 72 98 77 103 }*/
/* IO - VPL Root : { 96 87 101 92 }*/
/* IO - VPL Root : { 96 108 101 113 }*/
/* End Operation */

/* Begin Operation: { 120 86 137 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Redraw");
/* IO - VPL Terminal : { 114 108 119 113 }*/
/* IO - VPL Terminal : { 114 132 119 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 173 208 }{ 216 278 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 117 95 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Target Self");
/* IO - VPL Terminal : { 72 162 77 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 62 137 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Refresh");
/* IO - VPL Terminal : { 114 98 119 103 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 37 170 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 96 179 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"/Refresh");
/* IO - VPL Terminal : { 156 130 161 135 }*/
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

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
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

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,1,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 78 46 94 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Change Frame");
/* IO - VPL Terminal : { 73 74 78 79 }*/
/* IO - VPL Terminal : { 73 115 78 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 159 20 167 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 20 68 212 } */
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


Nat4 VPLU_VPLCEWindow_2F_Activate_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Activate_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 560 732 }{ 194 385 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 71 33 76 }*/
/* IO - VPL Root : { 28 147 33 152 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 125 217 142 337 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Up Drawing");
/* IO - VPL Terminal : { 119 275 124 280 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 68 164 84 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Hilite");
/* IO - VPL Terminal : { 63 180 68 185 }*/
/* IO - VPL Terminal : { 63 204 68 209 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 30 86 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Activate Target");
/* IO - VPL Terminal : { 65 58 70 63 }*/
/* IO - VPL Terminal : { 65 108 70 113 }*/
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

/* Start Operations: { 60 60 }{ 214 290 } */
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 82 23 87 }*/
/* IO - VPL Root : { 18 146 23 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 54 60 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Target");
/* IO - VPL Terminal : { 39 82 44 87 }*/
/* IO - VPL Root : { 60 72 65 77 }*/
/* IO - VPL Root : { 60 92 65 97 }*/
/* End Operation */

/* Begin Operation: { 78 37 94 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 73 73 78 78 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 78 154 94 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Activate");
/* IO - VPL Terminal : { 73 174 78 179 }*/
/* IO - VPL Terminal : { 73 203 78 208 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 123 84 139 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"change target");
/* IO - VPL Terminal : { 118 114 123 119 }*/
/* IO - VPL Terminal : { 118 146 123 151 }*/
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
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 158 95 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 72 174 77 179 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 58 95 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Set Target");
/* IO - VPL Terminal : { 72 98 77 103 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 125 73 }{ 180 299 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 53 95 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Target Self");
/* IO - VPL Terminal : { 72 98 77 103 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 24 170 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 161 24 169 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Activated_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Activated_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 47 132 63 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 63 144 68 149 }*/
/* End Operation */

/* Begin Operation: { 92 90 108 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Activate");
/* IO - VPL Terminal : { 87 113 92 118 }*/
/* IO - VPL Terminal : { 87 144 92 149 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 136 21 144 213 } */
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


Nat4 VPLU_VPLCEWindow_2F_Deactivated_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Deactivated_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 393 381 }{ 202 367 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 113 33 118 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 47 129 63 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 63 144 68 149 }*/
/* End Operation */

/* Begin Operation: { 92 90 108 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Activate");
/* IO - VPL Terminal : { 87 113 92 118 }*/
/* IO - VPL Terminal : { 87 144 92 149 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 97 211 114 287 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Refresh");
/* IO - VPL Terminal : { 91 247 96 252 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_value_to(tempOperation,environment,kSkip);
/* End Operation */

/* Begin Operation: { 136 21 144 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Set_20_Title_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Set_20_Title_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 71 23 76 }*/
/* IO - VPL Root : { 18 161 23 166 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 131 60 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Set Title");
/* IO - VPL Terminal : { 39 150 44 155 }*/
/* IO - VPL Terminal : { 39 192 44 197 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 44 57 60 107 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Title");
/* IO - VPL Terminal : { 39 71 44 76 }*/
/* IO - VPL Terminal : { 39 87 44 92 }*/
/* IO - VPL Root : { 60 80 65 85 }*/
/* End Operation */

/* Begin Operation: { 78 21 86 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Begin_20_CGContext_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Begin_20_CGContext_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 279 314 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 115 35 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 79 80 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Port");
/* IO - VPL Terminal : { 59 115 64 120 }*/
/* IO - VPL Root : { 80 115 85 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 17 122 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"CG Context/Begin For CGrafPort");
/* IO - VPL Terminal : { 101 115 106 120 }*/
/* IO - VPL Root : { 122 67 127 72 }*/
/* IO - VPL Root : { 122 157 127 162 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 52 164 86 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 143 67 148 72 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 190 75 206 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Setup Drawing CG");
/* IO - VPL Terminal : { 185 115 190 120 }*/
/* IO - VPL Terminal : { 185 157 190 162 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 29 240 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 123 232 128 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,2,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_End_20_CGContext_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_End_20_CGContext_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 201 284 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 75 35 80 }*/
/* IO - VPL Root : { 30 158 35 163 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 119 80 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Port");
/* IO - VPL Terminal : { 59 155 64 160 }*/
/* IO - VPL Root : { 80 155 85 160 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 59 122 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/End For CGrafPort");
/* IO - VPL Terminal : { 101 89 106 94 }*/
/* IO - VPL Terminal : { 101 155 106 160 }*/
/* IO - VPL Root : { 122 120 127 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 26 156 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Get_20_Size_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Get_20_Size_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 333 349 }{ 251 277 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 77 60 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 39 115 44 120 }*/
/* IO - VPL Root : { 60 107 65 112 }*/
/* IO - VPL Root : { 60 123 65 128 }*/
/* End Operation */

/* Begin Operation: { 78 83 94 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,4,"unpack");
/* IO - VPL Terminal : { 73 123 78 128 }*/
/* IO - VPL Root : { 94 99 99 104 }*/
/* IO - VPL Root : { 94 117 99 122 }*/
/* IO - VPL Root : { 94 139 99 144 }*/
/* IO - VPL Root : { 94 156 99 161 }*/
/* End Operation */

/* Begin Operation: { 120 131 136 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"iminus");
/* IO - VPL Terminal : { 115 156 120 161 }*/
/* IO - VPL Terminal : { 115 183 120 188 }*/
/* IO - VPL Root : { 136 170 141 175 }*/
/* End Operation */

/* Begin Operation: { 121 47 137 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"iminus");
/* IO - VPL Terminal : { 116 72 121 77 }*/
/* IO - VPL Terminal : { 116 99 121 104 }*/
/* IO - VPL Root : { 137 86 142 91 }*/
/* End Operation */

/* Begin Operation: { 159 81 175 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 154 100 159 105 }*/
/* IO - VPL Terminal : { 154 128 159 133 }*/
/* IO - VPL Root : { 175 115 180 120 }*/
/* End Operation */

/* Begin Operation: { 195 20 203 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 190 115 195 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,4,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,2,3);
	result = connect_root_to_terminal(ptrA,3,2,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,3,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_CE_20_Window_20_Drag_20_Completed_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_CE_20_Window_20_Drag_20_Completed_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 74 35 79 }*/
/* IO - VPL Root : { 30 157 35 162 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 99 122 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"noErr");
/* IO - VPL Root : { 122 114 127 119 }*/
/* End Operation */

/* Begin Operation: { 64 25 80 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Adjust Frame");
/* IO - VPL Terminal : { 59 74 64 79 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 23 156 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 114 148 119 }*/
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


Nat4 VPLU_VPLCEWindow_2F_CE_20_Window_20_Resize_20_Completed_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_CE_20_Window_20_Resize_20_Completed_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 74 35 79 }*/
/* IO - VPL Root : { 30 157 35 162 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 99 122 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"noErr");
/* IO - VPL Root : { 122 114 127 119 }*/
/* End Operation */

/* Begin Operation: { 64 25 80 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Adjust Frame");
/* IO - VPL Terminal : { 59 74 64 79 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 23 156 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 114 148 119 }*/
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


Nat4 VPLU_VPLCEWindow_2F_Resized_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Resized_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 118 35 123 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 68 80 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Adjust Frame");
/* IO - VPL Terminal : { 59 118 64 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 22 114 214 } */
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


Nat4 VPLU_VPLCEWindow_2F_Show_20_Drag_20_Hilite_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Show_20_Drag_20_Hilite_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 117 162 }{ 265 394 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 129 50 134 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 41 95 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Port");
/* IO - VPL Terminal : { 72 77 77 82 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 139 95 259 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Up Drawing");
/* IO - VPL Terminal : { 72 197 77 202 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 234 137 334 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"GetForeColor");
/* IO - VPL Terminal : { 114 282 119 287 }*/
/* IO - VPL Root : { 138 282 143 287 }*/
/* End Operation */

/* Begin Operation: { 120 69 137 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Make Content Rgn");
/* IO - VPL Terminal : { 114 129 119 134 }*/
/* IO - VPL Root : { 138 108 143 113 }*/
/* IO - VPL Root : { 138 149 143 154 }*/
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

/* Start Operations: { 148 47 }{ 313 323 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 82 179 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,0,1,"NewRgn");
/* IO - VPL Root : { 180 116 185 121 }*/
/* End Operation */

/* Begin Operation: { 78 73 95 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get WindowRef");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 106 137 260 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,3,"GetWindowPortBounds");
/* IO - VPL Terminal : { 114 155 119 160 }*/
/* IO - VPL Terminal : { 114 206 119 211 }*/
/* IO - VPL Root : { 138 142 143 147 }*/
/* IO - VPL Root : { 138 180 143 185 }*/
/* IO - VPL Root : { 138 218 143 223 }*/
/* End Operation */

/* Begin Operation: { 204 96 221 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"RectRgn");
/* IO - VPL Terminal : { 198 116 203 121 }*/
/* IO - VPL Terminal : { 198 142 203 147 }*/
/* IO - VPL Root : { 222 130 227 135 }*/
/* End Operation */

/* Begin Operation: { 167 185 184 319 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,3,"GetDragHiliteColor");
/* IO - VPL Terminal : { 161 227 166 232 }*/
/* IO - VPL Terminal : { 161 271 166 276 }*/
/* IO - VPL Root : { 185 216 190 221 }*/
/* IO - VPL Root : { 185 249 190 254 }*/
/* IO - VPL Root : { 185 282 190 287 }*/
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 240 130 245 135 }*/
/* IO - VPL Terminal : { 240 195 245 200 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,3,5,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 170 179 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"draw it");
/* IO - VPL Terminal : { 156 188 161 193 }*/
/* IO - VPL Terminal : { 156 208 161 213 }*/
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

/* Start Operations: { 60 60 }{ 261 305 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 112 95 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,0,"RGBForeColor");
/* IO - VPL Terminal : { 72 162 77 167 }*/
/* End Operation */

/* Begin Operation: { 120 171 137 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"2");
/* IO - VPL Root : { 138 181 143 186 }*/
/* End Operation */

/* Begin Operation: { 162 137 179 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,0,"PenSize");
/* IO - VPL Terminal : { 156 158 161 163 }*/
/* IO - VPL Terminal : { 156 181 161 186 }*/
/* End Operation */

/* Begin Operation: { 120 59 137 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"FrameRgn");
/* IO - VPL Terminal : { 114 98 119 103 }*/
/* IO - VPL Root : { 138 98 143 103 }*/
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 49 179 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"DisposeRgn");
/* IO - VPL Terminal : { 156 94 161 99 }*/
/* IO - VPL Root : { 180 94 185 99 }*/
/* End Operation */

/* Begin Operation: { 162 252 179 316 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"restore");
/* IO - VPL Terminal : { 156 282 161 287 }*/
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

/* Start Operations: { 60 60 }{ 263 273 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 80 95 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,0,"RGBForeColor");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* End Operation */

/* Begin Operation: { 120 102 137 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 138 112 143 117 }*/
/* End Operation */

/* Begin Operation: { 162 91 179 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,0,"PenSize");
/* IO - VPL Terminal : { 156 112 161 117 }*/
/* IO - VPL Terminal : { 156 135 161 140 }*/
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 204 48 212 240 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,4,2,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,3,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [3 to 2] */
/* Synchro [5 to 3] */
/* Synchro [6 to 5] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Hide_20_Drag_20_Hilite_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Hide_20_Drag_20_Hilite_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 38 95 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Refresh");
/* IO - VPL Terminal : { 72 74 77 79 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 143 95 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"/Update Now");
/* IO - VPL Terminal : { 72 189 77 194 }*/
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

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
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

/* Begin Operation: { 120 36 128 228 } */
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


Nat4 VPLU_VPLCEWindow_2F_Close_20_Pasteboard_20_Handler_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Close_20_Pasteboard_20_Handler_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 25 95 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window Pasteboard Handler");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 39 137 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 114 76 119 81 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 120 161 137 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 114 191 119 196 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
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



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Open_20_Pasteboard_20_Handler_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Open_20_Pasteboard_20_Handler_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 212 391 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 25 95 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window Pasteboard Handler");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 39 137 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 114 76 119 81 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 79 267 96 351 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"main view?");
/* IO - VPL Terminal : { 73 307 78 312 }*/
/* IO - VPL Root : { 97 307 102 312 }*/
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

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 105 95 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"View");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 121 101 126 }*/
/* IO - VPL Root : { 96 139 101 144 }*/
/* End Operation */

/* Begin Operation: { 120 124 137 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 114 161 119 166 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
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
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 36 86 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 72 130 77 135 }*/
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

/* Begin Operation: { 120 159 137 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 114 177 119 182 }*/
/* IO - VPL Terminal : { 114 197 119 202 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Accept_20_Flavors_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Accept_20_Flavors_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 392 352 }{ 165 311 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 82 50 87 }*/
/* IO - VPL Root : { 45 130 50 135 }*/
/* IO - VPL Root : { 45 178 50 183 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 36 86 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 392 352 }{ 428 394 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 82 50 87 }*/
/* IO - VPL Root : { 45 130 50 135 }*/
/* IO - VPL Root : { 45 178 50 183 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 226 95 308 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"show each");
/* IO - VPL Terminal : { 72 265 77 270 }*/
/* IO - VPL Root : { 96 265 101 270 }*/
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

/* Start Operations: { 313 256 }{ 276 301 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 84 95 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Flavors");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 87 137 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"show values");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Root : { 138 130 143 135 }*/
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

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 60 95 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Extracted Value");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 154 137 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 114 185 119 190 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 99 179 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 156 130 161 135 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Begin Operation: { 204 40 212 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 130 203 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 271 137 337 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 114 302 119 307 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 120 106 137 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"get frame");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Terminal : { 114 156 119 161 }*/
/* IO - VPL Root : { 138 130 143 135 }*/
/* IO - VPL Root : { 138 156 143 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);

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

/* Start Operations: { 364 633 }{ 247 335 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 70 95 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Drag Mouse");
/* IO - VPL Terminal : { 72 129 77 134 }*/
/* IO - VPL Root : { 96 108 101 113 }*/
/* IO - VPL Root : { 96 148 101 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 120 57 137 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"GlobalToLocal");
/* IO - VPL Terminal : { 114 108 119 113 }*/
/* IO - VPL Root : { 138 108 143 113 }*/
/* End Operation */

/* Begin Operation: { 162 61 179 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"Point-to-list");
/* IO - VPL Terminal : { 156 108 161 113 }*/
/* IO - VPL Root : { 180 108 185 113 }*/
/* End Operation */

/* Begin Operation: { 204 39 212 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 133 203 138 }*/
/* IO - VPL Terminal : { 198 170 203 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 364 633 }{ 383 470 } */
/* Begin Operation: { 36 39 44 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 101 50 106 }*/
/* IO - VPL Root : { 45 165 50 170 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 39 95 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Drag Mouse");
/* IO - VPL Terminal : { 72 98 77 103 }*/
/* IO - VPL Root : { 96 77 101 82 }*/
/* IO - VPL Root : { 96 117 101 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 120 94 137 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Convert Point");
/* IO - VPL Terminal : { 114 124 119 129 }*/
/* IO - VPL Terminal : { 114 156 119 161 }*/
/* IO - VPL Root : { 138 141 143 146 }*/
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

/* Start Operations: { 143 981 }{ 333 292 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 65 95 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Localize");
/* IO - VPL Terminal : { 72 98 77 103 }*/
/* IO - VPL Root : { 96 86 101 91 }*/
/* IO - VPL Root : { 96 109 101 114 }*/
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

/* Start Operations: { 60 60 }{ 277 299 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 79 95 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"GlobalToLocal");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
/* End Operation */

/* Begin Operation: { 120 83 137 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"Point-to-list");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Root : { 138 130 143 135 }*/
/* End Operation */

/* Begin Operation: { 162 98 179 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 156 130 161 135 }*/
/* IO - VPL Root : { 180 118 185 123 }*/
/* IO - VPL Root : { 180 140 185 145 }*/
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 98 203 103 }*/
/* IO - VPL Terminal : { 198 162 203 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 78 170 95 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"16");
/* IO - VPL Root : { 96 180 101 185 }*/
/* End Operation */

/* Begin Operation: { 120 146 137 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Width");
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 180 119 185 }*/
/* IO - VPL Root : { 138 162 143 167 }*/
/* IO - VPL Root : { 138 180 143 185 }*/
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

/* Start Operations: { 420 169 }{ 254 270 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 47 95 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Measure String");
/* IO - VPL Terminal : { 72 98 77 103 }*/
/* IO - VPL Root : { 96 98 101 103 }*/
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

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
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
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 117 134 134 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"h");
/* IO - VPL Terminal : { 111 154 116 159 }*/
/* IO - VPL Root : { 135 146 140 151 }*/
/* IO - VPL Root : { 135 160 140 165 }*/
/* End Operation */

/* Begin Operation: { 118 195 135 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"2");
/* IO - VPL Root : { 136 205 141 210 }*/
/* End Operation */

/* Begin Operation: { 159 148 176 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 153 160 158 165 }*/
/* IO - VPL Terminal : { 153 174 158 179 }*/
/* IO - VPL Root : { 177 168 182 173 }*/
/* End Operation */

/* Begin Operation: { 114 48 131 92 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"v");
/* IO - VPL Terminal : { 108 68 113 73 }*/
/* IO - VPL Root : { 132 60 137 65 }*/
/* IO - VPL Root : { 132 74 137 79 }*/
/* End Operation */

/* Begin Operation: { 156 62 173 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 150 74 155 79 }*/
/* IO - VPL Terminal : { 150 88 155 93 }*/
/* IO - VPL Root : { 174 82 179 87 }*/
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 95 203 100 }*/
/* IO - VPL Terminal : { 198 130 203 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,2,5,1,6);
	result = connect_root_to_terminal(ptrA,1,3,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,4,2,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 420 169 }{ 181 278 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 150 95 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"256");
/* IO - VPL Root : { 96 162 101 167 }*/
/* End Operation */

/* Begin Operation: { 78 87 95 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"16");
/* IO - VPL Root : { 96 97 101 102 }*/
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 97 119 102 }*/
/* IO - VPL Terminal : { 114 162 119 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 146 179 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 156 158 161 163 }*/
/* IO - VPL Terminal : { 156 172 161 177 }*/
/* IO - VPL Root : { 180 166 185 171 }*/
/* End Operation */

/* Begin Operation: { 162 86 179 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 156 98 161 103 }*/
/* IO - VPL Terminal : { 156 112 161 117 }*/
/* IO - VPL Root : { 180 106 185 111 }*/
/* End Operation */

/* Begin Operation: { 204 78 221 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"pack");
/* IO - VPL Terminal : { 198 86 203 91 }*/
/* IO - VPL Terminal : { 198 96 203 101 }*/
/* IO - VPL Terminal : { 198 106 203 111 }*/
/* IO - VPL Terminal : { 198 116 203 121 }*/
/* IO - VPL Root : { 222 102 227 107 }*/
/* End Operation */

/* Begin Operation: { 246 57 263 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"list-to-Rect");
/* IO - VPL Terminal : { 240 102 245 107 }*/
/* IO - VPL Root : { 264 102 269 107 }*/
/* End Operation */

/* Begin Operation: { 288 36 296 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 282 130 287 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,3,2,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,2,1,2,6);
	result = connect_root_to_terminal(ptrA,1,5,3,6);
	result = connect_root_to_terminal(ptrA,1,4,4,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 115 179 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 156 139 161 144 }*/
/* IO - VPL Root : { 180 139 185 144 }*/
/* End Operation */

/* Begin Operation: { 78 196 95 300 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Report Bounds");
/* IO - VPL Terminal : { 72 246 77 251 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_value_to(tempOperation,environment,kSkip);
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

/* Start Operations: { 60 60 }{ 421 503 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 421 503 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 207 81 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 82 217 87 222 }*/
/* End Operation */

/* Begin Operation: { 106 135 123 261 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Item Bounds");
/* IO - VPL Terminal : { 100 175 105 180 }*/
/* IO - VPL Terminal : { 100 217 105 222 }*/
/* IO - VPL Root : { 124 196 129 201 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 146 202 163 296 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"Rect-to-list");
/* IO - VPL Terminal : { 140 247 145 252 }*/
/* IO - VPL Root : { 164 247 169 252 }*/
/* End Operation */

/* Begin Operation: { 120 391 137 415 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"2");
/* IO - VPL Root : { 138 401 143 406 }*/
/* End Operation */

/* Begin Operation: { 162 351 179 429 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"split-nth");
/* IO - VPL Terminal : { 156 375 161 380 }*/
/* IO - VPL Terminal : { 156 401 161 406 }*/
/* IO - VPL Root : { 180 375 185 380 }*/
/* IO - VPL Root : { 180 401 185 406 }*/
/* End Operation */

/* Begin Operation: { 204 313 221 411 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"list-to-Point");
/* IO - VPL Terminal : { 198 360 203 365 }*/
/* IO - VPL Root : { 222 360 227 365 }*/
/* End Operation */

/* Begin Operation: { 246 96 263 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"snag pin");
/* IO - VPL Terminal : { 240 130 245 135 }*/
/* IO - VPL Terminal : { 240 148 245 153 }*/
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

/* Start Operations: { 60 60 }{ 345 396 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 82 95 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Drag Mouse");
/* IO - VPL Terminal : { 72 141 77 146 }*/
/* IO - VPL Root : { 96 120 101 125 }*/
/* IO - VPL Root : { 96 160 101 165 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 120 154 137 252 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"Point-to-list");
/* IO - VPL Terminal : { 114 201 119 206 }*/
/* IO - VPL Root : { 138 201 143 206 }*/
/* End Operation */

/* Begin Operation: { 162 166 179 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 156 203 161 208 }*/
/* IO - VPL Root : { 180 203 185 208 }*/
/* End Operation */

/* Begin Operation: { 204 169 221 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Pinned");
/* IO - VPL Root : { 222 189 227 194 }*/
/* End Operation */

/* Begin Operation: { 204 36 221 90 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Location");
/* IO - VPL Root : { 222 61 227 66 }*/
/* End Operation */

/* Begin Operation: { 120 36 137 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"Point-to-list");
/* IO - VPL Terminal : { 114 83 119 88 }*/
/* IO - VPL Root : { 138 83 143 88 }*/
/* End Operation */

/* Begin Operation: { 162 39 179 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 156 76 161 81 }*/
/* IO - VPL Root : { 180 76 185 81 }*/
/* End Operation */

/* Begin Operation: { 246 36 263 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 240 70 245 75 }*/
/* IO - VPL Terminal : { 240 106 245 111 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 246 162 263 272 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 240 196 245 201 }*/
/* IO - VPL Terminal : { 240 232 245 237 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 297 137 355 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"SubPt");
/* IO - VPL Terminal : { 114 314 119 319 }*/
/* IO - VPL Terminal : { 114 333 119 338 }*/
/* IO - VPL Root : { 138 324 143 329 }*/
/* End Operation */

/* Begin Operation: { 162 303 179 401 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"Point-to-list");
/* IO - VPL Terminal : { 156 350 161 355 }*/
/* IO - VPL Root : { 180 350 185 355 }*/
/* End Operation */

/* Begin Operation: { 204 315 221 393 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 198 352 203 357 }*/
/* IO - VPL Root : { 222 352 227 357 }*/
/* End Operation */

/* Begin Operation: { 246 319 263 361 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Bound");
/* IO - VPL Root : { 264 338 269 343 }*/
/* End Operation */

/* Begin Operation: { 288 311 305 421 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 282 345 287 350 }*/
/* IO - VPL Terminal : { 282 381 287 386 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 330 36 338 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,5,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,1,4,1,9);
	result = connect_root_to_terminal(ptrA,1,3,2,9);
	result = connect_root_to_terminal(ptrA,2,1,1,10);
	result = connect_root_to_terminal(ptrA,1,1,2,10);
	result = connect_root_to_terminal(ptrA,2,0,1,11);
	result = connect_root_to_terminal(ptrA,1,11,1,12);
	result = connect_root_to_terminal(ptrA,1,13,1,14);
	result = connect_root_to_terminal(ptrA,1,12,2,14);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 246 312 263 390 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 240 349 245 354 }*/
/* IO - VPL Root : { 264 349 269 354 }*/
/* End Operation */

/* Begin Operation: { 288 273 305 343 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Item Bound");
/* IO - VPL Root : { 306 306 311 311 }*/
/* End Operation */

/* Begin Operation: { 330 276 347 386 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 324 310 329 315 }*/
/* IO - VPL Terminal : { 324 346 329 351 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 372 36 380 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,3,1,8);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
	result = connect_root_to_terminal(ptrA,1,8,2,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 204 45 212 237 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 107 203 112 }*/
/* IO - VPL Terminal : { 198 171 203 176 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 364 633 }{ 303 338 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
/* IO - VPL Root : { 45 184 50 189 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 109 95 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Count Drag Items");
/* IO - VPL Terminal : { 72 173 77 178 }*/
/* IO - VPL Root : { 96 173 101 178 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 120 128 137 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Make Count");
/* IO - VPL Terminal : { 114 173 119 178 }*/
/* IO - VPL Root : { 138 172 143 177 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 90 179 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Item Bounds");
/* IO - VPL Terminal : { 156 130 161 135 }*/
/* IO - VPL Terminal : { 156 172 161 177 }*/
/* IO - VPL Root : { 180 151 185 156 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);
	tempOperation = operation_output_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 204 122 221 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Convert Rect");
/* IO - VPL Terminal : { 198 151 203 156 }*/
/* IO - VPL Terminal : { 198 182 203 187 }*/
/* IO - VPL Root : { 222 167 227 172 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,1,iList);

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

/* Start Operations: { 60 60 }{ 333 292 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 65 95 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Localize");
/* IO - VPL Terminal : { 72 98 77 103 }*/
/* IO - VPL Root : { 96 86 101 91 }*/
/* IO - VPL Root : { 96 109 101 114 }*/
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

/* Start Operations: { 60 60 }{ 434 299 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 85 95 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"Rect-to-list");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
/* End Operation */

/* Begin Operation: { 120 98 137 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Root : { 138 118 143 123 }*/
/* IO - VPL Root : { 138 140 143 145 }*/
/* End Operation */

/* Begin Operation: { 162 103 179 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 156 118 161 123 }*/
/* IO - VPL Terminal : { 156 135 161 140 }*/
/* IO - VPL Root : { 180 127 185 132 }*/
/* End Operation */

/* Begin Operation: { 204 80 221 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"list-to-Point");
/* IO - VPL Terminal : { 198 127 203 132 }*/
/* IO - VPL Root : { 222 127 227 132 }*/
/* End Operation */

/* Begin Operation: { 246 76 263 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"GlobalToLocal");
/* IO - VPL Terminal : { 240 127 245 132 }*/
/* IO - VPL Root : { 264 127 269 132 }*/
/* End Operation */

/* Begin Operation: { 288 80 305 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"Point-to-list");
/* IO - VPL Terminal : { 282 127 287 132 }*/
/* IO - VPL Root : { 306 127 311 132 }*/
/* End Operation */

/* Begin Operation: { 330 95 347 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 324 127 329 132 }*/
/* IO - VPL Root : { 348 115 353 120 }*/
/* IO - VPL Root : { 348 137 353 142 }*/
/* End Operation */

/* Begin Operation: { 372 36 380 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 366 98 371 103 }*/
/* IO - VPL Terminal : { 366 162 371 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,2,7,2,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 78 170 95 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"16");
/* IO - VPL Root : { 96 180 101 185 }*/
/* End Operation */

/* Begin Operation: { 120 146 137 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Width");
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 180 119 185 }*/
/* IO - VPL Root : { 138 172 143 177 }*/
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

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
/* IO - VPL Root : { 45 189 50 194 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 86 95 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"StringWidth");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
/* End Operation */

/* Begin Operation: { 120 118 137 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Terminal : { 114 144 119 149 }*/
/* IO - VPL Root : { 138 138 143 143 }*/
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
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 146 179 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 156 158 161 163 }*/
/* IO - VPL Terminal : { 156 172 161 177 }*/
/* IO - VPL Root : { 180 166 185 171 }*/
/* End Operation */

/* Begin Operation: { 162 86 179 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 156 98 161 103 }*/
/* IO - VPL Terminal : { 156 112 161 117 }*/
/* IO - VPL Root : { 180 106 185 111 }*/
/* End Operation */

/* Begin Operation: { 204 78 221 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"pack");
/* IO - VPL Terminal : { 198 86 203 91 }*/
/* IO - VPL Terminal : { 198 96 203 101 }*/
/* IO - VPL Terminal : { 198 106 203 111 }*/
/* IO - VPL Terminal : { 198 116 203 121 }*/
/* IO - VPL Root : { 222 102 227 107 }*/
/* End Operation */

/* Begin Operation: { 246 57 263 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"list-to-Rect");
/* IO - VPL Terminal : { 240 102 245 107 }*/
/* IO - VPL Root : { 264 102 269 107 }*/
/* End Operation */

/* Begin Operation: { 288 36 296 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 282 130 287 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,2,2,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,2,1,2,6);
	result = connect_root_to_terminal(ptrA,1,5,3,6);
	result = connect_root_to_terminal(ptrA,1,4,4,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 246 38 254 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 240 100 245 105 }*/
/* IO - VPL Terminal : { 240 164 245 169 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 78 58 95 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Data");
/* IO - VPL Terminal : { 72 82 77 87 }*/
/* IO - VPL Root : { 96 73 101 78 }*/
/* IO - VPL Root : { 96 90 101 95 }*/
/* End Operation */

/* Begin Operation: { 162 67 179 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"/New Element");
/* IO - VPL Terminal : { 156 90 161 95 }*/
/* IO - VPL Terminal : { 156 115 161 120 }*/
/* IO - VPL Terminal : { 156 140 161 145 }*/
/* IO - VPL Root : { 180 115 185 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);

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

/* Start Operations: { 112 614 }{ 482 431 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 82 50 87 }*/
/* IO - VPL Root : { 45 130 50 135 }*/
/* IO - VPL Root : { 45 178 50 183 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 100 136 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper Name");
/* IO - VPL Terminal : { 115 155 120 160 }*/
/* IO - VPL Root : { 136 147 141 152 }*/
/* IO - VPL Root : { 136 163 141 168 }*/
/* End Operation */

/* Begin Operation: { 162 69 178 115 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,NULL);
/* IO - VPL Terminal : { 157 91 162 96 }*/
/* IO - VPL Terminal : { 157 103 162 108 }*/
/* IO - VPL Root : { 178 91 183 96 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_inject_to(tempOperation,environment,2);
/* End Operation */

/* Begin Operation: { 78 164 94 262 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Item Data");
/* IO - VPL Terminal : { 73 212 78 217 }*/
/* IO - VPL Root : { 94 212 99 217 }*/
/* End Operation */

/* Begin Operation: { 162 180 178 262 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Parent");
/* IO - VPL Terminal : { 157 212 162 217 }*/
/* IO - VPL Terminal : { 157 228 162 233 }*/
/* IO - VPL Root : { 178 220 183 225 }*/
/* End Operation */

/* Begin Operation: { 204 57 221 115 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"universal");
/* IO - VPL Root : { 222 84 227 89 }*/
/* End Operation */

/* Begin Operation: { 246 40 262 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Initial What");
/* IO - VPL Terminal : { 241 61 246 66 }*/
/* IO - VPL Terminal : { 241 84 246 89 }*/
/* IO - VPL Terminal : { 241 107 246 112 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 288 183 304 309 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Helper");
/* IO - VPL Terminal : { 283 224 288 229 }*/
/* IO - VPL Terminal : { 283 267 288 272 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 288 64 304 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 283 95 288 100 }*/
/* IO - VPL Terminal : { 283 111 288 116 }*/
/* IO - VPL Root : { 304 103 309 108 }*/
/* End Operation */

/* Begin Operation: { 330 52 346 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Initialize Item Data");
/* IO - VPL Terminal : { 325 103 330 108 }*/
/* IO - VPL Terminal : { 325 156 330 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 372 57 388 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add To List Data");
/* IO - VPL Terminal : { 367 103 372 108 }*/
/* IO - VPL Terminal : { 367 151 372 156 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 414 37 422 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 408 131 413 136 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,2,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,2,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,2,0,3,6);
	result = connect_root_to_terminal(ptrA,1,4,1,7);
	result = connect_root_to_terminal(ptrA,1,2,2,7);
	result = connect_root_to_terminal(ptrA,1,2,1,8);
	result = connect_root_to_terminal(ptrA,1,4,2,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,1,4,2,9);
	result = connect_root_to_terminal(ptrA,1,8,1,10);
	result = connect_root_to_terminal(ptrA,1,1,2,10);
	result = connect_root_to_terminal(ptrA,1,8,1,11);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [7 to 6] */
/* Synchro [8 to 7] */
/* Synchro [10 to 9] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 200 179 306 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Send Refresh");
/* IO - VPL Terminal : { 156 251 161 256 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 70 221 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Make Dirty");
/* IO - VPL Terminal : { 198 115 203 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 246 60 263 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Start Edit");
/* IO - VPL Terminal : { 240 76 245 81 }*/
/* IO - VPL Terminal : { 240 94 245 99 }*/
/* IO - VPL Terminal : { 240 112 245 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 139 524 }{ 226 320 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 82 50 87 }*/
/* IO - VPL Root : { 45 130 50 135 }*/
/* IO - VPL Root : { 45 178 50 183 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 57 95 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"View");
/* IO - VPL Terminal : { 72 82 77 87 }*/
/* IO - VPL Root : { 96 73 101 78 }*/
/* IO - VPL Root : { 96 91 101 96 }*/
/* End Operation */

/* Begin Operation: { 120 58 137 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"/Target Operation Data");
/* IO - VPL Terminal : { 114 93 119 98 }*/
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Terminal : { 114 167 119 172 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 60 60 }{ 313 405 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 75 35 80 }*/
/* IO - VPL Root : { 30 157 35 162 }*/
/* IO - VPL Root : { 31 194 36 199 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 17 178 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Up Drawing");
/* IO - VPL Terminal : { 157 71 162 76 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 69 132 86 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 63 162 68 167 }*/
/* IO - VPL Root : { 87 151 92 156 }*/
/* IO - VPL Root : { 87 172 92 177 }*/
/* End Operation */

/* Begin Operation: { 123 123 139 237 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Select Data");
/* IO - VPL Terminal : { 118 152 123 157 }*/
/* IO - VPL Terminal : { 118 201 123 206 }*/
/* IO - VPL Root : { 139 180 144 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 165 229 181 246 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 160 235 165 240 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 162 152 178 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"unpack");
/* IO - VPL Terminal : { 157 180 162 185 }*/
/* IO - VPL Root : { 178 180 183 185 }*/
/* End Operation */

/* Begin Operation: { 208 206 225 296 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Auto Type");
/* IO - VPL Terminal : { 202 226 207 231 }*/
/* IO - VPL Terminal : { 202 248 207 253 }*/
/* IO - VPL Terminal : { 202 270 207 275 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 207 53 223 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Target Text");
/* IO - VPL Terminal : { 202 99 207 104 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 250 18 258 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,2,0,2,6);
	result = connect_root_to_terminal(ptrA,3,0,3,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 1] */
/* Synchro [7 to 6] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,3,0,3,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 288 53 296 245 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,1,3,2,5);
	result = connect_root_to_terminal(ptrA,2,3,3,5);
	result = connect_root_to_terminal(ptrA,2,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,0,1,8);
	result = connect_root_to_terminal(ptrA,1,5,2,8);
	result = connect_root_to_terminal(ptrA,2,3,3,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [6 to 5] */
/* Synchro [7 to 6] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 392 352 }{ 341 343 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 82 50 87 }*/
/* IO - VPL Root : { 45 130 50 135 }*/
/* IO - VPL Root : { 45 178 50 183 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 139 95 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"show each");
/* IO - VPL Terminal : { 72 178 77 183 }*/
/* IO - VPL Root : { 96 178 101 183 }*/
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

/* Start Operations: { 313 256 }{ 276 301 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 84 95 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Flavors");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 87 137 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"show values");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Root : { 138 130 143 135 }*/
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

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 60 95 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Extracted Value");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 154 137 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 114 185 119 190 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 99 179 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 156 130 161 135 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Begin Operation: { 204 40 212 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 130 203 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 58 137 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 114 89 119 94 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 162 61 179 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Set Text");
/* IO - VPL Terminal : { 156 82 161 87 }*/
/* IO - VPL Terminal : { 156 105 161 110 }*/
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

/* Start Operations: { 60 60 }{ 269 288 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 103 95 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( \'Text\' 1 )");
/* IO - VPL Root : { 96 132 101 137 }*/
/* End Operation */

/* Begin Operation: { 120 66 137 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Control");
/* IO - VPL Terminal : { 114 98 119 103 }*/
/* IO - VPL Terminal : { 114 132 119 137 }*/
/* IO - VPL Root : { 138 115 143 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 162 112 179 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Text");
/* IO - VPL Terminal : { 156 136 161 141 }*/
/* IO - VPL Terminal : { 156 162 161 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 392 352 }{ 311 479 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 82 50 87 }*/
/* IO - VPL Root : { 45 130 50 135 }*/
/* IO - VPL Root : { 45 178 50 183 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 51 95 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Inside Sender Window?");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 114 137 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 114 130 119 135 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 295 95 449 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Drag Drop Action");
/* IO - VPL Terminal : { 72 370 77 375 }*/
/* IO - VPL Root : { 96 370 101 375 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 319 137 425 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kDragActionCopy");
/* IO - VPL Terminal : { 114 370 119 375 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 120 222 137 304 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"show each");
/* IO - VPL Terminal : { 114 261 119 266 }*/
/* IO - VPL Root : { 138 261 143 266 }*/
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

/* Start Operations: { 313 256 }{ 276 301 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 84 95 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Flavors");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 87 137 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"show values");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Root : { 138 130 143 135 }*/
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

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 60 95 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Extracted Value");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 148 137 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 114 185 119 190 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 93 179 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 156 130 161 135 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Begin Operation: { 204 40 212 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 130 203 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 224 179 302 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 156 261 161 266 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 162 92 179 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Get Offset");
/* IO - VPL Terminal : { 156 130 161 135 }*/
/* IO - VPL Root : { 180 116 185 121 }*/
/* IO - VPL Root : { 180 142 185 147 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);

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

/* Start Operations: { 322 263 }{ 259 408 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 193 95 315 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Drag Mouse");
/* IO - VPL Terminal : { 72 252 77 257 }*/
/* IO - VPL Root : { 96 226 101 231 }*/
/* IO - VPL Root : { 96 277 101 282 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 78 38 95 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Drag Origin");
/* IO - VPL Terminal : { 72 97 77 102 }*/
/* IO - VPL Root : { 96 98 101 103 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 120 102 137 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"SubPt");
/* IO - VPL Terminal : { 114 119 119 124 }*/
/* IO - VPL Terminal : { 114 138 119 143 }*/
/* IO - VPL Root : { 138 129 143 134 }*/
/* End Operation */

/* Begin Operation: { 162 72 179 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"h");
/* IO - VPL Terminal : { 156 92 161 97 }*/
/* IO - VPL Root : { 180 84 185 89 }*/
/* IO - VPL Root : { 180 98 185 103 }*/
/* End Operation */

/* Begin Operation: { 162 136 179 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"v");
/* IO - VPL Terminal : { 156 156 161 161 }*/
/* IO - VPL Root : { 180 148 185 153 }*/
/* IO - VPL Root : { 180 162 185 167 }*/
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 98 203 103 }*/
/* IO - VPL Terminal : { 198 162 203 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,2,4,1,6);
	result = connect_root_to_terminal(ptrA,2,5,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 204 172 221 252 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Move By");
/* IO - VPL Terminal : { 198 190 203 195 }*/
/* IO - VPL Terminal : { 198 210 203 215 }*/
/* IO - VPL Terminal : { 198 230 203 235 }*/
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
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,3,0,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,2,0,1,7);
	result = connect_root_to_terminal(ptrA,1,5,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,2,7,3,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 392 352 }{ 311 479 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 82 50 87 }*/
/* IO - VPL Root : { 45 130 50 135 }*/
/* IO - VPL Root : { 45 178 50 183 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 41 95 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Inside Sender Application?");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 114 137 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 114 130 119 135 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 295 95 449 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Drag Drop Action");
/* IO - VPL Terminal : { 72 370 77 375 }*/
/* IO - VPL Root : { 96 370 101 375 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 319 137 425 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kDragActionCopy");
/* IO - VPL Terminal : { 114 370 119 375 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 120 222 137 304 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"show each");
/* IO - VPL Terminal : { 114 261 119 266 }*/
/* IO - VPL Root : { 138 261 143 266 }*/
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

/* Start Operations: { 313 256 }{ 276 301 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 84 95 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Flavors");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 87 137 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"show values");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Root : { 138 130 143 135 }*/
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

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 60 95 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Extracted Value");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 148 137 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 114 185 119 190 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 93 179 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 156 130 161 135 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Begin Operation: { 204 40 212 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 130 203 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 224 179 302 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 156 261 161 266 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 204 231 221 295 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 198 261 203 266 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,3,0,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Get_20_Window_20_Pasteboard_20_Handler_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Get_20_Window_20_Pasteboard_20_Handler_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 39 95 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Window Pasteboard Handler");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 94 101 99 }*/
/* IO - VPL Root : { 96 164 101 169 }*/
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
	result = connect_root_to_terminal(ptrA,2,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Set_20_Window_20_Pasteboard_20_Handler_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Set_20_Window_20_Pasteboard_20_Handler_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 39 95 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Window Pasteboard Handler");
/* IO - VPL Terminal : { 72 94 77 99 }*/
/* IO - VPL Terminal : { 72 164 77 169 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
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


Nat4 VPLU_VPLCEWindow_2F_Get_20_Window_20_Printing_20_Handler_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Get_20_Window_20_Printing_20_Handler_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 48 95 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Window Printing Handler");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 97 101 102 }*/
/* IO - VPL Root : { 96 162 101 167 }*/
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
	result = connect_root_to_terminal(ptrA,2,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Set_20_Window_20_Printing_20_Handler_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Set_20_Window_20_Printing_20_Handler_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 48 95 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Window Printing Handler");
/* IO - VPL Terminal : { 72 97 77 102 }*/
/* IO - VPL Terminal : { 72 162 77 167 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
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


Nat4 VPLU_VPLCEWindow_2F_Close_20_Printing_20_Handler_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Close_20_Printing_20_Handler_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 34 95 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window Printing Handler");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 39 137 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 114 76 119 81 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 120 161 137 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 114 191 119 196 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
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



	return kNOERROR;
}


Nat4 VPLU_VPLCEWindow_2F_Open_20_Printing_20_Handler_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCEWindow_2F_Open_20_Printing_20_Handler_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 212 391 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 34 95 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window Printing Handler");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 39 137 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 114 76 119 81 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 120 159 137 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 114 177 119 182 }*/
/* IO - VPL Terminal : { 114 197 119 202 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,0,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_VPLWindow_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLWindow_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_VPLWindow_2F_Name,environment);
	tempAttribute = attribute_add("WindowRef",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Event Handler",tempClass,tempAttribute_VPLWindow_2F_Window_20_Event_20_Handler,environment);
	tempAttribute = attribute_add("Drawers",tempClass,tempAttribute_VPLWindow_2F_Drawers,environment);
	tempAttribute = attribute_add("View",tempClass,NULL,environment);
	tempAttribute = attribute_add("Frame",tempClass,tempAttribute_VPLWindow_2F_Frame,environment);
	tempAttribute = attribute_add("Target",tempClass,NULL,environment);
	tempAttribute = attribute_add("Title",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Pasteboard Handler",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Printing Handler",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLCEWindow");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
/* Stop Universals */



Nat4 VPLC_VPLEvent_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLEvent_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 312 338 }{ 200 300 } */
	tempAttribute = attribute_add("Event Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Part",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Shut Down?",tempClass,tempAttribute_VPLEvent_2F_Shut_20_Down_3F_,environment);
	tempAttribute = attribute_add("Double Down",tempClass,tempAttribute_VPLEvent_2F_Double_20_Down,environment);
	tempAttribute = attribute_add("Contextual Menu?",tempClass,tempAttribute_VPLEvent_2F_Contextual_20_Menu_3F_,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 552 181 }{ 253 408 } */
Nat4 VPLU_VPLEvent_2F_Get_20_Active_20_Flag_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLEvent_2F_Get_20_Active_20_Flag_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 364 323 }{ 276 290 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 58 73 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Event Record");
/* IO - VPL Terminal : { 52 115 57 120 }*/
/* IO - VPL Root : { 73 107 78 112 }*/
/* IO - VPL Root : { 73 123 78 128 }*/
/* End Operation */

/* Begin Operation: { 105 75 121 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"modifiers");
/* IO - VPL Terminal : { 100 123 105 128 }*/
/* IO - VPL Root : { 121 115 126 120 }*/
/* IO - VPL Root : { 121 131 126 136 }*/
/* End Operation */

/* Begin Operation: { 105 193 120 259 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"activeFlag");
/* IO - VPL Root : { 120 225 125 230 }*/
/* End Operation */

/* Begin Operation: { 158 109 174 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"test-one?");
/* IO - VPL Terminal : { 153 131 158 136 }*/
/* IO - VPL Terminal : { 153 155 158 160 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 201 102 216 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 216 115 221 120 }*/
/* End Operation */

/* Begin Operation: { 244 20 252 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 239 115 244 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 370 333 }{ 160 276 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 99 75 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 75 115 80 120 }*/
/* End Operation */

/* Begin Operation: { 98 20 106 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 93 115 98 120 }*/
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


Nat4 VPLU_VPLEvent_2F_Get_20_Command_20_Key_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLEvent_2F_Get_20_Command_20_Key_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 364 323 }{ 279 298 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 58 73 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Event Record");
/* IO - VPL Terminal : { 52 115 57 120 }*/
/* IO - VPL Root : { 73 107 78 112 }*/
/* IO - VPL Root : { 73 123 78 128 }*/
/* End Operation */

/* Begin Operation: { 105 75 121 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"modifiers");
/* IO - VPL Terminal : { 100 123 105 128 }*/
/* IO - VPL Root : { 121 115 126 120 }*/
/* IO - VPL Root : { 121 131 126 136 }*/
/* End Operation */

/* Begin Operation: { 201 99 216 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 216 115 221 120 }*/
/* End Operation */

/* Begin Operation: { 111 207 126 257 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"cmdKey");
/* IO - VPL Root : { 126 230 131 235 }*/
/* End Operation */

/* Begin Operation: { 164 150 180 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"test-one?");
/* IO - VPL Terminal : { 159 172 164 177 }*/
/* IO - VPL Terminal : { 159 196 164 201 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 244 20 252 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 239 115 244 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 370 333 }{ 160 276 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 99 75 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 75 115 80 120 }*/
/* End Operation */

/* Begin Operation: { 98 20 106 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 93 115 98 120 }*/
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


Nat4 VPLU_VPLEvent_2F_Get_20_Control_20_Key_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLEvent_2F_Get_20_Control_20_Key_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 364 323 }{ 278 295 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 58 73 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Event Record");
/* IO - VPL Terminal : { 52 115 57 120 }*/
/* IO - VPL Root : { 73 107 78 112 }*/
/* IO - VPL Root : { 73 123 78 128 }*/
/* End Operation */

/* Begin Operation: { 105 75 121 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"modifiers");
/* IO - VPL Terminal : { 100 123 105 128 }*/
/* IO - VPL Root : { 121 115 126 120 }*/
/* IO - VPL Root : { 121 131 126 136 }*/
/* End Operation */

/* Begin Operation: { 201 99 216 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 216 115 221 120 }*/
/* End Operation */

/* Begin Operation: { 111 201 126 263 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"controlKey");
/* IO - VPL Root : { 126 230 131 235 }*/
/* End Operation */

/* Begin Operation: { 164 150 180 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"test-one?");
/* IO - VPL Terminal : { 159 172 164 177 }*/
/* IO - VPL Terminal : { 159 196 164 201 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 244 20 252 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 239 115 244 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 370 333 }{ 160 276 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 99 75 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 75 115 80 120 }*/
/* End Operation */

/* Begin Operation: { 98 20 106 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 93 115 98 120 }*/
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


Nat4 VPLU_VPLEvent_2F_Get_20_Local_20_Where_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLEvent_2F_Get_20_Local_20_Where_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 362 350 }{ 241 302 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 51 58 67 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Event Record");
/* IO - VPL Terminal : { 46 115 51 120 }*/
/* IO - VPL Root : { 67 107 72 112 }*/
/* IO - VPL Root : { 67 123 72 128 }*/
/* End Operation */

/* Begin Operation: { 91 226 106 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 86 237 91 242 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 90 85 106 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"where");
/* IO - VPL Terminal : { 85 123 90 128 }*/
/* IO - VPL Root : { 106 115 111 120 }*/
/* IO - VPL Root : { 106 131 111 136 }*/
/* End Operation */

/* Begin Operation: { 128 69 144 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"global-to-local");
/* IO - VPL Terminal : { 123 131 128 136 }*/
/* IO - VPL Root : { 144 131 149 136 }*/
/* End Operation */

/* Begin Operation: { 166 74 182 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"Point-to-list");
/* IO - VPL Terminal : { 161 131 166 136 }*/
/* IO - VPL Root : { 182 131 187 136 }*/
/* End Operation */

/* Begin Operation: { 208 20 216 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 203 115 208 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 345 336 }{ 138 266 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 51 97 66 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( 0 0 )");
/* IO - VPL Root : { 66 115 71 120 }*/
/* End Operation */

/* Begin Operation: { 86 20 94 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 81 115 86 120 }*/
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


Nat4 VPLU_VPLEvent_2F_Get_20_Option_20_Key_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLEvent_2F_Get_20_Option_20_Key_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 364 323 }{ 278 293 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 58 73 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Event Record");
/* IO - VPL Terminal : { 52 115 57 120 }*/
/* IO - VPL Root : { 73 107 78 112 }*/
/* IO - VPL Root : { 73 123 78 128 }*/
/* End Operation */

/* Begin Operation: { 105 18 121 45 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 100 29 105 34 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 105 75 121 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"modifiers");
/* IO - VPL Terminal : { 100 123 105 128 }*/
/* IO - VPL Root : { 121 115 126 120 }*/
/* IO - VPL Root : { 121 131 126 136 }*/
/* End Operation */

/* Begin Operation: { 201 99 216 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 216 115 221 120 }*/
/* End Operation */

/* Begin Operation: { 111 204 126 260 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"optionKey");
/* IO - VPL Root : { 126 230 131 235 }*/
/* End Operation */

/* Begin Operation: { 164 150 180 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"test-one?");
/* IO - VPL Terminal : { 159 172 164 177 }*/
/* IO - VPL Terminal : { 159 196 164 201 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 244 20 252 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 239 115 244 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,4,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 370 333 }{ 160 276 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 99 75 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 75 115 80 120 }*/
/* End Operation */

/* Begin Operation: { 98 20 106 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 93 115 98 120 }*/
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


Nat4 VPLU_VPLEvent_2F_Get_20_Shift_20_Key_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLEvent_2F_Get_20_Shift_20_Key_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 364 323 }{ 279 288 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 58 73 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Event Record");
/* IO - VPL Terminal : { 52 115 57 120 }*/
/* IO - VPL Root : { 73 107 78 112 }*/
/* IO - VPL Root : { 73 123 78 128 }*/
/* End Operation */

/* Begin Operation: { 105 75 121 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"modifiers");
/* IO - VPL Terminal : { 100 123 105 128 }*/
/* IO - VPL Root : { 121 115 126 120 }*/
/* IO - VPL Root : { 121 131 126 136 }*/
/* End Operation */

/* Begin Operation: { 201 99 216 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 216 115 221 120 }*/
/* End Operation */

/* Begin Operation: { 111 207 126 257 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"shiftKey");
/* IO - VPL Root : { 126 230 131 235 }*/
/* End Operation */

/* Begin Operation: { 164 150 180 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"test-one?");
/* IO - VPL Terminal : { 159 172 164 177 }*/
/* IO - VPL Terminal : { 159 196 164 201 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 244 20 252 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 239 115 244 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 370 333 }{ 160 276 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 99 75 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 75 115 80 120 }*/
/* End Operation */

/* Begin Operation: { 98 20 106 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 93 115 98 120 }*/
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


Nat4 VPLU_VPLEvent_2F_Get_20_Key_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLEvent_2F_Get_20_Key_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 101 222 }{ 271 353 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 113 33 118 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 76 56 92 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Event Record");
/* IO - VPL Terminal : { 71 113 76 118 }*/
/* IO - VPL Root : { 92 105 97 110 }*/
/* IO - VPL Root : { 92 121 97 126 }*/
/* End Operation */

/* Begin Operation: { 119 28 134 55 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 114 39 119 44 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 119 126 135 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"message");
/* IO - VPL Terminal : { 114 170 119 175 }*/
/* IO - VPL Root : { 135 162 140 167 }*/
/* IO - VPL Root : { 135 178 140 183 }*/
/* End Operation */

/* Begin Operation: { 120 242 135 322 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"charCodeMask");
/* IO - VPL Root : { 135 280 140 285 }*/
/* End Operation */

/* Begin Operation: { 174 160 190 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"bit-and");
/* IO - VPL Terminal : { 169 178 174 183 }*/
/* IO - VPL Terminal : { 169 198 174 203 }*/
/* IO - VPL Root : { 190 188 195 193 }*/
/* End Operation */

/* Begin Operation: { 225 29 233 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 220 124 225 129 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLEvent_2F_Convert_20_Mouse_20_EventRef_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLEvent_2F_Convert_20_Mouse_20_EventRef_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 549 718 }{ 527 402 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 73 35 78 }*/
/* IO - VPL Root : { 30 157 35 162 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 91 80 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Event Reference");
/* IO - VPL Terminal : { 59 157 64 162 }*/
/* IO - VPL Root : { 80 157 85 162 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 96 122 290 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,3,"ConvertEventRefToEventRecord");
/* IO - VPL Terminal : { 101 157 106 162 }*/
/* IO - VPL Terminal : { 101 222 106 227 }*/
/* IO - VPL Root : { 122 142 127 147 }*/
/* IO - VPL Root : { 122 190 127 195 }*/
/* IO - VPL Root : { 122 238 127 243 }*/
/* End Operation */

/* Begin Operation: { 190 67 206 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"set double down");
/* IO - VPL Terminal : { 185 73 190 78 }*/
/* IO - VPL Terminal : { 185 157 190 162 }*/
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

/* Start Operations: { 60 60 }{ 315 303 } */
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 82 23 87 }*/
/* IO - VPL Root : { 18 146 23 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 128 60 258 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kEventParamClickCount");
/* IO - VPL Root : { 60 191 65 196 }*/
/* End Operation */

/* Begin Operation: { 78 120 94 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get EP UInt32");
/* IO - VPL Terminal : { 73 146 78 151 }*/
/* IO - VPL Terminal : { 73 191 78 196 }*/
/* IO - VPL Root : { 94 147 99 152 }*/
/* IO - VPL Root : { 94 193 99 198 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 112 132 128 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 107 147 112 152 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 112 200 128 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"2");
/* IO - VPL Root : { 128 203 133 208 }*/
/* End Operation */

/* Begin Operation: { 146 185 162 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"=");
/* IO - VPL Terminal : { 141 193 146 198 }*/
/* IO - VPL Terminal : { 141 203 146 208 }*/
/* IO - VPL Root : { 162 198 167 203 }*/
/* End Operation */

/* Begin Operation: { 180 54 196 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Double Down");
/* IO - VPL Terminal : { 175 82 180 87 }*/
/* IO - VPL Terminal : { 175 112 180 117 }*/
/* IO - VPL Root : { 196 97 201 102 }*/
/* End Operation */

/* Begin Operation: { 214 26 222 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
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

/* Begin Operation: { 148 188 164 342 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,0,1,"GetCurrentKeyModifiers");
/* IO - VPL Root : { 164 263 169 268 }*/
/* End Operation */

/* Begin Operation: { 190 215 206 291 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"modifiers");
/* IO - VPL Terminal : { 185 238 190 243 }*/
/* IO - VPL Terminal : { 185 263 190 268 }*/
/* IO - VPL Root : { 206 251 211 256 }*/
/* End Operation */

/* Begin Operation: { 148 44 164 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Event Record");
/* IO - VPL Terminal : { 143 73 148 78 }*/
/* IO - VPL Terminal : { 143 104 148 109 }*/
/* IO - VPL Root : { 164 89 169 94 }*/
/* End Operation */

/* Begin Operation: { 232 225 248 281 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"where");
/* IO - VPL Terminal : { 227 251 232 256 }*/
/* IO - VPL Root : { 248 241 253 246 }*/
/* IO - VPL Root : { 248 259 253 264 }*/
/* End Operation */

/* Begin Operation: { 274 233 290 319 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,2,"FindWindow");
/* IO - VPL Terminal : { 269 259 274 264 }*/
/* IO - VPL Terminal : { 269 287 274 292 }*/
/* IO - VPL Root : { 290 259 295 264 }*/
/* IO - VPL Root : { 290 287 295 292 }*/
/* End Operation */

/* Begin Operation: { 316 75 332 123 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Part");
/* IO - VPL Terminal : { 311 89 316 94 }*/
/* IO - VPL Terminal : { 311 105 316 110 }*/
/* IO - VPL Root : { 332 97 337 102 }*/
/* End Operation */

/* Begin Operation: { 316 234 332 288 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"inContent");
/* IO - VPL Terminal : { 311 259 316 264 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 358 71 374 247 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,2,"IsShowContextualMenuEvent");
/* IO - VPL Terminal : { 353 157 358 162 }*/
/* IO - VPL Root : { 374 127 379 132 }*/
/* IO - VPL Root : { 374 185 379 190 }*/
/* End Operation */

/* Begin Operation: { 400 76 416 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Integer To Boolean");
/* IO - VPL Terminal : { 395 136 400 141 }*/
/* IO - VPL Root : { 416 136 421 141 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 442 60 458 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Contextual Menu?");
/* IO - VPL Terminal : { 437 97 442 102 }*/
/* IO - VPL Terminal : { 437 136 442 141 }*/
/* IO - VPL Root : { 458 117 463 122 }*/
/* End Operation */

/* Begin Operation: { 484 38 492 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,3,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,3,2,2,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,2,7,1,8);
	result = connect_root_to_terminal(ptrA,1,6,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
	result = connect_root_to_terminal(ptrA,1,8,1,10);
	result = connect_root_to_terminal(ptrA,1,1,1,11);
	result = connect_root_to_terminal(ptrA,1,11,1,12);
	result = connect_root_to_terminal(ptrA,1,9,1,13);
	result = connect_root_to_terminal(ptrA,1,12,2,13);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLEvent_2F_Convert_20_Key_20_EventRef_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLEvent_2F_Convert_20_Key_20_EventRef_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 228 503 }{ 266 339 } */
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 71 23 76 }*/
/* IO - VPL Root : { 18 155 23 160 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 89 60 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Event Reference");
/* IO - VPL Terminal : { 39 155 44 160 }*/
/* IO - VPL Root : { 60 155 65 160 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 94 94 288 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,3,"ConvertEventRefToEventRecord");
/* IO - VPL Terminal : { 73 155 78 160 }*/
/* IO - VPL Terminal : { 73 220 78 225 }*/
/* IO - VPL Root : { 94 140 99 145 }*/
/* IO - VPL Root : { 94 188 99 193 }*/
/* IO - VPL Root : { 94 236 99 241 }*/
/* End Operation */

/* Begin Operation: { 146 42 162 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Event Record");
/* IO - VPL Terminal : { 141 71 146 76 }*/
/* IO - VPL Terminal : { 141 102 146 107 }*/
/* IO - VPL Root : { 162 87 167 92 }*/
/* End Operation */

/* Begin Operation: { 182 37 190 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,3,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLEvent_2F_Get_20_Local_20_WhereQD_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLEvent_2F_Get_20_Local_20_WhereQD_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 362 350 }{ 241 302 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 117 35 122 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 72 80 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Event Record");
/* IO - VPL Terminal : { 59 117 64 122 }*/
/* IO - VPL Root : { 80 101 85 106 }*/
/* IO - VPL Root : { 80 132 85 137 }*/
/* End Operation */

/* Begin Operation: { 106 226 121 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 237 106 242 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 106 106 122 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"where");
/* IO - VPL Terminal : { 101 132 106 137 }*/
/* IO - VPL Root : { 122 122 127 127 }*/
/* IO - VPL Root : { 122 140 127 145 }*/
/* End Operation */

/* Begin Operation: { 150 93 166 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"GlobalToLocal");
/* IO - VPL Terminal : { 145 140 150 145 }*/
/* IO - VPL Root : { 166 140 171 145 }*/
/* End Operation */

/* Begin Operation: { 190 22 198 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 117 190 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLEvent_2F_Get_20_WhereQD_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLEvent_2F_Get_20_WhereQD_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 362 350 }{ 204 307 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 117 35 122 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 72 80 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Event Record");
/* IO - VPL Terminal : { 59 117 64 122 }*/
/* IO - VPL Root : { 80 101 85 106 }*/
/* IO - VPL Root : { 80 132 85 137 }*/
/* End Operation */

/* Begin Operation: { 106 226 121 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 237 106 242 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 106 106 122 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"where");
/* IO - VPL Terminal : { 101 132 106 137 }*/
/* IO - VPL Root : { 122 122 127 127 }*/
/* IO - VPL Root : { 122 140 127 145 }*/
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 117 148 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLEvent_2F_Get_20_Contextual_20_Menu_20_Event_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLEvent_2F_Get_20_Contextual_20_Menu_20_Event_3F__universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 115 35 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 58 80 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Contextual Menu?");
/* IO - VPL Terminal : { 59 115 64 120 }*/
/* IO - VPL Root : { 80 95 85 100 }*/
/* IO - VPL Root : { 80 134 85 139 }*/
/* End Operation */

/* Begin Operation: { 106 122 122 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 101 134 106 139 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 115 148 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 305 305 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 71 80 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Event Record");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 100 85 105 }*/
/* IO - VPL Root : { 80 131 85 136 }*/
/* End Operation */

/* Begin Operation: { 106 120 122 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 131 106 136 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 148 47 164 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"IsShowContextualMenuClick");
/* IO - VPL Terminal : { 143 131 148 136 }*/
/* IO - VPL Root : { 164 131 169 136 }*/
/* End Operation */

/* Begin Operation: { 190 71 206 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Integer To Boolean");
/* IO - VPL Terminal : { 185 131 190 136 }*/
/* IO - VPL Root : { 206 131 211 136 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 33 240 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 127 232 132 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 101 80 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 80 116 85 121 }*/
/* End Operation */

/* Begin Operation: { 106 22 114 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 101 116 106 121 }*/
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






Nat4	loadClasses_VPLCEWindows(V_Environment environment);
Nat4	loadClasses_VPLCEWindows(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("VPLCEWindow",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLCEWindow_class_load(result,environment);
	result = class_new("VPLWindow",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLWindow_class_load(result,environment);
	result = class_new("VPLEvent",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLEvent_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_VPLCEWindows(V_Environment environment);
Nat4	loadUniversals_VPLCEWindows(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Get Port",environment);
	if(result == NULL) return kERROR;
	VPLU_Get_20_Port_universal_load(result,environment);

	result = method_new("Set Port",environment);
	if(result == NULL) return kERROR;
	VPLU_Set_20_Port_universal_load(result,environment);

	result = method_new("Set Target",environment);
	if(result == NULL) return kERROR;
	VPLU_Set_20_Target_universal_load(result,environment);

	result = method_new("Get Target",environment);
	if(result == NULL) return kERROR;
	VPLU_Get_20_Target_universal_load(result,environment);

	result = method_new("Clear Target",environment);
	if(result == NULL) return kERROR;
	VPLU_Clear_20_Target_universal_load(result,environment);

	result = method_new("Change Target",environment);
	if(result == NULL) return kERROR;
	VPLU_Change_20_Target_universal_load(result,environment);

	result = method_new("VPLCEWindow/Open",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Open_universal_load(result,environment);

	result = method_new("VPLCEWindow/Open With Data",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Open_20_With_20_Data_universal_load(result,environment);

	result = method_new("VPLCEWindow/Create Window",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Create_20_Window_universal_load(result,environment);

	result = method_new("VPLCEWindow/Get Creation Attributes",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Get_20_Creation_20_Attributes_universal_load(result,environment);

	result = method_new("VPLCEWindow/Open Controls",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Open_20_Controls_universal_load(result,environment);

	result = method_new("VPLCEWindow/Draw",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Draw_universal_load(result,environment);

	result = method_new("VPLCEWindow/Idle",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Idle_universal_load(result,environment);

	result = method_new("VPLCEWindow/Initialize",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Initialize_universal_load(result,environment);

	result = method_new("VPLCEWindow/Constrain Window",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Constrain_20_Window_universal_load(result,environment);

	result = method_new("VPLCEWindow/Get Frame",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Get_20_Frame_universal_load(result,environment);

	result = method_new("VPLCEWindow/Set Frame",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Set_20_Frame_universal_load(result,environment);

	result = method_new("VPLCEWindow/Change Frame",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Change_20_Frame_universal_load(result,environment);

	result = method_new("VPLCEWindow/Get Port Bounds",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Get_20_Port_20_Bounds_universal_load(result,environment);

	result = method_new("VPLCEWindow/Refresh",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Refresh_universal_load(result,environment);

	result = method_new("VPLCEWindow/Set Target",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Set_20_Target_universal_load(result,environment);

	result = method_new("VPLCEWindow/Is Front Window",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Is_20_Front_20_Window_universal_load(result,environment);

	result = method_new("VPLCEWindow/Set Port",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Set_20_Port_universal_load(result,environment);

	result = method_new("VPLCEWindow/Get Port",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Get_20_Port_universal_load(result,environment);

	result = method_new("VPLCEWindow/Select Window",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Select_20_Window_universal_load(result,environment);

	result = method_new("VPLCEWindow/Mouse Down",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Mouse_20_Down_universal_load(result,environment);

	result = method_new("VPLCEWindow/Key Down",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Key_20_Down_universal_load(result,environment);

	result = method_new("VPLCEWindow/Hilite",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Hilite_universal_load(result,environment);

	result = method_new("VPLCEWindow/Get Window Origin",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Get_20_Window_20_Origin_universal_load(result,environment);

	result = method_new("VPLCEWindow/Get Window",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Get_20_Window_universal_load(result,environment);

	result = method_new("VPLCEWindow/Get Application",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Get_20_Application_universal_load(result,environment);

	result = method_new("VPLCEWindow/Close",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Close_universal_load(result,environment);

	result = method_new("VPLCEWindow/Set Up Drawing",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Set_20_Up_20_Drawing_universal_load(result,environment);

	result = method_new("VPLCEWindow/Setup Drawing CG",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Setup_20_Drawing_20_CG_universal_load(result,environment);

	result = method_new("VPLCEWindow/Sync CGContext Origin",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Sync_20_CGContext_20_Origin_universal_load(result,environment);

	result = method_new("VPLCEWindow/Click Content",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Click_20_Content_universal_load(result,environment);

	result = method_new("VPLCEWindow/CE Handle Event",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_CE_20_Handle_20_Event_universal_load(result,environment);

	result = method_new("VPLCEWindow/CE Mouse Event",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_CE_20_Mouse_20_Event_universal_load(result,environment);

	result = method_new("VPLCEWindow/CE Mouse Moved",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_CE_20_Mouse_20_Moved_universal_load(result,environment);

	result = method_new("VPLCEWindow/CE Mouse Wheel Moved",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_CE_20_Mouse_20_Wheel_20_Moved_universal_load(result,environment);

	result = method_new("VPLCEWindow/CE Keyboard Event",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_CE_20_Keyboard_20_Event_universal_load(result,environment);

	result = method_new("VPLCEWindow/CE Raw Key Down",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_CE_20_Raw_20_Key_20_Down_universal_load(result,environment);

	result = method_new("VPLCEWindow/CE Raw Key Repeat",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_CE_20_Raw_20_Key_20_Repeat_universal_load(result,environment);

	result = method_new("VPLCEWindow/CE Raw Key Modifiers Changed",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_CE_20_Raw_20_Key_20_Modifiers_20_Changed_universal_load(result,environment);

	result = method_new("VPLCEWindow/Adjust Frame",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Adjust_20_Frame_universal_load(result,environment);

	result = method_new("VPLCEWindow/Activate",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Activate_universal_load(result,environment);

	result = method_new("VPLCEWindow/Activated",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Activated_universal_load(result,environment);

	result = method_new("VPLCEWindow/Deactivated",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Deactivated_universal_load(result,environment);

	result = method_new("VPLCEWindow/Set Title",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Set_20_Title_universal_load(result,environment);

	result = method_new("VPLCEWindow/Begin CGContext",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Begin_20_CGContext_universal_load(result,environment);

	result = method_new("VPLCEWindow/End CGContext",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_End_20_CGContext_universal_load(result,environment);

	result = method_new("VPLCEWindow/Get Size",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Get_20_Size_universal_load(result,environment);

	result = method_new("VPLCEWindow/CE Window Drag Completed",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_CE_20_Window_20_Drag_20_Completed_universal_load(result,environment);

	result = method_new("VPLCEWindow/CE Window Resize Completed",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_CE_20_Window_20_Resize_20_Completed_universal_load(result,environment);

	result = method_new("VPLCEWindow/Resized",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Resized_universal_load(result,environment);

	result = method_new("VPLCEWindow/Show Drag Hilite",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Show_20_Drag_20_Hilite_universal_load(result,environment);

	result = method_new("VPLCEWindow/Hide Drag Hilite",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Hide_20_Drag_20_Hilite_universal_load(result,environment);

	result = method_new("VPLCEWindow/Close Pasteboard Handler",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Close_20_Pasteboard_20_Handler_universal_load(result,environment);

	result = method_new("VPLCEWindow/Open Pasteboard Handler",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Open_20_Pasteboard_20_Handler_universal_load(result,environment);

	result = method_new("VPLCEWindow/Accept Flavors",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Accept_20_Flavors_universal_load(result,environment);

	result = method_new("VPLCEWindow/Get Window Pasteboard Handler",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Get_20_Window_20_Pasteboard_20_Handler_universal_load(result,environment);

	result = method_new("VPLCEWindow/Set Window Pasteboard Handler",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Set_20_Window_20_Pasteboard_20_Handler_universal_load(result,environment);

	result = method_new("VPLCEWindow/Get Window Printing Handler",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Get_20_Window_20_Printing_20_Handler_universal_load(result,environment);

	result = method_new("VPLCEWindow/Set Window Printing Handler",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Set_20_Window_20_Printing_20_Handler_universal_load(result,environment);

	result = method_new("VPLCEWindow/Close Printing Handler",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Close_20_Printing_20_Handler_universal_load(result,environment);

	result = method_new("VPLCEWindow/Open Printing Handler",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCEWindow_2F_Open_20_Printing_20_Handler_universal_load(result,environment);

	result = method_new("VPLEvent/Get Active Flag",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLEvent_2F_Get_20_Active_20_Flag_universal_load(result,environment);

	result = method_new("VPLEvent/Get Command Key",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLEvent_2F_Get_20_Command_20_Key_universal_load(result,environment);

	result = method_new("VPLEvent/Get Control Key",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLEvent_2F_Get_20_Control_20_Key_universal_load(result,environment);

	result = method_new("VPLEvent/Get Local Where",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLEvent_2F_Get_20_Local_20_Where_universal_load(result,environment);

	result = method_new("VPLEvent/Get Option Key",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLEvent_2F_Get_20_Option_20_Key_universal_load(result,environment);

	result = method_new("VPLEvent/Get Shift Key",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLEvent_2F_Get_20_Shift_20_Key_universal_load(result,environment);

	result = method_new("VPLEvent/Get Key",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLEvent_2F_Get_20_Key_universal_load(result,environment);

	result = method_new("VPLEvent/Convert Mouse EventRef",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLEvent_2F_Convert_20_Mouse_20_EventRef_universal_load(result,environment);

	result = method_new("VPLEvent/Convert Key EventRef",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLEvent_2F_Convert_20_Key_20_EventRef_universal_load(result,environment);

	result = method_new("VPLEvent/Get Local WhereQD",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLEvent_2F_Get_20_Local_20_WhereQD_universal_load(result,environment);

	result = method_new("VPLEvent/Get WhereQD",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLEvent_2F_Get_20_WhereQD_universal_load(result,environment);

	result = method_new("VPLEvent/Get Contextual Menu Event?",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLEvent_2F_Get_20_Contextual_20_Menu_20_Event_3F__universal_load(result,environment);

	return kNOERROR;

}



Nat4	loadPersistents_VPLCEWindows(V_Environment environment);
Nat4	loadPersistents_VPLCEWindows(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	tempPersistent = create_persistentNode("VPLCEWindow/Toolbar",NULL,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("VPLWindow/Toolbar",NULL,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	return kNOERROR;

}

Nat4	load_VPLCEWindows(V_Environment environment);
Nat4	load_VPLCEWindows(V_Environment environment)
{

	loadClasses_VPLCEWindows(environment);
	loadUniversals_VPLCEWindows(environment);
	loadPersistents_VPLCEWindows(environment);
	return kNOERROR;

}

