/* A VPL Section File */
/*

MyDebugData.rnt.c
Copyright: 2002 Scott B. Anderson

*/

Nat4 VPLU_VPLCallback_20_Handler_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLCallback_20_Handler_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 178 371 }{ 393 279 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 48 33 53 }*/
/* IO - VPL Root : { 28 81 33 86 }*/
/* IO - VPL Root : { 28 113 33 118 }*/
/* IO - VPL Root : { 28 149 33 154 }*/
/* IO - VPL Root : { 28 186 33 191 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 28 71 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Execution Thread");
/* IO - VPL Terminal : { 50 83 55 88 }*/
/* IO - VPL Root : { 71 83 76 88 }*/
/* End Operation */

/* Begin Operation: { 98 10 114 72 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 93 28 98 33 }*/
/* IO - VPL Terminal : { 93 48 98 53 }*/
/* IO - VPL Root : { 114 39 119 44 }*/
/* End Operation */

/* Begin Operation: { 138 25 154 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Main Thread");
/* IO - VPL Terminal : { 133 52 138 57 }*/
/* IO - VPL Terminal : { 133 81 138 86 }*/
/* IO - VPL Root : { 154 66 159 71 }*/
/* End Operation */

/* Begin Operation: { 174 77 190 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Method");
/* IO - VPL Terminal : { 169 94 174 99 }*/
/* IO - VPL Terminal : { 169 113 174 118 }*/
/* IO - VPL Root : { 190 104 195 109 }*/
/* End Operation */

/* Begin Operation: { 211 103 227 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Input List");
/* IO - VPL Terminal : { 206 125 211 130 }*/
/* IO - VPL Terminal : { 206 149 211 154 }*/
/* IO - VPL Root : { 227 137 232 142 }*/
/* End Operation */

/* Begin Operation: { 250 144 266 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Outarity");
/* IO - VPL Terminal : { 245 164 250 169 }*/
/* IO - VPL Terminal : { 245 186 250 191 }*/
/* IO - VPL Root : { 266 175 271 180 }*/
/* End Operation */

/* Begin Operation: { 301 95 317 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Execute");
/* IO - VPL Terminal : { 296 128 301 133 }*/
/* IO - VPL Root : { 317 128 322 133 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 341 33 349 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 336 128 341 133 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,4,0,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,5,0,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}





	Nat4 tempAttribute_Execution_20_Thread_2F_Main_20_Thread[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Execution_20_Thread_2F_Thread[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Execution_20_Thread_2F_Case[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Execution_20_Thread_2F_Operation[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Execution_20_Thread_2F_Depth[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Execution_20_Thread_2F_Input_20_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Execution_20_Thread_2F_Outarity[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Execution_20_Thread_2F_Results[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Execution_20_Thread_2F_Completed_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Interpreter_2F_Breakpoints[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Interpreter_2F_Threads[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_Execution_20_Thread_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Execution_20_Thread_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 251 451 }{ 275 305 } */
	tempAttribute = attribute_add("Main Thread",tempClass,tempAttribute_Execution_20_Thread_2F_Main_20_Thread,environment);
	tempAttribute = attribute_add("Thread",tempClass,tempAttribute_Execution_20_Thread_2F_Thread,environment);
	tempAttribute = attribute_add("Method",tempClass,NULL,environment);
	tempAttribute = attribute_add("Case",tempClass,tempAttribute_Execution_20_Thread_2F_Case,environment);
	tempAttribute = attribute_add("Operation",tempClass,tempAttribute_Execution_20_Thread_2F_Operation,environment);
	tempAttribute = attribute_add("State",tempClass,NULL,environment);
	tempAttribute = attribute_add("Depth",tempClass,tempAttribute_Execution_20_Thread_2F_Depth,environment);
	tempAttribute = attribute_add("Stack",tempClass,NULL,environment);
	tempAttribute = attribute_add("Project",tempClass,NULL,environment);
	tempAttribute = attribute_add("Input List",tempClass,tempAttribute_Execution_20_Thread_2F_Input_20_List,environment);
	tempAttribute = attribute_add("Outarity",tempClass,tempAttribute_Execution_20_Thread_2F_Outarity,environment);
	tempAttribute = attribute_add("Results",tempClass,tempAttribute_Execution_20_Thread_2F_Results,environment);
	tempAttribute = attribute_add("Completed?",tempClass,tempAttribute_Execution_20_Thread_2F_Completed_3F_,environment);
	tempAttribute = attribute_add("Final Task",tempClass,NULL,environment);
	tempAttribute = attribute_add("Stack Frames",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 323 366 }{ 143 414 } */
Nat4 VPLU_Execution_20_Thread_2F_Stack_20_Execution_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Execution_20_Thread_2F_Stack_20_Execution_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 256 509 }{ 291 285 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 72 33 77 }*/
/* IO - VPL Root : { 28 158 33 163 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 181 99 197 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 197 110 202 115 }*/
/* End Operation */

/* Begin Operation: { 66 99 82 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Execute");
/* IO - VPL Terminal : { 61 132 66 137 }*/
/* IO - VPL Root : { 82 132 87 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 103 54 119 115 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Results");
/* IO - VPL Terminal : { 98 72 103 77 }*/
/* IO - VPL Terminal : { 98 92 103 97 }*/
/* IO - VPL Root : { 119 82 124 87 }*/
/* End Operation */

/* Begin Operation: { 231 18 239 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 226 110 231 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Execution_20_Thread_2F_Stack_20_Termination_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Execution_20_Thread_2F_Stack_20_Termination_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 256 509 }{ 316 278 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 72 33 77 }*/
/* IO - VPL Root : { 28 120 33 125 }*/
/* IO - VPL Root : { 28 165 33 170 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 87 78 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 78 102 83 107 }*/
/* End Operation */

/* Begin Operation: { 107 44 123 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"system-used");
/* IO - VPL Terminal : { 102 72 107 77 }*/
/* IO - VPL Terminal : { 102 102 107 107 }*/
/* End Operation */

/* Begin Operation: { 144 87 160 115 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 160 99 165 104 }*/
/* End Operation */

/* Begin Operation: { 189 47 205 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Completed?");
/* IO - VPL Terminal : { 184 72 189 77 }*/
/* IO - VPL Terminal : { 184 99 189 104 }*/
/* IO - VPL Root : { 205 86 210 91 }*/
/* End Operation */

/* Begin Operation: { 267 18 275 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Execution_20_Thread_2F_Install_20_Thread_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Execution_20_Thread_2F_Install_20_Thread_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 369 421 }{ 195 259 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 112 33 117 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 47 103 63 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_persistent(tempOperation,environment,"Threads");
/* IO - VPL Root : { 63 133 68 138 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 84 93 100 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-l");
/* IO - VPL Terminal : { 79 112 84 117 }*/
/* IO - VPL Terminal : { 79 133 84 138 }*/
/* IO - VPL Root : { 100 123 105 128 }*/
/* End Operation */

/* Begin Operation: { 120 93 136 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_persistent(tempOperation,environment,"Threads");
/* IO - VPL Terminal : { 115 123 120 128 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 150 21 158 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Execution_20_Thread_2F_Show_20_Errors_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Execution_20_Thread_2F_Show_20_Errors_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 345 835 }{ 328 288 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 113 35 118 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 82 80 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 59 111 64 116 }*/
/* IO - VPL Root : { 80 100 85 105 }*/
/* IO - VPL Root : { 80 120 85 125 }*/
/* End Operation */

/* Begin Operation: { 106 78 122 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 101 120 106 125 }*/
/* IO - VPL Root : { 122 105 127 110 }*/
/* IO - VPL Root : { 122 134 127 139 }*/
/* End Operation */

/* Begin Operation: { 148 92 164 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Errors");
/* IO - VPL Terminal : { 143 134 148 139 }*/
/* IO - VPL Root : { 164 134 169 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 193 206 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 185 198 190 203 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 190 102 206 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 185 134 190 139 }*/
/* IO - VPL Root : { 206 122 211 127 }*/
/* IO - VPL Root : { 206 144 211 149 }*/
/* End Operation */

/* Begin Operation: { 232 88 248 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Handle Fault");
/* IO - VPL Terminal : { 227 105 232 110 }*/
/* IO - VPL Terminal : { 227 137 232 142 }*/
/* IO - VPL Terminal : { 227 170 232 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 274 22 282 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,2,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,2,5,3,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Execution_20_Thread_2F_Execute_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Execution_20_Thread_2F_Execute_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 139 659 }{ 631 260 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 139 35 144 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 105 80 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Input List");
/* IO - VPL Terminal : { 59 139 64 144 }*/
/* IO - VPL Root : { 80 127 85 132 }*/
/* IO - VPL Root : { 80 151 85 156 }*/
/* End Operation */

/* Begin Operation: { 106 87 122 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Method");
/* IO - VPL Terminal : { 101 114 106 119 }*/
/* IO - VPL Root : { 122 104 127 109 }*/
/* IO - VPL Root : { 122 123 127 128 }*/
/* End Operation */

/* Begin Operation: { 148 31 164 93 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 143 60 148 65 }*/
/* IO - VPL Root : { 164 49 169 54 }*/
/* IO - VPL Root : { 164 69 169 74 }*/
/* End Operation */

/* Begin Operation: { 190 27 206 115 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 185 69 190 74 }*/
/* IO - VPL Root : { 206 54 211 59 }*/
/* IO - VPL Root : { 206 83 211 88 }*/
/* End Operation */

/* Begin Operation: { 232 69 248 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Initialize Stack");
/* IO - VPL Terminal : { 227 83 232 88 }*/
/* IO - VPL Terminal : { 227 123 232 128 }*/
/* IO - VPL Terminal : { 227 151 232 156 }*/
/* IO - VPL Root : { 248 104 253 109 }*/
/* IO - VPL Root : { 248 141 253 146 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 34 290 85 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Stack");
/* IO - VPL Terminal : { 269 49 274 54 }*/
/* IO - VPL Terminal : { 269 66 274 71 }*/
/* IO - VPL Root : { 290 57 295 62 }*/
/* End Operation */

/* Begin Operation: { 316 61 332 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Add Thread");
/* IO - VPL Terminal : { 311 83 316 88 }*/
/* IO - VPL Terminal : { 311 120 316 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 334 531 }{ 56 299 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 455 695 }{ 327 268 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 53 80 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Threads");
/* IO - VPL Terminal : { 59 84 64 89 }*/
/* IO - VPL Root : { 80 73 85 78 }*/
/* IO - VPL Root : { 80 95 85 100 }*/
/* End Operation */

/* Begin Operation: { 106 122 122 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(in)");
/* IO - VPL Terminal : { 101 134 106 139 }*/
/* IO - VPL Terminal : { 101 148 106 153 }*/
/* IO - VPL Root : { 122 142 127 147 }*/
/* End Operation */

/* Begin Operation: { 148 171 164 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 143 174 148 179 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 148 74 164 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 143 95 148 100 }*/
/* IO - VPL Terminal : { 143 118 148 123 }*/
/* IO - VPL Root : { 164 107 169 112 }*/
/* End Operation */

/* Begin Operation: { 190 53 206 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Threads");
/* IO - VPL Terminal : { 185 73 190 78 }*/
/* IO - VPL Terminal : { 185 95 190 100 }*/
/* IO - VPL Root : { 206 84 211 89 }*/
/* End Operation */

/* Begin Operation: { 232 83 248 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Add Stack Menu Item");
/* IO - VPL Terminal : { 227 148 232 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 450 694 }{ 58 330 }*/
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

/* Begin Operation: { 64 28 80 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Stack Data");
/* IO - VPL Terminal : { 59 67 64 72 }*/
/* IO - VPL Root : { 80 67 85 72 }*/
/* End Operation */

/* Begin Operation: { 106 80 122 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 101 95 106 100 }*/
/* IO - VPL Terminal : { 101 116 106 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
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

/* Begin Operation: { 274 29 282 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,2,0,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* Synchro [6 to 5] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 358 39 374 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Advance the Stack");
/* IO - VPL Terminal : { 353 57 358 62 }*/
/* IO - VPL Terminal : { 353 83 358 88 }*/
/* IO - VPL Terminal : { 353 104 358 109 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 245 340 }{ 82 315 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 147 689 }{ 496 272 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 68 35 73 }*/
/* IO - VPL Root : { 30 103 35 108 }*/
/* IO - VPL Root : { 30 139 35 144 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 69 80 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Advance Stack");
/* IO - VPL Terminal : { 59 103 64 108 }*/
/* IO - VPL Terminal : { 59 139 64 144 }*/
/* IO - VPL Root : { 80 94 85 99 }*/
/* IO - VPL Root : { 80 110 85 115 }*/
/* IO - VPL Root : { 80 124 85 129 }*/
/* IO - VPL Root : { 80 139 85 144 }*/
/* IO - VPL Root : { 80 153 85 158 }*/
/* IO - VPL Root : { 80 167 85 172 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 130 122 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"FALSE");
/* IO - VPL Terminal : { 101 145 106 150 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 106 9 122 94 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Debug State");
/* IO - VPL Terminal : { 101 49 106 54 }*/
/* IO - VPL Root : { 122 49 127 54 }*/
/* End Operation */

/* Begin Operation: { 148 32 164 90 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Thread");
/* IO - VPL Terminal : { 143 49 148 54 }*/
/* IO - VPL Terminal : { 143 68 148 73 }*/
/* IO - VPL Root : { 164 59 169 64 }*/
/* End Operation */

/* Begin Operation: { 190 60 206 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Case Stack");
/* IO - VPL Terminal : { 185 84 190 89 }*/
/* IO - VPL Terminal : { 185 110 190 115 }*/
/* IO - VPL Root : { 206 98 211 103 }*/
/* End Operation */

/* Begin Operation: { 232 96 248 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Case");
/* IO - VPL Terminal : { 227 109 232 114 }*/
/* IO - VPL Terminal : { 227 124 232 129 }*/
/* IO - VPL Root : { 248 117 253 122 }*/
/* End Operation */

/* Begin Operation: { 274 101 290 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Method");
/* IO - VPL Terminal : { 269 119 274 124 }*/
/* IO - VPL Terminal : { 269 139 274 144 }*/
/* IO - VPL Root : { 290 129 295 134 }*/
/* End Operation */

/* Begin Operation: { 316 103 332 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Case Index");
/* IO - VPL Terminal : { 311 127 316 132 }*/
/* IO - VPL Terminal : { 311 153 316 158 }*/
/* IO - VPL Root : { 332 141 337 146 }*/
/* End Operation */

/* Begin Operation: { 358 113 374 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Total Cases");
/* IO - VPL Terminal : { 353 139 358 144 }*/
/* IO - VPL Terminal : { 353 167 358 172 }*/
/* IO - VPL Root : { 374 154 379 159 }*/
/* End Operation */

/* Begin Operation: { 400 107 416 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Handle Break");
/* IO - VPL Terminal : { 395 154 400 159 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 442 29 450 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,0,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,1,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,3,1,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,4,1,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,5,1,2,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,6,1,2,9);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 400 65 416 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Finalize Stack");
/* IO - VPL Terminal : { 395 83 400 88 }*/
/* IO - VPL Terminal : { 395 104 400 109 }*/
/* IO - VPL Terminal : { 395 141 400 146 }*/
/* IO - VPL Root : { 416 116 421 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 442 63 458 90 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 458 74 463 79 }*/
/* End Operation */

/* Begin Operation: { 484 42 500 93 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Stack");
/* IO - VPL Terminal : { 479 57 484 62 }*/
/* IO - VPL Terminal : { 479 74 484 79 }*/
/* IO - VPL Root : { 500 65 505 70 }*/
/* End Operation */

/* Begin Operation: { 526 51 542 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Remove Thread");
/* IO - VPL Terminal : { 521 83 526 88 }*/
/* IO - VPL Terminal : { 521 117 526 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 419 373 }{ 54 320 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 419 695 }{ 335 264 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 53 80 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Threads");
/* IO - VPL Terminal : { 59 84 64 89 }*/
/* IO - VPL Root : { 80 73 85 78 }*/
/* IO - VPL Root : { 80 95 85 100 }*/
/* End Operation */

/* Begin Operation: { 106 122 122 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(in)");
/* IO - VPL Terminal : { 101 134 106 139 }*/
/* IO - VPL Terminal : { 101 148 106 153 }*/
/* IO - VPL Root : { 122 142 127 147 }*/
/* End Operation */

/* Begin Operation: { 148 191 164 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 143 194 148 199 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 148 71 164 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"detach-nth");
/* IO - VPL Terminal : { 143 95 148 100 }*/
/* IO - VPL Terminal : { 143 121 148 126 }*/
/* IO - VPL Root : { 164 95 169 100 }*/
/* IO - VPL Root : { 164 121 169 126 }*/
/* End Operation */

/* Begin Operation: { 190 53 206 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Threads");
/* IO - VPL Terminal : { 185 73 190 78 }*/
/* IO - VPL Terminal : { 185 95 190 100 }*/
/* IO - VPL Root : { 206 84 211 89 }*/
/* End Operation */

/* Begin Operation: { 232 45 248 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Remove Stack Menu Item");
/* IO - VPL Terminal : { 227 121 232 126 }*/
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 450 694 }{ 58 330 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 282 290 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 70 80 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Stack Frames");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 100 85 105 }*/
/* IO - VPL Root : { 80 132 85 137 }*/
/* End Operation */

/* Begin Operation: { 106 45 122 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 101 81 106 86 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 106 161 122 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 101 188 106 193 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 121 164 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 164 132 169 137 }*/
/* End Operation */

/* Begin Operation: { 190 70 206 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Stack Frames");
/* IO - VPL Terminal : { 185 100 190 105 }*/
/* IO - VPL Terminal : { 185 132 190 137 }*/
/* IO - VPL Root : { 206 116 211 121 }*/
/* End Operation */

/* Begin Operation: { 232 23 240 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 274 24 282 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,2,4,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 568 23 576 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 563 116 568 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,2,2,5);
	result = connect_root_to_terminal(ptrA,2,1,3,5);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,2,4,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,6,1,8);
	result = connect_root_to_terminal(ptrA,2,4,2,8);
	result = connect_root_to_terminal(ptrA,1,5,3,8);
	result = connect_root_to_terminal(ptrA,2,4,1,9);
	result = connect_root_to_terminal(ptrA,1,5,2,9);
	result = connect_root_to_terminal(ptrA,2,5,3,9);
	result = connect_root_to_terminal(ptrA,1,6,1,11);
	result = connect_root_to_terminal(ptrA,1,10,2,11);
	result = connect_root_to_terminal(ptrA,2,4,1,12);
	result = connect_root_to_terminal(ptrA,1,11,2,12);
	result = connect_root_to_terminal(ptrA,1,9,1,13);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [8 to 7] */
/* Synchro [9 to 8] */
/* Synchro [10 to 9] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Execution_20_Thread_2F_Return_20_From_20_Thread_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Execution_20_Thread_2F_Return_20_From_20_Thread_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 405 555 }{ 247 286 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 75 76 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Completed?");
/* IO - VPL Terminal : { 55 114 60 119 }*/
/* IO - VPL Root : { 76 100 81 105 }*/
/* IO - VPL Root : { 76 127 81 132 }*/
/* End Operation */

/* Begin Operation: { 103 174 119 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 98 186 103 191 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 103 64 119 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Final Task");
/* IO - VPL Terminal : { 98 100 103 105 }*/
/* IO - VPL Root : { 119 87 124 92 }*/
/* IO - VPL Root : { 119 112 124 117 }*/
/* End Operation */

/* Begin Operation: { 146 47 162 248 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Perform Task Or Dispose Results");
/* IO - VPL Terminal : { 141 112 146 117 }*/
/* IO - VPL Terminal : { 141 179 146 184 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 530 900 }{ 63 378 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 481 878 }{ 309 294 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 68 71 84 98 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 63 82 68 87 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 68 144 84 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Results");
/* IO - VPL Terminal : { 63 172 68 177 }*/
/* IO - VPL Root : { 84 162 89 167 }*/
/* IO - VPL Root : { 84 182 89 187 }*/
/* End Operation */

/* Begin Operation: { 112 100 128 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 107 129 112 134 }*/
/* IO - VPL Root : { 128 118 133 123 }*/
/* IO - VPL Root : { 128 138 133 143 }*/
/* End Operation */

/* Begin Operation: { 161 96 177 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 156 138 161 143 }*/
/* IO - VPL Root : { 177 123 182 128 }*/
/* IO - VPL Root : { 177 152 182 157 }*/
/* End Operation */

/* Begin Operation: { 159 201 175 258 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"decrement");
/* IO - VPL Root : { 175 227 180 232 }*/
/* End Operation */

/* Begin Operation: { 204 124 220 245 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Modify Value Use");
/* IO - VPL Terminal : { 199 152 204 157 }*/
/* IO - VPL Terminal : { 199 182 204 187 }*/
/* IO - VPL Terminal : { 199 212 204 217 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);
/* End Operation */

/* Begin Operation: { 260 22 268 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,6);
	result = connect_root_to_terminal(ptrA,2,2,2,6);
	result = connect_root_to_terminal(ptrA,1,5,3,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 481 878 }{ 182 275 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 68 174 84 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 63 185 68 190 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 70 60 86 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Perform");
/* IO - VPL Terminal : { 65 82 70 87 }*/
/* IO - VPL Terminal : { 65 106 70 111 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 119 19 127 211 } */
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
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 198 17 206 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_Debug_20_State_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Debug_20_State_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 349 487 }{ 200 300 } */
	tempAttribute = attribute_add("Case",tempClass,NULL,environment);
	tempAttribute = attribute_add("Case Stack",tempClass,NULL,environment);
	tempAttribute = attribute_add("Thread",tempClass,NULL,environment);
	tempAttribute = attribute_add("Frame",tempClass,NULL,environment);
	tempAttribute = attribute_add("Method",tempClass,NULL,environment);
	tempAttribute = attribute_add("Case Index",tempClass,NULL,environment);
	tempAttribute = attribute_add("Total Cases",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 381 933 }{ 436 404 } */
Nat4 VPLU_Debug_20_State_2F_Open_20_Editor_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Open_20_Editor_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 149 336 }{ 295 372 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 62 70 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Editor");
/* IO - VPL Terminal : { 49 115 54 120 }*/
/* IO - VPL Root : { 70 115 75 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 90 206 105 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 85 217 90 222 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 90 51 106 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Select Window");
/* IO - VPL Terminal : { 85 115 90 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 128 94 144 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"View");
/* IO - VPL Terminal : { 123 115 128 120 }*/
/* IO - VPL Root : { 144 107 149 112 }*/
/* IO - VPL Root : { 144 122 149 127 }*/
/* End Operation */

/* Begin Operation: { 126 177 142 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 142 189 147 194 }*/
/* End Operation */

/* Begin Operation: { 168 88 184 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Target");
/* IO - VPL Terminal : { 163 107 168 112 }*/
/* IO - VPL Terminal : { 163 128 168 133 }*/
/* IO - VPL Terminal : { 163 149 168 154 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 167 188 183 346 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Show Current Operation");
/* IO - VPL Terminal : { 162 238 167 243 }*/
/* IO - VPL Terminal : { 162 290 167 295 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 213 74 229 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Refresh");
/* IO - VPL Terminal : { 208 107 213 112 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 252 26 260 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,2,4,2,6);
	result = connect_root_to_terminal(ptrA,1,5,3,6);
	result = connect_root_to_terminal(ptrA,2,4,1,7);
	result = connect_root_to_terminal(ptrA,1,0,2,7);
	result = connect_root_to_terminal(ptrA,1,4,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* Synchro [4 to 3] */
/* Synchro [7 to 6] */
/* Synchro [8 to 7] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 149 336 }{ 344 405 } */
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 115 23 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 71 60 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Desktop");
/* IO - VPL Root : { 60 113 65 118 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 20 94 47 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 73 31 78 36 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 44 192 60 334 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Construct Editor");
/* IO - VPL Terminal : { 39 262 44 267 }*/
/* IO - VPL Root : { 60 262 65 267 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 225 94 341 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Data");
/* IO - VPL Terminal : { 73 262 78 267 }*/
/* IO - VPL Terminal : { 73 301 78 306 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 81 94 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Window");
/* IO - VPL Terminal : { 73 118 78 123 }*/
/* IO - VPL Terminal : { 73 157 78 162 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 112 61 128 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 107 86 112 91 }*/
/* IO - VPL Terminal : { 107 113 112 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 112 241 128 288 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"View");
/* IO - VPL Terminal : { 107 262 112 267 }*/
/* IO - VPL Root : { 128 254 133 259 }*/
/* IO - VPL Root : { 128 269 133 274 }*/
/* End Operation */

/* Begin Operation: { 112 308 128 336 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 128 320 133 325 }*/
/* End Operation */

/* Begin Operation: { 146 235 162 321 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Target");
/* IO - VPL Terminal : { 141 254 146 259 }*/
/* IO - VPL Terminal : { 141 275 146 280 }*/
/* IO - VPL Terminal : { 141 296 146 301 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 146 75 162 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Refresh");
/* IO - VPL Terminal : { 141 108 146 113 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 180 20 188 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,0,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,3,2,5);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,1,1,2,6);
	result = connect_root_to_terminal(ptrA,1,3,1,7);
	result = connect_root_to_terminal(ptrA,1,7,1,9);
	result = connect_root_to_terminal(ptrA,2,7,2,9);
	result = connect_root_to_terminal(ptrA,1,8,3,9);
	result = connect_root_to_terminal(ptrA,1,7,1,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [5 to 4] */
/* Synchro [5 to 2] */
/* Synchro [6 to 5] */
/* Synchro [7 to 6] */
/* Synchro [10 to 9] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 149 336 }{ 181 259 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 43 41 59 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Couldn\'t find application!");
/* IO - VPL Root : { 59 107 64 112 }*/
/* End Operation */

/* Begin Operation: { 88 83 104 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug");
/* IO - VPL Terminal : { 83 107 88 112 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 139 18 147 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
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


Nat4 VPLU_Debug_20_State_2F_Get_20_Editor_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Get_20_Editor_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 383 927 }{ 322 291 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 71 72 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Case Stack");
/* IO - VPL Terminal : { 51 109 56 114 }*/
/* IO - VPL Root : { 72 95 77 100 }*/
/* IO - VPL Root : { 72 138 77 143 }*/
/* End Operation */

/* Begin Operation: { 231 212 247 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 226 223 231 228 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 95 37 111 95 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Thread");
/* IO - VPL Terminal : { 90 64 95 69 }*/
/* IO - VPL Root : { 111 54 116 59 }*/
/* IO - VPL Root : { 111 73 116 78 }*/
/* End Operation */

/* Begin Operation: { 132 44 148 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 127 73 132 78 }*/
/* IO - VPL Root : { 148 62 153 67 }*/
/* IO - VPL Root : { 148 82 153 87 }*/
/* End Operation */

/* Begin Operation: { 183 40 199 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 178 82 183 87 }*/
/* IO - VPL Root : { 199 67 204 72 }*/
/* IO - VPL Root : { 199 96 204 101 }*/
/* End Operation */

/* Begin Operation: { 231 56 247 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Debug Window");
/* IO - VPL Terminal : { 226 96 231 101 }*/
/* IO - VPL Terminal : { 226 138 231 143 }*/
/* IO - VPL Root : { 247 117 252 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 280 23 288 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 275 117 280 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,5,1,6);
	result = connect_root_to_terminal(ptrA,2,1,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [6 to 2] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 556 410 }{ 142 258 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 105 75 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 75 116 80 121 }*/
/* End Operation */

/* Begin Operation: { 104 22 112 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 99 116 104 121 }*/
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


Nat4 VPLU_Debug_20_State_2F_Close_20_Editor_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Close_20_Editor_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 116 352 }{ 198 269 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 62 72 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Editor");
/* IO - VPL Terminal : { 51 115 56 120 }*/
/* IO - VPL Root : { 72 115 77 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 102 178 117 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 97 189 102 194 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 102 76 118 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close Self");
/* IO - VPL Terminal : { 97 115 102 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 153 29 161 221 } */
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
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 391 369 }{ 95 263 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 40 20 48 212 } */
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


Nat4 VPLU_Debug_20_State_2F_Construct_20_Editor_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Construct_20_Editor_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 89 340 }{ 297 263 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 133 61 149 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Debug Window");
/* IO - VPL Terminal : { 128 107 133 112 }*/
/* IO - VPL Root : { 149 107 154 112 }*/
/* End Operation */

/* Begin Operation: { 81 83 97 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Debug View");
/* IO - VPL Terminal : { 76 122 81 127 }*/
/* IO - VPL Root : { 97 122 102 127 }*/
/* End Operation */

/* Begin Operation: { 188 94 204 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"View");
/* IO - VPL Terminal : { 183 107 188 112 }*/
/* IO - VPL Terminal : { 183 122 188 127 }*/
/* IO - VPL Root : { 204 115 209 120 }*/
/* End Operation */

/* Begin Operation: { 241 20 249 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 236 115 241 120 }*/
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



	return kNOERROR;
}


Nat4 VPLU_Debug_20_State_2F_Get_20_Application_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Get_20_Application_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 384 325 }{ 268 295 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 48 141 64 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Thread");
/* IO - VPL Terminal : { 43 168 48 173 }*/
/* IO - VPL Root : { 64 158 69 163 }*/
/* IO - VPL Root : { 64 177 69 182 }*/
/* End Operation */

/* Begin Operation: { 105 166 121 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 100 177 105 182 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 104 69 120 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 99 98 104 103 }*/
/* IO - VPL Root : { 120 87 125 92 }*/
/* IO - VPL Root : { 120 107 125 112 }*/
/* End Operation */

/* Begin Operation: { 141 165 157 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 136 176 141 181 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 143 82 159 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 138 107 143 112 }*/
/* IO - VPL Root : { 159 98 164 103 }*/
/* IO - VPL Root : { 159 116 164 121 }*/
/* End Operation */

/* Begin Operation: { 186 213 202 240 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 181 224 186 229 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 187 49 203 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Application");
/* IO - VPL Terminal : { 182 116 187 121 }*/
/* IO - VPL Root : { 203 116 208 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 224 21 232 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 219 116 224 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,3,1,5);
	result = connect_root_to_terminal(ptrA,2,5,1,6);
	result = connect_root_to_terminal(ptrA,2,5,1,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* Synchro [5 to 4] */
/* Synchro [7 to 6] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 295 448 }{ 139 269 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 50 103 66 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 66 114 71 119 }*/
/* End Operation */

/* Begin Operation: { 95 20 103 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 90 114 95 119 }*/
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


Nat4 VPLU_Debug_20_State_2F_Construct_20_Title_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Construct_20_Title_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 556 274 }{ 340 330 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 117 35 122 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 134 206 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\" Debug\"");
/* IO - VPL Root : { 206 156 211 161 }*/
/* End Operation */

/* Begin Operation: { 64 45 80 91 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Case");
/* IO - VPL Terminal : { 59 66 64 71 }*/
/* IO - VPL Root : { 80 58 85 63 }*/
/* IO - VPL Root : { 80 73 85 78 }*/
/* End Operation */

/* Begin Operation: { 64 122 80 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Operation Data");
/* IO - VPL Root : { 80 161 85 166 }*/
/* End Operation */

/* Begin Operation: { 106 82 122 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 101 117 106 122 }*/
/* IO - VPL Terminal : { 101 161 106 166 }*/
/* IO - VPL Root : { 122 135 127 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 79 164 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Construct Title");
/* IO - VPL Terminal : { 143 135 148 140 }*/
/* IO - VPL Root : { 164 135 169 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 120 248 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 227 135 232 140 }*/
/* IO - VPL Terminal : { 227 156 232 161 }*/
/* IO - VPL Root : { 248 146 253 151 }*/
/* End Operation */

/* Begin Operation: { 274 22 282 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 269 117 274 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,1,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 556 274 }{ 288 299 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 50 83 66 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Parent");
/* IO - VPL Terminal : { 45 123 50 128 }*/
/* IO - VPL Root : { 66 115 71 120 }*/
/* IO - VPL Root : { 66 131 71 136 }*/
/* End Operation */

/* Begin Operation: { 89 190 104 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 84 201 89 206 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 87 52 103 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper Name");
/* IO - VPL Terminal : { 82 107 87 112 }*/
/* IO - VPL Root : { 103 99 108 104 }*/
/* IO - VPL Root : { 103 115 108 120 }*/
/* End Operation */

/* Begin Operation: { 118 36 133 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"/Construct Title\"");
/* IO - VPL Root : { 133 87 138 92 }*/
/* End Operation */

/* Begin Operation: { 156 152 171 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 151 163 156 168 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 155 35 171 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 150 60 155 65 }*/
/* IO - VPL Terminal : { 150 87 155 92 }*/
/* IO - VPL Root : { 171 73 176 78 }*/
/* End Operation */

/* Begin Operation: { 197 93 213 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,NULL);
/* IO - VPL Terminal : { 192 98 197 103 }*/
/* IO - VPL Terminal : { 192 115 197 120 }*/
/* IO - VPL Terminal : { 192 131 197 136 }*/
/* IO - VPL Root : { 213 115 218 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_inject_to(tempOperation,environment,1);
/* End Operation */

/* Begin Operation: { 241 20 249 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 236 115 241 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,5);
	result = connect_root_to_terminal(ptrA,2,3,1,6);
	result = connect_root_to_terminal(ptrA,1,4,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,2,3,2,7);
	result = connect_root_to_terminal(ptrA,2,1,3,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* Synchro [6 to 5] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Debug_20_State_2F_Get_20_Current_20_Item_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Get_20_Current_20_Item_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 264 221 }{ 185 261 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 106 33 111 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 73 70 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Current Index");
/* IO - VPL Terminal : { 49 133 54 138 }*/
/* IO - VPL Root : { 70 133 75 138 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 96 84 112 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Item");
/* IO - VPL Terminal : { 91 106 96 111 }*/
/* IO - VPL Terminal : { 91 133 96 138 }*/
/* IO - VPL Root : { 112 119 117 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 23 145 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 132 119 137 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Debug_20_State_2F_Get_20_Item_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Get_20_Item_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 264 221 }{ 314 285 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 62 33 67 }*/
/* IO - VPL Root : { 28 192 33 197 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 41 76 87 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Case");
/* IO - VPL Terminal : { 55 62 60 67 }*/
/* IO - VPL Root : { 76 54 81 59 }*/
/* IO - VPL Root : { 76 69 81 74 }*/
/* End Operation */

/* Begin Operation: { 61 201 77 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 56 203 61 208 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 60 94 76 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Operation Data");
/* IO - VPL Root : { 76 132 81 137 }*/
/* End Operation */

/* Begin Operation: { 117 161 133 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 112 172 117 177 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 118 35 134 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 113 69 118 74 }*/
/* IO - VPL Terminal : { 113 105 118 110 }*/
/* IO - VPL Root : { 134 87 139 92 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 159 68 175 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 154 87 159 92 }*/
/* IO - VPL Root : { 175 80 180 85 }*/
/* IO - VPL Root : { 175 94 180 99 }*/
/* End Operation */

/* Begin Operation: { 159 174 175 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 154 204 159 209 }*/
/* IO - VPL Root : { 175 204 180 209 }*/
/* End Operation */

/* Begin Operation: { 210 182 226 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"lte");
/* IO - VPL Terminal : { 205 192 210 197 }*/
/* IO - VPL Terminal : { 205 204 210 209 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 211 91 227 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"get-nth");
/* IO - VPL Terminal : { 206 109 211 114 }*/
/* IO - VPL Terminal : { 206 129 211 134 }*/
/* IO - VPL Root : { 227 119 232 124 }*/
/* End Operation */

/* Begin Operation: { 285 23 293 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 280 119 285 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,2,1,1,5);
	result = connect_root_to_terminal(ptrA,1,3,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,2,6,1,7);
	result = connect_root_to_terminal(ptrA,2,0,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,2,6,1,9);
	result = connect_root_to_terminal(ptrA,2,0,2,9);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* Synchro [5 to 4] */
/* Synchro [9 to 8] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 381 275 }{ 153 270 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 102 74 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 74 113 79 118 }*/
/* End Operation */

/* Begin Operation: { 103 19 111 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 98 113 103 118 }*/
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


Nat4 VPLU_Debug_20_State_2F_Get_20_Current_20_Index_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Get_20_Current_20_Index_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 264 221 }{ 578 291 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 123 72 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Case Stack");
/* IO - VPL Terminal : { 51 161 56 166 }*/
/* IO - VPL Root : { 72 147 77 152 }*/
/* IO - VPL Root : { 72 173 77 178 }*/
/* End Operation */

/* Begin Operation: { 98 50 114 108 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Thread");
/* IO - VPL Terminal : { 93 77 98 82 }*/
/* IO - VPL Root : { 114 67 119 72 }*/
/* IO - VPL Root : { 114 86 119 91 }*/
/* End Operation */

/* Begin Operation: { 139 71 155 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 134 100 139 105 }*/
/* IO - VPL Root : { 155 89 160 94 }*/
/* IO - VPL Root : { 155 109 160 114 }*/
/* End Operation */

/* Begin Operation: { 181 67 197 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 176 109 181 114 }*/
/* IO - VPL Root : { 197 94 202 99 }*/
/* IO - VPL Root : { 197 123 202 128 }*/
/* End Operation */

/* Begin Operation: { 288 46 304 92 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Case");
/* IO - VPL Terminal : { 283 67 288 72 }*/
/* IO - VPL Root : { 304 59 309 64 }*/
/* IO - VPL Root : { 304 74 309 79 }*/
/* End Operation */

/* Begin Operation: { 235 75 251 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Current Operation");
/* IO - VPL Terminal : { 230 123 235 128 }*/
/* IO - VPL Terminal : { 230 173 235 178 }*/
/* IO - VPL Root : { 251 148 256 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 288 237 304 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 283 243 288 248 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 288 124 304 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Operation Data");
/* IO - VPL Root : { 304 162 309 167 }*/
/* End Operation */

/* Begin Operation: { 342 176 358 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 337 187 342 192 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 342 40 358 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 337 74 342 79 }*/
/* IO - VPL Terminal : { 337 110 342 115 }*/
/* IO - VPL Root : { 358 92 363 97 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 385 73 401 115 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 380 92 385 97 }*/
/* IO - VPL Root : { 401 85 406 90 }*/
/* IO - VPL Root : { 401 99 406 104 }*/
/* End Operation */

/* Begin Operation: { 426 72 442 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 421 99 426 104 }*/
/* IO - VPL Root : { 442 89 447 94 }*/
/* IO - VPL Root : { 442 108 447 113 }*/
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,2,iList);
/* End Operation */

/* Begin Operation: { 384 150 400 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-r");
/* IO - VPL Terminal : { 379 183 384 188 }*/
/* IO - VPL Root : { 400 171 405 176 }*/
/* IO - VPL Root : { 400 194 405 199 }*/
/* End Operation */

/* Begin Operation: { 486 170 502 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(in)");
/* IO - VPL Terminal : { 481 181 486 186 }*/
/* IO - VPL Terminal : { 481 194 486 199 }*/
/* IO - VPL Root : { 502 188 507 193 }*/
/* End Operation */

/* Begin Operation: { 535 33 543 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 530 129 535 134 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,2,4,1,6);
	result = connect_root_to_terminal(ptrA,2,1,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,2,5,1,9);
	result = connect_root_to_terminal(ptrA,2,5,1,10);
	result = connect_root_to_terminal(ptrA,1,8,2,10);
	result = connect_root_to_terminal(ptrA,1,10,1,11);
	result = connect_root_to_terminal(ptrA,2,11,1,12);
	result = connect_root_to_terminal(ptrA,1,6,1,13);
	result = connect_root_to_terminal(ptrA,2,12,1,14);
	result = connect_root_to_terminal(ptrA,2,13,2,14);
	result = connect_root_to_terminal(ptrA,1,14,1,15);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [8 to 7] */
/* Synchro [10 to 9] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 264 221 }{ 179 259 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 80 112 96 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 96 114 101 119 }*/
/* End Operation */

/* Begin Operation: { 125 20 133 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 120 114 125 119 }*/
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


Nat4 VPLU_Debug_20_State_2F_Set_20_Item_20_Breakpoint_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Set_20_Item_20_Breakpoint_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 279 761 }{ 406 359 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 54 35 59 }*/
/* IO - VPL Root : { 30 113 35 118 }*/
/* IO - VPL Root : { 30 176 35 181 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 164 248 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 248 176 253 181 }*/
/* End Operation */

/* Begin Operation: { 64 66 80 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Case Stack");
/* IO - VPL Terminal : { 59 105 64 110 }*/
/* IO - VPL Root : { 80 91 85 96 }*/
/* IO - VPL Root : { 80 118 85 123 }*/
/* End Operation */

/* Begin Operation: { 106 26 122 86 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Thread");
/* IO - VPL Terminal : { 101 54 106 59 }*/
/* IO - VPL Root : { 122 44 127 49 }*/
/* IO - VPL Root : { 122 64 127 69 }*/
/* End Operation */

/* Begin Operation: { 148 34 164 98 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 143 64 148 69 }*/
/* IO - VPL Root : { 164 53 169 58 }*/
/* IO - VPL Root : { 164 74 169 79 }*/
/* End Operation */

/* Begin Operation: { 190 31 206 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 185 74 190 79 }*/
/* IO - VPL Root : { 206 59 211 64 }*/
/* IO - VPL Root : { 206 89 211 94 }*/
/* End Operation */

/* Begin Operation: { 274 62 290 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Frame Breakpoint");
/* IO - VPL Terminal : { 269 89 274 94 }*/
/* IO - VPL Terminal : { 269 118 274 123 }*/
/* IO - VPL Terminal : { 269 147 274 152 }*/
/* IO - VPL Terminal : { 269 176 274 181 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 233 290 307 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Item");
/* IO - VPL Terminal : { 269 255 274 260 }*/
/* IO - VPL Terminal : { 269 279 274 284 }*/
/* IO - VPL Root : { 290 268 295 273 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 316 257 332 284 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 311 268 316 273 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 358 31 366 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,5,1,6);
	result = connect_root_to_terminal(ptrA,2,2,2,6);
	result = connect_root_to_terminal(ptrA,3,0,3,6);
	result = connect_root_to_terminal(ptrA,1,1,4,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,2,0,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [7 to 6] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 279 761 }{ 446 273 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 54 35 59 }*/
/* IO - VPL Root : { 30 113 35 118 }*/
/* IO - VPL Root : { 30 176 35 181 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 32 80 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Item");
/* IO - VPL Terminal : { 59 54 64 59 }*/
/* IO - VPL Terminal : { 59 78 64 83 }*/
/* IO - VPL Root : { 80 67 85 72 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 133 122 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 144 106 149 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 106 41 122 97 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 101 67 106 72 }*/
/* IO - VPL Root : { 122 57 127 62 }*/
/* IO - VPL Root : { 122 75 127 80 }*/
/* End Operation */

/* Begin Operation: { 148 26 164 86 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Thread");
/* IO - VPL Terminal : { 143 54 148 59 }*/
/* IO - VPL Root : { 164 44 169 49 }*/
/* IO - VPL Root : { 164 64 169 69 }*/
/* End Operation */

/* Begin Operation: { 190 34 206 98 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 185 64 190 69 }*/
/* IO - VPL Root : { 206 53 211 58 }*/
/* IO - VPL Root : { 206 74 211 79 }*/
/* End Operation */

/* Begin Operation: { 232 31 248 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 227 74 232 79 }*/
/* IO - VPL Root : { 248 59 253 64 }*/
/* IO - VPL Root : { 248 89 253 94 }*/
/* End Operation */

/* Begin Operation: { 274 47 290 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Breakpoints");
/* IO - VPL Terminal : { 269 89 274 94 }*/
/* IO - VPL Root : { 290 74 295 79 }*/
/* IO - VPL Root : { 290 103 295 108 }*/
/* End Operation */

/* Begin Operation: { 316 49 332 93 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(in)");
/* IO - VPL Terminal : { 311 61 316 66 }*/
/* IO - VPL Terminal : { 311 75 316 80 }*/
/* IO - VPL Root : { 332 69 337 74 }*/
/* End Operation */

/* Begin Operation: { 358 79 374 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Deal With Breakpoint");
/* IO - VPL Terminal : { 353 110 358 115 }*/
/* IO - VPL Terminal : { 353 143 358 148 }*/
/* IO - VPL Terminal : { 353 176 358 181 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 553 1092 }{ 64 322 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 292 1092 }{ 235 314 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 68 35 73 }*/
/* IO - VPL Root : { 30 116 35 121 }*/
/* IO - VPL Root : { 30 164 35 169 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 65 80 76 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 59 68 64 73 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 64 114 80 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Breakpoint");
/* IO - VPL Terminal : { 59 138 64 143 }*/
/* IO - VPL Terminal : { 59 164 64 169 }*/
/* IO - VPL Root : { 80 151 85 156 }*/
/* End Operation */

/* Begin Operation: { 109 101 125 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Update Record");
/* IO - VPL Terminal : { 104 151 109 156 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 233 122 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 122 248 127 253 }*/
/* End Operation */

/* Begin Operation: { 148 198 164 277 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Breakpoint");
/* IO - VPL Terminal : { 143 222 148 227 }*/
/* IO - VPL Terminal : { 143 248 148 253 }*/
/* IO - VPL Root : { 164 235 169 240 }*/
/* End Operation */

/* Begin Operation: { 190 47 198 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 400 31 408 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,5,1,6);
	result = connect_root_to_terminal(ptrA,2,6,1,7);
	result = connect_root_to_terminal(ptrA,2,7,1,8);
	result = connect_root_to_terminal(ptrA,2,3,2,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,2,3,2,9);
	result = connect_root_to_terminal(ptrA,3,0,3,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Debug_20_State_2F_Handle_20_Break_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Handle_20_Break_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 354 297 }{ 450 455 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 140 95 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Case Stack");
/* IO - VPL Terminal : { 72 181 77 186 }*/
/* IO - VPL Root : { 96 166 101 171 }*/
/* IO - VPL Root : { 96 194 101 199 }*/
/* End Operation */

/* Begin Operation: { 120 66 137 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Thread");
/* IO - VPL Terminal : { 114 97 119 102 }*/
/* IO - VPL Root : { 138 86 143 91 }*/
/* IO - VPL Root : { 138 108 143 113 }*/
/* End Operation */

/* Begin Operation: { 162 89 179 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 156 120 161 125 }*/
/* IO - VPL Root : { 180 109 185 114 }*/
/* IO - VPL Root : { 180 131 185 136 }*/
/* End Operation */

/* Begin Operation: { 204 82 221 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 198 129 203 134 }*/
/* IO - VPL Root : { 222 112 227 117 }*/
/* IO - VPL Root : { 222 144 227 149 }*/
/* End Operation */

/* Begin Operation: { 246 91 263 249 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Current Operation");
/* IO - VPL Terminal : { 240 141 245 146 }*/
/* IO - VPL Terminal : { 240 193 245 198 }*/
/* IO - VPL Root : { 264 168 269 173 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 288 158 305 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 282 168 287 173 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 288 63 305 115 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Case");
/* IO - VPL Terminal : { 282 87 287 92 }*/
/* IO - VPL Root : { 306 78 311 83 }*/
/* IO - VPL Root : { 306 95 311 100 }*/
/* End Operation */

/* Begin Operation: { 330 78 347 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 324 94 329 99 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 372 61 389 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Show Errors");
/* IO - VPL Terminal : { 366 109 371 114 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kContinue,kFailure);
/* End Operation */

/* Begin Operation: { 414 41 422 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,1,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,2,1,7);
	result = connect_root_to_terminal(ptrA,2,7,1,8);
	result = connect_root_to_terminal(ptrA,1,3,1,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [7 to 6] */
/* Synchro [9 to 8] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 354 297 }{ 197 268 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 105 73 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Current Item");
/* IO - VPL Terminal : { 52 163 57 168 }*/
/* IO - VPL Root : { 73 163 78 168 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 97 152 113 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 92 163 97 168 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 97 31 113 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close Editor");
/* IO - VPL Terminal : { 92 76 97 81 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 150 23 158 215 } */
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
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 354 297 }{ 318 306 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 113 35 118 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 86 80 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Thread");
/* IO - VPL Terminal : { 59 113 64 118 }*/
/* IO - VPL Root : { 80 103 85 108 }*/
/* IO - VPL Root : { 80 122 85 127 }*/
/* End Operation */

/* Begin Operation: { 106 173 122 260 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Main Thread");
/* IO - VPL Terminal : { 101 214 106 219 }*/
/* IO - VPL Root : { 122 200 127 205 }*/
/* IO - VPL Root : { 122 229 127 234 }*/
/* End Operation */

/* Begin Operation: { 148 154 164 250 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Show Errors");
/* IO - VPL Terminal : { 143 200 148 205 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 190 60 206 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Editor");
/* IO - VPL Terminal : { 185 103 190 108 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 51 248 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Frames");
/* IO - VPL Terminal : { 227 103 232 108 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 192 187 208 275 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Post Update");

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
/* End Operation */

/* Begin Operation: { 64 51 80 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Stack Service");
/* IO - VPL Root : { 80 109 85 114 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 106 50 122 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Post Menu Update");
/* IO - VPL Terminal : { 101 109 106 114 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 23 156 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
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

/* Begin Operation: { 232 178 248 284 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Yield To Thread");
/* IO - VPL Terminal : { 227 229 232 234 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 31 282 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,2,2,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* Synchro [5 to 4] */
/* Synchro [6 to 5] */
/* Synchro [7 to 6] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 400 458 }{ 150 291 } */
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


Nat4 VPLU_Debug_20_State_2F_Set_20_Editor_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Set_20_Editor_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 342 629 }{ 351 254 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 65 81 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Case Stack");
/* IO - VPL Terminal : { 60 103 65 108 }*/
/* IO - VPL Root : { 81 89 86 94 }*/
/* IO - VPL Root : { 81 115 86 120 }*/
/* End Operation */

/* Begin Operation: { 109 160 125 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 104 171 109 176 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 110 40 126 98 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Thread");
/* IO - VPL Terminal : { 105 67 110 72 }*/
/* IO - VPL Root : { 126 57 131 62 }*/
/* IO - VPL Root : { 126 76 131 81 }*/
/* End Operation */

/* Begin Operation: { 152 32 168 94 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 147 61 152 66 }*/
/* IO - VPL Root : { 168 50 173 55 }*/
/* IO - VPL Root : { 168 70 173 75 }*/
/* End Operation */

/* Begin Operation: { 203 28 219 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 198 70 203 75 }*/
/* IO - VPL Root : { 219 55 224 60 }*/
/* IO - VPL Root : { 219 84 224 89 }*/
/* End Operation */

/* Begin Operation: { 250 55 266 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Debug Window");
/* IO - VPL Terminal : { 245 84 250 89 }*/
/* IO - VPL Terminal : { 245 115 250 120 }*/
/* IO - VPL Terminal : { 245 146 250 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 298 17 306 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,5,1,6);
	result = connect_root_to_terminal(ptrA,2,1,2,6);
	result = connect_root_to_terminal(ptrA,2,0,3,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 342 879 }{ 107 290 } */
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



	return kNOERROR;
}


Nat4 VPLU_Debug_20_State_2F_Set_20_Current_20_Operation_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Set_20_Current_20_Operation_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 311 623 }{ 402 282 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 69 80 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Case Stack");
/* IO - VPL Terminal : { 59 107 64 112 }*/
/* IO - VPL Root : { 80 93 85 98 }*/
/* IO - VPL Root : { 80 119 85 124 }*/
/* End Operation */

/* Begin Operation: { 106 61 122 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Thread");
/* IO - VPL Terminal : { 101 88 106 93 }*/
/* IO - VPL Root : { 122 69 127 74 }*/
/* IO - VPL Root : { 122 97 127 102 }*/
/* End Operation */

/* Begin Operation: { 148 158 164 262 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Thread");
/* IO - VPL Terminal : { 143 208 148 213 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 58 164 109 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Stack");
/* IO - VPL Terminal : { 143 81 148 86 }*/
/* IO - VPL Root : { 164 73 169 78 }*/
/* IO - VPL Root : { 164 90 169 95 }*/
/* End Operation */

/* Begin Operation: { 190 52 206 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 185 81 190 86 }*/
/* IO - VPL Root : { 206 70 211 75 }*/
/* IO - VPL Root : { 206 90 211 95 }*/
/* End Operation */

/* Begin Operation: { 232 22 248 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 227 64 232 69 }*/
/* IO - VPL Root : { 248 49 253 54 }*/
/* IO - VPL Root : { 248 78 253 83 }*/
/* End Operation */

/* Begin Operation: { 274 34 290 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Current Operation");
/* IO - VPL Terminal : { 269 62 274 67 }*/
/* IO - VPL Terminal : { 269 90 274 95 }*/
/* IO - VPL Terminal : { 269 119 274 124 }*/
/* IO - VPL Terminal : { 269 148 274 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 316 17 332 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Frames");
/* IO - VPL Terminal : { 311 69 316 74 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 358 22 366 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,5,1,6);
	result = connect_root_to_terminal(ptrA,2,6,1,7);
	result = connect_root_to_terminal(ptrA,2,4,2,7);
	result = connect_root_to_terminal(ptrA,2,1,3,7);
	result = connect_root_to_terminal(ptrA,2,0,4,7);
	result = connect_root_to_terminal(ptrA,1,2,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* Synchro [8 to 7] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Debug_20_State_2F_Install_20_Frames_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Install_20_Frames_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 464 575 }{ 317 292 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 169 80 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Thread");
/* IO - VPL Terminal : { 59 197 64 202 }*/
/* IO - VPL Root : { 80 187 85 192 }*/
/* IO - VPL Root : { 80 207 85 212 }*/
/* End Operation */

/* Begin Operation: { 106 55 122 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Stack Frames");
/* IO - VPL Terminal : { 101 101 106 106 }*/
/* IO - VPL Root : { 122 85 127 90 }*/
/* IO - VPL Root : { 122 117 127 122 }*/
/* End Operation */

/* Begin Operation: { 106 165 122 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 101 187 106 192 }*/
/* IO - VPL Root : { 122 187 127 192 }*/
/* End Operation */

/* Begin Operation: { 147 156 163 257 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Move Up Stack");
/* IO - VPL Terminal : { 142 187 147 192 }*/
/* IO - VPL Terminal : { 142 220 147 225 }*/
/* IO - VPL Root : { 163 187 168 192 }*/
/* IO - VPL Root : { 163 220 168 225 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 172 260 }{ 49 321 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 172 1051 }{ 663 278 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 77 35 82 }*/
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 117 80 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Case Stack");
/* IO - VPL Terminal : { 59 155 64 160 }*/
/* IO - VPL Root : { 80 144 85 149 }*/
/* IO - VPL Root : { 80 167 85 172 }*/
/* End Operation */

/* Begin Operation: { 106 117 122 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Thread");
/* IO - VPL Terminal : { 101 144 106 149 }*/
/* IO - VPL Root : { 122 134 127 139 }*/
/* IO - VPL Root : { 122 153 127 158 }*/
/* End Operation */

/* Begin Operation: { 148 80 164 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 143 109 148 114 }*/
/* IO - VPL Root : { 164 98 169 103 }*/
/* IO - VPL Root : { 164 118 169 123 }*/
/* End Operation */

/* Begin Operation: { 190 76 206 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 185 118 190 123 }*/
/* IO - VPL Root : { 206 103 211 108 }*/
/* IO - VPL Root : { 206 132 211 137 }*/
/* End Operation */

/* Begin Operation: { 232 99 248 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Previous Case");
/* IO - VPL Terminal : { 227 132 232 137 }*/
/* IO - VPL Terminal : { 227 167 232 172 }*/
/* IO - VPL Root : { 248 115 253 120 }*/
/* IO - VPL Root : { 248 136 253 141 }*/
/* IO - VPL Root : { 248 157 253 162 }*/
/* IO - VPL Root : { 248 173 253 178 }*/
/* IO - VPL Root : { 248 191 253 196 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 155 291 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 269 167 274 172 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 274 35 290 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Debug State");
/* IO - VPL Terminal : { 269 75 274 80 }*/
/* IO - VPL Root : { 290 75 295 80 }*/
/* End Operation */

/* Begin Operation: { 316 65 332 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Case Stack");
/* IO - VPL Terminal : { 311 89 316 94 }*/
/* IO - VPL Terminal : { 311 115 316 120 }*/
/* IO - VPL Root : { 332 103 337 108 }*/
/* End Operation */

/* Begin Operation: { 358 108 374 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Case");
/* IO - VPL Terminal : { 353 121 358 126 }*/
/* IO - VPL Terminal : { 353 136 358 141 }*/
/* IO - VPL Root : { 374 129 379 134 }*/
/* End Operation */

/* Begin Operation: { 400 119 416 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Method");
/* IO - VPL Terminal : { 395 137 400 142 }*/
/* IO - VPL Terminal : { 395 157 400 162 }*/
/* IO - VPL Root : { 416 148 421 153 }*/
/* End Operation */

/* Begin Operation: { 442 121 458 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Case Index");
/* IO - VPL Terminal : { 437 146 442 151 }*/
/* IO - VPL Terminal : { 437 173 442 178 }*/
/* IO - VPL Root : { 458 160 463 165 }*/
/* End Operation */

/* Begin Operation: { 484 137 500 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Total Cases");
/* IO - VPL Terminal : { 479 163 484 168 }*/
/* IO - VPL Terminal : { 479 191 484 196 }*/
/* IO - VPL Root : { 500 178 505 183 }*/
/* End Operation */

/* Begin Operation: { 526 117 542 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Thread");
/* IO - VPL Terminal : { 521 134 526 139 }*/
/* IO - VPL Terminal : { 521 153 526 158 }*/
/* IO - VPL Root : { 542 144 547 149 }*/
/* End Operation */

/* Begin Operation: { 568 35 584 103 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-l");
/* IO - VPL Terminal : { 563 55 568 60 }*/
/* IO - VPL Terminal : { 563 77 568 82 }*/
/* IO - VPL Root : { 584 67 589 72 }*/
/* End Operation */

/* Begin Operation: { 610 22 618 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 605 76 610 81 }*/
/* IO - VPL Terminal : { 605 152 610 157 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,1,2,5);
	result = connect_root_to_terminal(ptrA,2,5,1,6);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,1,5,2,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,2,5,2,9);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
	result = connect_root_to_terminal(ptrA,3,5,2,10);
	result = connect_root_to_terminal(ptrA,1,10,1,11);
	result = connect_root_to_terminal(ptrA,4,5,2,11);
	result = connect_root_to_terminal(ptrA,1,11,1,12);
	result = connect_root_to_terminal(ptrA,5,5,2,12);
	result = connect_root_to_terminal(ptrA,1,12,1,13);
	result = connect_root_to_terminal(ptrA,2,2,2,13);
	result = connect_root_to_terminal(ptrA,1,13,1,14);
	result = connect_root_to_terminal(ptrA,1,0,2,14);
	result = connect_root_to_terminal(ptrA,1,14,1,15);
	result = connect_root_to_terminal(ptrA,1,13,2,15);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [7 to 6] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 186 332 }{ 156 264 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 137 80 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 80 148 85 153 }*/
/* End Operation */

/* Begin Operation: { 106 22 114 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 101 84 106 89 }*/
/* IO - VPL Terminal : { 101 148 106 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
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

/* Begin Operation: { 190 105 206 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"List");
/* IO - VPL Terminal : { 185 117 190 122 }*/
/* IO - VPL Terminal : { 185 131 190 136 }*/
/* IO - VPL Root : { 206 125 211 130 }*/
/* End Operation */

/* Begin Operation: { 232 76 248 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Send Refresh");
/* IO - VPL Terminal : { 227 125 232 130 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 32 282 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,2,4,2,4);
	result = connect_root_to_terminal(ptrA,2,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Debug_20_State_2F_In_20_Current_20_Stack_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_In_20_Current_20_Stack_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 219 200 }{ 391 273 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 23 80 83 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Thread");
/* IO - VPL Terminal : { 59 51 64 56 }*/
/* IO - VPL Root : { 80 41 85 46 }*/
/* IO - VPL Root : { 80 61 85 66 }*/
/* End Operation */

/* Begin Operation: { 106 15 122 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Stack Frames");
/* IO - VPL Terminal : { 101 61 106 66 }*/
/* IO - VPL Root : { 122 45 127 50 }*/
/* IO - VPL Root : { 122 77 127 82 }*/
/* End Operation */

/* Begin Operation: { 148 40 164 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Has Case Stack?");
/* IO - VPL Terminal : { 143 77 148 82 }*/
/* IO - VPL Terminal : { 143 116 148 121 }*/
/* IO - VPL Root : { 164 97 169 102 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 82 206 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"FALSE");
/* IO - VPL Terminal : { 185 97 190 102 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 232 33 248 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Frame is not in current stack!");
/* IO - VPL Root : { 248 114 253 119 }*/
/* End Operation */

/* Begin Operation: { 274 91 290 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"show");
/* IO - VPL Terminal : { 269 114 274 119 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 316 23 324 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [5 to 4] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Debug_20_State_2F_Remove_20_View_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Remove_20_View_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 77 33 82 }*/
/* IO - VPL Root : { 28 160 33 165 }*/
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


Nat4 VPLU_Debug_20_State_2F_Continue_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Continue_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 234 299 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 111 35 116 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 84 80 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Thread");
/* IO - VPL Terminal : { 59 111 64 116 }*/
/* IO - VPL Root : { 80 101 85 106 }*/
/* IO - VPL Root : { 80 120 85 125 }*/
/* End Operation */

/* Begin Operation: { 106 70 122 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Thread");
/* IO - VPL Terminal : { 101 120 106 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 56 164 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close Editor");
/* IO - VPL Terminal : { 143 101 148 106 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 23 198 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Debug_20_State_2F_Step_20_Into_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Step_20_Into_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 185 987 }{ 386 460 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 117 35 122 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 231 80 289 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Thread");
/* IO - VPL Terminal : { 59 258 64 263 }*/
/* IO - VPL Root : { 80 248 85 253 }*/
/* IO - VPL Root : { 80 267 85 272 }*/
/* End Operation */

/* Begin Operation: { 106 340 122 402 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 101 369 106 374 }*/
/* IO - VPL Root : { 122 358 127 363 }*/
/* IO - VPL Root : { 122 378 127 383 }*/
/* End Operation */

/* Begin Operation: { 148 336 164 424 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 143 378 148 383 }*/
/* IO - VPL Root : { 164 363 169 368 }*/
/* IO - VPL Root : { 164 392 169 397 }*/
/* End Operation */

/* Begin Operation: { 190 355 206 434 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Step Into");
/* IO - VPL Terminal : { 185 392 190 397 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 217 206 321 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Thread");
/* IO - VPL Terminal : { 185 267 190 272 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 72 206 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Current Index");
/* IO - VPL Terminal : { 185 132 190 137 }*/
/* IO - VPL Root : { 206 132 211 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 101 248 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"plus-one");
/* IO - VPL Terminal : { 227 132 232 137 }*/
/* IO - VPL Root : { 248 132 253 137 }*/
/* End Operation */

/* Begin Operation: { 232 184 248 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 248 196 253 201 }*/
/* End Operation */

/* Begin Operation: { 274 66 290 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Item Breakpoint");
/* IO - VPL Terminal : { 269 98 274 103 }*/
/* IO - VPL Terminal : { 269 132 274 137 }*/
/* IO - VPL Terminal : { 269 166 274 171 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 316 27 324 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,1,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,1,7,2,9);
	result = connect_root_to_terminal(ptrA,1,8,3,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [5 to 4] */
/* Synchro [6 to 5] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 271 476 }{ 251 272 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 71 80 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close Editor");
/* IO - VPL Terminal : { 59 116 64 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 27 114 219 } */
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


Nat4 VPLU_Debug_20_State_2F_Step_20_Out_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Step_20_Out_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 445 543 }{ 311 335 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 117 35 122 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 90 80 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Thread");
/* IO - VPL Terminal : { 59 117 64 122 }*/
/* IO - VPL Root : { 80 107 85 112 }*/
/* IO - VPL Root : { 80 126 85 131 }*/
/* End Operation */

/* Begin Operation: { 64 202 80 282 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Case Stack");
/* IO - VPL Terminal : { 59 240 64 245 }*/
/* IO - VPL Root : { 80 226 85 231 }*/
/* IO - VPL Root : { 80 252 85 257 }*/
/* End Operation */

/* Begin Operation: { 106 175 122 237 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 101 204 106 209 }*/
/* IO - VPL Root : { 122 193 127 198 }*/
/* IO - VPL Root : { 122 213 127 218 }*/
/* End Operation */

/* Begin Operation: { 148 171 164 259 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 143 213 148 218 }*/
/* IO - VPL Root : { 164 198 169 203 }*/
/* IO - VPL Root : { 164 227 169 232 }*/
/* End Operation */

/* Begin Operation: { 190 204 206 280 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Step Out");
/* IO - VPL Terminal : { 185 227 190 232 }*/
/* IO - VPL Terminal : { 185 252 190 257 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 76 206 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Thread");
/* IO - VPL Terminal : { 185 126 190 131 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 62 248 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close Editor");
/* IO - VPL Terminal : { 227 107 232 112 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 26 282 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,2,2,5);
	result = connect_root_to_terminal(ptrA,2,1,1,6);
	result = connect_root_to_terminal(ptrA,1,1,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [6 to 5] */
/* Synchro [7 to 6] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Debug_20_State_2F_Step_20_Skip_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Step_20_Skip_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 296 194 }{ 476 287 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 85 35 90 }*/
/* IO - VPL Root : { 30 161 35 166 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 35 80 93 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Thread");
/* IO - VPL Terminal : { 59 62 64 67 }*/
/* IO - VPL Root : { 80 52 85 57 }*/
/* IO - VPL Root : { 80 71 85 76 }*/
/* End Operation */

/* Begin Operation: { 232 85 248 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Case Stack");
/* IO - VPL Terminal : { 227 123 232 128 }*/
/* IO - VPL Root : { 248 109 253 114 }*/
/* IO - VPL Root : { 248 135 253 140 }*/
/* End Operation */

/* Begin Operation: { 148 108 164 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 164 120 169 125 }*/
/* End Operation */

/* Begin Operation: { 63 109 79 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Current Index");
/* IO - VPL Terminal : { 58 169 63 174 }*/
/* IO - VPL Root : { 79 169 84 174 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 107 146 123 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 102 156 107 161 }*/
/* IO - VPL Terminal : { 102 168 107 173 }*/
/* IO - VPL Root : { 123 163 128 168 }*/
/* End Operation */

/* Begin Operation: { 190 20 206 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Item Breakpoint");
/* IO - VPL Terminal : { 185 52 190 57 }*/
/* IO - VPL Terminal : { 185 86 190 91 }*/
/* IO - VPL Terminal : { 185 120 190 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 274 141 290 245 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Thread");
/* IO - VPL Terminal : { 269 191 274 196 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 74 290 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Stack");
/* IO - VPL Terminal : { 269 73 274 78 }*/
/* IO - VPL Root : { 290 89 295 94 }*/
/* IO - VPL Root : { 290 106 295 111 }*/
/* End Operation */

/* Begin Operation: { 316 25 332 87 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 311 54 316 59 }*/
/* IO - VPL Root : { 332 43 337 48 }*/
/* IO - VPL Root : { 332 63 337 68 }*/
/* End Operation */

/* Begin Operation: { 358 22 374 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 353 64 358 69 }*/
/* IO - VPL Root : { 374 49 379 54 }*/
/* IO - VPL Root : { 374 78 379 83 }*/
/* End Operation */

/* Begin Operation: { 400 50 416 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Current Operation");
/* IO - VPL Terminal : { 395 77 400 82 }*/
/* IO - VPL Terminal : { 395 106 400 111 }*/
/* IO - VPL Terminal : { 395 135 400 140 }*/
/* IO - VPL Terminal : { 395 164 400 169 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 442 22 450 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,0,2,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,3,3,6);
	result = connect_root_to_terminal(ptrA,2,1,1,7);
	result = connect_root_to_terminal(ptrA,2,1,1,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,2,9,1,10);
	result = connect_root_to_terminal(ptrA,2,10,1,11);
	result = connect_root_to_terminal(ptrA,2,8,2,11);
	result = connect_root_to_terminal(ptrA,2,2,3,11);
	result = connect_root_to_terminal(ptrA,1,5,4,11);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [7 to 6] */
/* Synchro [8 to 7] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 514 473 }{ 157 285 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 83 80 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Beep");
/* End Operation */

/* Begin Operation: { 106 23 114 215 } */
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


Nat4 VPLU_Debug_20_State_2F_Step_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Step_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 128 472 }{ 283 356 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 117 35 122 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 231 80 289 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Thread");
/* IO - VPL Terminal : { 59 258 64 263 }*/
/* IO - VPL Root : { 80 248 85 253 }*/
/* IO - VPL Root : { 80 267 85 272 }*/
/* End Operation */

/* Begin Operation: { 106 217 122 321 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Thread");
/* IO - VPL Terminal : { 101 267 106 272 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 74 122 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Current Index");
/* IO - VPL Terminal : { 101 134 106 139 }*/
/* IO - VPL Root : { 122 134 127 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 103 164 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"plus-one");
/* IO - VPL Terminal : { 143 134 148 139 }*/
/* IO - VPL Root : { 164 134 169 139 }*/
/* End Operation */

/* Begin Operation: { 148 197 164 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 164 209 169 214 }*/
/* End Operation */

/* Begin Operation: { 190 68 206 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Item Breakpoint");
/* IO - VPL Terminal : { 185 100 190 105 }*/
/* IO - VPL Terminal : { 185 134 190 139 }*/
/* IO - VPL Terminal : { 185 168 190 173 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 232 27 240 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,4,2,6);
	result = connect_root_to_terminal(ptrA,1,5,3,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 128 816 }{ 159 283 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 71 80 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close Editor");
/* IO - VPL Terminal : { 59 116 64 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 27 114 219 } */
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


Nat4 VPLU_Debug_20_State_2F_Clear_20_Breakpoints_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Clear_20_Breakpoints_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 348 328 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 66 80 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Case");
/* IO - VPL Terminal : { 59 88 64 93 }*/
/* IO - VPL Root : { 80 80 85 85 }*/
/* IO - VPL Root : { 80 96 85 101 }*/
/* End Operation */

/* Begin Operation: { 106 69 122 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 101 96 106 101 }*/
/* IO - VPL Root : { 122 86 127 91 }*/
/* IO - VPL Root : { 122 105 127 110 }*/
/* End Operation */

/* Begin Operation: { 148 78 164 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 143 105 148 110 }*/
/* IO - VPL Root : { 164 95 169 100 }*/
/* IO - VPL Root : { 164 114 169 119 }*/
/* End Operation */

/* Begin Operation: { 190 49 206 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get All Breakpoints");
/* IO - VPL Terminal : { 185 114 190 119 }*/
/* IO - VPL Root : { 206 113 211 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 39 248 56 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 227 45 232 50 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 190 202 206 237 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 206 217 211 222 }*/
/* End Operation */

/* Begin Operation: { 232 127 249 267 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Change Breakpoint");
/* IO - VPL Terminal : { 226 171 231 176 }*/
/* IO - VPL Terminal : { 226 217 231 222 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 274 22 282 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
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


Nat4 VPLU_Debug_20_State_2F_Abort_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Abort_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 64 83 80 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Debug Abort");
/* IO - VPL Root : { 80 115 85 120 }*/
/* End Operation */

/* Begin Operation: { 106 72 122 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug Unimp");
/* IO - VPL Terminal : { 101 115 106 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
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


Nat4 VPLU_Debug_20_State_2F_Get_20_All_20_Breakpoints_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Get_20_All_20_Breakpoints_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 279 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 113 35 118 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 91 80 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Case");
/* IO - VPL Terminal : { 59 113 64 118 }*/
/* IO - VPL Root : { 80 105 85 110 }*/
/* IO - VPL Root : { 80 121 85 126 }*/
/* End Operation */

/* Begin Operation: { 106 94 122 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 101 121 106 126 }*/
/* IO - VPL Root : { 122 111 127 116 }*/
/* IO - VPL Root : { 122 130 127 135 }*/
/* End Operation */

/* Begin Operation: { 148 103 164 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 143 130 148 135 }*/
/* IO - VPL Root : { 164 120 169 125 }*/
/* IO - VPL Root : { 164 139 169 144 }*/
/* End Operation */

/* Begin Operation: { 190 74 206 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get All Breakpoints");
/* IO - VPL Terminal : { 185 139 190 144 }*/
/* IO - VPL Root : { 206 138 211 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 23 240 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 115 232 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Debug_20_State_2F_Have_20_Row_20_Values_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Have_20_Row_20_Values_3F__universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 90 67 106 102 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 106 82 111 87 }*/
/* End Operation */

/* Begin Operation: { 90 134 106 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 106 146 111 151 }*/
/* End Operation */

/* Begin Operation: { 135 20 143 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 130 82 135 87 }*/
/* IO - VPL Terminal : { 130 146 135 151 }*/
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


Nat4 VPLU_Debug_20_State_2F_Have_20_Icon_20_Values_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Debug_20_State_2F_Have_20_Icon_20_Values_3F__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 276 318 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 113 35 118 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 91 80 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Case");
/* IO - VPL Terminal : { 59 113 64 118 }*/
/* IO - VPL Root : { 80 105 85 110 }*/
/* IO - VPL Root : { 80 121 85 126 }*/
/* End Operation */

/* Begin Operation: { 106 47 122 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Grandparent Helper");
/* IO - VPL Terminal : { 101 121 106 126 }*/
/* IO - VPL Root : { 122 120 127 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 57 164 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Have Icon Values?");
/* IO - VPL Terminal : { 143 120 148 125 }*/
/* IO - VPL Root : { 164 84 169 89 }*/
/* IO - VPL Root : { 164 146 169 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 22 198 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 71 190 76 }*/
/* IO - VPL Terminal : { 185 166 190 171 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_Thread_20_Task_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Thread_20_Task_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 351 367 }{ 59 320 } */
Nat4 VPLU_Thread_20_Task_2F_Perform_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Thread_20_Task_2F_Perform_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 128 276 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 74 33 79 }*/
/* IO - VPL Root : { 28 147 33 152 }*/
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



Nat4 VPLC_Interpreter_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Interpreter_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 430 366 }{ 200 300 } */
	tempAttribute = attribute_add("Project",tempClass,NULL,environment);
	tempAttribute = attribute_add("Environment",tempClass,NULL,environment);
	tempAttribute = attribute_add("Write Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Read Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Write Descriptor",tempClass,NULL,environment);
	tempAttribute = attribute_add("Read Descriptor",tempClass,NULL,environment);
	tempAttribute = attribute_add("File",tempClass,NULL,environment);
	tempAttribute = attribute_add("Breakpoints",tempClass,tempAttribute_Interpreter_2F_Breakpoints,environment);
	tempAttribute = attribute_add("Threads",tempClass,tempAttribute_Interpreter_2F_Threads,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 45 400 }{ 804 349 } */
Nat4 VPLU_Interpreter_2F_Open_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Open_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 226 748 }{ 500 411 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 36 95 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"process mode?");
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);

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

/* Start Operations: { 386 73 }{ 206 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 72 95 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_persistent(tempOperation,environment,"Interpreter Mode");
/* IO - VPL Root : { 96 131 101 136 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 108 137 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Process");
/* IO - VPL Terminal : { 114 131 119 136 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
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

/* Begin Operation: { 78 175 95 307 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Get Interpreter Host");
/* IO - VPL Terminal : { 72 217 77 222 }*/
/* IO - VPL Terminal : { 72 261 77 266 }*/
/* IO - VPL Root : { 96 192 101 197 }*/
/* IO - VPL Root : { 96 238 101 243 }*/
/* IO - VPL Root : { 96 284 101 289 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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

/* Start Operations: { 240 463 }{ 357 279 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 162 95 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 96 178 101 183 }*/
/* End Operation */

/* Begin Operation: { 120 52 137 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_persistent(tempOperation,environment,"Interpreter Remote Port");
/* IO - VPL Root : { 138 130 143 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 51 95 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"picked?");
/* IO - VPL Terminal : { 72 82 77 87 }*/
/* IO - VPL Root : { 96 82 101 87 }*/
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

/* Start Operations: { 260 483 }{ 332 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 85 50 90 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 107 95 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Host");
/* IO - VPL Root : { 96 121 101 126 }*/
/* End Operation */

/* Begin Operation: { 120 51 137 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Key Value");
/* IO - VPL Terminal : { 114 85 119 90 }*/
/* IO - VPL Terminal : { 114 121 119 126 }*/
/* IO - VPL Root : { 138 104 143 109 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 162 112 179 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 156 149 161 154 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 204 56 221 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Connect Address");
/* IO - VPL Terminal : { 198 104 203 109 }*/
/* IO - VPL Terminal : { 198 154 203 159 }*/
/* IO - VPL Root : { 222 130 227 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 246 138 263 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"$local");
/* IO - VPL Terminal : { 240 156 245 161 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 288 36 296 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 282 130 287 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 260 483 }{ 164 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 114 95 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 96 130 101 135 }*/
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 130 119 135 }*/
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

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 82 161 87 }*/
/* IO - VPL Terminal : { 156 130 161 135 }*/
/* IO - VPL Terminal : { 156 178 161 183 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,1,3,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 240 463 }{ 248 269 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 73 95 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"use setting file?");
/* IO - VPL Terminal : { 72 162 77 167 }*/
/* IO - VPL Root : { 96 107 101 112 }*/
/* IO - VPL Root : { 96 143 101 148 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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

/* Start Operations: { 251 688 }{ 248 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 90 95 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"have a file?");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 97 101 102 }*/
/* IO - VPL Root : { 96 162 101 167 }*/
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

/* Start Operations: { 271 708 }{ 374 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 102 50 107 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 110 95 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"remote");
/* IO - VPL Root : { 96 131 101 136 }*/
/* End Operation */

/* Begin Operation: { 78 172 95 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"text");
/* IO - VPL Root : { 96 184 101 189 }*/
/* End Operation */

/* Begin Operation: { 120 75 137 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Load Key Value");
/* IO - VPL Terminal : { 114 102 119 107 }*/
/* IO - VPL Terminal : { 114 131 119 136 }*/
/* IO - VPL Terminal : { 114 160 119 165 }*/
/* IO - VPL Root : { 138 132 143 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 162 103 179 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Trim\"");
/* IO - VPL Terminal : { 156 132 161 137 }*/
/* IO - VPL Root : { 180 132 185 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 77 221 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"split off scratch?");
/* IO - VPL Terminal : { 198 132 203 137 }*/
/* IO - VPL Root : { 222 132 227 137 }*/
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

/* Start Operations: { 443 674 }{ 248 274 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 83 95 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"###END#OF#HOSTS###\"");
/* IO - VPL Root : { 96 156 101 161 }*/
/* End Operation */

/* Begin Operation: { 120 106 137 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Split At\"");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Terminal : { 114 156 119 161 }*/
/* IO - VPL Root : { 138 123 143 128 }*/
/* IO - VPL Root : { 138 142 143 147 }*/
/* IO - VPL Root : { 138 161 143 166 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 162 94 179 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Trim\"");
/* IO - VPL Terminal : { 156 123 161 128 }*/
/* IO - VPL Root : { 180 123 185 128 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 130 203 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 443 674 }{ 122 264 } */
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

/* Begin Operation: { 246 95 263 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"do ask?");
/* IO - VPL Terminal : { 240 132 245 137 }*/
/* IO - VPL Root : { 264 98 269 103 }*/
/* IO - VPL Root : { 264 162 269 167 }*/
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

/* Start Operations: { 202 284 }{ 248 269 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 88 95 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"###ASK#FOR#HOST###");
/* IO - VPL Root : { 96 156 101 161 }*/
/* End Operation */

/* Begin Operation: { 120 106 137 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Split At\"");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Terminal : { 114 156 119 161 }*/
/* IO - VPL Root : { 138 123 143 128 }*/
/* IO - VPL Root : { 138 142 143 147 }*/
/* IO - VPL Root : { 138 161 143 166 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 162 94 179 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Trim\"");
/* IO - VPL Terminal : { 156 123 161 128 }*/
/* IO - VPL Root : { 180 123 185 128 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 174 179 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 180 190 185 195 }*/
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 130 203 135 }*/
/* IO - VPL Terminal : { 198 190 203 195 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 202 284 }{ 164 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 144 95 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 96 162 101 167 }*/
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 98 119 103 }*/
/* IO - VPL Terminal : { 114 162 119 167 }*/
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

/* Begin Operation: { 288 53 305 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"from-string");
/* IO - VPL Terminal : { 282 98 287 103 }*/
/* IO - VPL Root : { 306 98 311 103 }*/
/* End Operation */

/* Begin Operation: { 330 36 338 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 324 98 329 103 }*/
/* IO - VPL Terminal : { 324 162 329 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,2,6,2,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 271 708 }{ 164 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 146 95 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 96 162 101 167 }*/
/* End Operation */

/* Begin Operation: { 78 88 95 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
/* IO - VPL Root : { 96 98 101 103 }*/
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 98 119 103 }*/
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

/* Begin Operation: { 120 55 137 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"check types");
/* IO - VPL Terminal : { 114 97 119 102 }*/
/* IO - VPL Root : { 138 97 143 102 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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

/* Start Operations: { 60 60 }{ 164 269 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 183 95 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"list?");
/* IO - VPL Terminal : { 72 206 77 211 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 97 95 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Check\"");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,1,iList);
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
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 164 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 99 95 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 72 130 77 135 }*/
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
	result = connect_root_to_terminal(ptrA,1,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 39 179 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"select mechanism");
/* IO - VPL Terminal : { 156 97 161 102 }*/
/* IO - VPL Root : { 180 98 185 103 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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

/* Start Operations: { 439 338 }{ 343 428 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 138 50 143 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 36 95 86 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"list?");
/* IO - VPL Terminal : { 72 59 77 64 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 36 137 336 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( \"Use Local Interpreter\" \"Specify Remote Address\" )");
/* IO - VPL Root : { 138 120 143 125 }*/
/* End Operation */

/* Begin Operation: { 78 120 95 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"known listeners");
/* IO - VPL Root : { 96 154 101 159 }*/
/* IO - VPL Root : { 96 190 101 195 }*/
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

/* Start Operations: { 522 564 }{ 206 300 } */
/* Begin Operation: { 36 44 44 236 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 110 95 264 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get CFNetwork Service");
/* IO - VPL Root : { 96 185 101 190 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 36 137 240 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Interpreter Display Names");
/* IO - VPL Terminal : { 114 136 119 141 }*/
/* IO - VPL Root : { 138 136 143 141 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 42 170 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 136 161 141 }*/
/* IO - VPL Terminal : { 156 185 161 190 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 522 564 }{ 164 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 120 95 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
/* IO - VPL Root : { 96 130 101 135 }*/
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 98 119 103 }*/
/* IO - VPL Terminal : { 114 162 119 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Begin Operation: { 162 104 179 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"(join)");
/* IO - VPL Terminal : { 156 120 161 125 }*/
/* IO - VPL Terminal : { 156 138 161 143 }*/
/* IO - VPL Terminal : { 156 154 161 159 }*/
/* IO - VPL Root : { 180 120 185 125 }*/
/* End Operation */

/* Begin Operation: { 162 179 179 393 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Please select an interpreter machine:");
/* IO - VPL Root : { 180 284 185 289 }*/
/* End Operation */

/* Begin Operation: { 204 103 221 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"select");
/* IO - VPL Terminal : { 198 120 203 125 }*/
/* IO - VPL Terminal : { 198 139 203 144 }*/
/* IO - VPL Root : { 222 130 227 135 }*/
/* End Operation */

/* Begin Operation: { 246 124 263 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"replace name?");
/* IO - VPL Terminal : { 240 156 245 161 }*/
/* IO - VPL Terminal : { 240 190 245 195 }*/
/* IO - VPL Root : { 264 173 269 178 }*/
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

/* Start Operations: { 60 60 }{ 206 316 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 244 95 280 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 72 260 77 265 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 78 53 95 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Interpreter Name");
/* IO - VPL Terminal : { 72 103 77 108 }*/
/* IO - VPL Terminal : { 72 155 77 160 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 87 137 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"might miss?");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Root : { 138 130 143 135 }*/
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

/* Start Operations: { 80 80 }{ 206 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 104 50 109 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 122 95 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Interpreter");
/* IO - VPL Root : { 96 154 101 159 }*/
/* End Operation */

/* Begin Operation: { 120 56 137 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Connect Address");
/* IO - VPL Terminal : { 114 104 119 109 }*/
/* IO - VPL Terminal : { 114 154 119 159 }*/
/* IO - VPL Root : { 138 130 143 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 80 80 }{ 164 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 114 95 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 96 130 101 135 }*/
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 130 119 135 }*/
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

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 130 161 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 122 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
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

/* Begin Operation: { 288 36 296 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 282 130 287 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,0,2,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,2,3,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 439 338 }{ 122 264 } */
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
	result = connect_root_to_terminal(ptrA,2,1,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 73 137 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"find an address");
/* IO - VPL Terminal : { 114 107 119 112 }*/
/* IO - VPL Terminal : { 114 143 119 148 }*/
/* IO - VPL Root : { 138 88 143 93 }*/
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

/* Start Operations: { 417 334 }{ 206 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 38 95 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Use Local Interpreter");
/* IO - VPL Terminal : { 72 98 77 103 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 113 137 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 138 129 143 134 }*/
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
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 417 334 }{ 248 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
/* IO - VPL Root : { 45 169 50 174 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 107 95 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"forced?");
/* IO - VPL Terminal : { 72 126 77 131 }*/
/* IO - VPL Terminal : { 72 147 77 152 }*/
/* IO - VPL Root : { 96 137 101 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);

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

/* Start Operations: { 237 268 }{ 206 312 } */
/* Begin Operation: { 36 36 44 255 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 110 50 115 }*/
/* IO - VPL Root : { 45 237 50 242 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 221 95 257 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 72 237 77 242 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 78 36 95 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\"Specify Remote Address\"");
/* IO - VPL Terminal : { 72 110 77 115 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 120 102 137 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"host.local");
/* IO - VPL Root : { 138 130 143 135 }*/
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 130 161 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 237 268 }{ 242 298 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 76 95 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\"Specify Remote Address\"");
/* IO - VPL Terminal : { 72 150 77 155 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
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
	result = connect_root_to_terminal(ptrA,1,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 237 268 }{ 164 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 97 95 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"host.local\"");
/* IO - VPL Root : { 96 130 101 135 }*/
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 130 119 135 }*/
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

/* Begin Operation: { 120 41 137 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Please enter a host address:");
/* IO - VPL Root : { 138 122 143 127 }*/
/* End Operation */

/* Begin Operation: { 162 109 179 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"ask");
/* IO - VPL Terminal : { 156 122 161 127 }*/
/* IO - VPL Terminal : { 156 137 161 142 }*/
/* IO - VPL Root : { 180 130 185 135 }*/
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 130 203 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 417 334 }{ 248 266 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 135 95 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\".\"");
/* IO - VPL Root : { 96 145 101 150 }*/
/* End Operation */

/* Begin Operation: { 120 117 137 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"in\"");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Terminal : { 114 145 119 150 }*/
/* IO - VPL Root : { 138 138 143 143 }*/
/* End Operation */

/* Begin Operation: { 162 128 179 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 156 138 161 143 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 204 38 212 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 98 203 103 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 417 334 }{ 164 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 114 95 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 96 130 101 135 }*/
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 130 119 135 }*/
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

/* Begin Operation: { 120 197 137 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 138 213 143 218 }*/
/* End Operation */

/* Begin Operation: { 162 55 179 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_persistent(tempOperation,environment,"Interpreter Remote Port");
/* IO - VPL Root : { 180 133 185 138 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 39 212 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 88 203 93 }*/
/* IO - VPL Terminal : { 198 133 203 138 }*/
/* IO - VPL Terminal : { 198 213 203 218 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,3,3,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 240 463 }{ 248 285 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 44 95 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"select mechanism");
/* IO - VPL Root : { 96 103 101 108 }*/
	tempRoot = output_insert(0,tempOperation,environment);
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

/* Start Operations: { 439 338 }{ 332 372 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 43 137 267 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Interpreter Remote Known Addresses");
/* IO - VPL Root : { 138 153 143 158 }*/
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
/* End Operation */

/* Begin Operation: { 120 120 137 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
/* IO - VPL Root : { 138 130 143 135 }*/
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 130 161 135 }*/
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

/* Begin Operation: { 78 36 95 336 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( \"Use Local Interpreter\" \"Specify Remote Address\" )");
/* IO - VPL Root : { 96 120 101 125 }*/
/* End Operation */

/* Begin Operation: { 162 104 179 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(join)");
/* IO - VPL Terminal : { 156 120 161 125 }*/
/* IO - VPL Terminal : { 156 138 161 143 }*/
/* IO - VPL Root : { 180 130 185 135 }*/
/* End Operation */

/* Begin Operation: { 204 103 221 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"select");
/* IO - VPL Terminal : { 198 130 203 135 }*/
/* IO - VPL Root : { 222 130 227 135 }*/
/* End Operation */

/* Begin Operation: { 246 141 263 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 240 157 245 162 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 288 36 296 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 282 130 287 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 51 137 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"find an address");
/* IO - VPL Terminal : { 114 103 119 108 }*/
/* IO - VPL Root : { 138 103 143 108 }*/
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

/* Start Operations: { 217 248 }{ 290 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 56 95 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\"Specify Remote Address\"");
/* IO - VPL Terminal : { 72 130 77 135 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 41 137 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Please enter a host address:");
/* IO - VPL Root : { 138 122 143 127 }*/
/* End Operation */

/* Begin Operation: { 162 99 179 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"192.168.1.77");
/* IO - VPL Root : { 180 137 185 142 }*/
/* End Operation */

/* Begin Operation: { 204 109 221 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"ask");
/* IO - VPL Terminal : { 198 122 203 127 }*/
/* IO - VPL Terminal : { 198 137 203 142 }*/
/* IO - VPL Root : { 222 130 227 135 }*/
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 240 130 245 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 217 248 }{ 248 266 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 135 95 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\".\"");
/* IO - VPL Root : { 96 145 101 150 }*/
/* End Operation */

/* Begin Operation: { 120 117 137 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"in\"");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Terminal : { 114 145 119 150 }*/
/* IO - VPL Root : { 138 138 143 143 }*/
/* End Operation */

/* Begin Operation: { 162 128 179 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 156 138 161 143 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 204 38 212 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 130 203 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 217 248 }{ 164 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 114 95 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 96 130 101 135 }*/
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 130 119 135 }*/
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

/* Begin Operation: { 120 183 137 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 138 199 143 204 }*/
/* End Operation */

/* Begin Operation: { 162 73 179 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_persistent(tempOperation,environment,"Interpreter Remote Port");
/* IO - VPL Root : { 180 151 185 156 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 57 212 249 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 103 203 108 }*/
/* IO - VPL Terminal : { 198 151 203 156 }*/
/* IO - VPL Terminal : { 198 199 203 204 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,3,3,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 176 137 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 114 192 119 197 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 162 54 179 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 156 74 161 79 }*/
/* IO - VPL Terminal : { 156 96 161 101 }*/
/* IO - VPL Root : { 180 85 185 90 }*/
/* End Operation */

/* Begin Operation: { 162 148 179 334 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,3,"create-remote-environment");
/* IO - VPL Terminal : { 156 192 161 197 }*/
/* IO - VPL Terminal : { 156 238 161 243 }*/
/* IO - VPL Terminal : { 156 284 161 289 }*/
/* IO - VPL Root : { 180 192 185 197 }*/
/* IO - VPL Root : { 180 238 185 243 }*/
/* IO - VPL Root : { 180 284 185 289 }*/
	tempOperation = operation_breakpoint_to(tempOperation,environment,kTRUE);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 204 88 221 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 198 118 203 123 }*/
/* IO - VPL Terminal : { 198 150 203 155 }*/
/* IO - VPL Root : { 222 135 227 140 }*/
/* End Operation */

/* Begin Operation: { 204 202 221 258 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"remote\"");
/* IO - VPL Root : { 222 228 227 233 }*/
/* End Operation */

/* Begin Operation: { 246 106 263 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Write Name");
/* IO - VPL Terminal : { 240 134 245 139 }*/
/* IO - VPL Terminal : { 240 164 245 169 }*/
/* IO - VPL Root : { 264 150 269 155 }*/
/* End Operation */

/* Begin Operation: { 288 127 305 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Read Name");
/* IO - VPL Terminal : { 282 155 287 160 }*/
/* IO - VPL Terminal : { 282 185 287 190 }*/
/* IO - VPL Root : { 306 170 311 175 }*/
/* End Operation */

/* Begin Operation: { 330 162 347 280 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 324 199 329 204 }*/
/* IO - VPL Terminal : { 324 238 329 243 }*/
/* IO - VPL Root : { 348 219 353 224 }*/
/* End Operation */

/* Begin Operation: { 372 208 389 326 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 366 245 371 250 }*/
/* IO - VPL Terminal : { 366 284 371 289 }*/
/* IO - VPL Root : { 390 265 395 270 }*/
/* End Operation */

/* Begin Operation: { 372 342 389 378 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 390 358 395 363 }*/
/* End Operation */

/* Begin Operation: { 414 330 431 376 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"File");
/* IO - VPL Terminal : { 408 343 413 348 }*/
/* IO - VPL Terminal : { 408 358 413 363 }*/
/* IO - VPL Root : { 432 351 437 356 }*/
/* End Operation */

/* Begin Operation: { 456 41 464 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,2,2,2,5);
	result = connect_root_to_terminal(ptrA,3,2,3,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,1,7,2,9);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
	result = connect_root_to_terminal(ptrA,2,5,2,10);
	result = connect_root_to_terminal(ptrA,1,10,1,11);
	result = connect_root_to_terminal(ptrA,3,5,2,11);
	result = connect_root_to_terminal(ptrA,1,11,1,13);
	result = connect_root_to_terminal(ptrA,1,12,2,13);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [4 to 3] */
/* Synchro [5 to 4] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 176 84 }{ 483 463 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 74 35 79 }*/
/* IO - VPL Root : { 30 151 35 156 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 56 164 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 143 74 148 79 }*/
/* IO - VPL Terminal : { 143 94 148 99 }*/
/* IO - VPL Root : { 164 85 169 90 }*/
/* End Operation */

/* Begin Operation: { 64 118 80 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_persistent(tempOperation,environment,"Interpreter Mode");
/* IO - VPL Root : { 80 173 85 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 171 122 302 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Get Interpreter File");
/* IO - VPL Terminal : { 101 201 106 206 }*/
/* IO - VPL Terminal : { 101 233 106 238 }*/
/* IO - VPL Terminal : { 101 265 106 270 }*/
/* IO - VPL Root : { 122 212 127 217 }*/
/* IO - VPL Root : { 122 255 127 260 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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

/* Start Operations: { 364 988 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 68 35 73 }*/
/* IO - VPL Root : { 30 116 35 121 }*/
/* IO - VPL Root : { 30 164 35 169 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 48 80 93 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Process");
/* IO - VPL Terminal : { 59 68 64 73 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 64 125 80 251 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Get Executable File");
/* IO - VPL Terminal : { 59 157 64 162 }*/
/* IO - VPL Terminal : { 59 211 64 216 }*/
/* IO - VPL Root : { 80 154 85 159 }*/
/* IO - VPL Root : { 80 210 85 215 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 308 326 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 341 509 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 58 80 102 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"File");
/* IO - VPL Terminal : { 59 78 64 83 }*/
/* IO - VPL Root : { 80 70 85 75 }*/
/* IO - VPL Root : { 80 84 85 89 }*/
/* End Operation */

/* Begin Operation: { 106 73 122 100 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 84 106 89 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 106 133 122 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 122 148 127 153 }*/
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 84 148 89 }*/
/* IO - VPL Terminal : { 143 148 148 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 341 509 }{ 351 554 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 98 49 103 }*/
/* IO - VPL Root : { 44 162 49 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 330 95 456 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Application Name");
/* IO - VPL Terminal : { 72 391 77 396 }*/
/* IO - VPL Root : { 96 370 101 375 }*/
/* IO - VPL Root : { 96 412 101 417 }*/
/* End Operation */

/* Begin Operation: { 120 396 137 432 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 114 412 119 417 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 78 196 94 314 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"File Specification");
/* IO - VPL Terminal : { 73 253 78 258 }*/
/* IO - VPL Root : { 94 233 99 238 }*/
/* IO - VPL Root : { 94 272 99 277 }*/
/* End Operation */

/* Begin Operation: { 120 236 136 312 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 115 272 120 277 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 111 136 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,".app");
/* IO - VPL Root : { 136 121 141 126 }*/
/* End Operation */

/* Begin Operation: { 78 36 94 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Application Name");
/* IO - VPL Terminal : { 73 103 78 108 }*/
/* IO - VPL Root : { 94 103 99 108 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 87 178 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 157 103 162 108 }*/
/* IO - VPL Terminal : { 157 121 162 126 }*/
/* IO - VPL Root : { 178 113 183 118 }*/
/* End Operation */

/* Begin Operation: { 246 150 262 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 262 162 267 167 }*/
/* End Operation */

/* Begin Operation: { 162 228 179 320 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Parent");
/* IO - VPL Terminal : { 156 272 161 277 }*/
/* IO - VPL Root : { 180 272 185 277 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 41 221 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"/Create Directory");
/* IO - VPL Terminal : { 198 78 203 83 }*/
/* IO - VPL Terminal : { 198 117 203 122 }*/
/* IO - VPL Root : { 222 98 227 103 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);

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

/* Start Operations: { 181 796 }{ 342 372 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 84 182 100 267 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"To CFString");
/* IO - VPL Terminal : { 79 222 84 227 }*/
/* IO - VPL Root : { 100 222 105 227 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 122 69 138 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Existing File?");
/* IO - VPL Terminal : { 117 99 122 104 }*/
/* IO - VPL Terminal : { 117 131 122 136 }*/
/* IO - VPL Root : { 138 115 143 120 }*/
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

/* Start Operations: { 60 60 }{ 257 375 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 66 80 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get UniChar");
/* IO - VPL Terminal : { 59 110 64 115 }*/
/* IO - VPL Root : { 80 90 85 95 }*/
/* IO - VPL Root : { 80 128 85 133 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 186 80 274 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Length");
/* IO - VPL Terminal : { 59 226 64 231 }*/
/* IO - VPL Root : { 80 226 85 231 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 178 122 304 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kTextEncodingUnknown");
/* IO - VPL Root : { 122 239 127 244 }*/
/* End Operation */

/* Begin Operation: { 106 22 122 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"MacOS File Reference");
/* IO - VPL Terminal : { 101 90 106 95 }*/
/* IO - VPL Root : { 122 90 127 95 }*/
/* End Operation */

/* Begin Operation: { 148 70 164 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/New From Unicode");
/* IO - VPL Terminal : { 143 98 148 103 }*/
/* IO - VPL Terminal : { 143 117 148 122 }*/
/* IO - VPL Terminal : { 143 151 148 156 }*/
/* IO - VPL Terminal : { 143 168 148 173 }*/
/* IO - VPL Terminal : { 143 185 148 190 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 190 24 198 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 118 190 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,0,2,5);
	result = connect_root_to_terminal(ptrA,1,1,3,5);
	result = connect_root_to_terminal(ptrA,1,2,4,5);
	result = connect_root_to_terminal(ptrA,1,3,5,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
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

/* Begin Operation: { 48 104 64 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 64 115 69 120 }*/
/* End Operation */

/* Begin Operation: { 93 21 101 213 } */
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 126 220 142 289 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 121 251 126 256 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 167 217 184 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 161 233 166 238 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 202 46 219 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Coerce FSSpec");
/* IO - VPL Terminal : { 196 100 201 105 }*/
/* IO - VPL Root : { 220 100 225 105 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 209 235 226 299 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 203 265 208 270 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 271 42 279 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 265 168 270 173 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,2,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 351 389 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 159 95 251 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"To CFString");
/* IO - VPL Terminal : { 72 203 77 208 }*/
/* IO - VPL Root : { 96 203 101 208 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 221 137 315 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Length");
/* IO - VPL Terminal : { 114 266 119 271 }*/
/* IO - VPL Root : { 138 266 143 271 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 221 179 257 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 180 237 185 242 }*/
/* End Operation */

/* Begin Operation: { 162 109 179 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kFSCatInfoNone");
/* IO - VPL Root : { 180 155 185 160 }*/
/* End Operation */

/* Begin Operation: { 120 105 137 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get UniChar");
/* IO - VPL Terminal : { 114 153 119 158 }*/
/* IO - VPL Root : { 138 136 143 141 }*/
/* IO - VPL Root : { 138 169 143 174 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 57 95 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get FSRef");
/* IO - VPL Terminal : { 72 98 77 103 }*/
/* IO - VPL Root : { 96 98 101 103 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 81 221 255 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,8,4,"FSCreateDirectoryUnicode");
/* IO - VPL Terminal : { 198 98 203 103 }*/
/* IO - VPL Terminal : { 198 117 203 122 }*/
/* IO - VPL Terminal : { 198 136 203 141 }*/
/* IO - VPL Terminal : { 198 155 203 160 }*/
/* IO - VPL Terminal : { 198 174 203 179 }*/
/* IO - VPL Terminal : { 198 193 203 198 }*/
/* IO - VPL Terminal : { 198 212 203 217 }*/
/* IO - VPL Terminal : { 198 231 203 236 }*/
/* IO - VPL Root : { 222 113 227 118 }*/
/* IO - VPL Root : { 222 147 227 152 }*/
/* IO - VPL Root : { 222 181 227 186 }*/
/* IO - VPL Root : { 222 215 227 220 }*/
/* End Operation */

/* Begin Operation: { 204 271 221 347 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 198 307 203 312 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 246 206 263 266 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"debug");
/* IO - VPL Terminal : { 240 234 245 239 }*/
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

/* Start Operations: { 60 60 }{ 234 326 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 50 6 67 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FSCreateDirectoryUnicode");
/* IO - VPL Root : { 68 81 73 86 }*/
/* End Operation */

/* Begin Operation: { 95 50 111 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 90 81 95 86 }*/
/* IO - VPL Terminal : { 90 114 95 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 138 18 146 210 } */
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

/* Begin Operation: { 246 97 263 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 240 113 245 118 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 288 36 296 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 282 181 287 186 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,2,2,7);
	result = connect_root_to_terminal(ptrA,1,5,3,7);
	result = connect_root_to_terminal(ptrA,1,4,4,7);
	result = connect_root_to_terminal(ptrA,1,3,5,7);
	result = connect_root_to_terminal(ptrA,1,3,6,7);
	result = connect_root_to_terminal(ptrA,1,3,8,7);
	result = connect_root_to_terminal(ptrA,1,1,1,8);
	result = connect_root_to_terminal(ptrA,1,7,1,9);
	result = connect_root_to_terminal(ptrA,1,7,1,10);
	result = connect_root_to_terminal(ptrA,3,7,1,11);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [10 to 9] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 288 36 296 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 283 98 288 103 }*/
/* IO - VPL Terminal : { 283 162 288 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,5,2,7);
	result = connect_root_to_terminal(ptrA,2,3,1,9);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
	result = connect_root_to_terminal(ptrA,1,7,2,10);
	result = connect_root_to_terminal(ptrA,1,10,1,11);
	result = connect_root_to_terminal(ptrA,1,8,2,11);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 341 509 }{ 401 304 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 98 49 103 }*/
/* IO - VPL Root : { 44 162 49 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 36 95 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Application Name");
/* IO - VPL Terminal : { 72 112 77 117 }*/
/* IO - VPL Root : { 96 112 101 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 208 94 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,".app");
/* IO - VPL Root : { 94 218 99 223 }*/
/* End Operation */

/* Begin Operation: { 120 83 136 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 115 99 120 104 }*/
/* IO - VPL Terminal : { 115 117 120 122 }*/
/* IO - VPL Root : { 136 109 141 114 }*/
/* End Operation */

/* Begin Operation: { 162 78 179 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"put-file");
/* IO - VPL Terminal : { 156 109 161 114 }*/
/* IO - VPL Root : { 180 98 185 103 }*/
/* IO - VPL Root : { 180 120 185 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);

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

/* Start Operations: { 462 188 }{ 321 317 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 72 64 89 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Nav Put File Dialog");
/* IO - VPL Root : { 90 119 95 124 }*/
/* End Operation */

/* Begin Operation: { 114 67 130 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Nav Dialog/New");
/* IO - VPL Terminal : { 109 119 114 124 }*/
/* IO - VPL Root : { 130 119 135 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 155 201 171 271 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Do Setup");
/* IO - VPL Terminal : { 150 216 155 221 }*/
/* IO - VPL Terminal : { 150 231 155 236 }*/
/* IO - VPL Terminal : { 150 244 155 249 }*/
/* IO - VPL Terminal : { 150 258 155 263 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 267 317 }{ 164 267 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 72 50 77 }*/
/* IO - VPL Root : { 45 110 50 115 }*/
/* IO - VPL Root : { 45 148 50 153 }*/
/* IO - VPL Root : { 45 186 50 191 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 40 95 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set File Name");
/* IO - VPL Terminal : { 72 74 77 79 }*/
/* IO - VPL Terminal : { 72 110 77 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 79 177 96 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"mess");
/* IO - VPL Terminal : { 73 202 78 207 }*/
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

/* Start Operations: { 287 337 }{ 248 502 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 77 137 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Nav Class");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Root : { 138 130 143 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 120 220 137 276 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Message");
/* IO - VPL Root : { 138 246 143 251 }*/
/* End Operation */

/* Begin Operation: { 78 36 95 466 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Please select a location to place the interpreter application for this project.");
/* IO - VPL Root : { 96 204 101 209 }*/
/* End Operation */

/* Begin Operation: { 162 95 179 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Parameter String");
/* IO - VPL Terminal : { 156 130 161 135 }*/
/* IO - VPL Terminal : { 156 167 161 172 }*/
/* IO - VPL Terminal : { 156 204 161 209 }*/
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
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
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
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 156 41 172 91 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Run");
/* IO - VPL Terminal : { 151 65 156 70 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 198 92 214 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"report");
/* IO - VPL Terminal : { 193 119 198 124 }*/
/* IO - VPL Root : { 215 109 220 114 }*/
/* IO - VPL Root : { 215 128 220 133 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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

/* Start Operations: { 60 60 }{ 353 355 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 22 80 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Canceled?");
/* IO - VPL Terminal : { 59 71 64 76 }*/
/* IO - VPL Root : { 80 71 85 76 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 59 122 88 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 101 71 106 76 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 64 149 80 259 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Select List");
/* IO - VPL Terminal : { 59 202 64 207 }*/
/* IO - VPL Root : { 80 202 85 207 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 109 264 126 288 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 103 274 108 279 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 194 56 211 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Select Name");
/* IO - VPL Terminal : { 188 116 193 121 }*/
/* IO - VPL Root : { 212 116 217 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 117 170 134 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"unpack");
/* IO - VPL Terminal : { 111 202 116 207 }*/
/* IO - VPL Root : { 135 202 140 207 }*/
/* End Operation */

/* Begin Operation: { 235 28 243 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 229 130 234 135 }*/
/* IO - VPL Terminal : { 229 180 234 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,5,2,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 242 53 259 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"/Create Directory");
/* IO - VPL Terminal : { 236 90 241 95 }*/
/* IO - VPL Terminal : { 236 129 241 134 }*/
/* IO - VPL Root : { 260 110 265 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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

/* Start Operations: { 238 238 }{ 342 372 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 84 182 100 267 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"To CFString");
/* IO - VPL Terminal : { 79 222 84 227 }*/
/* IO - VPL Root : { 100 222 105 227 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 122 69 138 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Existing File?");
/* IO - VPL Terminal : { 117 99 122 104 }*/
/* IO - VPL Terminal : { 117 131 122 136 }*/
/* IO - VPL Root : { 138 115 143 120 }*/
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

/* Start Operations: { 60 60 }{ 257 375 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 66 80 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get UniChar");
/* IO - VPL Terminal : { 59 110 64 115 }*/
/* IO - VPL Root : { 80 90 85 95 }*/
/* IO - VPL Root : { 80 128 85 133 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 186 80 274 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Length");
/* IO - VPL Terminal : { 59 226 64 231 }*/
/* IO - VPL Root : { 80 226 85 231 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 178 122 304 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kTextEncodingUnknown");
/* IO - VPL Root : { 122 239 127 244 }*/
/* End Operation */

/* Begin Operation: { 106 22 122 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"MacOS File Reference");
/* IO - VPL Terminal : { 101 90 106 95 }*/
/* IO - VPL Root : { 122 90 127 95 }*/
/* End Operation */

/* Begin Operation: { 148 70 164 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/New From Unicode");
/* IO - VPL Terminal : { 143 98 148 103 }*/
/* IO - VPL Terminal : { 143 117 148 122 }*/
/* IO - VPL Terminal : { 143 151 148 156 }*/
/* IO - VPL Terminal : { 143 168 148 173 }*/
/* IO - VPL Terminal : { 143 185 148 190 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 190 24 198 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 118 190 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,0,2,5);
	result = connect_root_to_terminal(ptrA,1,1,3,5);
	result = connect_root_to_terminal(ptrA,1,2,4,5);
	result = connect_root_to_terminal(ptrA,1,3,5,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
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

/* Begin Operation: { 48 104 64 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 64 115 69 120 }*/
/* End Operation */

/* Begin Operation: { 93 21 101 213 } */
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 126 220 142 289 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 121 251 126 256 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 167 217 184 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 161 233 166 238 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 202 46 219 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Coerce FSSpec");
/* IO - VPL Terminal : { 196 100 201 105 }*/
/* IO - VPL Root : { 220 100 225 105 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 209 235 226 299 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 203 265 208 270 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 271 42 279 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 265 168 270 173 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,2,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 342 372 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 159 95 251 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"To CFString");
/* IO - VPL Terminal : { 72 203 77 208 }*/
/* IO - VPL Root : { 96 203 101 208 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 221 137 315 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Length");
/* IO - VPL Terminal : { 114 266 119 271 }*/
/* IO - VPL Root : { 138 266 143 271 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 221 179 257 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 180 237 185 242 }*/
/* End Operation */

/* Begin Operation: { 162 109 179 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kFSCatInfoNone");
/* IO - VPL Root : { 180 155 185 160 }*/
/* End Operation */

/* Begin Operation: { 120 105 137 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get UniChar");
/* IO - VPL Terminal : { 114 153 119 158 }*/
/* IO - VPL Root : { 138 136 143 141 }*/
/* IO - VPL Root : { 138 169 143 174 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 57 95 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get FSRef");
/* IO - VPL Terminal : { 72 98 77 103 }*/
/* IO - VPL Root : { 96 98 101 103 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 81 221 255 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,8,4,"FSCreateDirectoryUnicode");
/* IO - VPL Terminal : { 198 98 203 103 }*/
/* IO - VPL Terminal : { 198 117 203 122 }*/
/* IO - VPL Terminal : { 198 136 203 141 }*/
/* IO - VPL Terminal : { 198 155 203 160 }*/
/* IO - VPL Terminal : { 198 174 203 179 }*/
/* IO - VPL Terminal : { 198 193 203 198 }*/
/* IO - VPL Terminal : { 198 212 203 217 }*/
/* IO - VPL Terminal : { 198 231 203 236 }*/
/* IO - VPL Root : { 222 113 227 118 }*/
/* IO - VPL Root : { 222 147 227 152 }*/
/* IO - VPL Root : { 222 181 227 186 }*/
/* IO - VPL Root : { 222 215 227 220 }*/
/* End Operation */

/* Begin Operation: { 204 271 221 347 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 198 307 203 312 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 246 97 263 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 240 113 245 118 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 288 36 296 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 282 181 287 186 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,2,2,7);
	result = connect_root_to_terminal(ptrA,1,5,3,7);
	result = connect_root_to_terminal(ptrA,1,4,4,7);
	result = connect_root_to_terminal(ptrA,1,3,5,7);
	result = connect_root_to_terminal(ptrA,1,3,6,7);
	result = connect_root_to_terminal(ptrA,1,3,8,7);
	result = connect_root_to_terminal(ptrA,1,1,1,8);
	result = connect_root_to_terminal(ptrA,1,7,1,9);
	result = connect_root_to_terminal(ptrA,3,7,1,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 291 28 299 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 285 90 290 95 }*/
/* IO - VPL Terminal : { 285 154 290 159 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,2,5,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,2,5,2,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* Synchro [5 to 4] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 288 150 304 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 304 162 309 167 }*/
/* End Operation */

/* Begin Operation: { 204 170 220 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"peel app");
/* IO - VPL Terminal : { 199 190 204 195 }*/
/* IO - VPL Terminal : { 199 212 204 217 }*/
/* IO - VPL Root : { 220 200 225 205 }*/
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

/* Start Operations: { 179 689 }{ 260 296 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
/* IO - VPL Root : { 30 171 35 176 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 103 80 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"\"length\"");
/* IO - VPL Terminal : { 59 134 64 139 }*/
/* IO - VPL Root : { 80 134 85 139 }*/
/* End Operation */

/* Begin Operation: { 106 100 122 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"suffix");
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Terminal : { 101 134 106 139 }*/
/* IO - VPL Root : { 122 116 127 121 }*/
/* IO - VPL Root : { 122 134 127 139 }*/
/* End Operation */

/* Begin Operation: { 148 155 164 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 143 162 148 167 }*/
/* IO - VPL Terminal : { 143 171 148 176 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 190 22 198 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 116 190 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 179 689 }{ 200 300 } */
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

/* Begin Operation: { 246 126 262 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Application Name");
/* IO - VPL Terminal : { 241 162 246 167 }*/
/* IO - VPL Terminal : { 241 200 246 205 }*/
/* IO - VPL Root : { 262 182 267 187 }*/
/* End Operation */

/* Begin Operation: { 330 36 338 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 325 98 330 103 }*/
/* IO - VPL Terminal : { 325 162 330 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,6);
	result = connect_root_to_terminal(ptrA,1,2,2,6);
	result = connect_root_to_terminal(ptrA,2,0,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,4,1,8);
	result = connect_root_to_terminal(ptrA,1,5,2,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 341 509 }{ 251 273 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 98 49 103 }*/
/* IO - VPL Root : { 44 162 49 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 77 95 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"get-file");
/* IO - VPL Root : { 96 97 101 102 }*/
/* IO - VPL Root : { 96 119 101 124 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);

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

/* Start Operations: { 292 221 }{ 355 374 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 73 95 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Nav Choose File Dialog");
/* IO - VPL Root : { 96 139 101 144 }*/
/* End Operation */

/* Begin Operation: { 120 87 136 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Nav Dialog/New");
/* IO - VPL Terminal : { 115 139 120 144 }*/
/* IO - VPL Root : { 136 139 141 144 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 162 181 178 251 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Do Setup");
/* IO - VPL Terminal : { 157 196 162 201 }*/
/* IO - VPL Terminal : { 157 211 162 216 }*/
/* IO - VPL Terminal : { 157 224 162 229 }*/
/* IO - VPL Terminal : { 157 238 162 243 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 324 231 }{ 200 300 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 72 49 77 }*/
/* IO - VPL Root : { 44 110 49 115 }*/
/* IO - VPL Root : { 44 148 49 153 }*/
/* IO - VPL Root : { 44 186 49 191 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 89 95 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\'APPL\'");
/* IO - VPL Root : { 96 107 101 112 }*/
/* End Operation */

/* Begin Operation: { 120 39 137 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Type List");
/* IO - VPL Terminal : { 114 72 119 77 }*/
/* IO - VPL Terminal : { 114 107 119 112 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 162 95 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"mess");
/* IO - VPL Terminal : { 72 187 77 192 }*/
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

/* Start Operations: { 306 373 }{ 248 726 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 77 137 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Nav Class");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Root : { 138 130 143 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 120 220 137 276 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Message");
/* IO - VPL Root : { 138 246 143 251 }*/
/* End Operation */

/* Begin Operation: { 78 36 95 690 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"The interpreter for this project can not be found.  Please locate an existing interpreter application for this project.");
/* IO - VPL Root : { 96 204 101 209 }*/
/* End Operation */

/* Begin Operation: { 162 95 179 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Parameter String");
/* IO - VPL Terminal : { 156 130 161 135 }*/
/* IO - VPL Terminal : { 156 167 161 172 }*/
/* IO - VPL Terminal : { 156 204 161 209 }*/
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
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
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
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 61 178 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Run");
/* IO - VPL Terminal : { 157 85 162 90 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 204 112 220 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"report");
/* IO - VPL Terminal : { 199 139 204 144 }*/
/* IO - VPL Root : { 221 139 226 144 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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

/* Start Operations: { 60 60 }{ 278 344 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 130 49 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 36 94 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Canceled?");
/* IO - VPL Terminal : { 73 85 78 90 }*/
/* IO - VPL Root : { 94 85 99 90 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 73 136 102 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 115 85 120 90 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 78 158 94 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Select List");
/* IO - VPL Terminal : { 73 211 78 216 }*/
/* IO - VPL Root : { 94 211 99 216 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 263 137 287 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 114 273 119 278 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 120 179 137 247 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"unpack");
/* IO - VPL Terminal : { 114 211 119 216 }*/
/* IO - VPL Root : { 138 211 143 216 }*/
/* End Operation */

/* Begin Operation: { 209 35 217 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 203 135 208 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 246 36 263 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Coerce FSSpec");
/* IO - VPL Terminal : { 240 90 245 95 }*/
/* IO - VPL Root : { 264 90 269 95 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 246 200 263 342 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Name As String");
/* IO - VPL Terminal : { 240 269 245 274 }*/
/* IO - VPL Root : { 264 269 269 274 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 288 43 296 235 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 282 105 287 110 }*/
/* IO - VPL Terminal : { 282 169 287 174 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* Synchro [5 to 4] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 146 178 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 178 161 183 166 }*/
/* End Operation */

/* Begin Operation: { 120 101 136 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Adopt Name");
/* IO - VPL Terminal : { 115 123 120 128 }*/
/* IO - VPL Terminal : { 115 162 120 167 }*/
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

/* Start Operations: { 60 60 }{ 239 310 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 214 80 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,".app");
/* IO - VPL Root : { 80 224 85 229 }*/
/* End Operation */

/* Begin Operation: { 106 156 122 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"peel app");
/* IO - VPL Terminal : { 101 176 106 181 }*/
/* IO - VPL Terminal : { 101 198 106 203 }*/
/* IO - VPL Root : { 122 186 127 191 }*/
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

/* Start Operations: { 179 689 }{ 260 296 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
/* IO - VPL Root : { 30 171 35 176 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 103 80 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"\"length\"");
/* IO - VPL Terminal : { 59 134 64 139 }*/
/* IO - VPL Root : { 80 134 85 139 }*/
/* End Operation */

/* Begin Operation: { 106 100 122 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"suffix");
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Terminal : { 101 134 106 139 }*/
/* IO - VPL Root : { 122 116 127 121 }*/
/* IO - VPL Root : { 122 134 127 139 }*/
/* End Operation */

/* Begin Operation: { 148 155 164 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 143 162 148 167 }*/
/* IO - VPL Terminal : { 143 171 148 176 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 190 22 198 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 116 190 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
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

/* Begin Operation: { 148 112 164 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Application Name");
/* IO - VPL Terminal : { 143 148 148 153 }*/
/* IO - VPL Terminal : { 143 186 148 191 }*/
/* IO - VPL Root : { 164 168 169 173 }*/
/* End Operation */

/* Begin Operation: { 190 28 198 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
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
/* IO - VPL Terminal : { 199 98 204 103 }*/
/* IO - VPL Terminal : { 199 162 204 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 341 509 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 105 86 122 115 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 122 98 127 103 }*/
/* End Operation */

/* Begin Operation: { 150 36 158 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 145 98 150 103 }*/
/* IO - VPL Terminal : { 145 162 150 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 25 114 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 101 87 106 92 }*/
/* IO - VPL Terminal : { 101 151 106 156 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 68 35 73 }*/
/* IO - VPL Root : { 30 116 35 121 }*/
/* IO - VPL Root : { 30 164 35 169 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 73 80 100 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 80 84 85 89 }*/
/* End Operation */

/* Begin Operation: { 64 133 80 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 80 148 85 153 }*/
/* End Operation */

/* Begin Operation: { 106 22 114 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 101 84 106 89 }*/
/* IO - VPL Terminal : { 101 148 106 153 }*/
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

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 68 35 73 }*/
/* IO - VPL Root : { 30 116 35 121 }*/
/* IO - VPL Root : { 30 164 35 169 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 48 80 93 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Process");
/* IO - VPL Terminal : { 59 68 64 73 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 64 125 80 251 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Get Executable File");
/* IO - VPL Terminal : { 59 157 64 162 }*/
/* IO - VPL Terminal : { 59 211 64 216 }*/
/* IO - VPL Root : { 80 154 85 159 }*/
/* IO - VPL Root : { 80 210 85 215 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 308 326 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 451 459 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 58 80 102 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"File");
/* IO - VPL Terminal : { 59 78 64 83 }*/
/* IO - VPL Root : { 80 70 85 75 }*/
/* IO - VPL Root : { 80 84 85 89 }*/
/* End Operation */

/* Begin Operation: { 106 73 122 100 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 84 106 89 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 106 133 122 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 122 148 127 153 }*/
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 84 148 89 }*/
/* IO - VPL Terminal : { 143 148 148 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 220 592 }{ 427 593 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 67 304 84 430 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Application Name");
/* IO - VPL Terminal : { 61 365 66 370 }*/
/* IO - VPL Root : { 85 344 90 349 }*/
/* IO - VPL Root : { 85 386 90 391 }*/
/* End Operation */

/* Begin Operation: { 109 370 126 406 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 103 386 108 391 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 70 166 86 284 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"File Specification");
/* IO - VPL Terminal : { 65 223 70 228 }*/
/* IO - VPL Root : { 86 203 91 208 }*/
/* IO - VPL Root : { 86 242 91 247 }*/
/* End Operation */

/* Begin Operation: { 127 181 143 257 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 122 217 127 222 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 188 197 204 287 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get FSSpec");
/* IO - VPL Terminal : { 183 239 188 244 }*/
/* IO - VPL Root : { 204 240 209 245 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 228 224 245 260 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 222 240 227 245 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 115 132 131 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,".app");
/* IO - VPL Root : { 131 142 136 147 }*/
/* End Operation */

/* Begin Operation: { 69 9 85 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Application Name");
/* IO - VPL Terminal : { 64 76 69 81 }*/
/* IO - VPL Root : { 85 76 90 81 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 160 108 176 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 155 124 160 129 }*/
/* IO - VPL Terminal : { 155 142 160 147 }*/
/* IO - VPL Root : { 176 134 181 139 }*/
/* End Operation */

/* Begin Operation: { 200 95 216 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"To PString");
/* IO - VPL Terminal : { 195 134 200 139 }*/
/* IO - VPL Root : { 216 134 221 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 342 134 358 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 358 146 363 151 }*/
/* End Operation */

/* Begin Operation: { 249 21 265 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,3,"extract-file-specification");
/* IO - VPL Terminal : { 244 101 249 106 }*/
/* IO - VPL Root : { 265 60 270 65 }*/
/* IO - VPL Root : { 265 101 270 106 }*/
/* IO - VPL Root : { 265 142 270 147 }*/
/* End Operation */

/* Begin Operation: { 296 46 312 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,4,2,"FSMakeFSSpec");
/* IO - VPL Terminal : { 291 64 296 69 }*/
/* IO - VPL Terminal : { 291 84 296 89 }*/
/* IO - VPL Terminal : { 291 104 296 109 }*/
/* IO - VPL Terminal : { 291 124 296 129 }*/
/* IO - VPL Root : { 312 78 317 83 }*/
/* IO - VPL Root : { 312 112 317 117 }*/
/* End Operation */

/* Begin Operation: { 387 20 395 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 382 82 387 87 }*/
/* IO - VPL Terminal : { 382 146 387 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,3,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,2,0,1,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,1,7,2,9);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
	result = connect_root_to_terminal(ptrA,1,5,1,12);
	result = connect_root_to_terminal(ptrA,1,12,1,13);
	result = connect_root_to_terminal(ptrA,2,12,2,13);
	result = connect_root_to_terminal(ptrA,1,10,3,13);
	result = connect_root_to_terminal(ptrA,2,13,1,14);
	result = connect_root_to_terminal(ptrA,1,11,2,14);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 220 592 }{ 499 301 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 167 80 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,".app");
/* IO - VPL Root : { 80 177 85 182 }*/
/* End Operation */

/* Begin Operation: { 59 9 75 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Application Name");
/* IO - VPL Terminal : { 54 76 59 81 }*/
/* IO - VPL Root : { 75 76 80 81 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 60 122 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 101 76 106 81 }*/
/* IO - VPL Terminal : { 101 94 106 99 }*/
/* IO - VPL Root : { 122 86 127 91 }*/
/* End Operation */

/* Begin Operation: { 148 43 164 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,3,"put-file");
/* IO - VPL Terminal : { 143 86 148 91 }*/
/* IO - VPL Root : { 164 64 169 69 }*/
/* IO - VPL Root : { 164 87 169 92 }*/
/* IO - VPL Root : { 164 110 169 115 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 400 139 416 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 416 151 421 156 }*/
/* End Operation */

/* Begin Operation: { 190 34 206 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,3,"extract-file-specification");
/* IO - VPL Terminal : { 185 114 190 119 }*/
/* IO - VPL Root : { 206 67 211 72 }*/
/* IO - VPL Root : { 206 114 211 119 }*/
/* IO - VPL Root : { 206 155 211 160 }*/
/* End Operation */

/* Begin Operation: { 232 135 248 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"peel app");
/* IO - VPL Terminal : { 227 155 232 160 }*/
/* IO - VPL Terminal : { 227 177 232 182 }*/
/* IO - VPL Root : { 248 165 253 170 }*/
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

/* Start Operations: { 179 689 }{ 260 296 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
/* IO - VPL Root : { 30 171 35 176 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 103 80 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"\"length\"");
/* IO - VPL Terminal : { 59 134 64 139 }*/
/* IO - VPL Root : { 80 134 85 139 }*/
/* End Operation */

/* Begin Operation: { 106 100 122 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"suffix");
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Terminal : { 101 134 106 139 }*/
/* IO - VPL Root : { 122 116 127 121 }*/
/* IO - VPL Root : { 122 134 127 139 }*/
/* End Operation */

/* Begin Operation: { 148 155 164 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 143 162 148 167 }*/
/* IO - VPL Terminal : { 143 171 148 176 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 190 22 198 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 116 190 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 179 689 }{ 200 300 } */
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

/* Begin Operation: { 274 112 290 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Application Name");
/* IO - VPL Terminal : { 269 148 274 153 }*/
/* IO - VPL Terminal : { 269 186 274 191 }*/
/* IO - VPL Root : { 290 168 295 173 }*/
/* End Operation */

/* Begin Operation: { 442 25 450 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 437 87 442 92 }*/
/* IO - VPL Terminal : { 437 151 442 156 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,6);
	result = connect_root_to_terminal(ptrA,3,6,1,7);
	result = connect_root_to_terminal(ptrA,1,1,2,7);
	result = connect_root_to_terminal(ptrA,2,0,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,2,4,1,9);
	result = connect_root_to_terminal(ptrA,1,5,2,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 220 592 }{ 251 273 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 39 80 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,0,2,"get-file");
/* IO - VPL Root : { 80 67 85 72 }*/
/* IO - VPL Root : { 80 97 85 102 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 146 164 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 164 161 169 166 }*/
/* End Operation */

/* Begin Operation: { 106 87 122 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Adopt Name");
/* IO - VPL Terminal : { 101 109 106 114 }*/
/* IO - VPL Terminal : { 101 148 106 153 }*/
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

/* Start Operations: { 60 60 }{ 239 310 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 22 80 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,3,"extract-file-specification");
/* IO - VPL Terminal : { 59 102 64 107 }*/
/* IO - VPL Root : { 80 55 85 60 }*/
/* IO - VPL Root : { 80 102 85 107 }*/
/* IO - VPL Root : { 80 143 85 148 }*/
/* End Operation */

/* Begin Operation: { 64 214 80 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,".app");
/* IO - VPL Root : { 80 224 85 229 }*/
/* End Operation */

/* Begin Operation: { 106 156 122 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"peel app");
/* IO - VPL Terminal : { 101 176 106 181 }*/
/* IO - VPL Terminal : { 101 198 106 203 }*/
/* IO - VPL Root : { 122 186 127 191 }*/
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

/* Start Operations: { 179 689 }{ 260 296 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
/* IO - VPL Root : { 30 171 35 176 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 103 80 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"\"length\"");
/* IO - VPL Terminal : { 59 134 64 139 }*/
/* IO - VPL Root : { 80 134 85 139 }*/
/* End Operation */

/* Begin Operation: { 106 100 122 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"suffix");
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Terminal : { 101 134 106 139 }*/
/* IO - VPL Root : { 122 116 127 121 }*/
/* IO - VPL Root : { 122 134 127 139 }*/
/* End Operation */

/* Begin Operation: { 148 155 164 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 143 162 148 167 }*/
/* IO - VPL Terminal : { 143 171 148 176 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 190 22 198 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 116 190 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
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

/* Begin Operation: { 148 112 164 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Application Name");
/* IO - VPL Terminal : { 143 148 148 153 }*/
/* IO - VPL Terminal : { 143 186 148 191 }*/
/* IO - VPL Root : { 164 168 169 173 }*/
/* End Operation */

/* Begin Operation: { 190 28 198 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,3,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 35 198 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 97 190 102 }*/
/* IO - VPL Terminal : { 185 161 190 166 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 451 459 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 105 86 122 115 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 122 98 127 103 }*/
/* End Operation */

/* Begin Operation: { 150 36 158 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 145 98 150 103 }*/
/* IO - VPL Terminal : { 145 162 150 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 25 114 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 101 87 106 92 }*/
/* IO - VPL Terminal : { 101 151 106 156 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 148 147 164 276 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,6,"create-environment");
/* IO - VPL Terminal : { 143 173 148 178 }*/
/* IO - VPL Terminal : { 143 212 148 217 }*/
/* IO - VPL Terminal : { 143 255 148 260 }*/
/* IO - VPL Root : { 164 150 169 155 }*/
/* IO - VPL Root : { 164 163 169 168 }*/
/* IO - VPL Root : { 164 183 169 188 }*/
/* IO - VPL Root : { 164 206 169 211 }*/
/* IO - VPL Root : { 164 226 169 231 }*/
/* IO - VPL Root : { 164 261 169 266 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 190 92 206 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 185 120 190 125 }*/
/* IO - VPL Terminal : { 185 150 190 155 }*/
/* IO - VPL Root : { 206 136 211 141 }*/
/* End Operation */

/* Begin Operation: { 232 111 248 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Write Name");
/* IO - VPL Terminal : { 227 136 232 141 }*/
/* IO - VPL Terminal : { 227 163 232 168 }*/
/* IO - VPL Root : { 248 150 253 155 }*/
/* End Operation */

/* Begin Operation: { 274 133 290 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Read Name");
/* IO - VPL Terminal : { 269 157 274 162 }*/
/* IO - VPL Terminal : { 269 183 274 188 }*/
/* IO - VPL Root : { 290 170 295 175 }*/
/* End Operation */

/* Begin Operation: { 316 134 332 247 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 311 170 316 175 }*/
/* IO - VPL Terminal : { 311 206 316 211 }*/
/* IO - VPL Root : { 332 190 337 195 }*/
/* End Operation */

/* Begin Operation: { 358 156 374 264 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 353 190 358 195 }*/
/* IO - VPL Terminal : { 353 226 358 231 }*/
/* IO - VPL Root : { 374 208 379 213 }*/
/* End Operation */

/* Begin Operation: { 400 237 416 278 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"File");
/* IO - VPL Terminal : { 395 248 400 253 }*/
/* IO - VPL Terminal : { 395 261 400 266 }*/
/* IO - VPL Root : { 416 255 421 260 }*/
/* End Operation */

/* Begin Operation: { 442 41 450 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,2,3);
	result = connect_root_to_terminal(ptrA,2,0,3,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,2,3,3,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,2,4,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,3,4,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,4,4,2,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,5,4,2,9);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
	result = connect_root_to_terminal(ptrA,6,4,2,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 1] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Close_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Close_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 449 825 }{ 562 283 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 109 33 114 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 113 71 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 72 129 77 134 }*/
/* End Operation */

/* Begin Operation: { 99 91 115 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 94 109 99 114 }*/
/* IO - VPL Terminal : { 94 129 99 134 }*/
/* IO - VPL Root : { 115 120 120 125 }*/
/* End Operation */

/* Begin Operation: { 140 145 156 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"File");
/* IO - VPL Terminal : { 135 163 140 168 }*/
/* IO - VPL Root : { 156 156 161 161 }*/
/* IO - VPL Root : { 156 169 161 174 }*/
/* End Operation */

/* Begin Operation: { 180 78 196 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 175 130 180 135 }*/
/* IO - VPL Root : { 196 112 201 117 }*/
/* IO - VPL Root : { 196 148 201 153 }*/
/* End Operation */

/* Begin Operation: { 230 56 246 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 225 110 230 115 }*/
/* IO - VPL Root : { 246 91 251 96 }*/
/* IO - VPL Root : { 246 128 251 133 }*/
/* End Operation */

/* Begin Operation: { 270 57 286 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Name");
/* IO - VPL Terminal : { 265 94 270 99 }*/
/* IO - VPL Root : { 286 81 291 86 }*/
/* IO - VPL Root : { 286 107 291 112 }*/
/* End Operation */

/* Begin Operation: { 311 36 327 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Name");
/* IO - VPL Terminal : { 306 75 311 80 }*/
/* IO - VPL Root : { 327 61 332 66 }*/
/* IO - VPL Root : { 327 88 332 93 }*/
/* End Operation */

/* Begin Operation: { 344 4 360 94 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 339 47 344 52 }*/
/* IO - VPL Root : { 360 32 365 37 }*/
/* IO - VPL Root : { 360 62 365 67 }*/
/* End Operation */

/* Begin Operation: { 397 49 413 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,6,0,"dispose-environment");
/* IO - VPL Terminal : { 392 62 397 67 }*/
/* IO - VPL Terminal : { 392 88 397 93 }*/
/* IO - VPL Terminal : { 392 107 397 112 }*/
/* IO - VPL Terminal : { 392 128 397 133 }*/
/* IO - VPL Terminal : { 392 148 397 153 }*/
/* IO - VPL Terminal : { 392 169 397 174 }*/
/* End Operation */

/* Begin Operation: { 434 133 450 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
/* IO - VPL Root : { 450 139 455 144 }*/
/* End Operation */

/* Begin Operation: { 479 83 495 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Breakpoints");
/* IO - VPL Terminal : { 474 110 479 115 }*/
/* IO - VPL Terminal : { 474 139 479 144 }*/
/* IO - VPL Root : { 495 125 500 130 }*/
/* End Operation */

/* Begin Operation: { 519 30 527 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,2,8,1,9);
	result = connect_root_to_terminal(ptrA,2,7,2,9);
	result = connect_root_to_terminal(ptrA,2,6,3,9);
	result = connect_root_to_terminal(ptrA,2,5,4,9);
	result = connect_root_to_terminal(ptrA,2,4,5,9);
	result = connect_root_to_terminal(ptrA,2,3,6,9);
	result = connect_root_to_terminal(ptrA,1,8,1,11);
	result = connect_root_to_terminal(ptrA,1,10,2,11);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Post_20_Load_20_Processing_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Post_20_Load_20_Processing_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 572 364 }{ 345 269 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 109 33 114 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 69 57 85 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 64 109 69 114 }*/
/* IO - VPL Root : { 85 91 90 96 }*/
/* IO - VPL Root : { 85 127 90 132 }*/
/* End Operation */

/* Begin Operation: { 119 25 135 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 114 79 119 84 }*/
/* IO - VPL Root : { 135 60 140 65 }*/
/* IO - VPL Root : { 135 97 140 102 }*/
/* End Operation */

/* Begin Operation: { 174 13 190 103 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 169 56 174 61 }*/
/* IO - VPL Root : { 190 41 195 46 }*/
/* IO - VPL Root : { 190 71 195 76 }*/
/* End Operation */

/* Begin Operation: { 234 65 250 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,0,"post-load");
/* IO - VPL Terminal : { 229 71 234 76 }*/
/* IO - VPL Terminal : { 229 97 234 102 }*/
/* IO - VPL Terminal : { 229 127 234 132 }*/
/* End Operation */

/* Begin Operation: { 306 23 314 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Load_20_Bundle_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Load_20_Bundle_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 512 661 }{ 333 255 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 81 33 86 }*/
/* IO - VPL Root : { 28 118 33 123 }*/
/* IO - VPL Root : { 28 134 33 139 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 72 29 88 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 67 81 72 86 }*/
/* IO - VPL Root : { 88 65 93 70 }*/
/* IO - VPL Root : { 88 99 93 104 }*/
/* End Operation */

/* Begin Operation: { 126 11 142 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 121 65 126 70 }*/
/* IO - VPL Root : { 142 53 147 58 }*/
/* IO - VPL Root : { 142 83 147 88 }*/
/* End Operation */

/* Begin Operation: { 177 10 193 100 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 172 53 177 58 }*/
/* IO - VPL Root : { 193 38 198 43 }*/
/* IO - VPL Root : { 193 68 198 73 }*/
/* End Operation */

/* Begin Operation: { 231 61 247 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,5,0,"load-bundle");
/* IO - VPL Terminal : { 226 68 231 73 }*/
/* IO - VPL Terminal : { 226 83 231 88 }*/
/* IO - VPL Terminal : { 226 99 231 104 }*/
/* IO - VPL Terminal : { 226 118 231 123 }*/
/* IO - VPL Terminal : { 226 134 231 139 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 280 21 288 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,3,0,5,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Create_20_Persistent_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Create_20_Persistent_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 627 328 }{ 348 264 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 90 33 95 }*/
/* IO - VPL Root : { 28 131 33 136 }*/
/* IO - VPL Root : { 28 156 33 161 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 38 81 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 60 90 65 95 }*/
/* IO - VPL Root : { 81 69 86 74 }*/
/* IO - VPL Root : { 81 108 86 113 }*/
/* End Operation */

/* Begin Operation: { 115 15 131 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 110 69 115 74 }*/
/* IO - VPL Root : { 131 50 136 55 }*/
/* IO - VPL Root : { 131 87 136 92 }*/
/* End Operation */

/* Begin Operation: { 171 7 187 97 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 166 50 171 55 }*/
/* IO - VPL Root : { 187 35 192 40 }*/
/* IO - VPL Root : { 187 65 192 70 }*/
/* End Operation */

/* Begin Operation: { 234 60 250 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,5,1,"create-persistent");
/* IO - VPL Terminal : { 229 65 234 70 }*/
/* IO - VPL Terminal : { 229 87 234 92 }*/
/* IO - VPL Terminal : { 229 108 234 113 }*/
/* IO - VPL Terminal : { 229 131 234 136 }*/
/* IO - VPL Terminal : { 229 156 234 161 }*/
/* IO - VPL Root : { 250 117 255 122 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 303 23 311 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 298 117 303 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,3,0,5,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Destroy_20_Persistent_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Destroy_20_Persistent_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 387 447 }{ 357 267 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 75 33 80 }*/
/* IO - VPL Root : { 28 160 33 165 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 59 75 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 54 111 59 116 }*/
/* IO - VPL Root : { 75 93 80 98 }*/
/* IO - VPL Root : { 75 129 80 134 }*/
/* End Operation */

/* Begin Operation: { 104 25 120 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 99 79 104 84 }*/
/* IO - VPL Root : { 120 57 125 62 }*/
/* IO - VPL Root : { 120 97 125 102 }*/
/* End Operation */

/* Begin Operation: { 164 14 180 104 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 159 57 164 62 }*/
/* IO - VPL Root : { 180 42 185 47 }*/
/* IO - VPL Root : { 180 72 185 77 }*/
/* End Operation */

/* Begin Operation: { 231 58 247 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,0,"remove-persistent");
/* IO - VPL Terminal : { 226 72 231 77 }*/
/* IO - VPL Terminal : { 226 97 231 102 }*/
/* IO - VPL Terminal : { 226 129 231 134 }*/
/* IO - VPL Terminal : { 226 160 231 165 }*/
/* End Operation */

/* Begin Operation: { 295 20 303 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Set_20_Value_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Set_20_Value_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 386 463 }{ 342 266 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 133 33 138 }*/
/* IO - VPL Root : { 28 157 33 162 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 39 74 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 53 91 58 96 }*/
/* IO - VPL Root : { 74 73 79 78 }*/
/* IO - VPL Root : { 74 109 79 114 }*/
/* End Operation */

/* Begin Operation: { 103 13 119 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 98 67 103 72 }*/
/* IO - VPL Root : { 119 48 124 53 }*/
/* IO - VPL Root : { 119 85 124 90 }*/
/* End Operation */

/* Begin Operation: { 153 5 169 95 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 148 48 153 53 }*/
/* IO - VPL Root : { 169 33 174 38 }*/
/* IO - VPL Root : { 169 63 174 68 }*/
/* End Operation */

/* Begin Operation: { 223 58 239 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,5,0,"set-element-value");
/* IO - VPL Terminal : { 218 63 223 68 }*/
/* IO - VPL Terminal : { 218 85 223 90 }*/
/* IO - VPL Terminal : { 218 109 223 114 }*/
/* IO - VPL Terminal : { 218 133 223 138 }*/
/* IO - VPL Terminal : { 218 157 223 162 }*/
/* End Operation */

/* Begin Operation: { 275 21 283 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,3,0,5,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Get_20_Value_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Get_20_Value_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 355 495 }{ 319 257 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 147 33 152 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 187 81 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 60 198 65 203 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 62 48 78 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 57 100 62 105 }*/
/* IO - VPL Root : { 78 82 83 87 }*/
/* IO - VPL Root : { 78 118 83 123 }*/
/* End Operation */

/* Begin Operation: { 107 15 123 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 102 69 107 74 }*/
/* IO - VPL Root : { 123 46 128 51 }*/
/* IO - VPL Root : { 123 87 128 92 }*/
/* End Operation */

/* Begin Operation: { 165 3 181 93 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 160 46 165 51 }*/
/* IO - VPL Root : { 181 31 186 36 }*/
/* IO - VPL Root : { 181 61 186 66 }*/
/* End Operation */

/* Begin Operation: { 212 202 228 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 207 213 212 218 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 215 43 231 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"get-element-integer");
/* IO - VPL Terminal : { 210 61 215 66 }*/
/* IO - VPL Terminal : { 210 87 215 92 }*/
/* IO - VPL Terminal : { 210 118 215 123 }*/
/* IO - VPL Terminal : { 210 147 215 152 }*/
/* IO - VPL Root : { 231 106 236 111 }*/
/* End Operation */

/* Begin Operation: { 261 12 269 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 256 106 261 111 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,4,1,6);
	result = connect_root_to_terminal(ptrA,2,3,2,6);
	result = connect_root_to_terminal(ptrA,2,2,3,6);
	result = connect_root_to_terminal(ptrA,2,0,4,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [6 to 5] */
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



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Get_20_Archive_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Get_20_Archive_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 365 539 }{ 307 257 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 147 33 152 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 47 78 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 57 99 62 104 }*/
/* IO - VPL Root : { 78 81 83 86 }*/
/* IO - VPL Root : { 78 117 83 122 }*/
/* End Operation */

/* Begin Operation: { 107 17 123 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 102 71 107 76 }*/
/* IO - VPL Root : { 123 52 128 57 }*/
/* IO - VPL Root : { 123 89 128 94 }*/
/* End Operation */

/* Begin Operation: { 159 0 175 90 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 154 43 159 48 }*/
/* IO - VPL Root : { 175 28 180 33 }*/
/* IO - VPL Root : { 175 58 180 63 }*/
/* End Operation */

/* Begin Operation: { 200 47 216 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"get-element-value");
/* IO - VPL Terminal : { 195 58 200 63 }*/
/* IO - VPL Terminal : { 195 89 200 94 }*/
/* IO - VPL Terminal : { 195 117 200 122 }*/
/* IO - VPL Terminal : { 195 147 200 152 }*/
/* IO - VPL Root : { 216 105 221 110 }*/
/* End Operation */

/* Begin Operation: { 246 11 254 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 241 105 246 110 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Get_20_Value_20_Data_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Get_20_Value_20_Data_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 287 545 }{ 393 281 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 101 33 106 }*/
/* IO - VPL Root : { 28 159 33 164 }*/
/* IO - VPL Root : { 28 189 33 194 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 89 193 105 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"type");
/* IO - VPL Terminal : { 84 203 89 208 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 90 61 106 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 85 113 90 118 }*/
/* IO - VPL Root : { 106 95 111 100 }*/
/* IO - VPL Root : { 106 131 111 136 }*/
/* End Operation */

/* Begin Operation: { 143 31 159 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 138 85 143 90 }*/
/* IO - VPL Root : { 159 65 164 70 }*/
/* IO - VPL Root : { 159 103 164 108 }*/
/* End Operation */

/* Begin Operation: { 203 22 219 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 198 65 203 70 }*/
/* IO - VPL Root : { 219 50 224 55 }*/
/* IO - VPL Root : { 219 80 224 85 }*/
/* End Operation */

/* Begin Operation: { 267 72 283 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"get-value-type");
/* IO - VPL Terminal : { 262 80 267 85 }*/
/* IO - VPL Terminal : { 262 103 267 108 }*/
/* IO - VPL Terminal : { 262 131 267 136 }*/
/* IO - VPL Terminal : { 262 159 267 164 }*/
/* IO - VPL Root : { 283 120 288 125 }*/
/* End Operation */

/* Begin Operation: { 326 25 334 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 321 120 326 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,2,0,4,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 286 828 }{ 395 350 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 100 33 105 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
/* IO - VPL Root : { 28 175 33 180 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 89 193 105 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"list");
/* IO - VPL Terminal : { 84 201 89 206 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 90 48 106 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 85 100 90 105 }*/
/* IO - VPL Root : { 106 82 111 87 }*/
/* IO - VPL Root : { 106 118 111 123 }*/
/* End Operation */

/* Begin Operation: { 143 22 159 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 138 76 143 81 }*/
/* IO - VPL Root : { 159 57 164 62 }*/
/* IO - VPL Root : { 159 94 164 99 }*/
/* End Operation */

/* Begin Operation: { 191 18 207 108 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 186 61 191 66 }*/
/* IO - VPL Root : { 207 46 212 51 }*/
/* IO - VPL Root : { 207 76 212 81 }*/
/* End Operation */

/* Begin Operation: { 249 72 265 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"get-value-list");
/* IO - VPL Terminal : { 244 76 249 81 }*/
/* IO - VPL Terminal : { 244 94 249 99 }*/
/* IO - VPL Terminal : { 244 118 249 123 }*/
/* IO - VPL Terminal : { 244 142 249 147 }*/
/* IO - VPL Root : { 265 119 270 124 }*/
/* End Operation */

/* Begin Operation: { 308 24 316 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 303 119 308 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,2,0,4,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 282 828 }{ 342 282 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 101 33 106 }*/
/* IO - VPL Root : { 28 147 33 152 }*/
/* IO - VPL Root : { 28 175 33 180 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 89 193 105 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"string");
/* IO - VPL Terminal : { 84 208 89 213 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 90 49 106 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 85 101 90 106 }*/
/* IO - VPL Root : { 106 83 111 88 }*/
/* IO - VPL Root : { 106 119 111 124 }*/
/* End Operation */

/* Begin Operation: { 143 19 159 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 138 73 143 78 }*/
/* IO - VPL Root : { 159 54 164 59 }*/
/* IO - VPL Root : { 159 91 164 96 }*/
/* End Operation */

/* Begin Operation: { 188 11 204 101 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 183 54 188 59 }*/
/* IO - VPL Root : { 204 39 209 44 }*/
/* IO - VPL Root : { 204 69 209 74 }*/
/* End Operation */

/* Begin Operation: { 237 65 253 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"get-value-string");
/* IO - VPL Terminal : { 232 69 237 74 }*/
/* IO - VPL Terminal : { 232 91 237 96 }*/
/* IO - VPL Terminal : { 232 119 237 124 }*/
/* IO - VPL Terminal : { 232 147 237 152 }*/
/* IO - VPL Root : { 253 119 258 124 }*/
/* End Operation */

/* Begin Operation: { 296 24 304 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 291 119 296 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,2,0,4,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 287 828 }{ 352 272 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 101 33 106 }*/
/* IO - VPL Root : { 28 154 33 159 }*/
/* IO - VPL Root : { 28 175 33 180 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 89 193 105 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"name");
/* IO - VPL Terminal : { 84 205 89 210 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 90 49 106 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 85 101 90 106 }*/
/* IO - VPL Root : { 106 83 111 88 }*/
/* IO - VPL Root : { 106 119 111 124 }*/
/* End Operation */

/* Begin Operation: { 143 12 159 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 138 66 143 71 }*/
/* IO - VPL Root : { 159 47 164 52 }*/
/* IO - VPL Root : { 159 84 164 89 }*/
/* End Operation */

/* Begin Operation: { 194 -2 210 88 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 189 41 194 46 }*/
/* IO - VPL Root : { 210 26 215 31 }*/
/* IO - VPL Root : { 210 56 215 61 }*/
/* End Operation */

/* Begin Operation: { 248 51 264 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"get-value-class-name");
/* IO - VPL Terminal : { 243 56 248 61 }*/
/* IO - VPL Terminal : { 243 84 248 89 }*/
/* IO - VPL Terminal : { 243 119 248 124 }*/
/* IO - VPL Terminal : { 243 154 248 159 }*/
/* IO - VPL Root : { 264 119 269 124 }*/
/* End Operation */

/* Begin Operation: { 307 24 315 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 302 119 307 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,2,0,4,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 284 826 }{ 367 286 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 101 33 106 }*/
/* IO - VPL Root : { 28 149 33 154 }*/
/* IO - VPL Root : { 28 175 33 180 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 89 193 105 235 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"archive");
/* IO - VPL Terminal : { 84 212 89 217 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 90 49 106 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 85 101 90 106 }*/
/* IO - VPL Root : { 106 83 111 88 }*/
/* IO - VPL Root : { 106 119 111 124 }*/
/* End Operation */

/* Begin Operation: { 143 17 159 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 138 71 143 76 }*/
/* IO - VPL Root : { 159 52 164 57 }*/
/* IO - VPL Root : { 159 89 164 94 }*/
/* End Operation */

/* Begin Operation: { 209 9 225 99 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 204 52 209 57 }*/
/* IO - VPL Root : { 225 37 230 42 }*/
/* IO - VPL Root : { 225 67 230 72 }*/
/* End Operation */

/* Begin Operation: { 262 61 278 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"get-value-archive");
/* IO - VPL Terminal : { 257 67 262 72 }*/
/* IO - VPL Terminal : { 257 89 262 94 }*/
/* IO - VPL Terminal : { 257 119 262 124 }*/
/* IO - VPL Terminal : { 257 149 262 154 }*/
/* IO - VPL Root : { 278 119 283 124 }*/
/* End Operation */

/* Begin Operation: { 321 24 329 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 316 119 321 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,2,0,4,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 561 1045 }{ 290 282 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 103 35 108 }*/
/* IO - VPL Root : { 30 151 35 156 }*/
/* IO - VPL Root : { 30 177 35 182 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 199 80 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"mark");
/* IO - VPL Terminal : { 59 212 64 217 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 64 51 80 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 59 103 64 108 }*/
/* IO - VPL Root : { 80 85 85 90 }*/
/* IO - VPL Root : { 80 121 85 126 }*/
/* End Operation */

/* Begin Operation: { 106 19 122 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 101 73 106 78 }*/
/* IO - VPL Root : { 122 54 127 59 }*/
/* IO - VPL Root : { 122 91 127 96 }*/
/* End Operation */

/* Begin Operation: { 148 11 164 101 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 143 54 148 59 }*/
/* IO - VPL Root : { 164 39 169 44 }*/
/* IO - VPL Root : { 164 69 169 74 }*/
/* End Operation */

/* Begin Operation: { 190 69 206 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"get-value-mark");
/* IO - VPL Terminal : { 185 69 190 74 }*/
/* IO - VPL Terminal : { 185 91 190 96 }*/
/* IO - VPL Terminal : { 185 121 190 126 }*/
/* IO - VPL Terminal : { 185 151 190 156 }*/
/* IO - VPL Root : { 206 121 211 126 }*/
/* End Operation */

/* Begin Operation: { 232 24 240 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 121 232 126 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,2,0,4,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 748 554 }{ 265 294 } */
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

/* Begin Operation: { 53 33 69 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Unrecognized value get data: \"");
/* IO - VPL Root : { 69 118 74 123 }*/
/* End Operation */

/* Begin Operation: { 98 102 114 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 93 118 98 123 }*/
/* IO - VPL Terminal : { 93 136 98 141 }*/
/* IO - VPL Root : { 114 127 119 132 }*/
/* End Operation */

/* Begin Operation: { 132 105 148 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"show");
/* IO - VPL Terminal : { 127 127 132 132 }*/
/* End Operation */

/* Begin Operation: { 181 107 197 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 197 118 202 123 }*/
/* End Operation */

/* Begin Operation: { 226 24 234 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 221 118 226 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Modify_20_Value_20_Use_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Modify_20_Value_20_Use_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 330 584 }{ 354 284 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 101 33 106 }*/
/* IO - VPL Root : { 28 152 33 157 }*/
/* IO - VPL Root : { 28 175 33 180 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 90 175 106 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"decrement");
/* IO - VPL Terminal : { 85 201 90 206 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 90 49 106 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 85 101 90 106 }*/
/* IO - VPL Root : { 106 83 111 88 }*/
/* IO - VPL Root : { 106 119 111 124 }*/
/* End Operation */

/* Begin Operation: { 143 14 159 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 138 68 143 73 }*/
/* IO - VPL Root : { 159 49 164 54 }*/
/* IO - VPL Root : { 159 86 164 91 }*/
/* End Operation */

/* Begin Operation: { 187 2 203 92 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 182 45 187 50 }*/
/* IO - VPL Root : { 203 30 208 35 }*/
/* IO - VPL Root : { 203 60 208 65 }*/
/* End Operation */

/* Begin Operation: { 245 55 261 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,0,"get-value-decrement");
/* IO - VPL Terminal : { 240 60 245 65 }*/
/* IO - VPL Terminal : { 240 86 245 91 }*/
/* IO - VPL Terminal : { 240 119 245 124 }*/
/* IO - VPL Terminal : { 240 152 245 157 }*/
/* End Operation */

/* Begin Operation: { 304 24 312 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,2,0,4,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 330 871 }{ 345 302 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 101 33 106 }*/
/* IO - VPL Root : { 28 152 33 157 }*/
/* IO - VPL Root : { 28 175 33 180 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 90 187 106 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"increment");
/* IO - VPL Terminal : { 85 212 90 217 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 90 49 106 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 85 101 90 106 }*/
/* IO - VPL Root : { 106 83 111 88 }*/
/* IO - VPL Root : { 106 119 111 124 }*/
/* End Operation */

/* Begin Operation: { 143 14 159 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 138 68 143 73 }*/
/* IO - VPL Root : { 159 49 164 54 }*/
/* IO - VPL Root : { 159 86 164 91 }*/
/* End Operation */

/* Begin Operation: { 195 3 211 93 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 190 46 195 51 }*/
/* IO - VPL Root : { 211 31 216 36 }*/
/* IO - VPL Root : { 211 61 216 66 }*/
/* End Operation */

/* Begin Operation: { 249 55 265 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,0,"get-value-increment");
/* IO - VPL Terminal : { 244 61 249 66 }*/
/* IO - VPL Terminal : { 244 86 249 91 }*/
/* IO - VPL Terminal : { 244 119 249 124 }*/
/* IO - VPL Terminal : { 244 152 249 157 }*/
/* End Operation */

/* Begin Operation: { 293 17 301 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,2,0,4,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 329 1174 }{ 201 273 } */
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

/* Begin Operation: { 46 7 62 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Unrecognized value modification: \"");
/* IO - VPL Root : { 62 103 67 108 }*/
/* End Operation */

/* Begin Operation: { 91 87 107 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 86 103 91 108 }*/
/* IO - VPL Terminal : { 86 121 91 126 }*/
/* IO - VPL Root : { 107 112 112 117 }*/
/* End Operation */

/* Begin Operation: { 125 90 141 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"show");
/* IO - VPL Terminal : { 120 112 125 117 }*/
/* End Operation */

/* Begin Operation: { 170 16 178 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Simple_20_Value_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Simple_20_Value_3F__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 319 401 }{ 262 283 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 69 162 85 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"type");
/* IO - VPL Root : { 85 172 90 177 }*/
/* End Operation */

/* Begin Operation: { 106 96 122 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Value Data");
/* IO - VPL Terminal : { 101 120 106 125 }*/
/* IO - VPL Terminal : { 101 146 106 151 }*/
/* IO - VPL Terminal : { 101 172 106 177 }*/
/* IO - VPL Root : { 122 147 127 152 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 152 69 168 115 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"instance");
/* IO - VPL Terminal : { 147 90 152 95 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 151 192 167 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"list");
/* IO - VPL Terminal : { 146 200 151 205 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 206 30 214 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 319 686 }{ 111 257 } */
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



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Object_20_To_20_Text_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Object_20_To_20_Text_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 251 382 }{ 323 330 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 70 33 75 }*/
/* IO - VPL Root : { 28 149 33 154 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 163 97 179 104 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"<");
/* IO - VPL Root : { 179 98 184 103 }*/
/* End Operation */

/* Begin Operation: { 164 134 180 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,">");
/* IO - VPL Root : { 180 135 185 140 }*/
/* End Operation */

/* Begin Operation: { 46 249 62 274 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"type");
/* IO - VPL Root : { 62 259 67 264 }*/
/* End Operation */

/* Begin Operation: { 91 183 107 290 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Value Data");
/* IO - VPL Terminal : { 86 207 91 212 }*/
/* IO - VPL Terminal : { 86 233 91 238 }*/
/* IO - VPL Terminal : { 86 259 91 264 }*/
/* IO - VPL Root : { 107 234 112 239 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 133 213 149 259 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"instance");
/* IO - VPL Terminal : { 128 234 133 239 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 89 129 105 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"name");
/* IO - VPL Root : { 105 141 110 146 }*/
/* End Operation */

/* Begin Operation: { 133 65 149 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Value Data");
/* IO - VPL Terminal : { 128 89 133 94 }*/
/* IO - VPL Terminal : { 128 115 133 120 }*/
/* IO - VPL Terminal : { 128 141 133 146 }*/
/* IO - VPL Root : { 149 116 154 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 211 91 227 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 206 98 211 103 }*/
/* IO - VPL Terminal : { 206 116 211 121 }*/
/* IO - VPL Terminal : { 206 135 211 140 }*/
/* IO - VPL Root : { 227 116 232 121 }*/
/* End Operation */

/* Begin Operation: { 274 22 282 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 269 116 274 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,2,0,2,7);
	result = connect_root_to_terminal(ptrA,1,6,3,7);
	result = connect_root_to_terminal(ptrA,1,1,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,1,2,3,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [7 to 5] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 251 726 }{ 348 346 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 254 78 279 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"type");
/* IO - VPL Root : { 78 264 83 269 }*/
/* End Operation */

/* Begin Operation: { 107 188 123 295 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Value Data");
/* IO - VPL Terminal : { 102 212 107 217 }*/
/* IO - VPL Terminal : { 102 238 107 243 }*/
/* IO - VPL Terminal : { 102 264 107 269 }*/
/* IO - VPL Root : { 123 239 128 244 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 150 231 166 251 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"list");
/* IO - VPL Terminal : { 145 239 150 244 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 105 149 121 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"list");
/* IO - VPL Root : { 121 157 126 162 }*/
/* End Operation */

/* Begin Operation: { 150 81 166 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Value Data");
/* IO - VPL Terminal : { 145 105 150 110 }*/
/* IO - VPL Terminal : { 145 131 150 136 }*/
/* IO - VPL Terminal : { 145 157 150 162 }*/
/* IO - VPL Root : { 166 132 171 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 212 62 228 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Object To Text");
/* IO - VPL Terminal : { 207 96 212 101 }*/
/* IO - VPL Terminal : { 207 132 212 137 }*/
/* IO - VPL Root : { 228 114 233 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);
	tempOperation = operation_output_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 263 81 279 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 258 114 263 119 }*/
/* IO - VPL Root : { 279 114 284 119 }*/
/* End Operation */

/* Begin Operation: { 306 20 314 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 301 114 306 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,2,0,2,5);
	result = connect_root_to_terminal(ptrA,1,4,3,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [5 to 3] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 250 1075 }{ 231 271 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 84 33 89 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 121 81 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"string");
/* IO - VPL Root : { 81 136 86 141 }*/
/* End Operation */

/* Begin Operation: { 110 60 126 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Value Data");
/* IO - VPL Terminal : { 105 84 110 89 }*/
/* IO - VPL Terminal : { 105 110 110 115 }*/
/* IO - VPL Terminal : { 105 136 110 141 }*/
/* IO - VPL Root : { 126 111 131 116 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 183 19 191 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 178 111 183 116 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Create_20_Class_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Create_20_Class_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 294 690 }{ 357 262 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 90 33 95 }*/
/* IO - VPL Root : { 28 131 33 136 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 38 81 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 60 90 65 95 }*/
/* IO - VPL Root : { 81 69 86 74 }*/
/* IO - VPL Root : { 81 108 86 113 }*/
/* End Operation */

/* Begin Operation: { 115 15 131 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 110 69 115 74 }*/
/* IO - VPL Root : { 131 50 136 55 }*/
/* IO - VPL Root : { 131 87 136 92 }*/
/* End Operation */

/* Begin Operation: { 175 15 191 105 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 170 58 175 63 }*/
/* IO - VPL Root : { 191 43 196 48 }*/
/* IO - VPL Root : { 191 73 196 78 }*/
/* End Operation */

/* Begin Operation: { 241 72 257 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"create-class");
/* IO - VPL Terminal : { 236 73 241 78 }*/
/* IO - VPL Terminal : { 236 87 241 92 }*/
/* IO - VPL Terminal : { 236 108 241 113 }*/
/* IO - VPL Terminal : { 236 131 241 136 }*/
/* IO - VPL Root : { 257 117 262 122 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 310 23 318 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 305 117 310 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Destroy_20_Class_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Destroy_20_Class_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 290 691 }{ 318 260 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 75 33 80 }*/
/* IO - VPL Root : { 28 155 33 160 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 80 63 96 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 75 115 80 120 }*/
/* IO - VPL Root : { 96 97 101 102 }*/
/* IO - VPL Root : { 96 133 101 138 }*/
/* End Operation */

/* Begin Operation: { 125 33 141 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 120 87 125 92 }*/
/* IO - VPL Root : { 141 68 146 73 }*/
/* IO - VPL Root : { 141 105 146 110 }*/
/* End Operation */

/* Begin Operation: { 181 25 197 115 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 176 68 181 73 }*/
/* IO - VPL Root : { 197 53 202 58 }*/
/* IO - VPL Root : { 197 83 202 88 }*/
/* End Operation */

/* Begin Operation: { 234 72 250 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,0,"remove-class");
/* IO - VPL Terminal : { 229 83 234 88 }*/
/* IO - VPL Terminal : { 229 105 234 110 }*/
/* IO - VPL Terminal : { 229 133 234 138 }*/
/* IO - VPL Terminal : { 229 155 234 160 }*/
/* End Operation */

/* Begin Operation: { 272 20 280 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Set_20_Class_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Set_20_Class_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 257 715 }{ 319 253 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 126 33 131 }*/
/* IO - VPL Root : { 28 143 33 148 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 41 74 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 53 93 58 98 }*/
/* IO - VPL Root : { 74 75 79 80 }*/
/* IO - VPL Root : { 74 111 79 116 }*/
/* End Operation */

/* Begin Operation: { 103 25 119 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 98 79 103 84 }*/
/* IO - VPL Root : { 119 60 124 65 }*/
/* IO - VPL Root : { 119 97 124 102 }*/
/* End Operation */

/* Begin Operation: { 159 27 175 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 154 70 159 75 }*/
/* IO - VPL Root : { 175 55 180 60 }*/
/* IO - VPL Root : { 175 85 180 90 }*/
/* End Operation */

/* Begin Operation: { 215 80 231 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,5,0,"set-class");
/* IO - VPL Terminal : { 210 85 215 90 }*/
/* IO - VPL Terminal : { 210 97 215 102 }*/
/* IO - VPL Terminal : { 210 111 215 116 }*/
/* IO - VPL Terminal : { 210 126 215 131 }*/
/* IO - VPL Terminal : { 210 143 215 148 }*/
/* End Operation */

/* Begin Operation: { 267 19 275 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,3,0,5,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Create_20_Method_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Create_20_Method_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 223 717 }{ 360 254 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 90 33 95 }*/
/* IO - VPL Root : { 28 155 33 160 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 61 81 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 60 113 65 118 }*/
/* IO - VPL Root : { 81 92 86 97 }*/
/* IO - VPL Root : { 81 131 86 136 }*/
/* End Operation */

/* Begin Operation: { 115 29 131 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 110 83 115 88 }*/
/* IO - VPL Root : { 131 64 136 69 }*/
/* IO - VPL Root : { 131 101 136 106 }*/
/* End Operation */

/* Begin Operation: { 178 17 194 107 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 173 60 178 65 }*/
/* IO - VPL Root : { 194 45 199 50 }*/
/* IO - VPL Root : { 194 75 199 80 }*/
/* End Operation */

/* Begin Operation: { 234 69 250 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"create-method");
/* IO - VPL Terminal : { 229 75 234 80 }*/
/* IO - VPL Terminal : { 229 101 234 106 }*/
/* IO - VPL Terminal : { 229 131 234 136 }*/
/* IO - VPL Terminal : { 229 155 234 160 }*/
/* IO - VPL Root : { 250 117 255 122 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 303 23 311 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 298 117 303 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Destroy_20_Method_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Destroy_20_Method_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 253 708 }{ 357 268 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 75 33 80 }*/
/* IO - VPL Root : { 28 159 33 164 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 80 66 96 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 75 118 80 123 }*/
/* IO - VPL Root : { 96 100 101 105 }*/
/* IO - VPL Root : { 96 136 101 141 }*/
/* End Operation */

/* Begin Operation: { 125 37 141 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 120 91 125 96 }*/
/* IO - VPL Root : { 141 71 146 76 }*/
/* IO - VPL Root : { 141 109 146 114 }*/
/* End Operation */

/* Begin Operation: { 175 28 191 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 170 71 175 76 }*/
/* IO - VPL Root : { 191 56 196 61 }*/
/* IO - VPL Root : { 191 86 196 91 }*/
/* End Operation */

/* Begin Operation: { 238 72 254 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,0,"remove-method");
/* IO - VPL Terminal : { 233 86 238 91 }*/
/* IO - VPL Terminal : { 233 109 238 114 }*/
/* IO - VPL Terminal : { 233 136 238 141 }*/
/* IO - VPL Terminal : { 233 159 238 164 }*/
/* End Operation */

/* Begin Operation: { 303 19 311 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Set_20_Method_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Set_20_Method_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 257 715 }{ 319 253 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 127 33 132 }*/
/* IO - VPL Root : { 28 141 33 146 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 43 74 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 53 95 58 100 }*/
/* IO - VPL Root : { 74 77 79 82 }*/
/* IO - VPL Root : { 74 113 79 118 }*/
/* End Operation */

/* Begin Operation: { 103 27 119 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 98 81 103 86 }*/
/* IO - VPL Root : { 119 62 124 67 }*/
/* IO - VPL Root : { 119 99 124 104 }*/
/* End Operation */

/* Begin Operation: { 159 27 175 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 154 70 159 75 }*/
/* IO - VPL Root : { 175 55 180 60 }*/
/* IO - VPL Root : { 175 85 180 90 }*/
/* End Operation */

/* Begin Operation: { 215 73 231 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,5,0,"set-method");
/* IO - VPL Terminal : { 210 85 215 90 }*/
/* IO - VPL Terminal : { 210 99 215 104 }*/
/* IO - VPL Terminal : { 210 113 215 118 }*/
/* IO - VPL Terminal : { 210 127 215 132 }*/
/* IO - VPL Terminal : { 210 141 215 146 }*/
/* End Operation */

/* Begin Operation: { 267 19 275 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,3,0,5,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Create_20_Case_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Create_20_Case_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 288 705 }{ 366 266 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 83 33 88 }*/
/* IO - VPL Root : { 28 117 33 122 }*/
/* IO - VPL Root : { 28 133 33 138 }*/
/* IO - VPL Root : { 28 149 33 154 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 31 81 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 60 83 65 88 }*/
/* IO - VPL Root : { 81 62 86 67 }*/
/* IO - VPL Root : { 81 101 86 106 }*/
/* End Operation */

/* Begin Operation: { 115 15 131 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 110 62 115 67 }*/
/* IO - VPL Root : { 131 50 136 55 }*/
/* IO - VPL Root : { 131 87 136 92 }*/
/* End Operation */

/* Begin Operation: { 178 20 194 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 173 63 178 68 }*/
/* IO - VPL Root : { 194 48 199 53 }*/
/* IO - VPL Root : { 194 78 199 83 }*/
/* End Operation */

/* Begin Operation: { 242 77 258 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,6,1,"insert-case");
/* IO - VPL Terminal : { 237 78 242 83 }*/
/* IO - VPL Terminal : { 237 87 242 92 }*/
/* IO - VPL Terminal : { 237 101 242 106 }*/
/* IO - VPL Terminal : { 237 117 242 122 }*/
/* IO - VPL Terminal : { 237 133 242 138 }*/
/* IO - VPL Terminal : { 237 149 242 154 }*/
/* IO - VPL Root : { 258 117 263 122 }*/
/* End Operation */

/* Begin Operation: { 311 23 319 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 306 117 311 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,3,0,5,4);
	result = connect_root_to_terminal(ptrA,4,0,6,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Destroy_20_Case_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Destroy_20_Case_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 280 720 }{ 283 274 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 75 33 80 }*/
/* IO - VPL Root : { 28 160 33 165 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 68 73 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 52 120 57 125 }*/
/* IO - VPL Root : { 73 102 78 107 }*/
/* IO - VPL Root : { 73 138 78 143 }*/
/* End Operation */

/* Begin Operation: { 102 42 118 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 97 96 102 101 }*/
/* IO - VPL Root : { 118 77 123 82 }*/
/* IO - VPL Root : { 118 114 123 119 }*/
/* End Operation */

/* Begin Operation: { 147 32 163 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 142 75 147 80 }*/
/* IO - VPL Root : { 163 60 168 65 }*/
/* IO - VPL Root : { 163 90 168 95 }*/
/* End Operation */

/* Begin Operation: { 199 82 215 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,0,"dispose-case");
/* IO - VPL Terminal : { 194 90 199 95 }*/
/* IO - VPL Terminal : { 194 114 199 119 }*/
/* IO - VPL Terminal : { 194 138 199 143 }*/
/* IO - VPL Terminal : { 194 160 199 165 }*/
/* End Operation */

/* Begin Operation: { 237 19 245 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Create_20_Operation_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Create_20_Operation_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 291 696 }{ 393 279 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 90 33 95 }*/
/* IO - VPL Root : { 28 131 33 136 }*/
/* IO - VPL Root : { 28 157 33 162 }*/
/* IO - VPL Root : { 28 170 33 175 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 38 81 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 60 90 65 95 }*/
/* IO - VPL Root : { 81 69 86 74 }*/
/* IO - VPL Root : { 81 108 86 113 }*/
/* End Operation */

/* Begin Operation: { 115 15 131 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 110 69 115 74 }*/
/* IO - VPL Root : { 131 50 136 55 }*/
/* IO - VPL Root : { 131 87 136 92 }*/
/* End Operation */

/* Begin Operation: { 185 12 201 102 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 180 55 185 60 }*/
/* IO - VPL Root : { 201 40 206 45 }*/
/* IO - VPL Root : { 201 70 206 75 }*/
/* End Operation */

/* Begin Operation: { 268 64 284 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,6,1,"insert-operation");
/* IO - VPL Terminal : { 263 70 268 75 }*/
/* IO - VPL Terminal : { 263 87 268 92 }*/
/* IO - VPL Terminal : { 263 108 268 113 }*/
/* IO - VPL Terminal : { 263 131 268 136 }*/
/* IO - VPL Terminal : { 263 157 268 162 }*/
/* IO - VPL Terminal : { 263 170 268 175 }*/
/* IO - VPL Root : { 284 117 289 122 }*/
/* End Operation */

/* Begin Operation: { 337 23 345 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 332 117 337 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,3,0,5,4);
	result = connect_root_to_terminal(ptrA,4,0,6,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Destroy_20_Operation_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Destroy_20_Operation_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 371 557 }{ 396 268 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 75 33 80 }*/
/* IO - VPL Root : { 28 158 33 163 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 80 66 96 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 75 118 80 123 }*/
/* IO - VPL Root : { 96 100 101 105 }*/
/* IO - VPL Root : { 96 136 101 141 }*/
/* End Operation */

/* Begin Operation: { 125 38 141 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 120 92 125 97 }*/
/* IO - VPL Root : { 141 73 146 78 }*/
/* IO - VPL Root : { 141 110 146 115 }*/
/* End Operation */

/* Begin Operation: { 176 25 192 115 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 171 68 176 73 }*/
/* IO - VPL Root : { 192 53 197 58 }*/
/* IO - VPL Root : { 192 83 197 88 }*/
/* End Operation */

/* Begin Operation: { 243 66 259 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"dispose-operation");
/* IO - VPL Terminal : { 238 83 243 88 }*/
/* IO - VPL Terminal : { 238 110 243 115 }*/
/* IO - VPL Terminal : { 238 136 243 141 }*/
/* IO - VPL Terminal : { 238 158 243 163 }*/
/* IO - VPL Root : { 259 123 264 128 }*/
/* End Operation */

/* Begin Operation: { 295 100 311 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Close");
/* IO - VPL Terminal : { 290 123 295 128 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 351 322 }{ 64 309 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 116 352 }{ 152 267 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 177 72 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 52 188 57 193 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 57 81 73 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Rollback");
/* IO - VPL Terminal : { 52 115 57 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 108 28 116 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 391 369 }{ 95 263 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 40 20 48 212 } */
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

/* Begin Operation: { 344 22 352 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Set_20_Operation_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Set_20_Operation_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 288 828 }{ 285 265 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 64 33 69 }*/
/* IO - VPL Root : { 28 91 33 96 }*/
/* IO - VPL Root : { 28 100 33 105 }*/
/* IO - VPL Root : { 28 109 33 114 }*/
/* IO - VPL Root : { 28 118 33 123 }*/
/* IO - VPL Root : { 28 127 33 132 }*/
/* IO - VPL Root : { 28 136 33 141 }*/
/* IO - VPL Root : { 28 145 33 150 }*/
/* IO - VPL Root : { 28 154 33 159 }*/
/* IO - VPL Root : { 28 164 33 169 }*/
/* IO - VPL Root : { 28 183 33 188 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 12 72 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 51 64 56 69 }*/
/* IO - VPL Root : { 72 46 77 51 }*/
/* IO - VPL Root : { 72 82 77 87 }*/
/* End Operation */

/* Begin Operation: { 101 1 117 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 96 55 101 60 }*/
/* IO - VPL Root : { 117 36 122 41 }*/
/* IO - VPL Root : { 117 73 122 78 }*/
/* End Operation */

/* Begin Operation: { 151 8 167 98 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 146 51 151 56 }*/
/* IO - VPL Root : { 167 36 172 41 }*/
/* IO - VPL Root : { 167 66 172 71 }*/
/* End Operation */

/* Begin Operation: { 205 72 221 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,13,0,"set-operation");
/* IO - VPL Terminal : { 200 66 205 71 }*/
/* IO - VPL Terminal : { 200 74 205 79 }*/
/* IO - VPL Terminal : { 200 82 205 87 }*/
/* IO - VPL Terminal : { 200 91 205 96 }*/
/* IO - VPL Terminal : { 200 100 205 105 }*/
/* IO - VPL Terminal : { 200 109 205 114 }*/
/* IO - VPL Terminal : { 200 118 205 123 }*/
/* IO - VPL Terminal : { 200 127 205 132 }*/
/* IO - VPL Terminal : { 200 136 205 141 }*/
/* IO - VPL Terminal : { 200 145 205 150 }*/
/* IO - VPL Terminal : { 200 154 205 159 }*/
/* IO - VPL Terminal : { 200 164 205 169 }*/
/* IO - VPL Terminal : { 200 183 205 188 }*/
/* End Operation */

/* Begin Operation: { 237 19 245 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,3,0,5,4);
	result = connect_root_to_terminal(ptrA,4,0,6,4);
	result = connect_root_to_terminal(ptrA,5,0,7,4);
	result = connect_root_to_terminal(ptrA,6,0,8,4);
	result = connect_root_to_terminal(ptrA,7,0,9,4);
	result = connect_root_to_terminal(ptrA,8,0,10,4);
	result = connect_root_to_terminal(ptrA,9,0,11,4);
	result = connect_root_to_terminal(ptrA,10,0,12,4);
	result = connect_root_to_terminal(ptrA,11,0,13,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Create_20_Terminal_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Create_20_Terminal_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 407 735 }{ 282 255 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 90 33 95 }*/
/* IO - VPL Root : { 28 131 33 136 }*/
/* IO - VPL Root : { 28 155 33 160 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 38 68 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 47 90 52 95 }*/
/* IO - VPL Root : { 68 69 73 74 }*/
/* IO - VPL Root : { 68 108 73 113 }*/
/* End Operation */

/* Begin Operation: { 102 15 118 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 97 69 102 74 }*/
/* IO - VPL Root : { 118 50 123 55 }*/
/* IO - VPL Root : { 118 87 123 92 }*/
/* End Operation */

/* Begin Operation: { 150 12 166 102 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 145 55 150 60 }*/
/* IO - VPL Root : { 166 40 171 45 }*/
/* IO - VPL Root : { 166 70 171 75 }*/
/* End Operation */

/* Begin Operation: { 196 66 212 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,5,1,"insert-terminal");
/* IO - VPL Terminal : { 191 70 196 75 }*/
/* IO - VPL Terminal : { 191 87 196 92 }*/
/* IO - VPL Terminal : { 191 108 196 113 }*/
/* IO - VPL Terminal : { 191 131 196 136 }*/
/* IO - VPL Terminal : { 191 155 196 160 }*/
/* IO - VPL Root : { 212 117 217 122 }*/
/* End Operation */

/* Begin Operation: { 233 23 241 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 228 117 233 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,3,0,5,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Destroy_20_Terminal_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Destroy_20_Terminal_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 366 748 }{ 283 274 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 75 33 80 }*/
/* IO - VPL Root : { 28 158 33 163 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 59 68 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 47 111 52 116 }*/
/* IO - VPL Root : { 68 93 73 98 }*/
/* IO - VPL Root : { 68 129 73 134 }*/
/* End Operation */

/* Begin Operation: { 97 30 113 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 92 84 97 89 }*/
/* IO - VPL Root : { 113 65 118 70 }*/
/* IO - VPL Root : { 113 102 118 107 }*/
/* End Operation */

/* Begin Operation: { 154 17 170 107 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 149 60 154 65 }*/
/* IO - VPL Root : { 170 45 175 50 }*/
/* IO - VPL Root : { 170 75 175 80 }*/
/* End Operation */

/* Begin Operation: { 201 66 217 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,0,"dispose-terminal");
/* IO - VPL Terminal : { 196 75 201 80 }*/
/* IO - VPL Terminal : { 196 102 201 107 }*/
/* IO - VPL Terminal : { 196 129 201 134 }*/
/* IO - VPL Terminal : { 196 158 201 163 }*/
/* End Operation */

/* Begin Operation: { 237 19 245 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Set_20_Terminal_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Set_20_Terminal_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 272 846 }{ 285 265 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 64 33 69 }*/
/* IO - VPL Root : { 28 91 33 96 }*/
/* IO - VPL Root : { 28 103 33 108 }*/
/* IO - VPL Root : { 28 114 33 119 }*/
/* IO - VPL Root : { 28 125 33 130 }*/
/* IO - VPL Root : { 28 134 33 139 }*/
/* IO - VPL Root : { 28 144 33 149 }*/
/* IO - VPL Root : { 28 154 33 159 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 51 12 67 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 46 64 51 69 }*/
/* IO - VPL Root : { 67 46 72 51 }*/
/* IO - VPL Root : { 67 82 72 87 }*/
/* End Operation */

/* Begin Operation: { 96 0 112 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 91 54 96 59 }*/
/* IO - VPL Root : { 112 35 117 40 }*/
/* IO - VPL Root : { 112 72 117 77 }*/
/* End Operation */

/* Begin Operation: { 143 2 159 92 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 138 45 143 50 }*/
/* IO - VPL Root : { 159 30 164 35 }*/
/* IO - VPL Root : { 159 60 164 65 }*/
/* End Operation */

/* Begin Operation: { 203 68 219 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,10,0,"set-terminal");
/* IO - VPL Terminal : { 198 60 203 65 }*/
/* IO - VPL Terminal : { 198 72 203 77 }*/
/* IO - VPL Terminal : { 198 82 203 87 }*/
/* IO - VPL Terminal : { 198 91 203 96 }*/
/* IO - VPL Terminal : { 198 103 203 108 }*/
/* IO - VPL Terminal : { 198 114 203 119 }*/
/* IO - VPL Terminal : { 198 125 203 130 }*/
/* IO - VPL Terminal : { 198 134 203 139 }*/
/* IO - VPL Terminal : { 198 144 203 149 }*/
/* IO - VPL Terminal : { 198 154 203 159 }*/
/* End Operation */

/* Begin Operation: { 237 19 245 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,3,0,5,4);
	result = connect_root_to_terminal(ptrA,4,0,6,4);
	result = connect_root_to_terminal(ptrA,5,0,7,4);
	result = connect_root_to_terminal(ptrA,6,0,8,4);
	result = connect_root_to_terminal(ptrA,7,0,9,4);
	result = connect_root_to_terminal(ptrA,8,0,10,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Create_20_Root_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Create_20_Root_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 261 702 }{ 284 258 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 90 33 95 }*/
/* IO - VPL Root : { 28 135 33 140 }*/
/* IO - VPL Root : { 28 154 33 159 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 47 69 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 48 99 53 104 }*/
/* IO - VPL Root : { 69 78 74 83 }*/
/* IO - VPL Root : { 69 117 74 122 }*/
/* End Operation */

/* Begin Operation: { 103 25 119 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 98 79 103 84 }*/
/* IO - VPL Root : { 119 60 124 65 }*/
/* IO - VPL Root : { 119 97 124 102 }*/
/* End Operation */

/* Begin Operation: { 146 23 162 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 141 66 146 71 }*/
/* IO - VPL Root : { 162 51 167 56 }*/
/* IO - VPL Root : { 162 81 167 86 }*/
/* End Operation */

/* Begin Operation: { 194 78 210 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,5,1,"insert-root");
/* IO - VPL Terminal : { 189 81 194 86 }*/
/* IO - VPL Terminal : { 189 97 194 102 }*/
/* IO - VPL Terminal : { 189 117 194 122 }*/
/* IO - VPL Terminal : { 189 135 194 140 }*/
/* IO - VPL Terminal : { 189 154 194 159 }*/
/* IO - VPL Root : { 210 117 215 122 }*/
/* End Operation */

/* Begin Operation: { 233 23 241 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 228 117 233 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,3,0,5,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Destroy_20_Root_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Destroy_20_Root_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 349 804 }{ 283 274 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 75 33 80 }*/
/* IO - VPL Root : { 28 158 33 163 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 51 67 67 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 46 119 51 124 }*/
/* IO - VPL Root : { 67 101 72 106 }*/
/* IO - VPL Root : { 67 137 72 142 }*/
/* End Operation */

/* Begin Operation: { 96 42 112 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 91 96 96 101 }*/
/* IO - VPL Root : { 112 77 117 82 }*/
/* IO - VPL Root : { 112 114 117 119 }*/
/* End Operation */

/* Begin Operation: { 147 34 163 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 142 77 147 82 }*/
/* IO - VPL Root : { 163 62 168 67 }*/
/* IO - VPL Root : { 163 92 168 97 }*/
/* End Operation */

/* Begin Operation: { 195 83 211 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,0,"dispose-root");
/* IO - VPL Terminal : { 190 92 195 97 }*/
/* IO - VPL Terminal : { 190 114 195 119 }*/
/* IO - VPL Terminal : { 190 137 195 142 }*/
/* IO - VPL Terminal : { 190 158 195 163 }*/
/* End Operation */

/* Begin Operation: { 237 19 245 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Set_20_Root_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Set_20_Root_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 304 659 }{ 297 252 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 64 33 69 }*/
/* IO - VPL Root : { 28 111 33 116 }*/
/* IO - VPL Root : { 28 124 33 129 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 18 72 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 51 70 56 75 }*/
/* IO - VPL Root : { 72 52 77 57 }*/
/* IO - VPL Root : { 72 98 77 103 }*/
/* End Operation */

/* Begin Operation: { 101 12 117 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 96 53 101 58 }*/
/* IO - VPL Root : { 117 47 122 52 }*/
/* IO - VPL Root : { 117 84 122 89 }*/
/* End Operation */

/* Begin Operation: { 148 13 164 103 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 143 56 148 61 }*/
/* IO - VPL Root : { 164 41 169 46 }*/
/* IO - VPL Root : { 164 71 169 76 }*/
/* End Operation */

/* Begin Operation: { 197 68 213 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,5,0,"set-root");
/* IO - VPL Terminal : { 192 71 197 76 }*/
/* IO - VPL Terminal : { 192 84 197 89 }*/
/* IO - VPL Terminal : { 192 98 197 103 }*/
/* IO - VPL Terminal : { 192 111 197 116 }*/
/* IO - VPL Terminal : { 192 124 197 129 }*/
/* End Operation */

/* Begin Operation: { 246 22 254 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,3,0,5,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Order_20_Elements_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Order_20_Elements_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 422 684 }{ 297 268 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 77 33 82 }*/
/* IO - VPL Root : { 28 145 33 150 }*/
/* IO - VPL Root : { 28 166 33 171 }*/
/* IO - VPL Root : { 28 194 33 199 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 170 72 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"operation");
/* IO - VPL Terminal : { 51 194 56 199 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 56 42 72 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 51 94 56 99 }*/
/* IO - VPL Root : { 72 76 77 81 }*/
/* IO - VPL Root : { 72 122 77 127 }*/
/* End Operation */

/* Begin Operation: { 101 24 117 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 96 78 101 83 }*/
/* IO - VPL Root : { 117 59 122 64 }*/
/* IO - VPL Root : { 117 96 122 101 }*/
/* End Operation */

/* Begin Operation: { 154 18 170 108 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 149 61 154 66 }*/
/* IO - VPL Root : { 170 46 175 51 }*/
/* IO - VPL Root : { 170 76 175 81 }*/
/* End Operation */

/* Begin Operation: { 209 68 225 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,5,0,"order-operations");
/* IO - VPL Terminal : { 204 76 209 81 }*/
/* IO - VPL Terminal : { 204 96 209 101 }*/
/* IO - VPL Terminal : { 204 122 209 127 }*/
/* IO - VPL Terminal : { 204 145 209 150 }*/
/* IO - VPL Terminal : { 204 166 209 171 }*/
/* End Operation */

/* Begin Operation: { 247 20 255 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,4,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,2,0,4,5);
	result = connect_root_to_terminal(ptrA,3,0,5,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 419 953 }{ 318 253 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 77 33 82 }*/
/* IO - VPL Root : { 28 126 33 131 }*/
/* IO - VPL Root : { 28 148 33 153 }*/
/* IO - VPL Root : { 28 182 33 187 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 172 72 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"case");
/* IO - VPL Terminal : { 51 182 56 187 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 56 25 72 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 51 77 56 82 }*/
/* IO - VPL Root : { 72 59 77 64 }*/
/* IO - VPL Root : { 72 105 77 110 }*/
/* End Operation */

/* Begin Operation: { 101 17 117 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 96 71 101 76 }*/
/* IO - VPL Root : { 117 52 122 57 }*/
/* IO - VPL Root : { 117 89 122 94 }*/
/* End Operation */

/* Begin Operation: { 172 14 188 104 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 167 57 172 62 }*/
/* IO - VPL Root : { 188 42 193 47 }*/
/* IO - VPL Root : { 188 72 193 77 }*/
/* End Operation */

/* Begin Operation: { 243 68 259 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,5,0,"order-cases");
/* IO - VPL Terminal : { 238 72 243 77 }*/
/* IO - VPL Terminal : { 238 89 243 94 }*/
/* IO - VPL Terminal : { 238 105 243 110 }*/
/* IO - VPL Terminal : { 238 126 243 131 }*/
/* IO - VPL Terminal : { 238 148 243 153 }*/
/* End Operation */

/* Begin Operation: { 279 24 287 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,4,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,2,0,4,5);
	result = connect_root_to_terminal(ptrA,3,0,5,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 416 1206 }{ 270 250 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 77 33 82 }*/
/* IO - VPL Root : { 28 145 33 150 }*/
/* IO - VPL Root : { 28 166 33 171 }*/
/* IO - VPL Root : { 28 194 33 199 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 171 72 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"attribute");
/* IO - VPL Terminal : { 51 194 56 199 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 56 38 72 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 51 90 56 95 }*/
/* IO - VPL Root : { 72 72 77 77 }*/
/* IO - VPL Root : { 72 118 77 123 }*/
/* End Operation */

/* Begin Operation: { 92 23 108 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 87 77 92 82 }*/
/* IO - VPL Root : { 108 58 113 63 }*/
/* IO - VPL Root : { 108 95 113 100 }*/
/* End Operation */

/* Begin Operation: { 152 17 168 107 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 147 60 152 65 }*/
/* IO - VPL Root : { 168 45 173 50 }*/
/* IO - VPL Root : { 168 75 173 80 }*/
/* End Operation */

/* Begin Operation: { 204 68 220 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,5,0,"order-attributes");
/* IO - VPL Terminal : { 199 75 204 80 }*/
/* IO - VPL Terminal : { 199 95 204 100 }*/
/* IO - VPL Terminal : { 199 118 204 123 }*/
/* IO - VPL Terminal : { 199 145 204 150 }*/
/* IO - VPL Terminal : { 199 166 204 171 }*/
/* End Operation */

/* Begin Operation: { 240 17 248 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,4,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,2,0,4,5);
	result = connect_root_to_terminal(ptrA,3,0,5,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 421 954 }{ 289 266 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 77 33 82 }*/
/* IO - VPL Root : { 28 133 33 138 }*/
/* IO - VPL Root : { 28 155 33 160 }*/
/* IO - VPL Root : { 28 194 33 199 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 173 72 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"terminal");
/* IO - VPL Terminal : { 51 194 56 199 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 56 33 72 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 51 85 56 90 }*/
/* IO - VPL Root : { 72 67 77 72 }*/
/* IO - VPL Root : { 72 113 77 118 }*/
/* End Operation */

/* Begin Operation: { 99 21 115 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 94 75 99 80 }*/
/* IO - VPL Root : { 115 56 120 61 }*/
/* IO - VPL Root : { 115 93 120 98 }*/
/* End Operation */

/* Begin Operation: { 158 18 174 108 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 153 61 158 66 }*/
/* IO - VPL Root : { 174 46 179 51 }*/
/* IO - VPL Root : { 174 76 179 81 }*/
/* End Operation */

/* Begin Operation: { 219 70 235 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,5,0,"order-inputs");
/* IO - VPL Terminal : { 214 76 219 81 }*/
/* IO - VPL Terminal : { 214 93 219 98 }*/
/* IO - VPL Terminal : { 214 113 219 118 }*/
/* IO - VPL Terminal : { 214 133 219 138 }*/
/* IO - VPL Terminal : { 214 155 219 160 }*/
/* End Operation */

/* Begin Operation: { 255 23 263 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,4,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,2,0,4,5);
	result = connect_root_to_terminal(ptrA,3,0,5,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 422 1223 }{ 284 259 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 75 33 80 }*/
/* IO - VPL Root : { 28 136 33 141 }*/
/* IO - VPL Root : { 28 156 33 161 }*/
/* IO - VPL Root : { 28 194 33 199 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 184 72 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"root");
/* IO - VPL Terminal : { 51 194 56 199 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 56 37 72 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 51 89 56 94 }*/
/* IO - VPL Root : { 72 73 77 78 }*/
/* IO - VPL Root : { 72 117 77 122 }*/
/* End Operation */

/* Begin Operation: { 101 24 117 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 96 78 101 83 }*/
/* IO - VPL Root : { 117 59 122 64 }*/
/* IO - VPL Root : { 117 96 122 101 }*/
/* End Operation */

/* Begin Operation: { 146 18 162 108 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 141 61 146 66 }*/
/* IO - VPL Root : { 162 46 167 51 }*/
/* IO - VPL Root : { 162 76 167 81 }*/
/* End Operation */

/* Begin Operation: { 199 72 215 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,5,0,"order-outputs");
/* IO - VPL Terminal : { 194 76 199 81 }*/
/* IO - VPL Terminal : { 194 96 199 101 }*/
/* IO - VPL Terminal : { 194 117 199 122 }*/
/* IO - VPL Terminal : { 194 136 199 141 }*/
/* IO - VPL Terminal : { 194 156 199 161 }*/
/* End Operation */

/* Begin Operation: { 235 26 243 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,4,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,2,0,4,5);
	result = connect_root_to_terminal(ptrA,3,0,5,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 693 374 }{ 222 256 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 77 33 82 }*/
/* IO - VPL Root : { 28 136 33 141 }*/
/* IO - VPL Root : { 28 166 33 171 }*/
/* IO - VPL Root : { 28 194 33 199 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 13 80 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Unrecognized order elements command: \"");
/* IO - VPL Root : { 80 126 85 131 }*/
/* End Operation */

/* Begin Operation: { 109 115 125 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"show");
/* IO - VPL Terminal : { 104 126 109 131 }*/
/* IO - VPL Terminal : { 104 151 109 156 }*/
/* End Operation */

/* Begin Operation: { 176 23 184 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,4,0,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Get_20_Operation_20_Arity_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Get_20_Operation_20_Arity_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 200 716 }{ 353 265 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 78 33 83 }*/
/* IO - VPL Root : { 28 138 33 143 }*/
/* IO - VPL Root : { 28 186 33 191 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 66 160 82 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment," primitive");
/* IO - VPL Terminal : { 61 186 66 191 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 65 26 81 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 60 78 65 83 }*/
/* IO - VPL Root : { 81 57 86 62 }*/
/* IO - VPL Root : { 81 96 86 101 }*/
/* End Operation */

/* Begin Operation: { 117 127 133 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 112 138 117 143 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 115 -2 131 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 110 52 115 57 }*/
/* IO - VPL Root : { 131 33 136 38 }*/
/* IO - VPL Root : { 131 70 136 75 }*/
/* End Operation */

/* Begin Operation: { 177 10 193 100 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 172 53 177 58 }*/
/* IO - VPL Root : { 193 38 198 43 }*/
/* IO - VPL Root : { 193 68 198 73 }*/
/* End Operation */

/* Begin Operation: { 239 35 255 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,3,"get-primitive-arity");
/* IO - VPL Terminal : { 234 46 239 51 }*/
/* IO - VPL Terminal : { 234 70 239 75 }*/
/* IO - VPL Terminal : { 234 96 239 101 }*/
/* IO - VPL Terminal : { 234 138 239 143 }*/
/* IO - VPL Root : { 255 76 260 81 }*/
/* IO - VPL Root : { 255 119 260 124 }*/
/* IO - VPL Root : { 255 148 260 153 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 308 23 316 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 303 76 308 81 }*/
/* IO - VPL Terminal : { 303 119 308 124 }*/
/* IO - VPL Terminal : { 303 148 308 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,5,1,6);
	result = connect_root_to_terminal(ptrA,2,4,2,6);
	result = connect_root_to_terminal(ptrA,2,2,3,6);
	result = connect_root_to_terminal(ptrA,2,0,4,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,2,6,2,7);
	result = connect_root_to_terminal(ptrA,3,6,3,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 281 679 }{ 322 265 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 78 33 83 }*/
/* IO - VPL Root : { 28 138 33 143 }*/
/* IO - VPL Root : { 28 186 33 191 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 66 161 82 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"procedure");
/* IO - VPL Terminal : { 61 186 66 191 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 65 26 81 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 60 78 65 83 }*/
/* IO - VPL Root : { 81 57 86 62 }*/
/* IO - VPL Root : { 81 96 86 101 }*/
/* End Operation */

/* Begin Operation: { 115 127 131 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 110 138 115 143 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 115 3 131 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 110 57 115 62 }*/
/* IO - VPL Root : { 131 38 136 43 }*/
/* IO - VPL Root : { 131 75 136 80 }*/
/* End Operation */

/* Begin Operation: { 163 -11 179 79 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 158 32 163 37 }*/
/* IO - VPL Root : { 179 17 184 22 }*/
/* IO - VPL Root : { 179 47 184 52 }*/
/* End Operation */

/* Begin Operation: { 217 34 233 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,2,"get-procedure-arity");
/* IO - VPL Terminal : { 212 47 217 52 }*/
/* IO - VPL Terminal : { 212 75 217 80 }*/
/* IO - VPL Terminal : { 212 96 217 101 }*/
/* IO - VPL Terminal : { 212 138 217 143 }*/
/* IO - VPL Root : { 233 76 238 81 }*/
/* IO - VPL Root : { 233 119 238 124 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 216 200 232 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 232 211 237 216 }*/
/* End Operation */

/* Begin Operation: { 266 23 274 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 261 69 266 74 }*/
/* IO - VPL Terminal : { 261 117 266 122 }*/
/* IO - VPL Terminal : { 261 165 266 170 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,5,1,6);
	result = connect_root_to_terminal(ptrA,2,4,2,6);
	result = connect_root_to_terminal(ptrA,2,2,3,6);
	result = connect_root_to_terminal(ptrA,2,0,4,6);
	result = connect_root_to_terminal(ptrA,1,6,1,8);
	result = connect_root_to_terminal(ptrA,2,6,2,8);
	result = connect_root_to_terminal(ptrA,1,7,3,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 199 1252 }{ 322 265 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 78 33 83 }*/
/* IO - VPL Root : { 28 138 33 143 }*/
/* IO - VPL Root : { 28 186 33 191 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 66 168 82 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"method");
/* IO - VPL Terminal : { 61 186 66 191 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 65 26 81 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 60 78 65 83 }*/
/* IO - VPL Root : { 81 57 86 62 }*/
/* IO - VPL Root : { 81 96 86 101 }*/
/* End Operation */

/* Begin Operation: { 115 127 131 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 110 138 115 143 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 115 3 131 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 110 57 115 62 }*/
/* IO - VPL Root : { 131 38 136 43 }*/
/* IO - VPL Root : { 131 75 136 80 }*/
/* End Operation */

/* Begin Operation: { 163 -11 179 79 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 158 32 163 37 }*/
/* IO - VPL Root : { 179 17 184 22 }*/
/* IO - VPL Root : { 179 47 184 52 }*/
/* End Operation */

/* Begin Operation: { 217 41 233 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,3,"get-method-arity");
/* IO - VPL Terminal : { 212 47 217 52 }*/
/* IO - VPL Terminal : { 212 75 217 80 }*/
/* IO - VPL Terminal : { 212 96 217 101 }*/
/* IO - VPL Terminal : { 212 138 217 143 }*/
/* IO - VPL Root : { 233 76 238 81 }*/
/* IO - VPL Root : { 233 119 238 124 }*/
/* IO - VPL Root : { 233 147 238 152 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 286 23 294 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 281 69 286 74 }*/
/* IO - VPL Terminal : { 281 117 286 122 }*/
/* IO - VPL Terminal : { 281 165 286 170 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,5,1,6);
	result = connect_root_to_terminal(ptrA,2,4,2,6);
	result = connect_root_to_terminal(ptrA,2,2,3,6);
	result = connect_root_to_terminal(ptrA,2,0,4,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,2,6,2,7);
	result = connect_root_to_terminal(ptrA,3,6,3,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [3 to 2] */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 199 1257 }{ 278 269 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 78 33 83 }*/
/* IO - VPL Root : { 28 138 33 143 }*/
/* IO - VPL Root : { 28 186 33 191 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 29 81 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Unknown get arity type: \"");
/* IO - VPL Root : { 81 101 86 106 }*/
/* End Operation */

/* Begin Operation: { 110 90 126 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"show");
/* IO - VPL Terminal : { 105 101 110 106 }*/
/* IO - VPL Terminal : { 105 122 110 127 }*/
/* End Operation */

/* Begin Operation: { 188 74 204 82 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 204 76 209 81 }*/
/* End Operation */

/* Begin Operation: { 188 154 204 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 204 165 209 170 }*/
/* End Operation */

/* Begin Operation: { 233 23 241 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 228 69 233 74 }*/
/* IO - VPL Terminal : { 228 117 233 122 }*/
/* IO - VPL Terminal : { 228 165 233 170 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,3,2,5);
	result = connect_root_to_terminal(ptrA,1,4,3,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Create_20_Attribute_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Create_20_Attribute_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 295 692 }{ 337 254 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 81 33 86 }*/
/* IO - VPL Root : { 28 117 33 122 }*/
/* IO - VPL Root : { 28 135 33 140 }*/
/* IO - VPL Root : { 28 153 33 158 }*/
/* IO - VPL Root : { 28 171 33 176 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 29 81 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 60 81 65 86 }*/
/* IO - VPL Root : { 81 56 86 61 }*/
/* IO - VPL Root : { 81 99 86 104 }*/
/* End Operation */

/* Begin Operation: { 115 9 131 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 110 56 115 61 }*/
/* IO - VPL Root : { 131 44 136 49 }*/
/* IO - VPL Root : { 131 81 136 86 }*/
/* End Operation */

/* Begin Operation: { 166 8 182 98 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 161 51 166 56 }*/
/* IO - VPL Root : { 182 36 187 41 }*/
/* IO - VPL Root : { 182 66 187 71 }*/
/* End Operation */

/* Begin Operation: { 222 65 238 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,7,1,"insert-attribute");
/* IO - VPL Terminal : { 217 66 222 71 }*/
/* IO - VPL Terminal : { 217 81 222 86 }*/
/* IO - VPL Terminal : { 217 99 222 104 }*/
/* IO - VPL Terminal : { 217 117 222 122 }*/
/* IO - VPL Terminal : { 217 135 222 140 }*/
/* IO - VPL Terminal : { 217 153 222 158 }*/
/* IO - VPL Terminal : { 217 171 222 176 }*/
/* IO - VPL Root : { 238 117 243 122 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 291 23 299 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 286 117 291 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,3,0,5,4);
	result = connect_root_to_terminal(ptrA,4,0,6,4);
	result = connect_root_to_terminal(ptrA,5,0,7,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Destroy_20_Attribute_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Destroy_20_Attribute_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 293 695 }{ 277 247 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 75 33 80 }*/
/* IO - VPL Root : { 28 160 33 165 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 65 73 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 52 117 57 122 }*/
/* IO - VPL Root : { 73 99 78 104 }*/
/* IO - VPL Root : { 73 135 78 140 }*/
/* End Operation */

/* Begin Operation: { 101 40 117 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 96 94 101 99 }*/
/* IO - VPL Root : { 117 75 122 80 }*/
/* IO - VPL Root : { 117 112 122 117 }*/
/* End Operation */

/* Begin Operation: { 153 32 169 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 148 75 153 80 }*/
/* IO - VPL Root : { 169 60 174 65 }*/
/* IO - VPL Root : { 169 90 174 95 }*/
/* End Operation */

/* Begin Operation: { 198 81 214 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,0,"dispose-attribute");
/* IO - VPL Terminal : { 193 90 198 95 }*/
/* IO - VPL Terminal : { 193 112 198 117 }*/
/* IO - VPL Terminal : { 193 135 198 140 }*/
/* IO - VPL Terminal : { 193 160 198 165 }*/
/* End Operation */

/* Begin Operation: { 237 19 245 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Rename_20_Element_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Rename_20_Element_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 308 474 }{ 346 272 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 58 33 63 }*/
/* IO - VPL Root : { 28 107 33 112 }*/
/* IO - VPL Root : { 28 126 33 131 }*/
/* IO - VPL Root : { 28 145 33 150 }*/
/* IO - VPL Root : { 28 180 33 185 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 77 157 93 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"attribute");
/* IO - VPL Terminal : { 72 180 77 185 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 77 18 93 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 72 70 77 75 }*/
/* IO - VPL Root : { 93 49 98 54 }*/
/* IO - VPL Root : { 93 88 98 93 }*/
/* End Operation */

/* Begin Operation: { 124 -2 140 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 119 52 124 57 }*/
/* IO - VPL Root : { 140 33 145 38 }*/
/* IO - VPL Root : { 140 70 145 75 }*/
/* End Operation */

/* Begin Operation: { 195 -6 211 84 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 190 37 195 42 }*/
/* IO - VPL Root : { 211 22 216 27 }*/
/* IO - VPL Root : { 211 52 216 57 }*/
/* End Operation */

/* Begin Operation: { 263 45 279 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,6,0,"rename-attribute");
/* IO - VPL Terminal : { 258 52 263 57 }*/
/* IO - VPL Terminal : { 258 70 263 75 }*/
/* IO - VPL Terminal : { 258 88 263 93 }*/
/* IO - VPL Terminal : { 258 107 263 112 }*/
/* IO - VPL Terminal : { 258 126 263 131 }*/
/* IO - VPL Terminal : { 258 145 263 150 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 303 21 311 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,5,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,2,0,4,5);
	result = connect_root_to_terminal(ptrA,3,0,5,5);
	result = connect_root_to_terminal(ptrA,4,0,6,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 335 530 }{ 338 260 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 58 33 63 }*/
/* IO - VPL Root : { 28 84 33 89 }*/
/* IO - VPL Root : { 28 126 33 131 }*/
/* IO - VPL Root : { 28 145 33 150 }*/
/* IO - VPL Root : { 28 180 33 185 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 77 168 93 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"class");
/* IO - VPL Terminal : { 72 180 77 185 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 77 39 93 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 72 91 77 96 }*/
/* IO - VPL Root : { 93 70 98 75 }*/
/* IO - VPL Root : { 93 109 98 114 }*/
/* End Operation */

/* Begin Operation: { 124 19 140 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 119 73 124 78 }*/
/* IO - VPL Root : { 140 54 145 59 }*/
/* IO - VPL Root : { 140 91 145 96 }*/
/* End Operation */

/* Begin Operation: { 189 15 205 105 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 184 58 189 63 }*/
/* IO - VPL Root : { 205 43 210 48 }*/
/* IO - VPL Root : { 205 73 210 78 }*/
/* End Operation */

/* Begin Operation: { 258 66 274 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,5,0,"rename-class");
/* IO - VPL Terminal : { 253 73 258 78 }*/
/* IO - VPL Terminal : { 253 91 258 96 }*/
/* IO - VPL Terminal : { 253 109 258 114 }*/
/* IO - VPL Terminal : { 253 126 258 131 }*/
/* IO - VPL Terminal : { 253 145 258 150 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 298 17 306 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,5,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,3,0,4,5);
	result = connect_root_to_terminal(ptrA,4,0,5,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 377 576 }{ 346 274 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 58 33 63 }*/
/* IO - VPL Root : { 28 84 33 89 }*/
/* IO - VPL Root : { 28 128 33 133 }*/
/* IO - VPL Root : { 28 145 33 150 }*/
/* IO - VPL Root : { 28 180 33 185 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 77 163 93 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"method");
/* IO - VPL Terminal : { 72 180 77 185 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 77 38 93 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 72 90 77 95 }*/
/* IO - VPL Root : { 93 69 98 74 }*/
/* IO - VPL Root : { 93 108 98 113 }*/
/* End Operation */

/* Begin Operation: { 124 16 140 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 119 70 124 75 }*/
/* IO - VPL Root : { 140 51 145 56 }*/
/* IO - VPL Root : { 140 88 145 93 }*/
/* End Operation */

/* Begin Operation: { 183 8 199 98 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 178 51 183 56 }*/
/* IO - VPL Root : { 199 36 204 41 }*/
/* IO - VPL Root : { 199 66 204 71 }*/
/* End Operation */

/* Begin Operation: { 247 59 263 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,5,0,"rename-method");
/* IO - VPL Terminal : { 242 66 247 71 }*/
/* IO - VPL Terminal : { 242 88 247 93 }*/
/* IO - VPL Terminal : { 242 108 247 113 }*/
/* IO - VPL Terminal : { 242 128 247 133 }*/
/* IO - VPL Terminal : { 242 145 247 150 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 287 18 295 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,5,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,3,0,4,5);
	result = connect_root_to_terminal(ptrA,4,0,5,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 454 648 }{ 347 262 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 58 33 63 }*/
/* IO - VPL Root : { 28 84 33 89 }*/
/* IO - VPL Root : { 28 122 33 127 }*/
/* IO - VPL Root : { 28 145 33 150 }*/
/* IO - VPL Root : { 28 180 33 185 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 77 154 93 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"persistent");
/* IO - VPL Terminal : { 72 180 77 185 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 77 31 93 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 72 83 77 88 }*/
/* IO - VPL Root : { 93 62 98 67 }*/
/* IO - VPL Root : { 93 101 98 106 }*/
/* End Operation */

/* Begin Operation: { 124 8 140 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 119 62 124 67 }*/
/* IO - VPL Root : { 140 43 145 48 }*/
/* IO - VPL Root : { 140 80 145 85 }*/
/* End Operation */

/* Begin Operation: { 203 1 219 91 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 198 44 203 49 }*/
/* IO - VPL Root : { 219 29 224 34 }*/
/* IO - VPL Root : { 219 59 224 64 }*/
/* End Operation */

/* Begin Operation: { 268 49 284 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,5,0,"rename-persistent");
/* IO - VPL Terminal : { 263 59 268 64 }*/
/* IO - VPL Terminal : { 263 80 268 85 }*/
/* IO - VPL Terminal : { 263 101 268 106 }*/
/* IO - VPL Terminal : { 263 122 268 127 }*/
/* IO - VPL Terminal : { 263 145 268 150 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 308 23 316 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,5,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,3,0,4,5);
	result = connect_root_to_terminal(ptrA,4,0,5,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 682 430 }{ 222 262 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 58 33 63 }*/
/* IO - VPL Root : { 28 84 33 89 }*/
/* IO - VPL Root : { 28 121 33 126 }*/
/* IO - VPL Root : { 28 145 33 150 }*/
/* IO - VPL Root : { 28 180 33 185 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 72 23 88 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Unrecognized re-name element: \"");
/* IO - VPL Root : { 88 115 93 120 }*/
/* End Operation */

/* Begin Operation: { 117 105 133 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"show");
/* IO - VPL Terminal : { 112 115 117 120 }*/
/* IO - VPL Terminal : { 112 138 117 143 }*/
/* End Operation */

/* Begin Operation: { 172 15 180 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,5,0,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Object_20_To_20_Value_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Object_20_To_20_Value_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 384 593 }{ 303 288 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 60 33 65 }*/
/* IO - VPL Root : { 28 157 33 162 }*/
/* IO - VPL Root : { 28 191 33 196 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 68 208 84 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"string");
/* IO - VPL Terminal : { 63 223 68 228 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 67 64 83 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 62 116 67 121 }*/
/* IO - VPL Root : { 83 98 88 103 }*/
/* IO - VPL Root : { 83 134 88 139 }*/
/* End Operation */

/* Begin Operation: { 108 32 124 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 103 86 108 91 }*/
/* IO - VPL Root : { 124 67 129 72 }*/
/* IO - VPL Root : { 124 104 129 109 }*/
/* End Operation */

/* Begin Operation: { 155 19 171 109 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 150 62 155 67 }*/
/* IO - VPL Root : { 171 47 176 52 }*/
/* IO - VPL Root : { 171 77 176 82 }*/
/* End Operation */

/* Begin Operation: { 206 70 222 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"string-to-value");
/* IO - VPL Terminal : { 201 77 206 82 }*/
/* IO - VPL Terminal : { 201 104 206 109 }*/
/* IO - VPL Terminal : { 201 134 206 139 }*/
/* IO - VPL Terminal : { 201 157 206 162 }*/
/* IO - VPL Root : { 222 120 227 125 }*/
/* End Operation */

/* Begin Operation: { 265 21 273 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 260 120 265 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,2,0,4,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 388 15 }{ 310 253 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 60 33 65 }*/
/* IO - VPL Root : { 28 152 33 157 }*/
/* IO - VPL Root : { 28 196 33 201 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 67 188 83 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"list");
/* IO - VPL Terminal : { 62 196 67 201 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 67 63 83 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 62 115 67 120 }*/
/* IO - VPL Root : { 83 97 88 102 }*/
/* IO - VPL Root : { 83 133 88 138 }*/
/* End Operation */

/* Begin Operation: { 108 37 124 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 103 91 108 96 }*/
/* IO - VPL Root : { 124 72 129 77 }*/
/* IO - VPL Root : { 124 109 129 114 }*/
/* End Operation */

/* Begin Operation: { 158 25 174 115 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 153 68 158 73 }*/
/* IO - VPL Root : { 174 53 179 58 }*/
/* IO - VPL Root : { 174 83 179 88 }*/
/* End Operation */

/* Begin Operation: { 208 75 224 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"list-to-value");
/* IO - VPL Terminal : { 203 83 208 88 }*/
/* IO - VPL Terminal : { 203 109 208 114 }*/
/* IO - VPL Terminal : { 203 133 208 138 }*/
/* IO - VPL Terminal : { 203 152 208 157 }*/
/* IO - VPL Root : { 224 119 229 124 }*/
/* End Operation */

/* Begin Operation: { 267 20 275 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 262 119 267 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,2,0,4,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 384 593 }{ 311 297 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 60 33 65 }*/
/* IO - VPL Root : { 28 159 33 164 }*/
/* IO - VPL Root : { 28 200 33 205 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 69 210 85 240 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"value");
/* IO - VPL Terminal : { 64 223 69 228 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 67 67 83 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 62 119 67 124 }*/
/* IO - VPL Root : { 83 101 88 106 }*/
/* IO - VPL Root : { 83 137 88 142 }*/
/* End Operation */

/* Begin Operation: { 108 37 124 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 103 91 108 96 }*/
/* IO - VPL Root : { 124 72 129 77 }*/
/* IO - VPL Root : { 124 109 129 114 }*/
/* End Operation */

/* Begin Operation: { 150 28 166 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 145 71 150 76 }*/
/* IO - VPL Root : { 166 56 171 61 }*/
/* IO - VPL Root : { 166 86 171 91 }*/
/* End Operation */

/* Begin Operation: { 198 74 214 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"value-to-value");
/* IO - VPL Terminal : { 193 86 198 91 }*/
/* IO - VPL Terminal : { 193 109 198 114 }*/
/* IO - VPL Terminal : { 193 137 198 142 }*/
/* IO - VPL Terminal : { 193 159 198 164 }*/
/* IO - VPL Root : { 214 123 219 128 }*/
/* End Operation */

/* Begin Operation: { 257 24 265 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 252 123 257 128 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,2,0,4,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 384 593 }{ 320 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 60 33 65 }*/
/* IO - VPL Root : { 28 161 33 166 }*/
/* IO - VPL Root : { 28 199 33 204 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 69 218 85 260 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"archive");
/* IO - VPL Terminal : { 64 237 69 242 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 67 66 83 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 62 118 67 123 }*/
/* IO - VPL Root : { 83 100 88 105 }*/
/* IO - VPL Root : { 83 136 88 141 }*/
/* End Operation */

/* Begin Operation: { 108 33 124 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 103 87 108 92 }*/
/* IO - VPL Root : { 124 68 129 73 }*/
/* IO - VPL Root : { 124 105 129 110 }*/
/* End Operation */

/* Begin Operation: { 160 21 176 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 155 64 160 69 }*/
/* IO - VPL Root : { 176 49 181 54 }*/
/* IO - VPL Root : { 176 79 181 84 }*/
/* End Operation */

/* Begin Operation: { 224 65 240 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"archive-to-value");
/* IO - VPL Terminal : { 219 79 224 84 }*/
/* IO - VPL Terminal : { 219 105 224 110 }*/
/* IO - VPL Terminal : { 219 136 224 141 }*/
/* IO - VPL Terminal : { 219 161 224 166 }*/
/* IO - VPL Root : { 240 120 245 125 }*/
/* End Operation */

/* Begin Operation: { 283 21 291 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 278 120 283 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,2,0,4,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 384 593 }{ 174 299 } */
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

/* Begin Operation: { 78 212 95 252 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"object");
/* IO - VPL Terminal : { 72 230 77 235 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 75 95 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Object To Value");
/* IO - VPL Terminal : { 72 98 77 103 }*/
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
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

/* Start Operations: { 296 528 }{ 563 337 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 219 94 292 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 73 251 78 256 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 154 94 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"type");
/* IO - VPL Terminal : { 73 174 78 179 }*/
/* IO - VPL Root : { 94 174 99 179 }*/
/* End Operation */

/* Begin Operation: { 120 123 136 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Instance Value Data");
/* IO - VPL Terminal : { 115 174 120 179 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 162 108 178 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Attributes");
/* IO - VPL Terminal : { 157 145 162 150 }*/
/* IO - VPL Root : { 178 132 183 137 }*/
/* IO - VPL Root : { 178 158 183 163 }*/
/* End Operation */

/* Begin Operation: { 204 66 220 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Class Name");
/* IO - VPL Terminal : { 199 105 204 110 }*/
/* IO - VPL Root : { 220 91 225 96 }*/
/* IO - VPL Root : { 220 118 225 123 }*/
/* End Operation */

/* Begin Operation: { 204 173 221 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"string");
/* IO - VPL Root : { 222 191 227 196 }*/
/* End Operation */

/* Begin Operation: { 253 139 270 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,">");
/* IO - VPL Root : { 271 149 276 154 }*/
/* End Operation */

/* Begin Operation: { 253 102 270 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"<");
/* IO - VPL Root : { 271 112 276 117 }*/
/* End Operation */

/* Begin Operation: { 295 103 312 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 289 112 294 117 }*/
/* IO - VPL Terminal : { 289 130 294 135 }*/
/* IO - VPL Terminal : { 289 149 294 154 }*/
/* IO - VPL Root : { 313 130 318 135 }*/
/* End Operation */

/* Begin Operation: { 354 74 371 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Object To Value");
/* IO - VPL Terminal : { 348 98 353 103 }*/
/* IO - VPL Terminal : { 348 130 353 135 }*/
/* IO - VPL Terminal : { 348 162 353 167 }*/
/* IO - VPL Root : { 372 137 377 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 396 141 412 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"type");
/* IO - VPL Root : { 412 151 417 156 }*/
/* End Operation */

/* Begin Operation: { 438 74 454 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Value Data");
/* IO - VPL Terminal : { 433 98 438 103 }*/
/* IO - VPL Terminal : { 433 138 438 143 }*/
/* IO - VPL Terminal : { 433 150 438 155 }*/
/* IO - VPL Root : { 454 177 459 182 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 480 80 497 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Update Attributes");
/* IO - VPL Terminal : { 474 98 479 103 }*/
/* IO - VPL Terminal : { 474 118 479 123 }*/
/* IO - VPL Terminal : { 474 138 479 143 }*/
/* IO - VPL Terminal : { 474 158 479 163 }*/
/* IO - VPL Terminal : { 474 178 479 183 }*/
/* IO - VPL Root : { 498 138 503 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);

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

/* Start Operations: { 307 1377 }{ 578 478 } */
/* Begin Operation: { 36 119 44 311 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 149 50 154 }*/
/* IO - VPL Root : { 45 181 50 186 }*/
/* IO - VPL Root : { 45 213 50 218 }*/
/* IO - VPL Root : { 45 245 50 250 }*/
/* IO - VPL Root : { 45 277 50 282 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 295 179 335 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"object");
/* IO - VPL Root : { 180 313 185 318 }*/
/* End Operation */

/* Begin Operation: { 120 253 136 282 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Name");
/* IO - VPL Root : { 136 265 141 270 }*/
/* End Operation */

/* Begin Operation: { 78 256 94 302 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"instance");
/* IO - VPL Terminal : { 73 277 78 282 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 78 95 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 72 109 77 114 }*/
/* IO - VPL Root : { 96 98 101 103 }*/
/* IO - VPL Root : { 96 120 101 125 }*/
/* End Operation */

/* Begin Operation: { 120 77 136 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Classes");
/* IO - VPL Terminal : { 115 120 120 125 }*/
/* IO - VPL Root : { 136 120 141 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 162 114 178 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Find Instance");
/* IO - VPL Terminal : { 157 135 162 140 }*/
/* IO - VPL Terminal : { 157 158 162 163 }*/
/* IO - VPL Terminal : { 157 181 162 186 }*/
/* IO - VPL Root : { 178 142 183 147 }*/
/* IO - VPL Root : { 178 172 183 177 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 57 220 68 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 199 60 204 65 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 204 131 220 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Record");
/* IO - VPL Terminal : { 199 157 204 162 }*/
/* IO - VPL Root : { 220 143 225 148 }*/
/* IO - VPL Root : { 220 167 225 172 }*/
/* End Operation */

/* Begin Operation: { 204 225 221 347 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Object To Value");
/* IO - VPL Terminal : { 198 253 203 258 }*/
/* IO - VPL Terminal : { 198 283 203 288 }*/
/* IO - VPL Terminal : { 198 313 203 318 }*/
/* IO - VPL Root : { 222 284 227 289 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);
	tempOperation = operation_output_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 251 203 268 289 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Attribute Data");
/* IO - VPL Root : { 269 244 274 249 }*/
/* End Operation */

/* Begin Operation: { 293 170 310 286 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 287 206 292 211 }*/
/* IO - VPL Terminal : { 287 244 292 249 }*/
/* IO - VPL Root : { 311 226 316 231 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 341 205 358 251 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 335 226 340 231 }*/
/* IO - VPL Root : { 359 218 364 223 }*/
/* IO - VPL Root : { 359 233 364 238 }*/
/* End Operation */

/* Begin Operation: { 430 137 446 264 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Set Attribute Value");
/* IO - VPL Terminal : { 425 149 430 154 }*/
/* IO - VPL Terminal : { 425 186 430 191 }*/
/* IO - VPL Terminal : { 425 216 430 221 }*/
/* IO - VPL Terminal : { 424 233 429 238 }*/
/* IO - VPL Terminal : { 425 253 430 258 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,4,iList);
	tempOperation = operation_input_to(tempOperation,environment,5,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 489 378 }{ 54 320 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 627 911 }{ 240 261 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 66 50 71 }*/
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 130 50 135 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
/* IO - VPL Root : { 45 194 50 199 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 132 95 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 72 162 77 167 }*/
/* IO - VPL Root : { 96 151 101 156 }*/
/* IO - VPL Root : { 96 172 101 177 }*/
/* End Operation */

/* Begin Operation: { 120 119 137 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Name");
/* IO - VPL Terminal : { 114 146 119 151 }*/
/* IO - VPL Root : { 138 136 143 141 }*/
/* IO - VPL Root : { 138 155 143 160 }*/
/* End Operation */

/* Begin Operation: { 162 57 178 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Instance Attribute");
/* IO - VPL Terminal : { 157 80 162 85 }*/
/* IO - VPL Terminal : { 157 105 162 110 }*/
/* IO - VPL Terminal : { 157 130 162 135 }*/
/* IO - VPL Terminal : { 157 155 162 160 }*/
/* IO - VPL Terminal : { 157 180 162 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,4,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,3,0,3,3);
	result = connect_root_to_terminal(ptrA,2,2,4,3);
	result = connect_root_to_terminal(ptrA,5,0,5,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 472 122 480 314 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 466 216 471 221 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,5,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,2,2,6);
	result = connect_root_to_terminal(ptrA,2,0,3,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,2,6,1,8);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,4,0,2,9);
	result = connect_root_to_terminal(ptrA,1,1,3,9);
	result = connect_root_to_terminal(ptrA,1,8,1,11);
	result = connect_root_to_terminal(ptrA,1,10,2,11);
	result = connect_root_to_terminal(ptrA,1,11,1,12);
	result = connect_root_to_terminal(ptrA,1,0,1,13);
	result = connect_root_to_terminal(ptrA,2,8,2,13);
	result = connect_root_to_terminal(ptrA,3,0,3,13);
	result = connect_root_to_terminal(ptrA,2,12,4,13);
	result = connect_root_to_terminal(ptrA,1,9,5,13);
	result = connect_root_to_terminal(ptrA,3,0,1,14);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* Synchro [8 to 7] */
/* Synchro [9 to 8] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 296 890 }{ 176 291 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 66 50 71 }*/
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 130 50 135 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
/* IO - VPL Root : { 45 194 50 199 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 114 95 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 96 130 101 135 }*/
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 130 119 135 }*/
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

/* Begin Operation: { 522 38 530 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 516 138 521 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,2,5,2,9);
	result = connect_root_to_terminal(ptrA,1,7,3,9);
	result = connect_root_to_terminal(ptrA,1,0,1,10);
	result = connect_root_to_terminal(ptrA,1,9,2,10);
	result = connect_root_to_terminal(ptrA,1,6,3,10);
	result = connect_root_to_terminal(ptrA,1,0,1,12);
	result = connect_root_to_terminal(ptrA,1,10,2,12);
	result = connect_root_to_terminal(ptrA,1,11,3,12);
	result = connect_root_to_terminal(ptrA,1,0,1,13);
	result = connect_root_to_terminal(ptrA,2,5,2,13);
	result = connect_root_to_terminal(ptrA,1,10,3,13);
	result = connect_root_to_terminal(ptrA,2,4,4,13);
	result = connect_root_to_terminal(ptrA,1,12,5,13);
	result = connect_root_to_terminal(ptrA,1,13,1,14);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 296 528 }{ 479 472 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 152 259 168 306 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"list?");
/* IO - VPL Terminal : { 147 278 152 283 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 176 165 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"object");
/* IO - VPL Root : { 166 194 171 199 }*/
/* End Operation */

/* Begin Operation: { 188 106 205 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Object To Value");
/* IO - VPL Terminal : { 182 134 187 139 }*/
/* IO - VPL Terminal : { 182 164 187 169 }*/
/* IO - VPL Terminal : { 182 194 187 199 }*/
/* IO - VPL Root : { 206 165 211 170 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);
	tempOperation = operation_output_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 252 150 268 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"list");
/* IO - VPL Root : { 268 158 273 163 }*/
/* End Operation */

/* Begin Operation: { 294 76 310 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Object To Value");
/* IO - VPL Terminal : { 289 102 294 107 }*/
/* IO - VPL Terminal : { 289 130 294 135 }*/
/* IO - VPL Terminal : { 289 158 294 163 }*/
/* IO - VPL Root : { 310 130 315 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 345 42 353 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 339 136 344 141 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,3,2,5);
	result = connect_root_to_terminal(ptrA,1,4,3,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 296 528 }{ 213 332 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 192 95 258 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 72 223 77 228 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 136 95 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"string");
/* IO - VPL Root : { 96 154 101 159 }*/
/* End Operation */

/* Begin Operation: { 120 72 136 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Object To Value");
/* IO - VPL Terminal : { 115 98 120 103 }*/
/* IO - VPL Terminal : { 115 126 120 131 }*/
/* IO - VPL Terminal : { 115 154 120 159 }*/
/* IO - VPL Root : { 136 126 141 131 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 296 528 }{ 222 292 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 193 95 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"string");
/* IO - VPL Root : { 96 211 101 216 }*/
/* End Operation */

/* Begin Operation: { 78 89 95 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 72 126 77 131 }*/
/* IO - VPL Root : { 96 126 101 131 }*/
/* End Operation */

/* Begin Operation: { 120 72 136 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Object To Value");
/* IO - VPL Terminal : { 115 98 120 103 }*/
/* IO - VPL Terminal : { 115 126 120 131 }*/
/* IO - VPL Terminal : { 115 154 120 159 }*/
/* IO - VPL Root : { 136 126 141 131 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 38 170 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 132 161 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,1,3,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
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
/* IO - VPL Terminal : { 114 130 119 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 384 593 }{ 263 277 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 60 33 65 }*/
/* IO - VPL Root : { 28 118 33 123 }*/
/* IO - VPL Root : { 28 168 33 173 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 165 109 181 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 181 120 186 125 }*/
/* End Operation */

/* Begin Operation: { 65 15 81 249 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Unrecognized Object To Value command: \"");
/* IO - VPL Root : { 81 130 86 135 }*/
/* End Operation */

/* Begin Operation: { 119 95 135 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"show");
/* IO - VPL Terminal : { 114 106 119 111 }*/
/* IO - VPL Terminal : { 114 126 119 131 }*/
/* End Operation */

/* Begin Operation: { 210 21 218 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 205 120 210 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,3,0,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Set_20_Current_20_Operation_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Set_20_Current_20_Operation_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 554 607 }{ 367 256 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 75 33 80 }*/
/* IO - VPL Root : { 28 117 33 122 }*/
/* IO - VPL Root : { 28 144 33 149 }*/
/* IO - VPL Root : { 28 170 33 175 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 23 73 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 52 75 57 80 }*/
/* IO - VPL Root : { 73 57 78 62 }*/
/* IO - VPL Root : { 73 93 78 98 }*/
/* End Operation */

/* Begin Operation: { 101 -2 117 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 96 57 101 62 }*/
/* IO - VPL Root : { 117 33 122 38 }*/
/* IO - VPL Root : { 117 70 122 75 }*/
/* End Operation */

/* Begin Operation: { 155 -4 171 86 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 150 39 155 44 }*/
/* IO - VPL Root : { 171 24 176 29 }*/
/* IO - VPL Root : { 171 54 176 59 }*/
/* End Operation */

/* Begin Operation: { 216 53 232 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,6,1,"set-current-operation");
/* IO - VPL Terminal : { 211 54 216 59 }*/
/* IO - VPL Terminal : { 211 70 216 75 }*/
/* IO - VPL Terminal : { 211 93 216 98 }*/
/* IO - VPL Terminal : { 211 117 216 122 }*/
/* IO - VPL Terminal : { 211 144 216 149 }*/
/* IO - VPL Terminal : { 211 170 216 175 }*/
/* IO - VPL Root : { 232 119 237 124 }*/
/* End Operation */

/* Begin Operation: { 261 96 277 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Close");
/* IO - VPL Terminal : { 256 119 261 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 351 322 }{ 64 309 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 116 352 }{ 152 267 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 177 72 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 52 188 57 193 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 57 81 73 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Rollback");
/* IO - VPL Terminal : { 52 115 57 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 108 28 116 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 391 369 }{ 95 263 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 40 20 48 212 } */
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

/* Start Operations: { 116 352 }{ 152 267 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 177 72 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 52 188 57 193 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 57 76 73 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close Self");
/* IO - VPL Terminal : { 52 115 57 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 108 28 116 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 312 24 320 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,3,0,5,4);
	result = connect_root_to_terminal(ptrA,4,0,6,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Unarchive_20_Element_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Unarchive_20_Element_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 605 723 }{ 276 248 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 46 70 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 49 98 54 103 }*/
/* IO - VPL Root : { 70 80 75 85 }*/
/* IO - VPL Root : { 70 116 75 121 }*/
/* End Operation */

/* Begin Operation: { 88 16 104 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 83 70 88 75 }*/
/* IO - VPL Root : { 104 51 109 56 }*/
/* IO - VPL Root : { 104 88 109 93 }*/
/* End Operation */

/* Begin Operation: { 141 10 157 100 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 136 51 141 56 }*/
/* IO - VPL Root : { 157 38 162 43 }*/
/* IO - VPL Root : { 157 68 162 73 }*/
/* End Operation */

/* Begin Operation: { 189 64 205 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,0,"unarchive-value");
/* IO - VPL Terminal : { 184 68 189 73 }*/
/* IO - VPL Terminal : { 184 88 189 93 }*/
/* IO - VPL Terminal : { 184 116 189 121 }*/
/* IO - VPL Terminal : { 184 146 189 151 }*/
/* End Operation */

/* Begin Operation: { 231 19 239 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Post_20_Load_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Post_20_Load_3F__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 613 728 }{ 307 244 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 74 52 90 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 69 104 74 109 }*/
/* IO - VPL Root : { 90 86 95 91 }*/
/* IO - VPL Root : { 90 122 95 127 }*/
/* End Operation */

/* Begin Operation: { 108 25 124 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 103 79 108 84 }*/
/* IO - VPL Root : { 124 60 129 65 }*/
/* IO - VPL Root : { 124 97 129 102 }*/
/* End Operation */

/* Begin Operation: { 156 17 172 107 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 151 60 156 65 }*/
/* IO - VPL Root : { 172 45 177 50 }*/
/* IO - VPL Root : { 172 75 177 80 }*/
/* End Operation */

/* Begin Operation: { 211 69 227 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,0,"set-post-load");
/* IO - VPL Terminal : { 206 75 211 80 }*/
/* IO - VPL Terminal : { 206 97 211 102 }*/
/* IO - VPL Terminal : { 206 122 211 127 }*/
/* IO - VPL Terminal : { 206 146 211 151 }*/
/* End Operation */

/* Begin Operation: { 271 19 279 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Get_20_Class_20_Instance_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Get_20_Class_20_Instance_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 231 547 }{ 359 263 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 161 33 166 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 71 70 87 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 66 122 71 127 }*/
/* IO - VPL Root : { 87 104 92 109 }*/
/* IO - VPL Root : { 87 140 92 145 }*/
/* End Operation */

/* Begin Operation: { 119 37 135 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 114 91 119 96 }*/
/* IO - VPL Root : { 135 72 140 77 }*/
/* IO - VPL Root : { 135 109 140 114 }*/
/* End Operation */

/* Begin Operation: { 183 21 199 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 178 64 183 69 }*/
/* IO - VPL Root : { 199 49 204 54 }*/
/* IO - VPL Root : { 199 79 204 84 }*/
/* End Operation */

/* Begin Operation: { 246 64 262 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"get-class-instance");
/* IO - VPL Terminal : { 241 79 246 84 }*/
/* IO - VPL Terminal : { 241 109 246 114 }*/
/* IO - VPL Terminal : { 241 140 246 145 }*/
/* IO - VPL Terminal : { 241 161 246 166 }*/
/* IO - VPL Root : { 262 123 267 128 }*/
/* End Operation */

/* Begin Operation: { 307 29 315 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 302 123 307 128 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Set_20_Instance_20_Attribute_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Set_20_Instance_20_Attribute_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 551 592 }{ 312 248 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 60 33 65 }*/
/* IO - VPL Root : { 28 102 33 107 }*/
/* IO - VPL Root : { 28 128 33 133 }*/
/* IO - VPL Root : { 28 154 33 159 }*/
/* IO - VPL Root : { 28 178 33 183 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 8 75 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 54 60 59 65 }*/
/* IO - VPL Root : { 75 42 80 47 }*/
/* IO - VPL Root : { 75 78 80 83 }*/
/* End Operation */

/* Begin Operation: { 108 19 124 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 103 73 108 78 }*/
/* IO - VPL Root : { 124 54 129 59 }*/
/* IO - VPL Root : { 124 91 129 96 }*/
/* End Operation */

/* Begin Operation: { 162 11 178 101 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 157 54 162 59 }*/
/* IO - VPL Root : { 178 39 183 44 }*/
/* IO - VPL Root : { 178 69 183 74 }*/
/* End Operation */

/* Begin Operation: { 233 18 249 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,7,0,"set-instance-attribute-value");
/* IO - VPL Terminal : { 228 28 233 33 }*/
/* IO - VPL Terminal : { 228 51 233 56 }*/
/* IO - VPL Terminal : { 228 78 233 83 }*/
/* IO - VPL Terminal : { 228 102 233 107 }*/
/* IO - VPL Terminal : { 228 128 233 133 }*/
/* IO - VPL Terminal : { 228 154 233 159 }*/
/* IO - VPL Terminal : { 228 178 233 183 }*/
/* End Operation */

/* Begin Operation: { 265 23 273 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,3,0,5,4);
	result = connect_root_to_terminal(ptrA,4,0,6,4);
	result = connect_root_to_terminal(ptrA,5,0,7,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Finalize_20_Stack_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Finalize_20_Stack_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 380 694 }{ 294 264 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
/* IO - VPL Root : { 28 162 33 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 55 80 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 59 107 64 112 }*/
/* IO - VPL Root : { 80 90 85 95 }*/
/* IO - VPL Root : { 80 125 85 130 }*/
/* End Operation */

/* Begin Operation: { 105 33 121 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 100 90 105 95 }*/
/* IO - VPL Root : { 121 70 126 75 }*/
/* IO - VPL Root : { 121 105 126 110 }*/
/* End Operation */

/* Begin Operation: { 147 27 163 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 142 70 147 75 }*/
/* IO - VPL Root : { 163 55 168 60 }*/
/* IO - VPL Root : { 163 85 168 90 }*/
/* End Operation */

/* Begin Operation: { 193 75 209 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,5,1,"finalize-stack");
/* IO - VPL Terminal : { 188 85 193 90 }*/
/* IO - VPL Terminal : { 188 105 193 110 }*/
/* IO - VPL Terminal : { 188 125 193 130 }*/
/* IO - VPL Terminal : { 188 146 193 151 }*/
/* IO - VPL Terminal : { 188 162 193 167 }*/
/* IO - VPL Root : { 209 123 214 128 }*/
/* End Operation */

/* Begin Operation: { 244 29 252 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 239 123 244 128 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,3,0,5,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Initialize_20_Stack_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Initialize_20_Stack_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 362 690 }{ 309 257 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
/* IO - VPL Root : { 28 162 33 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 63 52 79 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 58 104 63 109 }*/
/* IO - VPL Root : { 79 88 84 93 }*/
/* IO - VPL Root : { 79 122 84 127 }*/
/* End Operation */

/* Begin Operation: { 104 31 120 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 99 88 104 93 }*/
/* IO - VPL Root : { 120 67 125 72 }*/
/* IO - VPL Root : { 120 103 125 108 }*/
/* End Operation */

/* Begin Operation: { 154 24 170 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 149 67 154 72 }*/
/* IO - VPL Root : { 170 52 175 57 }*/
/* IO - VPL Root : { 170 82 175 87 }*/
/* End Operation */

/* Begin Operation: { 209 70 225 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,5,2,"initialize-stack");
/* IO - VPL Terminal : { 204 82 209 87 }*/
/* IO - VPL Terminal : { 204 103 209 108 }*/
/* IO - VPL Terminal : { 204 122 209 127 }*/
/* IO - VPL Terminal : { 204 142 209 147 }*/
/* IO - VPL Terminal : { 204 162 209 167 }*/
/* IO - VPL Root : { 225 107 230 112 }*/
/* IO - VPL Root : { 225 135 230 140 }*/
/* End Operation */

/* Begin Operation: { 262 23 270 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 257 107 262 112 }*/
/* IO - VPL Terminal : { 257 135 262 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,3,0,5,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Advance_20_Stack_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Advance_20_Stack_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 365 693 }{ 298 258 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 57 73 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 52 109 57 114 }*/
/* IO - VPL Root : { 73 89 78 94 }*/
/* IO - VPL Root : { 73 127 78 132 }*/
/* End Operation */

/* Begin Operation: { 94 32 110 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 89 89 94 94 }*/
/* IO - VPL Root : { 110 67 115 72 }*/
/* IO - VPL Root : { 110 104 115 109 }*/
/* End Operation */

/* Begin Operation: { 138 24 154 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 133 67 138 72 }*/
/* IO - VPL Root : { 154 52 159 57 }*/
/* IO - VPL Root : { 154 82 159 87 }*/
/* End Operation */

/* Begin Operation: { 190 68 206 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,6,"advance-stack");
/* IO - VPL Terminal : { 185 82 190 87 }*/
/* IO - VPL Terminal : { 185 104 190 109 }*/
/* IO - VPL Terminal : { 185 127 190 132 }*/
/* IO - VPL Terminal : { 185 146 190 151 }*/
/* IO - VPL Root : { 206 72 211 77 }*/
/* IO - VPL Root : { 206 90 211 95 }*/
/* IO - VPL Root : { 206 110 211 115 }*/
/* IO - VPL Root : { 206 125 211 130 }*/
/* IO - VPL Root : { 206 144 211 149 }*/
/* IO - VPL Root : { 206 161 211 166 }*/
/* End Operation */

/* Begin Operation: { 243 23 251 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 238 72 243 77 }*/
/* IO - VPL Terminal : { 238 90 243 95 }*/
/* IO - VPL Terminal : { 238 110 243 115 }*/
/* IO - VPL Terminal : { 238 125 243 130 }*/
/* IO - VPL Terminal : { 238 144 243 149 }*/
/* IO - VPL Terminal : { 238 161 243 166 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,4,2,5);
	result = connect_root_to_terminal(ptrA,3,4,3,5);
	result = connect_root_to_terminal(ptrA,4,4,4,5);
	result = connect_root_to_terminal(ptrA,5,4,5,5);
	result = connect_root_to_terminal(ptrA,6,4,6,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Get_20_Current_20_Operation_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Get_20_Current_20_Operation_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 485 688 }{ 332 266 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 166 33 171 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 61 68 77 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 56 120 61 125 }*/
/* IO - VPL Root : { 77 102 82 107 }*/
/* IO - VPL Root : { 77 138 82 143 }*/
/* End Operation */

/* Begin Operation: { 106 32 122 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 101 86 106 91 }*/
/* IO - VPL Root : { 122 60 127 65 }*/
/* IO - VPL Root : { 122 104 127 109 }*/
/* End Operation */

/* Begin Operation: { 166 17 182 107 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 161 60 166 65 }*/
/* IO - VPL Root : { 182 45 187 50 }*/
/* IO - VPL Root : { 182 75 187 80 }*/
/* End Operation */

/* Begin Operation: { 219 55 235 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"get-current-operation");
/* IO - VPL Terminal : { 214 75 219 80 }*/
/* IO - VPL Terminal : { 214 104 219 109 }*/
/* IO - VPL Terminal : { 214 138 219 143 }*/
/* IO - VPL Terminal : { 214 166 219 171 }*/
/* IO - VPL Root : { 235 120 240 125 }*/
/* End Operation */

/* Begin Operation: { 274 26 282 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 269 120 274 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Reset_20_Errors_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Reset_20_Errors_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 366 653 }{ 302 276 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 62 75 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 54 114 59 119 }*/
/* IO - VPL Root : { 75 95 80 100 }*/
/* IO - VPL Root : { 75 132 80 137 }*/
/* End Operation */

/* Begin Operation: { 97 41 113 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 92 95 97 100 }*/
/* IO - VPL Root : { 113 80 118 85 }*/
/* IO - VPL Root : { 113 113 118 118 }*/
/* End Operation */

/* Begin Operation: { 141 37 157 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 136 80 141 85 }*/
/* IO - VPL Root : { 157 65 162 70 }*/
/* IO - VPL Root : { 157 95 162 100 }*/
/* End Operation */

/* Begin Operation: { 190 76 206 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,0,"null-errors");
/* IO - VPL Terminal : { 185 95 190 100 }*/
/* IO - VPL Terminal : { 185 113 190 118 }*/
/* IO - VPL Terminal : { 185 132 190 137 }*/
/* End Operation */

/* Begin Operation: { 243 20 251 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Get_20_Errors_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Get_20_Errors_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 417 688 }{ 289 250 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 76 71 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 50 128 55 133 }*/
/* IO - VPL Root : { 71 110 76 115 }*/
/* IO - VPL Root : { 71 146 76 151 }*/
/* End Operation */

/* Begin Operation: { 93 44 109 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 88 98 93 103 }*/
/* IO - VPL Root : { 109 79 114 84 }*/
/* IO - VPL Root : { 109 116 114 121 }*/
/* End Operation */

/* Begin Operation: { 136 32 152 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 131 75 136 80 }*/
/* IO - VPL Root : { 152 60 157 65 }*/
/* IO - VPL Root : { 152 90 157 95 }*/
/* End Operation */

/* Begin Operation: { 188 78 204 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"get-errors");
/* IO - VPL Terminal : { 183 90 188 95 }*/
/* IO - VPL Terminal : { 183 116 188 121 }*/
/* IO - VPL Terminal : { 183 146 188 151 }*/
/* IO - VPL Root : { 204 116 209 121 }*/
/* End Operation */

/* Begin Operation: { 235 22 243 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 230 116 235 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Get_20_Debug_20_Window_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Get_20_Debug_20_Window_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 433 604 }{ 320 264 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 69 33 74 }*/
/* IO - VPL Root : { 28 160 33 165 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 64 72 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 51 116 56 121 }*/
/* IO - VPL Root : { 72 98 77 103 }*/
/* IO - VPL Root : { 72 134 77 139 }*/
/* End Operation */

/* Begin Operation: { 108 30 124 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 103 84 108 89 }*/
/* IO - VPL Root : { 124 62 129 67 }*/
/* IO - VPL Root : { 124 102 129 107 }*/
/* End Operation */

/* Begin Operation: { 158 19 174 109 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 153 62 158 67 }*/
/* IO - VPL Root : { 174 47 179 52 }*/
/* IO - VPL Root : { 174 77 179 82 }*/
/* End Operation */

/* Begin Operation: { 221 61 237 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"get-debug-window");
/* IO - VPL Terminal : { 216 77 221 82 }*/
/* IO - VPL Terminal : { 216 102 221 107 }*/
/* IO - VPL Terminal : { 216 134 221 139 }*/
/* IO - VPL Terminal : { 216 160 221 165 }*/
/* IO - VPL Root : { 237 120 242 125 }*/
/* End Operation */

/* Begin Operation: { 271 26 279 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 266 120 271 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Set_20_Debug_20_Window_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Set_20_Debug_20_Window_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 439 748 }{ 324 255 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 137 33 142 }*/
/* IO - VPL Root : { 28 162 33 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 66 39 82 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 61 91 66 96 }*/
/* IO - VPL Root : { 82 73 87 78 }*/
/* IO - VPL Root : { 82 109 87 114 }*/
/* End Operation */

/* Begin Operation: { 115 12 131 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 110 66 115 71 }*/
/* IO - VPL Root : { 131 47 136 52 }*/
/* IO - VPL Root : { 131 84 136 89 }*/
/* End Operation */

/* Begin Operation: { 168 0 184 90 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 163 43 168 48 }*/
/* IO - VPL Root : { 184 28 189 33 }*/
/* IO - VPL Root : { 184 58 189 63 }*/
/* End Operation */

/* Begin Operation: { 234 57 250 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,5,0,"set-debug-window");
/* IO - VPL Terminal : { 229 58 234 63 }*/
/* IO - VPL Terminal : { 229 84 234 89 }*/
/* IO - VPL Terminal : { 229 109 234 114 }*/
/* IO - VPL Terminal : { 229 137 234 142 }*/
/* IO - VPL Terminal : { 229 162 234 167 }*/
/* End Operation */

/* Begin Operation: { 275 18 283 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,3,0,5,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Get_20_IO_20_Value_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Get_20_IO_20_Value_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 357 517 }{ 299 249 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 56 33 61 }*/
/* IO - VPL Root : { 28 141 33 146 }*/
/* IO - VPL Root : { 28 156 33 161 }*/
/* IO - VPL Root : { 28 170 33 175 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 52 75 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 54 104 59 109 }*/
/* IO - VPL Root : { 75 86 80 91 }*/
/* IO - VPL Root : { 75 122 80 127 }*/
/* End Operation */

/* Begin Operation: { 96 37 112 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 91 91 96 96 }*/
/* IO - VPL Root : { 112 72 117 77 }*/
/* IO - VPL Root : { 112 109 117 114 }*/
/* End Operation */

/* Begin Operation: { 135 35 151 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 130 78 135 83 }*/
/* IO - VPL Root : { 151 63 156 68 }*/
/* IO - VPL Root : { 151 93 156 98 }*/
/* End Operation */

/* Begin Operation: { 193 91 209 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,6,1,"get-io-value");
/* IO - VPL Terminal : { 188 93 193 98 }*/
/* IO - VPL Terminal : { 188 109 193 114 }*/
/* IO - VPL Terminal : { 188 122 193 127 }*/
/* IO - VPL Terminal : { 188 141 193 146 }*/
/* IO - VPL Terminal : { 188 156 193 161 }*/
/* IO - VPL Terminal : { 188 170 193 175 }*/
/* IO - VPL Root : { 209 133 214 138 }*/
/* End Operation */

/* Begin Operation: { 246 20 254 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 241 114 246 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,3,0,5,4);
	result = connect_root_to_terminal(ptrA,4,0,6,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Set_20_IO_20_Value_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Set_20_IO_20_Value_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 401 563 }{ 287 256 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 50 33 55 }*/
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 114 33 119 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
/* IO - VPL Root : { 28 178 33 183 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 36 81 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 60 88 65 93 }*/
/* IO - VPL Root : { 81 70 86 75 }*/
/* IO - VPL Root : { 81 106 86 111 }*/
/* End Operation */

/* Begin Operation: { 103 21 119 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 98 75 103 80 }*/
/* IO - VPL Root : { 119 56 124 61 }*/
/* IO - VPL Root : { 119 93 124 98 }*/
/* End Operation */

/* Begin Operation: { 148 23 164 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 143 66 148 71 }*/
/* IO - VPL Root : { 164 51 169 56 }*/
/* IO - VPL Root : { 164 81 169 86 }*/
/* End Operation */

/* Begin Operation: { 198 77 214 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,7,0,"set-io-value");
/* IO - VPL Terminal : { 193 81 198 86 }*/
/* IO - VPL Terminal : { 193 93 198 98 }*/
/* IO - VPL Terminal : { 193 106 198 111 }*/
/* IO - VPL Terminal : { 193 119 198 124 }*/
/* IO - VPL Terminal : { 193 133 198 138 }*/
/* IO - VPL Terminal : { 193 146 198 151 }*/
/* IO - VPL Terminal : { 193 157 198 162 }*/
/* End Operation */

/* Begin Operation: { 239 18 247 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,3,0,5,4);
	result = connect_root_to_terminal(ptrA,4,0,6,4);
	result = connect_root_to_terminal(ptrA,5,0,7,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Previous_20_Case_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Previous_20_Case_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 482 910 }{ 297 253 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 52 68 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 47 104 52 109 }*/
/* IO - VPL Root : { 68 86 73 91 }*/
/* IO - VPL Root : { 68 122 73 127 }*/
/* End Operation */

/* Begin Operation: { 90 25 106 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 85 79 90 84 }*/
/* IO - VPL Root : { 106 61 111 66 }*/
/* IO - VPL Root : { 106 97 111 102 }*/
/* End Operation */

/* Begin Operation: { 136 18 152 108 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 131 61 136 66 }*/
/* IO - VPL Root : { 152 46 157 51 }*/
/* IO - VPL Root : { 152 76 157 81 }*/
/* End Operation */

/* Begin Operation: { 187 59 203 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,5,"previous-stack");
/* IO - VPL Terminal : { 182 76 187 81 }*/
/* IO - VPL Terminal : { 182 97 187 102 }*/
/* IO - VPL Terminal : { 182 122 187 127 }*/
/* IO - VPL Terminal : { 182 146 187 151 }*/
/* IO - VPL Root : { 203 74 208 79 }*/
/* IO - VPL Root : { 203 95 208 100 }*/
/* IO - VPL Root : { 203 114 208 119 }*/
/* IO - VPL Root : { 203 130 208 135 }*/
/* IO - VPL Root : { 203 147 208 152 }*/
/* End Operation */

/* Begin Operation: { 236 19 244 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 231 74 236 79 }*/
/* IO - VPL Terminal : { 231 95 236 100 }*/
/* IO - VPL Terminal : { 231 114 236 119 }*/
/* IO - VPL Terminal : { 231 130 236 135 }*/
/* IO - VPL Terminal : { 231 147 236 152 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,4,2,5);
	result = connect_root_to_terminal(ptrA,3,4,3,5);
	result = connect_root_to_terminal(ptrA,4,4,4,5);
	result = connect_root_to_terminal(ptrA,5,4,5,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Step_20_Into_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Step_20_Into_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 449 585 }{ 269 276 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 62 81 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 60 114 65 119 }*/
/* IO - VPL Root : { 81 96 86 101 }*/
/* IO - VPL Root : { 81 132 86 137 }*/
/* End Operation */

/* Begin Operation: { 102 31 118 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 97 88 102 93 }*/
/* IO - VPL Root : { 118 66 123 71 }*/
/* IO - VPL Root : { 118 103 123 108 }*/
/* End Operation */

/* Begin Operation: { 140 16 156 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 135 59 140 64 }*/
/* IO - VPL Root : { 156 44 161 49 }*/
/* IO - VPL Root : { 156 74 161 79 }*/
/* End Operation */

/* Begin Operation: { 178 50 194 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,0,"step-environment");
/* IO - VPL Terminal : { 173 74 178 79 }*/
/* IO - VPL Terminal : { 173 103 178 108 }*/
/* IO - VPL Terminal : { 173 132 178 137 }*/
/* End Operation */

/* Begin Operation: { 216 26 224 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Step_20_Out_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Step_20_Out_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 392 509 }{ 272 255 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 51 53 67 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 46 105 51 110 }*/
/* IO - VPL Root : { 67 82 72 87 }*/
/* IO - VPL Root : { 67 123 72 128 }*/
/* End Operation */

/* Begin Operation: { 93 25 109 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 88 82 93 87 }*/
/* IO - VPL Root : { 109 63 114 68 }*/
/* IO - VPL Root : { 109 97 114 102 }*/
/* End Operation */

/* Begin Operation: { 136 20 152 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 131 63 136 68 }*/
/* IO - VPL Root : { 152 48 157 53 }*/
/* IO - VPL Root : { 152 78 157 83 }*/
/* End Operation */

/* Begin Operation: { 184 68 200 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,0,"set-step-out");
/* IO - VPL Terminal : { 179 78 184 83 }*/
/* IO - VPL Terminal : { 179 97 184 102 }*/
/* IO - VPL Terminal : { 179 123 184 128 }*/
/* IO - VPL Terminal : { 179 146 184 151 }*/
/* End Operation */

/* Begin Operation: { 230 20 238 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Has_20_Instances_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Has_20_Instances_3F__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 493 712 }{ 270 244 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 51 58 67 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 46 110 51 115 }*/
/* IO - VPL Root : { 67 92 72 97 }*/
/* IO - VPL Root : { 67 128 72 133 }*/
/* End Operation */

/* Begin Operation: { 90 33 106 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 85 87 90 92 }*/
/* IO - VPL Root : { 106 68 111 73 }*/
/* IO - VPL Root : { 106 105 111 110 }*/
/* End Operation */

/* Begin Operation: { 129 25 145 115 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 124 68 129 73 }*/
/* IO - VPL Root : { 145 53 150 58 }*/
/* IO - VPL Root : { 145 83 150 88 }*/
/* End Operation */

/* Begin Operation: { 184 65 200 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,0,"has-instances?");
/* IO - VPL Terminal : { 179 83 184 88 }*/
/* IO - VPL Terminal : { 179 105 184 110 }*/
/* IO - VPL Terminal : { 179 128 184 133 }*/
/* IO - VPL Terminal : { 179 146 184 151 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 224 23 232 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Get_20_Info_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Get_20_Info_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 82 117 }{ 228 258 } */
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 90 23 95 }*/
/* IO - VPL Root : { 18 131 23 136 }*/
/* IO - VPL Root : { 18 186 23 191 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 169 60 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"procedure");
/* IO - VPL Terminal : { 39 195 44 200 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 44 38 60 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 39 90 44 95 }*/
/* IO - VPL Root : { 60 69 65 74 }*/
/* IO - VPL Root : { 60 108 65 113 }*/
/* End Operation */

/* Begin Operation: { 78 20 94 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 73 74 78 79 }*/
/* IO - VPL Root : { 94 55 99 60 }*/
/* IO - VPL Root : { 94 92 99 97 }*/
/* End Operation */

/* Begin Operation: { 112 20 128 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 107 63 112 68 }*/
/* IO - VPL Root : { 128 48 133 53 }*/
/* IO - VPL Root : { 128 78 133 83 }*/
/* End Operation */

/* Begin Operation: { 146 56 162 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"get-procedure-info");
/* IO - VPL Terminal : { 141 78 146 83 }*/
/* IO - VPL Terminal : { 141 104 146 109 }*/
/* IO - VPL Terminal : { 141 131 146 136 }*/
/* IO - VPL Terminal : { 141 157 146 162 }*/
/* IO - VPL Root : { 162 117 167 122 }*/
/* End Operation */

/* Begin Operation: { 180 23 188 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 175 117 180 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,2,0,4,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 82 117 }{ 228 258 } */
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 90 23 95 }*/
/* IO - VPL Root : { 18 131 23 136 }*/
/* IO - VPL Root : { 18 186 23 191 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 170 60 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"primitive");
/* IO - VPL Terminal : { 39 195 44 200 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 44 38 60 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 39 90 44 95 }*/
/* IO - VPL Root : { 60 69 65 74 }*/
/* IO - VPL Root : { 60 108 65 113 }*/
/* End Operation */

/* Begin Operation: { 78 20 94 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 73 74 78 79 }*/
/* IO - VPL Root : { 94 55 99 60 }*/
/* IO - VPL Root : { 94 92 99 97 }*/
/* End Operation */

/* Begin Operation: { 112 20 128 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 107 63 112 68 }*/
/* IO - VPL Root : { 128 48 133 53 }*/
/* IO - VPL Root : { 128 78 133 83 }*/
/* End Operation */

/* Begin Operation: { 146 57 162 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"get-primitive-info");
/* IO - VPL Terminal : { 141 78 146 83 }*/
/* IO - VPL Terminal : { 141 102 146 107 }*/
/* IO - VPL Terminal : { 141 133 146 138 }*/
/* IO - VPL Terminal : { 141 160 146 165 }*/
/* IO - VPL Root : { 162 117 167 122 }*/
/* End Operation */

/* Begin Operation: { 180 23 188 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 175 117 180 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,2,0,4,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 82 117 }{ 228 258 } */
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 90 23 95 }*/
/* IO - VPL Root : { 18 131 23 136 }*/
/* IO - VPL Root : { 18 186 23 191 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 173 60 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"constant");
/* IO - VPL Terminal : { 39 195 44 200 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 44 38 60 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 39 90 44 95 }*/
/* IO - VPL Root : { 60 69 65 74 }*/
/* IO - VPL Root : { 60 108 65 113 }*/
/* End Operation */

/* Begin Operation: { 78 20 94 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 73 74 78 79 }*/
/* IO - VPL Root : { 94 55 99 60 }*/
/* IO - VPL Root : { 94 92 99 97 }*/
/* End Operation */

/* Begin Operation: { 112 20 128 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 107 63 112 68 }*/
/* IO - VPL Root : { 128 48 133 53 }*/
/* IO - VPL Root : { 128 78 133 83 }*/
/* End Operation */

/* Begin Operation: { 146 59 162 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"get-constant-info");
/* IO - VPL Terminal : { 141 78 146 83 }*/
/* IO - VPL Terminal : { 141 103 146 108 }*/
/* IO - VPL Terminal : { 141 133 146 138 }*/
/* IO - VPL Terminal : { 141 158 146 163 }*/
/* IO - VPL Root : { 162 117 167 122 }*/
/* End Operation */

/* Begin Operation: { 180 23 188 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 175 117 180 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,2,0,4,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 82 117 }{ 228 258 } */
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 90 23 95 }*/
/* IO - VPL Root : { 18 131 23 136 }*/
/* IO - VPL Root : { 18 186 23 191 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 170 60 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"structure");
/* IO - VPL Terminal : { 39 195 44 200 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 44 38 60 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 39 90 44 95 }*/
/* IO - VPL Root : { 60 69 65 74 }*/
/* IO - VPL Root : { 60 108 65 113 }*/
/* End Operation */

/* Begin Operation: { 78 20 94 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 73 74 78 79 }*/
/* IO - VPL Root : { 94 55 99 60 }*/
/* IO - VPL Root : { 94 92 99 97 }*/
/* End Operation */

/* Begin Operation: { 112 20 128 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 107 63 112 68 }*/
/* IO - VPL Root : { 128 48 133 53 }*/
/* IO - VPL Root : { 128 78 133 83 }*/
/* End Operation */

/* Begin Operation: { 146 56 162 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"get-structure-info");
/* IO - VPL Terminal : { 141 78 146 83 }*/
/* IO - VPL Terminal : { 141 102 146 107 }*/
/* IO - VPL Terminal : { 141 132 146 137 }*/
/* IO - VPL Terminal : { 141 160 146 165 }*/
/* IO - VPL Root : { 162 117 167 122 }*/
/* End Operation */

/* Begin Operation: { 180 23 188 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 175 117 180 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,2,0,4,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 82 117 }{ 228 258 } */
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 90 23 95 }*/
/* IO - VPL Root : { 18 131 23 136 }*/
/* IO - VPL Root : { 18 186 23 191 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 135 106 151 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 151 117 156 122 }*/
/* End Operation */

/* Begin Operation: { 180 23 188 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 175 117 180 122 }*/
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


Nat4 VPLU_Interpreter_2F_Update_20_Breakpoints_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Update_20_Breakpoints_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 211 800 }{ 294 272 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 60 35 65 }*/
/* IO - VPL Root : { 30 115 35 120 }*/
/* IO - VPL Root : { 30 172 35 177 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 159 80 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 59 172 64 177 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 64 18 80 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Breakpoints");
/* IO - VPL Terminal : { 59 60 64 65 }*/
/* IO - VPL Root : { 80 45 85 50 }*/
/* IO - VPL Root : { 80 74 85 79 }*/
/* End Operation */

/* Begin Operation: { 106 89 122 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(in)");
/* IO - VPL Terminal : { 101 101 106 106 }*/
/* IO - VPL Terminal : { 101 115 106 120 }*/
/* IO - VPL Root : { 122 109 127 114 }*/
/* End Operation */

/* Begin Operation: { 148 167 164 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 143 170 148 175 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 148 71 164 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 143 92 148 97 }*/
/* IO - VPL Terminal : { 143 115 148 120 }*/
/* IO - VPL Root : { 164 104 169 109 }*/
/* End Operation */

/* Begin Operation: { 190 18 206 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Breakpoints");
/* IO - VPL Terminal : { 185 45 190 50 }*/
/* IO - VPL Terminal : { 185 74 190 79 }*/
/* IO - VPL Root : { 206 60 211 65 }*/
/* End Operation */

/* Begin Operation: { 232 27 240 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,1,5);
	result = connect_root_to_terminal(ptrA,2,0,2,5);
	result = connect_root_to_terminal(ptrA,1,2,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [5 to 4] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 211 800 }{ 294 272 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 60 35 65 }*/
/* IO - VPL Root : { 30 115 35 120 }*/
/* IO - VPL Root : { 30 172 35 177 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 18 80 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Breakpoints");
/* IO - VPL Terminal : { 59 60 64 65 }*/
/* IO - VPL Root : { 80 45 85 50 }*/
/* IO - VPL Root : { 80 74 85 79 }*/
/* End Operation */

/* Begin Operation: { 106 89 122 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(in)");
/* IO - VPL Terminal : { 101 101 106 106 }*/
/* IO - VPL Terminal : { 101 115 106 120 }*/
/* IO - VPL Root : { 122 109 127 114 }*/
/* End Operation */

/* Begin Operation: { 148 167 164 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 143 170 148 175 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 148 49 164 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"detach-nth");
/* IO - VPL Terminal : { 143 74 148 79 }*/
/* IO - VPL Terminal : { 143 101 148 106 }*/
/* IO - VPL Root : { 164 74 169 79 }*/
/* IO - VPL Root : { 164 101 169 106 }*/
/* End Operation */

/* Begin Operation: { 190 18 206 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Breakpoints");
/* IO - VPL Terminal : { 185 45 190 50 }*/
/* IO - VPL Terminal : { 185 74 190 79 }*/
/* IO - VPL Root : { 206 60 211 65 }*/
/* End Operation */

/* Begin Operation: { 232 27 240 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Unmark_20_Heap_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Unmark_20_Heap_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 299 272 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 64 80 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 98 85 103 }*/
/* IO - VPL Root : { 80 134 85 139 }*/
/* End Operation */

/* Begin Operation: { 106 33 122 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 101 87 106 92 }*/
/* IO - VPL Root : { 122 67 127 72 }*/
/* IO - VPL Root : { 122 105 127 110 }*/
/* End Operation */

/* Begin Operation: { 148 20 164 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 143 63 148 68 }*/
/* IO - VPL Root : { 164 48 169 53 }*/
/* IO - VPL Root : { 164 78 169 83 }*/
/* End Operation */

/* Begin Operation: { 190 62 206 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,0,"unmark-heap");
/* IO - VPL Terminal : { 185 78 190 83 }*/
/* IO - VPL Terminal : { 185 105 190 110 }*/
/* IO - VPL Terminal : { 185 134 190 139 }*/
/* End Operation */

/* Begin Operation: { 232 22 240 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Find_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Find_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 177 491 }{ 282 301 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 72 35 77 }*/
/* IO - VPL Root : { 30 105 35 110 }*/
/* IO - VPL Root : { 30 141 35 146 }*/
/* IO - VPL Root : { 30 158 35 163 }*/
/* IO - VPL Root : { 30 172 35 177 }*/
/* IO - VPL Root : { 30 191 35 196 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 197 80 252 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"operation");
/* IO - VPL Terminal : { 59 222 64 227 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 64 45 80 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 59 97 64 102 }*/
/* IO - VPL Root : { 80 79 85 84 }*/
/* IO - VPL Root : { 80 115 85 120 }*/
/* End Operation */

/* Begin Operation: { 106 26 122 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 101 80 106 85 }*/
/* IO - VPL Root : { 122 60 127 65 }*/
/* IO - VPL Root : { 122 98 127 103 }*/
/* End Operation */

/* Begin Operation: { 148 23 164 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 143 66 148 71 }*/
/* IO - VPL Root : { 164 51 169 56 }*/
/* IO - VPL Root : { 164 81 169 86 }*/
/* End Operation */

/* Begin Operation: { 190 66 206 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,7,1,"find-operations");
/* IO - VPL Terminal : { 185 81 190 86 }*/
/* IO - VPL Terminal : { 185 98 190 103 }*/
/* IO - VPL Terminal : { 185 115 190 120 }*/
/* IO - VPL Terminal : { 185 128 190 133 }*/
/* IO - VPL Terminal : { 185 140 190 145 }*/
/* IO - VPL Terminal : { 185 152 190 157 }*/
/* IO - VPL Terminal : { 185 165 190 170 }*/
/* IO - VPL Root : { 206 117 211 122 }*/
/* End Operation */

/* Begin Operation: { 232 22 240 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 117 232 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
	result = connect_root_to_terminal(ptrA,3,0,4,5);
	result = connect_root_to_terminal(ptrA,4,0,5,5);
	result = connect_root_to_terminal(ptrA,5,0,6,5);
	result = connect_root_to_terminal(ptrA,6,0,7,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 176 795 }{ 248 265 } */
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

/* Begin Operation: { 148 110 164 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
/* IO - VPL Root : { 164 116 169 121 }*/
/* End Operation */

/* Begin Operation: { 64 48 80 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Unrecognized Find Request");
/* IO - VPL Root : { 80 118 85 123 }*/
/* End Operation */

/* Begin Operation: { 106 95 122 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"show");
/* IO - VPL Terminal : { 101 118 106 123 }*/
/* End Operation */

/* Begin Operation: { 190 22 198 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 116 190 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Set_20_Frame_20_Breakpoint_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Set_20_Frame_20_Breakpoint_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 554 607 }{ 281 247 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 79 35 84 }*/
/* IO - VPL Root : { 30 119 35 124 }*/
/* IO - VPL Root : { 30 139 35 144 }*/
/* IO - VPL Root : { 30 159 35 164 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 27 80 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 59 79 64 84 }*/
/* IO - VPL Root : { 80 66 85 71 }*/
/* IO - VPL Root : { 80 99 85 104 }*/
/* End Operation */

/* Begin Operation: { 106 7 122 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 101 66 106 71 }*/
/* IO - VPL Root : { 122 44 127 49 }*/
/* IO - VPL Root : { 122 79 127 84 }*/
/* End Operation */

/* Begin Operation: { 148 1 164 91 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 143 44 148 49 }*/
/* IO - VPL Root : { 164 29 169 34 }*/
/* IO - VPL Root : { 164 59 169 64 }*/
/* End Operation */

/* Begin Operation: { 190 41 206 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,6,0,"set-frame-breakpoint");
/* IO - VPL Terminal : { 185 59 190 64 }*/
/* IO - VPL Terminal : { 185 79 190 84 }*/
/* IO - VPL Terminal : { 185 99 190 104 }*/
/* IO - VPL Terminal : { 185 119 190 124 }*/
/* IO - VPL Terminal : { 185 139 190 144 }*/
/* IO - VPL Terminal : { 185 159 190 164 }*/
/* End Operation */

/* Begin Operation: { 232 24 240 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,3,0,5,4);
	result = connect_root_to_terminal(ptrA,4,0,6,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Bundle_20_Primitives_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Bundle_20_Primitives_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 512 577 }{ 280 255 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 83 35 88 }*/
/* IO - VPL Root : { 30 179 35 184 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 31 80 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 59 83 64 88 }*/
/* IO - VPL Root : { 80 67 85 72 }*/
/* IO - VPL Root : { 80 101 85 106 }*/
/* End Operation */

/* Begin Operation: { 106 23 122 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 101 77 106 82 }*/
/* IO - VPL Root : { 122 65 127 70 }*/
/* IO - VPL Root : { 122 95 127 100 }*/
/* End Operation */

/* Begin Operation: { 148 22 164 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 143 65 148 70 }*/
/* IO - VPL Root : { 164 50 169 55 }*/
/* IO - VPL Root : { 164 80 169 85 }*/
/* End Operation */

/* Begin Operation: { 190 22 206 49 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 185 33 190 38 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 190 81 206 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"bundle-primitives");
/* IO - VPL Terminal : { 185 98 190 103 }*/
/* IO - VPL Terminal : { 185 124 190 129 }*/
/* IO - VPL Terminal : { 185 151 190 156 }*/
/* IO - VPL Terminal : { 185 179 190 184 }*/
/* IO - VPL Root : { 206 141 211 146 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 232 22 240 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 106 232 111 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,3,1,5);
	result = connect_root_to_terminal(ptrA,2,2,2,5);
	result = connect_root_to_terminal(ptrA,2,1,3,5);
	result = connect_root_to_terminal(ptrA,2,0,4,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [5 to 4] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 512 917 }{ 152 261 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 68 35 73 }*/
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 110 80 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
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


Nat4 VPLU_Interpreter_2F_Get_20_Watchpoint_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Get_20_Watchpoint_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 485 688 }{ 308 340 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 135 33 140 }*/
/* IO - VPL Root : { 28 152 33 157 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 61 48 77 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 56 100 61 105 }*/
/* IO - VPL Root : { 77 82 82 87 }*/
/* IO - VPL Root : { 77 118 82 123 }*/
/* End Operation */

/* Begin Operation: { 106 29 122 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 101 83 106 88 }*/
/* IO - VPL Root : { 122 57 127 62 }*/
/* IO - VPL Root : { 122 101 127 106 }*/
/* End Operation */

/* Begin Operation: { 166 26 182 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 161 69 166 74 }*/
/* IO - VPL Root : { 182 54 187 59 }*/
/* IO - VPL Root : { 182 84 187 89 }*/
/* End Operation */

/* Begin Operation: { 219 69 235 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,5,1,"get-watchpoint");
/* IO - VPL Terminal : { 214 84 219 89 }*/
/* IO - VPL Terminal : { 214 101 219 106 }*/
/* IO - VPL Terminal : { 214 118 219 123 }*/
/* IO - VPL Terminal : { 214 135 219 140 }*/
/* IO - VPL Terminal : { 214 152 219 157 }*/
/* IO - VPL Root : { 235 120 240 125 }*/
/* End Operation */

/* Begin Operation: { 274 26 282 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 269 120 274 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,3,0,5,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Set_20_Watchpoint_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Set_20_Watchpoint_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 485 688 }{ 307 328 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 130 33 135 }*/
/* IO - VPL Root : { 28 145 33 150 }*/
/* IO - VPL Root : { 28 160 33 165 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 61 45 77 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 56 97 61 102 }*/
/* IO - VPL Root : { 77 79 82 84 }*/
/* IO - VPL Root : { 77 115 82 120 }*/
/* End Operation */

/* Begin Operation: { 106 28 122 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 101 82 106 87 }*/
/* IO - VPL Root : { 122 56 127 61 }*/
/* IO - VPL Root : { 122 100 127 105 }*/
/* End Operation */

/* Begin Operation: { 166 17 182 107 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 161 60 166 65 }*/
/* IO - VPL Root : { 182 45 187 50 }*/
/* IO - VPL Root : { 182 75 187 80 }*/
/* End Operation */

/* Begin Operation: { 219 72 235 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,6,0,"set-watchpoint");
/* IO - VPL Terminal : { 214 85 219 90 }*/
/* IO - VPL Terminal : { 214 100 219 105 }*/
/* IO - VPL Terminal : { 214 115 219 120 }*/
/* IO - VPL Terminal : { 214 130 219 135 }*/
/* IO - VPL Terminal : { 214 145 219 150 }*/
/* IO - VPL Terminal : { 214 160 219 165 }*/
/* End Operation */

/* Begin Operation: { 274 26 282 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
	result = connect_root_to_terminal(ptrA,3,0,5,4);
	result = connect_root_to_terminal(ptrA,4,0,6,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Clear_20_Watchpoints_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Clear_20_Watchpoints_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 485 688 }{ 307 328 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 97 33 102 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 61 65 77 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 56 117 61 122 }*/
/* IO - VPL Root : { 77 99 82 104 }*/
/* IO - VPL Root : { 77 135 82 140 }*/
/* End Operation */

/* Begin Operation: { 106 33 122 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 101 87 106 92 }*/
/* IO - VPL Root : { 122 61 127 66 }*/
/* IO - VPL Root : { 122 105 127 110 }*/
/* End Operation */

/* Begin Operation: { 166 17 182 107 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 161 60 166 65 }*/
/* IO - VPL Root : { 182 45 187 50 }*/
/* IO - VPL Root : { 182 75 187 80 }*/
/* End Operation */

/* Begin Operation: { 219 47 235 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,0,"clear-watchpoints");
/* IO - VPL Terminal : { 214 75 219 80 }*/
/* IO - VPL Terminal : { 214 105 219 110 }*/
/* IO - VPL Terminal : { 214 135 219 140 }*/
/* End Operation */

/* Begin Operation: { 274 26 282 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Get_20_Watchpoints_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Get_20_Watchpoints_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 485 688 }{ 308 340 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 110 33 115 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 61 76 77 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 56 128 61 133 }*/
/* IO - VPL Root : { 77 110 82 115 }*/
/* IO - VPL Root : { 77 146 82 151 }*/
/* End Operation */

/* Begin Operation: { 106 47 122 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 101 101 106 106 }*/
/* IO - VPL Root : { 122 75 127 80 }*/
/* IO - VPL Root : { 122 119 127 124 }*/
/* End Operation */

/* Begin Operation: { 166 34 182 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 161 77 166 82 }*/
/* IO - VPL Root : { 182 62 187 67 }*/
/* IO - VPL Root : { 182 92 187 97 }*/
/* End Operation */

/* Begin Operation: { 219 67 235 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"get-watchpoints");
/* IO - VPL Terminal : { 214 92 219 97 }*/
/* IO - VPL Terminal : { 214 119 219 124 }*/
/* IO - VPL Terminal : { 214 146 219 151 }*/
/* IO - VPL Root : { 235 120 240 125 }*/
/* End Operation */

/* Begin Operation: { 274 26 282 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 269 120 274 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Mark_20_Instances_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Mark_20_Instances_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 493 712 }{ 297 274 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 64 95 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 72 121 77 126 }*/
/* IO - VPL Root : { 96 101 101 106 }*/
/* IO - VPL Root : { 96 140 101 145 }*/
/* End Operation */

/* Begin Operation: { 120 41 137 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 114 98 119 103 }*/
/* IO - VPL Root : { 138 78 143 83 }*/
/* IO - VPL Root : { 138 117 143 122 }*/
/* End Operation */

/* Begin Operation: { 162 31 179 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 156 78 161 83 }*/
/* IO - VPL Root : { 180 61 185 66 }*/
/* IO - VPL Root : { 180 93 185 98 }*/
/* End Operation */

/* Begin Operation: { 204 72 221 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,0,"mark-instances");
/* IO - VPL Terminal : { 198 93 203 98 }*/
/* IO - VPL Terminal : { 198 116 203 121 }*/
/* IO - VPL Terminal : { 198 139 203 144 }*/
/* IO - VPL Terminal : { 198 162 203 167 }*/
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,2,0,4,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Interpreter_2F_Resources_20_Changed_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Interpreter_2F_Resources_20_Changed_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 551 364 }{ 301 286 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 73 95 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Read Descriptor");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 110 101 115 }*/
/* IO - VPL Root : { 96 149 101 154 }*/
/* End Operation */

/* Begin Operation: { 120 53 137 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Write Descriptor");
/* IO - VPL Terminal : { 114 110 119 115 }*/
/* IO - VPL Root : { 138 90 143 95 }*/
/* IO - VPL Root : { 138 129 143 134 }*/
/* End Operation */

/* Begin Operation: { 162 43 179 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 156 90 161 95 }*/
/* IO - VPL Root : { 180 73 185 78 }*/
/* IO - VPL Root : { 180 105 185 110 }*/
/* End Operation */

/* Begin Operation: { 204 63 221 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,0,"resources-changed");
/* IO - VPL Terminal : { 198 95 203 100 }*/
/* IO - VPL Terminal : { 198 129 203 134 }*/
/* IO - VPL Terminal : { 198 163 203 168 }*/
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_Set_20_Instance_20_Task_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Set_20_Instance_20_Task_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 454 375 }{ 128 336 } */
	tempAttribute = attribute_add("Class",tempClass,NULL,environment);
	tempAttribute = attribute_add("Instance",tempClass,NULL,environment);
	tempAttribute = attribute_add("Container",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Thread Task");
	return kNOERROR;
}

/* Start Universals: { 452 371 }{ 47 319 } */
Nat4 VPLU_Set_20_Instance_20_Task_2F_Perform_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Set_20_Instance_20_Task_2F_Perform_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 82 880 }{ 586 324 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 74 33 79 }*/
/* IO - VPL Root : { 28 147 33 152 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 98 118 114 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 93 147 98 152 }*/
/* IO - VPL Root : { 114 136 119 141 }*/
/* IO - VPL Root : { 114 156 119 161 }*/
/* End Operation */

/* Begin Operation: { 191 108 207 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Results");
/* IO - VPL Terminal : { 186 136 191 141 }*/
/* IO - VPL Root : { 207 126 212 131 }*/
/* IO - VPL Root : { 207 146 212 151 }*/
/* End Operation */

/* Begin Operation: { 234 162 250 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 229 192 234 197 }*/
/* IO - VPL Root : { 250 192 255 197 }*/
/* End Operation */

/* Begin Operation: { 274 190 290 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"2");
/* IO - VPL Terminal : { 269 192 274 197 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 273 85 289 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 268 111 273 116 }*/
/* IO - VPL Root : { 289 99 294 104 }*/
/* IO - VPL Root : { 289 125 294 130 }*/
/* End Operation */

/* Begin Operation: { 274 253 290 287 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"string");
/* IO - VPL Root : { 290 268 295 273 }*/
/* End Operation */

/* Begin Operation: { 153 139 169 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 148 181 153 186 }*/
/* IO - VPL Root : { 169 166 174 171 }*/
/* IO - VPL Root : { 169 195 174 200 }*/
/* End Operation */

/* Begin Operation: { 319 171 335 278 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Value Data");
/* IO - VPL Terminal : { 314 195 319 200 }*/
/* IO - VPL Terminal : { 314 221 319 226 }*/
/* IO - VPL Terminal : { 314 247 319 252 }*/
/* IO - VPL Root : { 335 222 340 227 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 376 204 392 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\"TRUE\"");
/* IO - VPL Terminal : { 371 222 376 227 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 334 143 350 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"list");
/* IO - VPL Root : { 350 151 355 156 }*/
/* End Operation */

/* Begin Operation: { 373 75 389 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Value Data");
/* IO - VPL Terminal : { 368 99 373 104 }*/
/* IO - VPL Terminal : { 368 125 373 130 }*/
/* IO - VPL Terminal : { 368 151 373 156 }*/
/* IO - VPL Root : { 389 126 394 131 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 448 72 464 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Update The Instance");
/* IO - VPL Terminal : { 443 74 448 79 }*/
/* IO - VPL Terminal : { 443 126 448 131 }*/
/* IO - VPL Terminal : { 443 195 448 200 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 536 769 }{ 80 323 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 368 738 }{ 361 266 } */
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

/* Begin Operation: { 56 106 72 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Instance");
/* IO - VPL Terminal : { 51 137 56 142 }*/
/* IO - VPL Root : { 72 126 77 131 }*/
/* IO - VPL Root : { 72 148 77 153 }*/
/* End Operation */

/* Begin Operation: { 96 137 112 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 91 148 96 153 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 99 37 115 87 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Class");
/* IO - VPL Terminal : { 94 60 99 65 }*/
/* IO - VPL Root : { 115 51 120 56 }*/
/* IO - VPL Root : { 115 67 120 72 }*/
/* End Operation */

/* Begin Operation: { 129 65 145 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Attribute Data");
/* IO - VPL Root : { 145 103 150 108 }*/
/* End Operation */

/* Begin Operation: { 174 33 190 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 169 67 174 72 }*/
/* IO - VPL Terminal : { 169 103 174 108 }*/
/* IO - VPL Root : { 190 85 195 90 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 225 40 241 82 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 220 59 225 64 }*/
/* IO - VPL Root : { 241 52 246 57 }*/
/* IO - VPL Root : { 241 66 246 71 }*/
/* End Operation */

/* Begin Operation: { 270 39 286 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Set Direct Value");
/* IO - VPL Terminal : { 265 66 270 71 }*/
/* IO - VPL Terminal : { 265 114 270 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 550 1009 }{ 62 355 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 636 1006 }{ 206 286 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 56 69 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 48 82 53 87 }*/
/* IO - VPL Root : { 69 72 74 77 }*/
/* IO - VPL Root : { 69 90 74 95 }*/
/* End Operation */

/* Begin Operation: { 101 70 117 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Direct Value");
/* IO - VPL Terminal : { 96 107 101 112 }*/
/* IO - VPL Terminal : { 96 146 101 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 133 30 150 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Send Refresh");
/* IO - VPL Terminal : { 127 81 132 86 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 165 27 173 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 226 116 243 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Make Dirty");
/* IO - VPL Terminal : { 220 161 225 166 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 315 25 323 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,2,6,1,7);
	result = connect_root_to_terminal(ptrA,2,0,2,7);
	result = connect_root_to_terminal(ptrA,2,3,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 368 738 }{ 509 338 } */
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

/* Begin Operation: { 95 170 111 236 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Instance");
/* IO - VPL Terminal : { 90 201 95 206 }*/
/* IO - VPL Root : { 111 190 116 195 }*/
/* IO - VPL Root : { 111 212 116 217 }*/
/* End Operation */

/* Begin Operation: { 136 148 152 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Class");
/* IO - VPL Terminal : { 131 171 136 176 }*/
/* IO - VPL Root : { 152 162 157 167 }*/
/* IO - VPL Root : { 152 178 157 183 }*/
/* End Operation */

/* Begin Operation: { 136 221 152 301 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Attribute Data");
/* IO - VPL Root : { 152 259 157 264 }*/
/* End Operation */

/* Begin Operation: { 187 170 203 278 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 182 204 187 209 }*/
/* IO - VPL Terminal : { 182 240 187 245 }*/
/* IO - VPL Root : { 203 222 208 227 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 263 203 279 245 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 258 222 263 227 }*/
/* IO - VPL Root : { 279 215 284 220 }*/
/* IO - VPL Root : { 279 229 284 234 }*/
/* End Operation */

/* Begin Operation: { 328 207 344 256 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Name");
/* IO - VPL Terminal : { 323 229 328 234 }*/
/* IO - VPL Root : { 344 221 349 226 }*/
/* IO - VPL Root : { 344 237 349 242 }*/
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,2,iList);
/* End Operation */

/* Begin Operation: { 293 151 309 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Record");
/* IO - VPL Terminal : { 288 178 293 183 }*/
/* IO - VPL Root : { 309 168 314 173 }*/
/* IO - VPL Root : { 309 187 314 192 }*/
/* End Operation */

/* Begin Operation: { 392 139 408 289 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Instance Attribute");
/* IO - VPL Terminal : { 387 162 392 167 }*/
/* IO - VPL Terminal : { 387 187 392 192 }*/
/* IO - VPL Terminal : { 387 212 392 217 }*/
/* IO - VPL Terminal : { 387 237 392 242 }*/
/* IO - VPL Terminal : { 387 262 392 267 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,4,iList);
	tempOperation = operation_input_to(tempOperation,environment,5,iList);
/* End Operation */

/* Begin Operation: { 437 35 445 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,5,1,6);
	result = connect_root_to_terminal(ptrA,2,2,1,7);
	result = connect_root_to_terminal(ptrA,3,0,1,8);
	result = connect_root_to_terminal(ptrA,2,7,2,8);
	result = connect_root_to_terminal(ptrA,2,1,3,8);
	result = connect_root_to_terminal(ptrA,2,6,4,8);
	result = connect_root_to_terminal(ptrA,2,0,5,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 500 39 517 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Existing?");
/* IO - VPL Terminal : { 494 74 499 79 }*/
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

/* Start Operations: { 426 858 }{ 232 325 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 95 95 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Instance");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 117 101 122 }*/
/* IO - VPL Root : { 96 141 101 146 }*/
/* End Operation */

/* Begin Operation: { 120 231 137 267 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 114 247 119 252 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 120 79 137 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"List Value Windows");
/* IO - VPL Terminal : { 114 141 119 146 }*/
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

/* Start Operations: { 60 60 }{ 350 335 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 41 95 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Desktop");
/* IO - VPL Root : { 96 87 101 92 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 171 95 281 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"List Value Window");
/* IO - VPL Root : { 96 224 101 229 }*/
/* End Operation */

/* Begin Operation: { 120 66 137 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Windows Type");
/* IO - VPL Terminal : { 114 111 119 116 }*/
/* IO - VPL Terminal : { 114 158 119 163 }*/
/* IO - VPL Root : { 138 135 143 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 50 179 74 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 156 60 161 65 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 162 143 179 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"find any?");
/* IO - VPL Terminal : { 156 165 161 170 }*/
/* IO - VPL Terminal : { 156 189 161 194 }*/
/* IO - VPL Root : { 180 178 185 183 }*/
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

/* Start Operations: { 60 60 }{ 270 298 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 74 95 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Data");
/* IO - VPL Terminal : { 72 98 77 103 }*/
/* IO - VPL Root : { 96 89 101 94 }*/
/* IO - VPL Root : { 96 106 101 111 }*/
/* End Operation */

/* Begin Operation: { 120 136 137 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 114 148 119 153 }*/
/* IO - VPL Terminal : { 114 162 119 167 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 162 38 170 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 132 161 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
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
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
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
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 204 205 221 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 198 215 203 220 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 204 67 221 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Refresh Data");
/* IO - VPL Terminal : { 198 118 203 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 248 133 265 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Make Dirty");
/* IO - VPL Terminal : { 242 178 247 183 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 291 37 299 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,0,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,5,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [5 to 4] */
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
	result = connect_root_to_terminal(ptrA,2,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 267 328 } */
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

/* Start Operations: { 426 858 }{ 267 328 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 104 95 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Class");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 120 101 125 }*/
/* IO - VPL Root : { 96 138 101 143 }*/
/* End Operation */

/* Begin Operation: { 120 210 137 246 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 114 226 119 231 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 120 92 137 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"List Windows");
/* IO - VPL Terminal : { 114 138 119 143 }*/
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

/* Start Operations: { 60 60 }{ 292 329 } */
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

/* Start Operations: { 60 60 }{ 292 329 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 41 95 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Desktop");
/* IO - VPL Root : { 96 87 101 92 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 189 95 263 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"List Window");
/* IO - VPL Root : { 96 224 101 229 }*/
/* End Operation */

/* Begin Operation: { 120 66 137 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Windows Type");
/* IO - VPL Terminal : { 114 111 119 116 }*/
/* IO - VPL Terminal : { 114 158 119 163 }*/
/* IO - VPL Root : { 138 135 143 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 50 179 74 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 156 60 161 65 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 162 143 179 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"find any?");
/* IO - VPL Terminal : { 156 165 161 170 }*/
/* IO - VPL Terminal : { 156 189 161 194 }*/
/* IO - VPL Root : { 180 178 185 183 }*/
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

/* Start Operations: { 359 158 }{ 270 448 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 74 95 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Data");
/* IO - VPL Terminal : { 72 98 77 103 }*/
/* IO - VPL Root : { 96 89 101 94 }*/
/* IO - VPL Root : { 96 106 101 111 }*/
/* End Operation */

/* Begin Operation: { 120 99 137 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Get Class Data");
/* IO - VPL Terminal : { 114 149 119 154 }*/
/* IO - VPL Root : { 138 148 143 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);

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

/* Start Operations: { 60 60 }{ 253 293 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 58 95 108 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"type");
/* IO - VPL Terminal : { 72 81 77 86 }*/
/* IO - VPL Root : { 96 81 101 86 }*/
/* End Operation */

/* Begin Operation: { 120 55 137 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"List Data");
/* IO - VPL Terminal : { 114 81 119 86 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 151 95 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Parent");
/* IO - VPL Terminal : { 72 180 77 185 }*/
/* IO - VPL Root : { 96 169 101 174 }*/
/* IO - VPL Root : { 96 189 101 194 }*/
/* End Operation */

/* Begin Operation: { 120 159 137 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 114 189 119 194 }*/
/* IO - VPL Root : { 138 178 143 183 }*/
/* IO - VPL Root : { 138 199 143 204 }*/
/* End Operation */

/* Begin Operation: { 162 168 179 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Class Data");
/* IO - VPL Terminal : { 156 199 161 204 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 130 203 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,4,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 253 293 } */
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
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
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

/* Begin Operation: { 125 226 142 292 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Class Data");
/* IO - VPL Root : { 143 257 148 262 }*/
/* End Operation */

/* Begin Operation: { 167 219 184 321 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug Result");
/* IO - VPL Terminal : { 161 237 166 242 }*/
/* IO - VPL Terminal : { 161 257 166 262 }*/
/* IO - VPL Terminal : { 161 277 166 282 }*/
/* IO - VPL Terminal : { 161 297 166 302 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 136 179 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 156 148 161 153 }*/
/* IO - VPL Terminal : { 156 162 161 167 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 204 38 212 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 132 203 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,2,3,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,2,0,2,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [5 to 4] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
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
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 204 205 221 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 198 215 203 220 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 204 67 221 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Refresh Data");
/* IO - VPL Terminal : { 198 118 203 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,0,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [5 to 4] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 87 179 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Send Refresh");
/* IO - VPL Terminal : { 156 138 161 143 }*/
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
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 69 30 86 96 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"known?");
/* IO - VPL Terminal : { 63 61 68 66 }*/
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

/* Start Operations: { 60 60 }{ 332 267 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 91 95 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Container");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 116 101 121 }*/
/* IO - VPL Root : { 96 143 101 148 }*/
/* End Operation */

/* Begin Operation: { 120 106 137 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 114 143 119 148 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 162 98 179 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Make Dirty");
/* IO - VPL Terminal : { 156 143 161 148 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 127 221 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 222 143 227 148 }*/
/* End Operation */

/* Begin Operation: { 246 91 263 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Container");
/* IO - VPL Terminal : { 240 116 245 121 }*/
/* IO - VPL Terminal : { 240 143 245 148 }*/
/* IO - VPL Root : { 264 130 269 135 }*/
/* End Operation */

/* Begin Operation: { 288 39 296 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 542 23 550 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,1,5);
	result = connect_root_to_terminal(ptrA,2,1,1,7);
	result = connect_root_to_terminal(ptrA,2,7,1,8);
	result = connect_root_to_terminal(ptrA,1,5,2,8);
	result = connect_root_to_terminal(ptrA,1,6,3,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,2,7,1,11);
	result = connect_root_to_terminal(ptrA,2,5,2,11);
	result = connect_root_to_terminal(ptrA,1,10,3,11);
	result = connect_root_to_terminal(ptrA,1,0,1,12);
	result = connect_root_to_terminal(ptrA,1,11,2,12);
	result = connect_root_to_terminal(ptrA,2,7,3,12);
	result = connect_root_to_terminal(ptrA,1,0,1,13);
	result = connect_root_to_terminal(ptrA,1,0,1,14);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [5 to 4] */
/* Synchro [11 to 9] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */






Nat4	loadClasses_MyDebugData(V_Environment environment);
Nat4	loadClasses_MyDebugData(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Execution Thread",environment);
	if(result == NULL) return kERROR;
	VPLC_Execution_20_Thread_class_load(result,environment);
	result = class_new("Debug State",environment);
	if(result == NULL) return kERROR;
	VPLC_Debug_20_State_class_load(result,environment);
	result = class_new("Thread Task",environment);
	if(result == NULL) return kERROR;
	VPLC_Thread_20_Task_class_load(result,environment);
	result = class_new("Interpreter",environment);
	if(result == NULL) return kERROR;
	VPLC_Interpreter_class_load(result,environment);
	result = class_new("Set Instance Task",environment);
	if(result == NULL) return kERROR;
	VPLC_Set_20_Instance_20_Task_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_MyDebugData(V_Environment environment);
Nat4	loadUniversals_MyDebugData(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("VPLCallback Handler",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLCallback_20_Handler_universal_load(result,environment);

	result = method_new("Execution Thread/Stack Execution",environment);
	if(result == NULL) return kERROR;
	VPLU_Execution_20_Thread_2F_Stack_20_Execution_universal_load(result,environment);

	result = method_new("Execution Thread/Stack Termination",environment);
	if(result == NULL) return kERROR;
	VPLU_Execution_20_Thread_2F_Stack_20_Termination_universal_load(result,environment);

	result = method_new("Execution Thread/Install Thread",environment);
	if(result == NULL) return kERROR;
	VPLU_Execution_20_Thread_2F_Install_20_Thread_universal_load(result,environment);

	result = method_new("Execution Thread/Show Errors",environment);
	if(result == NULL) return kERROR;
	VPLU_Execution_20_Thread_2F_Show_20_Errors_universal_load(result,environment);

	result = method_new("Execution Thread/Execute",environment);
	if(result == NULL) return kERROR;
	VPLU_Execution_20_Thread_2F_Execute_universal_load(result,environment);

	result = method_new("Execution Thread/Return From Thread",environment);
	if(result == NULL) return kERROR;
	VPLU_Execution_20_Thread_2F_Return_20_From_20_Thread_universal_load(result,environment);

	result = method_new("Debug State/Open Editor",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Open_20_Editor_universal_load(result,environment);

	result = method_new("Debug State/Get Editor",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Get_20_Editor_universal_load(result,environment);

	result = method_new("Debug State/Close Editor",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Close_20_Editor_universal_load(result,environment);

	result = method_new("Debug State/Construct Editor",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Construct_20_Editor_universal_load(result,environment);

	result = method_new("Debug State/Get Application",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Get_20_Application_universal_load(result,environment);

	result = method_new("Debug State/Construct Title",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Construct_20_Title_universal_load(result,environment);

	result = method_new("Debug State/Get Current Item",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Get_20_Current_20_Item_universal_load(result,environment);

	result = method_new("Debug State/Get Item",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Get_20_Item_universal_load(result,environment);

	result = method_new("Debug State/Get Current Index",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Get_20_Current_20_Index_universal_load(result,environment);

	result = method_new("Debug State/Set Item Breakpoint",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Set_20_Item_20_Breakpoint_universal_load(result,environment);

	result = method_new("Debug State/Handle Break",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Handle_20_Break_universal_load(result,environment);

	result = method_new("Debug State/Set Editor",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Set_20_Editor_universal_load(result,environment);

	result = method_new("Debug State/Set Current Operation",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Set_20_Current_20_Operation_universal_load(result,environment);

	result = method_new("Debug State/Install Frames",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Install_20_Frames_universal_load(result,environment);

	result = method_new("Debug State/In Current Stack",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_In_20_Current_20_Stack_universal_load(result,environment);

	result = method_new("Debug State/Remove View",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Remove_20_View_universal_load(result,environment);

	result = method_new("Debug State/Continue",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Continue_universal_load(result,environment);

	result = method_new("Debug State/Step Into",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Step_20_Into_universal_load(result,environment);

	result = method_new("Debug State/Step Out",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Step_20_Out_universal_load(result,environment);

	result = method_new("Debug State/Step Skip",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Step_20_Skip_universal_load(result,environment);

	result = method_new("Debug State/Step",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Step_universal_load(result,environment);

	result = method_new("Debug State/Clear Breakpoints",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Clear_20_Breakpoints_universal_load(result,environment);

	result = method_new("Debug State/Abort",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Abort_universal_load(result,environment);

	result = method_new("Debug State/Get All Breakpoints",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Get_20_All_20_Breakpoints_universal_load(result,environment);

	result = method_new("Debug State/Have Row Values?",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Have_20_Row_20_Values_3F__universal_load(result,environment);

	result = method_new("Debug State/Have Icon Values?",environment);
	if(result == NULL) return kERROR;
	VPLU_Debug_20_State_2F_Have_20_Icon_20_Values_3F__universal_load(result,environment);

	result = method_new("Thread Task/Perform",environment);
	if(result == NULL) return kERROR;
	VPLU_Thread_20_Task_2F_Perform_universal_load(result,environment);

	result = method_new("Interpreter/Open",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Open_universal_load(result,environment);

	result = method_new("Interpreter/Close",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Close_universal_load(result,environment);

	result = method_new("Interpreter/Post Load Processing",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Post_20_Load_20_Processing_universal_load(result,environment);

	result = method_new("Interpreter/Load Bundle",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Load_20_Bundle_universal_load(result,environment);

	result = method_new("Interpreter/Create Persistent",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Create_20_Persistent_universal_load(result,environment);

	result = method_new("Interpreter/Destroy Persistent",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Destroy_20_Persistent_universal_load(result,environment);

	result = method_new("Interpreter/Set Value",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Set_20_Value_universal_load(result,environment);

	result = method_new("Interpreter/Get Value",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Get_20_Value_universal_load(result,environment);

	result = method_new("Interpreter/Get Archive",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Get_20_Archive_universal_load(result,environment);

	result = method_new("Interpreter/Get Value Data",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Get_20_Value_20_Data_universal_load(result,environment);

	result = method_new("Interpreter/Modify Value Use",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Modify_20_Value_20_Use_universal_load(result,environment);

	result = method_new("Interpreter/Simple Value?",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Simple_20_Value_3F__universal_load(result,environment);

	result = method_new("Interpreter/Object To Text",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Object_20_To_20_Text_universal_load(result,environment);

	result = method_new("Interpreter/Create Class",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Create_20_Class_universal_load(result,environment);

	result = method_new("Interpreter/Destroy Class",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Destroy_20_Class_universal_load(result,environment);

	result = method_new("Interpreter/Set Class",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Set_20_Class_universal_load(result,environment);

	result = method_new("Interpreter/Create Method",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Create_20_Method_universal_load(result,environment);

	result = method_new("Interpreter/Destroy Method",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Destroy_20_Method_universal_load(result,environment);

	result = method_new("Interpreter/Set Method",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Set_20_Method_universal_load(result,environment);

	result = method_new("Interpreter/Create Case",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Create_20_Case_universal_load(result,environment);

	result = method_new("Interpreter/Destroy Case",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Destroy_20_Case_universal_load(result,environment);

	result = method_new("Interpreter/Create Operation",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Create_20_Operation_universal_load(result,environment);

	result = method_new("Interpreter/Destroy Operation",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Destroy_20_Operation_universal_load(result,environment);

	result = method_new("Interpreter/Set Operation",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Set_20_Operation_universal_load(result,environment);

	result = method_new("Interpreter/Create Terminal",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Create_20_Terminal_universal_load(result,environment);

	result = method_new("Interpreter/Destroy Terminal",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Destroy_20_Terminal_universal_load(result,environment);

	result = method_new("Interpreter/Set Terminal",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Set_20_Terminal_universal_load(result,environment);

	result = method_new("Interpreter/Create Root",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Create_20_Root_universal_load(result,environment);

	result = method_new("Interpreter/Destroy Root",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Destroy_20_Root_universal_load(result,environment);

	result = method_new("Interpreter/Set Root",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Set_20_Root_universal_load(result,environment);

	result = method_new("Interpreter/Order Elements",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Order_20_Elements_universal_load(result,environment);

	result = method_new("Interpreter/Get Operation Arity",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Get_20_Operation_20_Arity_universal_load(result,environment);

	result = method_new("Interpreter/Create Attribute",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Create_20_Attribute_universal_load(result,environment);

	result = method_new("Interpreter/Destroy Attribute",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Destroy_20_Attribute_universal_load(result,environment);

	result = method_new("Interpreter/Rename Element",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Rename_20_Element_universal_load(result,environment);

	result = method_new("Interpreter/Object To Value",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Object_20_To_20_Value_universal_load(result,environment);

	result = method_new("Interpreter/Set Current Operation",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Set_20_Current_20_Operation_universal_load(result,environment);

	result = method_new("Interpreter/Unarchive Element",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Unarchive_20_Element_universal_load(result,environment);

	result = method_new("Interpreter/Post Load?",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Post_20_Load_3F__universal_load(result,environment);

	result = method_new("Interpreter/Get Class Instance",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Get_20_Class_20_Instance_universal_load(result,environment);

	result = method_new("Interpreter/Set Instance Attribute",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Set_20_Instance_20_Attribute_universal_load(result,environment);

	result = method_new("Interpreter/Finalize Stack",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Finalize_20_Stack_universal_load(result,environment);

	result = method_new("Interpreter/Initialize Stack",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Initialize_20_Stack_universal_load(result,environment);

	result = method_new("Interpreter/Advance Stack",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Advance_20_Stack_universal_load(result,environment);

	result = method_new("Interpreter/Get Current Operation",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Get_20_Current_20_Operation_universal_load(result,environment);

	result = method_new("Interpreter/Reset Errors",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Reset_20_Errors_universal_load(result,environment);

	result = method_new("Interpreter/Get Errors",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Get_20_Errors_universal_load(result,environment);

	result = method_new("Interpreter/Get Debug Window",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Get_20_Debug_20_Window_universal_load(result,environment);

	result = method_new("Interpreter/Set Debug Window",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Set_20_Debug_20_Window_universal_load(result,environment);

	result = method_new("Interpreter/Get IO Value",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Get_20_IO_20_Value_universal_load(result,environment);

	result = method_new("Interpreter/Set IO Value",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Set_20_IO_20_Value_universal_load(result,environment);

	result = method_new("Interpreter/Previous Case",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Previous_20_Case_universal_load(result,environment);

	result = method_new("Interpreter/Step Into",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Step_20_Into_universal_load(result,environment);

	result = method_new("Interpreter/Step Out",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Step_20_Out_universal_load(result,environment);

	result = method_new("Interpreter/Has Instances?",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Has_20_Instances_3F__universal_load(result,environment);

	result = method_new("Interpreter/Get Info",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Get_20_Info_universal_load(result,environment);

	result = method_new("Interpreter/Update Breakpoints",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Update_20_Breakpoints_universal_load(result,environment);

	result = method_new("Interpreter/Unmark Heap",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Unmark_20_Heap_universal_load(result,environment);

	result = method_new("Interpreter/Find",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Find_universal_load(result,environment);

	result = method_new("Interpreter/Set Frame Breakpoint",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Set_20_Frame_20_Breakpoint_universal_load(result,environment);

	result = method_new("Interpreter/Bundle Primitives",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Bundle_20_Primitives_universal_load(result,environment);

	result = method_new("Interpreter/Get Watchpoint",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Get_20_Watchpoint_universal_load(result,environment);

	result = method_new("Interpreter/Set Watchpoint",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Set_20_Watchpoint_universal_load(result,environment);

	result = method_new("Interpreter/Clear Watchpoints",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Clear_20_Watchpoints_universal_load(result,environment);

	result = method_new("Interpreter/Get Watchpoints",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Get_20_Watchpoints_universal_load(result,environment);

	result = method_new("Interpreter/Mark Instances",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Mark_20_Instances_universal_load(result,environment);

	result = method_new("Interpreter/Resources Changed",environment);
	if(result == NULL) return kERROR;
	VPLU_Interpreter_2F_Resources_20_Changed_universal_load(result,environment);

	result = method_new("Set Instance Task/Perform",environment);
	if(result == NULL) return kERROR;
	VPLU_Set_20_Instance_20_Task_2F_Perform_universal_load(result,environment);

	return kNOERROR;

}


	Nat4 tempPersistent_Interpreter_20_Mode[] = {
0000000000, 0X00000024, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X07000000, 0X50726F63, 0X65737300
	};
	Nat4 tempPersistent_Interpreter_20_Version[] = {
0000000000, 0X00000024, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X05000000, 0X312E3530, 0X30000000
	};
	Nat4 tempPersistent_Interpreter_20_Remote_20_Port[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X000008AE
	};

Nat4	loadPersistents_MyDebugData(V_Environment environment);
Nat4	loadPersistents_MyDebugData(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	tempPersistent = create_persistentNode("Interpreter Mode",tempPersistent_Interpreter_20_Mode,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Interpreter Version",tempPersistent_Interpreter_20_Version,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Interpreter Remote Port",tempPersistent_Interpreter_20_Remote_20_Port,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	return kNOERROR;

}

Nat4	load_MyDebugData(V_Environment environment);
Nat4	load_MyDebugData(V_Environment environment)
{

	loadClasses_MyDebugData(environment);
	loadUniversals_MyDebugData(environment);
	loadPersistents_MyDebugData(environment);
	return kNOERROR;

}

