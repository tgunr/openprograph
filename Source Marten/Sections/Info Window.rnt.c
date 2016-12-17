/* A VPL Section File */
/*

Info Window.rnt.c
Copyright: 2002 Scott B. Anderson

*/

Nat4 VPLU_Show_20_Project_20_Info_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Show_20_Project_20_Info_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 256 292 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 113 35 118 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 146 80 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 59 182 64 187 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 64 22 80 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"VPLInfo Window");
/* IO - VPL Terminal : { 59 74 64 79 }*/
/* IO - VPL Root : { 80 74 85 79 }*/
/* End Operation */

/* Begin Operation: { 106 78 122 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Once");
/* IO - VPL Terminal : { 101 101 106 106 }*/
/* IO - VPL Terminal : { 101 136 106 141 }*/
/* IO - VPL Root : { 122 119 127 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 256 292 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 113 35 118 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 22 80 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"VPLInfo Window");
/* IO - VPL Terminal : { 59 74 64 79 }*/
/* IO - VPL Root : { 80 74 85 79 }*/
/* End Operation */

/* Begin Operation: { 65 141 81 259 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Front Project");
/* IO - VPL Root : { 81 198 86 203 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 106 78 122 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Once");
/* IO - VPL Terminal : { 101 101 106 106 }*/
/* IO - VPL Terminal : { 101 136 106 141 }*/
/* IO - VPL Root : { 122 117 127 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
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


Nat4 VPLU_Show_20_Project_20_Messages_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Show_20_Project_20_Messages_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 256 292 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 127 49 132 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 160 94 236 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 73 196 78 201 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 36 94 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"VPLInfo Window");
/* IO - VPL Terminal : { 73 88 78 93 }*/
/* IO - VPL Root : { 94 88 99 93 }*/
/* End Operation */

/* Begin Operation: { 120 78 136 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Once");
/* IO - VPL Terminal : { 115 101 120 106 }*/
/* IO - VPL Terminal : { 115 136 120 141 }*/
/* IO - VPL Root : { 136 119 141 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 68 179 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/HIC Messages");
/* IO - VPL Terminal : { 156 119 161 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 256 292 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 127 49 132 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 36 94 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"VPLInfo Window");
/* IO - VPL Terminal : { 73 88 78 93 }*/
/* IO - VPL Root : { 94 88 99 93 }*/
/* End Operation */

/* Begin Operation: { 78 160 94 278 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Front Project");
/* IO - VPL Root : { 94 217 99 222 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 120 78 136 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Once");
/* IO - VPL Terminal : { 115 101 120 106 }*/
/* IO - VPL Terminal : { 115 136 120 141 }*/
/* IO - VPL Root : { 136 117 141 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 66 179 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/HIC Messages");
/* IO - VPL Terminal : { 156 117 161 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
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


Nat4 VPLU_Lookup_20_Project_20_Info_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Lookup_20_Project_20_Info_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 131 526 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 58 35 63 }*/
/* IO - VPL Root : { 30 119 35 124 }*/
/* IO - VPL Root : { 30 180 35 185 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 36 80 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"VPLInfo Window");
/* IO - VPL Terminal : { 59 88 64 93 }*/
/* IO - VPL Root : { 80 88 85 93 }*/
/* End Operation */

/* Begin Operation: { 106 62 122 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Lookup Project Info");
/* IO - VPL Terminal : { 101 88 106 93 }*/
/* IO - VPL Terminal : { 101 115 106 120 }*/
/* IO - VPL Terminal : { 101 149 106 154 }*/
/* IO - VPL Terminal : { 101 180 106 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 159 82 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"prims");
/* IO - VPL Terminal : { 59 171 64 176 }*/
/* IO - VPL Terminal : { 59 185 64 190 }*/
/* IO - VPL Terminal : { 59 199 64 204 }*/
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

/* Start Operations: { 60 60 }{ 210 268 } */
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

/* Begin Operation: { 78 168 95 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"primitive");
/* IO - VPL Terminal : { 72 195 77 200 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 78 49 95 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"find prims?");
/* IO - VPL Terminal : { 72 75 77 80 }*/
/* IO - VPL Terminal : { 72 103 77 108 }*/
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

/* Start Operations: { 342 591 }{ 403 288 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 92 95 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Primitives Data");
/* IO - VPL Root : { 96 136 101 141 }*/
/* End Operation */

/* Begin Operation: { 120 62 137 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 114 98 119 103 }*/
/* IO - VPL Terminal : { 114 136 119 141 }*/
/* IO - VPL Root : { 138 118 143 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 162 94 179 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 156 115 161 120 }*/
/* IO - VPL Root : { 180 107 185 112 }*/
/* IO - VPL Root : { 180 122 185 127 }*/
/* End Operation */

/* Begin Operation: { 204 74 221 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"find prim lists");
/* IO - VPL Terminal : { 198 122 203 127 }*/
/* IO - VPL Root : { 222 122 227 127 }*/
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

/* Start Operations: { 362 611 }{ 206 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 107 95 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Primitive Data");
/* IO - VPL Root : { 96 148 101 153 }*/
/* End Operation */

/* Begin Operation: { 120 74 137 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 114 110 119 115 }*/
/* IO - VPL Terminal : { 114 148 119 153 }*/
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

/* Start Operations: { 362 611 }{ 206 264 } */
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
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 246 84 263 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Item Name");
/* IO - VPL Terminal : { 240 122 245 127 }*/
/* IO - VPL Terminal : { 240 162 245 167 }*/
/* IO - VPL Root : { 264 143 269 148 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 288 98 305 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"remove nulls");
/* IO - VPL Terminal : { 282 143 287 148 }*/
/* IO - VPL Root : { 306 143 311 148 }*/
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

/* Start Operations: { 149 319 }{ 230 299 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 180 95 258 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 72 217 77 222 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 100 95 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 119 101 124 }*/
/* IO - VPL Root : { 96 140 101 145 }*/
/* End Operation */

/* Begin Operation: { 120 73 137 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/AH Lookup Anchor");
/* IO - VPL Terminal : { 114 140 119 145 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 140 161 145 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 149 319 }{ 210 268 } */
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
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 330 133 347 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 324 143 329 148 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 372 50 380 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,0,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
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
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 148 25 156 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,2,0,3,2);
	result = connect_root_to_terminal(ptrA,3,0,4,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,3,0,3,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}





	Nat4 tempAttribute_VPLInfo_20_Window_2F_Name[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X08330006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0B000000, 0X496E666F, 0X726D6174, 0X696F6E00
	};
	Nat4 tempAttribute_VPLInfo_20_Window_2F_Window_20_Event_20_Handler[] = {
0000000000, 0X000008C0, 0X000001A4, 0X00000064, 0X00000014, 0X00000A30, 0X00000A2C, 0X00000A24,
0X000004CC, 0X000009DC, 0X000009D8, 0X000009D0, 0X000004C8, 0X00000988, 0X00000984, 0X0000097C,
0X000004C4, 0X00000934, 0X00000930, 0X00000928, 0X000004C0, 0X000008E0, 0X000008DC, 0X000008D4,
0X000004BC, 0X0000088C, 0X00000888, 0X00000880, 0X000004B8, 0X00000838, 0X00000834, 0X0000082C,
0X000004B4, 0X000007E4, 0X000007E0, 0X000007D8, 0X000004B0, 0X00000790, 0X0000078C, 0X00000784,
0X000004AC, 0X0000073C, 0X00000738, 0X00000730, 0X000004A8, 0X000006E8, 0X000006E4, 0X000006DC,
0X000004A4, 0X00000694, 0X00000690, 0X00000688, 0X000004A0, 0X00000640, 0X0000063C, 0X00000634,
0X0000049C, 0X000005EC, 0X000005E8, 0X000005E0, 0X00000498, 0X00000598, 0X00000594, 0X0000058C,
0X00000494, 0X00000544, 0X00000540, 0X00000538, 0X00000490, 0X000004F0, 0X000004EC, 0X000004E4,
0X0000048C, 0X00000484, 0X00000210, 0X0000020C, 0X0000043C, 0X000001F8, 0X00000410, 0X000001F4,
0X000003E4, 0X000003CC, 0X000003A4, 0X000003AC, 0X0000038C, 0X00000384, 0X000001EC, 0X0000035C,
0X00000344, 0X0000031C, 0X00000324, 0X000002A0, 0X000002F8, 0X000002E0, 0X000002B8, 0X000002C0,
0X0000029C, 0X00000294, 0X000001E8, 0X00000264, 0X000001E4, 0X00000234, 0X000001DC, 0X000001B8,
0X000001C0, 0X27000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X00000011,
0X000001C4, 0X43617262, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000220,
0000000000, 0X00000250, 0X00000280, 0X00000370, 0000000000, 0X000003FC, 0X00000428, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000458, 0X00000470, 0000000000, 0000000000, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000023C, 0X11000000, 0X6B457665,
0X6E745769, 0X6E646F77, 0X436C6173, 0X73000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000026C, 0X10000000, 0X2F434520, 0X48616E64, 0X6C652045, 0X76656E74, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000029C, 0X00000002, 0X000002A4,
0X00000308, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0X000002E4, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000300, 0X05000000,
0X4F776E65, 0X72000000, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000344,
0X00000001, 0X00000328, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965,
0X72000000, 0X00000348, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000364,
0X09000000, 0X54686520, 0X4576656E, 0X74000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000038C, 0X00000001, 0X00000390, 0X16000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X000003CC, 0X00000001, 0X000003B0, 0X41747472, 0X69627574, 0X65204F75, 0X74707574,
0X20537065, 0X63696669, 0X65720000, 0X000003D0, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000003EC, 0X0F000000, 0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000418, 0X0F000000, 0X2F446F20, 0X43452043,
0X616C6C62, 0X61636B00, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000444,
0X13000000, 0X4576656E, 0X7448616E, 0X646C6572, 0X50726F63, 0X50747200, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000048C, 0X00000011, 0X000004D0, 0X00000524, 0X00000578, 0X000005CC, 0X00000620,
0X00000674, 0X000006C8, 0X0000071C, 0X00000770, 0X000007C4, 0X00000818, 0X0000086C, 0X000008C0,
0X00000914, 0X00000968, 0X000009BC, 0X00000A10, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X000004EC, 0X00000002, 0X000004F4, 0X0000050C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X636D6473, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000001, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000540, 0X00000002,
0X00000548, 0X00000560, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X636D6473,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000002, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000594, 0X00000002, 0X0000059C, 0X000005B4, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000048, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000005E8, 0X00000002, 0X000005F0, 0X00000608, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000004A,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000063C, 0X00000002, 0X00000644,
0X0000065C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000005, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000690, 0X00000002, 0X00000698, 0X000006B0, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000006, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000006E4,
0X00000002, 0X000006EC, 0X00000704, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000002, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000738, 0X00000002, 0X00000740, 0X00000758,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X0000001B, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000078C, 0X00000002, 0X00000794, 0X000007AC, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000050, 0X02910007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000007E0, 0X00000002,
0X000007E8, 0X00000800, 0X02960004, 0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64,
0X02950004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000025, 0X06160007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000834, 0X00000002, 0X0000083C, 0X00000854, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X6B657962, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000001, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000888, 0X00000002, 0X00000890, 0X000008A8, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X6B657962, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000002,
0X03520007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000008DC, 0X00000002, 0X000008E4,
0X000008FC, 0X03560004, 0000000000, 0000000000, 0000000000, 0000000000, 0X6D6F7573, 0X03500004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000001, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000930, 0X00000002, 0X00000938, 0X00000950, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000001D, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000984,
0X00000002, 0X0000098C, 0X000009A4, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000001F, 0X077C0007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000009D8, 0X00000002, 0X000009E0, 0X000009F8,
0X077D0004, 0000000000, 0000000000, 0000000000, 0000000000, 0X6D6F7573, 0X077D0004, 0000000000,
0000000000, 0000000000, 0000000000, 0X0000000A, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000A2C, 0X00000002, 0X00000A34, 0X00000A4C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X6D6F7573, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000005
	};
	Nat4 tempAttribute_VPLInfo_20_Window_2F_Drawers[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Window_2F_Frame[] = {
0000000000, 0X0000008C, 0X00000028, 0X00000005, 0X00000014, 0X00000050, 0X0000004C, 0X00000048,
0X00000044, 0X0000003C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000044,
0X00000004, 0X00000054, 0X0000006C, 0X00000084, 0X0000009C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000032, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000032, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000C8, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000258
	};
	Nat4 tempAttribute_VPLInfo_20_Window_2F_Window_20_Pasteboard_20_Handler[] = {
0000000000, 0X00000084, 0X00000024, 0X00000004, 0X00000014, 0X00000068, 0X00000064, 0X00000038,
0X00000040, 0X3F000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000060, 0X00000004,
0X00000044, 0X57696E64, 0X6F772050, 0X61737465, 0X626F6172, 0X64204861, 0X6E646C65, 0X72000000,
0000000000, 0X00000070, 0X0000008C, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Window_2F_List_20_Index[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000001
	};
	Nat4 tempAttribute_VPLInfo_20_Window_2F_Data_20_Cache[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X07100007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Window_2F_Data_20_Cache_20_Index[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X07110004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_OLD_20_Info_20_Window_2F_Name[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0B000000, 0X496E666F, 0X726D6174, 0X696F6E00
	};
	Nat4 tempAttribute_OLD_20_Info_20_Window_2F_Window_20_Event_20_Handler[] = {
0000000000, 0X000005A8, 0X00000114, 0X00000040, 0X00000014, 0X00000688, 0X00000684, 0X0000067C,
0X00000418, 0X00000634, 0X00000630, 0X00000628, 0X00000414, 0X000005E0, 0X000005DC, 0X000005D4,
0X00000410, 0X0000058C, 0X00000588, 0X00000580, 0X0000040C, 0X00000538, 0X00000534, 0X0000052C,
0X00000408, 0X000004E4, 0X000004E0, 0X000004D8, 0X00000404, 0X00000490, 0X0000048C, 0X00000484,
0X00000400, 0X0000043C, 0X00000438, 0X00000430, 0X000003FC, 0X000003F4, 0X00000180, 0X0000017C,
0X000003AC, 0X00000168, 0X00000380, 0X00000164, 0X00000354, 0X0000033C, 0X00000314, 0X0000031C,
0X000002FC, 0X000002F4, 0X0000015C, 0X000002CC, 0X000002B4, 0X0000028C, 0X00000294, 0X00000210,
0X00000268, 0X00000250, 0X00000228, 0X00000230, 0X0000020C, 0X00000204, 0X00000158, 0X000001D4,
0X00000154, 0X000001A4, 0X0000014C, 0X00000128, 0X00000130, 0X27000008, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000014C, 0X00000011, 0X00000134, 0X43617262, 0X6F6E2045, 0X76656E74,
0X2043616C, 0X6C626163, 0X6B000000, 0X00000190, 0000000000, 0X000001C0, 0X000001F0, 0X000002E0,
0000000000, 0X0000036C, 0X00000398, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C8,
0X000003E0, 0000000000, 0000000000, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000001AC, 0X11000000, 0X6B457665, 0X6E745769, 0X6E646F77, 0X436C6173, 0X73000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X10000000, 0X2F434520,
0X48616E64, 0X6C652045, 0X76656E74, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0X00000278, 0X15000008, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000250, 0X00000001, 0X00000234, 0X41747472, 0X69627574, 0X6520496E,
0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X00000254, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000270, 0X05000000, 0X4F776E65, 0X72000000, 0X15000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000002B4, 0X00000001, 0X00000298, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000002B8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000002D4, 0X09000000, 0X54686520, 0X4576656E, 0X74000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002FC, 0X00000001, 0X00000300,
0X16000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000033C, 0X00000001, 0X00000320,
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
	Nat4 tempAttribute_OLD_20_Info_20_Window_2F_Drawers[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Info_20_HIToolbar_2F_Identifier[] = {
0000000000, 0X00000044, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X24000000, 0X636F6D2E, 0X616E6465, 0X73636F74,
0X69612E6D, 0X61727465, 0X6E2E6869, 0X746F6F6C, 0X6261722E, 0X696E666F, 0000000000
	};
	Nat4 tempAttribute_Info_20_HIToolbar_2F_Attributes[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000003
	};
	Nat4 tempAttribute_Info_20_HIToolbar_2F_Known_20_Items[] = {
0000000000, 0X00002E50, 0X000007DC, 0X000001F2, 0X00000014, 0X000035E0, 0X000035DC, 0X000035D8,
0X000035B4, 0X000035BC, 0X00003570, 0X00003588, 0X00003568, 0X00003544, 0X0000354C, 0X000033F0,
0X00003524, 0X000033EC, 0X000034F0, 0X000033E8, 0X000033E0, 0X000033DC, 0X00003498, 0X000033D8,
0X000033D4, 0X000033D0, 0X000033CC, 0X0000340C, 0X000033C8, 0X000033AC, 0X000033B4, 0X0000081C,
0X0000334C, 0X00003348, 0X00003344, 0X00003320, 0X00003328, 0X000032DC, 0X000032F4, 0X000032D4,
0X000032B0, 0X000032B8, 0X000031CC, 0X000031C0, 0X000031BC, 0X000031B8, 0X00003220, 0X0000321C,
0X00003214, 0X000031B4, 0X000031B0, 0X000031AC, 0X00003188, 0X00003190, 0X00002F50, 0X00003128,
0X00003124, 0X00003120, 0X000030FC, 0X00003104, 0X000030BC, 0X000030D4, 0X000030B4, 0X00003090,
0X00003098, 0X00002FAC, 0X00002FA0, 0X00002F9C, 0X00002F98, 0X00003000, 0X00002FFC, 0X00002FF4,
0X00002F94, 0X00002F90, 0X00002F8C, 0X00002F68, 0X00002F70, 0X00002F4C, 0X00002F44, 0X0000220C,
0X00002EFC, 0X00002EF8, 0X00002EF0, 0X00002E30, 0X00002EA8, 0X00002EA4, 0X00002E9C, 0X00002E2C,
0X00002E54, 0X00002E50, 0X00002E48, 0X00002E28, 0X00002E20, 0X00002B84, 0X00002B80, 0X00002DD8,
0X00002B6C, 0X00002DAC, 0X00002B68, 0X00002B64, 0X00002D64, 0X00002D4C, 0X00002D24, 0X00002D2C,
0X00002D0C, 0X00002D04, 0X00002B60, 0X00002CDC, 0X00002CC4, 0X00002C9C, 0X00002CA4, 0X00002C20,
0X00002C78, 0X00002C60, 0X00002C38, 0X00002C40, 0X00002C1C, 0X00002C14, 0X00002B5C, 0X00002BE4,
0X00002B58, 0X00002BA8, 0X00002B50, 0X00002B2C, 0X00002B34, 0X00002204, 0X00002200, 0X000021FC,
0X000021F8, 0X00002A9C, 0X00002A98, 0X00002A90, 0X000021F0, 0X00002A48, 0X00002A44, 0X00002A3C,
0X000021EC, 0X000029C4, 0X000029C0, 0X000029BC, 0X000029B8, 0X000029B0, 0X000021E8, 0X00002968,
0X00002964, 0X0000295C, 0X00002650, 0X00002914, 0X00002910, 0X00002908, 0X0000264C, 0X000028C0,
0X000028BC, 0X000028B4, 0X00002648, 0X0000286C, 0X00002868, 0X00002860, 0X00002644, 0X00002818,
0X00002814, 0X0000280C, 0X00002640, 0X000027C4, 0X000027C0, 0X000027B8, 0X0000263C, 0X00002770,
0X0000276C, 0X00002764, 0X00002638, 0X0000271C, 0X00002718, 0X00002710, 0X00002634, 0X000026C8,
0X000026C4, 0X000026BC, 0X00002630, 0X00002674, 0X00002670, 0X00002668, 0X0000262C, 0X00002624,
0X000023AC, 0X000023A8, 0X000025DC, 0X00002394, 0X000025B0, 0X00002390, 0X00002584, 0X0000256C,
0X00002544, 0X0000254C, 0X0000252C, 0X00002524, 0X00002388, 0X000024FC, 0X000024E4, 0X000024BC,
0X000024C4, 0X00002440, 0X00002498, 0X00002480, 0X00002458, 0X00002460, 0X0000243C, 0X00002434,
0X00002384, 0X00002404, 0X00002380, 0X000023D0, 0X00002378, 0X00002354, 0X0000235C, 0X0000233C,
0X00002310, 0X00002318, 0X000021E0, 0X000021C8, 0X000021C4, 0X000022BC, 0X000021C0, 0X000021BC,
0X000021B8, 0X000021B4, 0X00002224, 0X000021B0, 0X00002184, 0X0000218C, 0X00000818, 0X00002164,
0X00001374, 0X00001370, 0X00002104, 0X00002100, 0X000020F8, 0X00001F90, 0X000020B0, 0X000020AC,
0X000020A4, 0X00001F8C, 0X0000205C, 0X00002058, 0X00002050, 0X00001F88, 0X00002008, 0X00002004,
0X00001FFC, 0X00001F84, 0X00001FB4, 0X00001FB0, 0X00001FA8, 0X00001F80, 0X00001F78, 0X00001CDC,
0X00001CD8, 0X00001F30, 0X00001CC4, 0X00001F04, 0X00001CC0, 0X00001CBC, 0X00001EBC, 0X00001EA4,
0X00001E7C, 0X00001E84, 0X00001E64, 0X00001E5C, 0X00001CB8, 0X00001E34, 0X00001E1C, 0X00001DF4,
0X00001DFC, 0X00001D78, 0X00001DD0, 0X00001DB8, 0X00001D90, 0X00001D98, 0X00001D74, 0X00001D6C,
0X00001CB4, 0X00001D3C, 0X00001CB0, 0X00001D00, 0X00001CA8, 0X00001C84, 0X00001C8C, 0X00001368,
0X00001364, 0X00001360, 0X0000135C, 0X00001BF4, 0X00001BF0, 0X00001BE8, 0X00001354, 0X00001BA0,
0X00001B9C, 0X00001B94, 0X00001350, 0X00001B1C, 0X00001B18, 0X00001B14, 0X00001B10, 0X00001B08,
0X0000134C, 0X00001AC0, 0X00001ABC, 0X00001AB4, 0X000017A8, 0X00001A6C, 0X00001A68, 0X00001A60,
0X000017A4, 0X00001A18, 0X00001A14, 0X00001A0C, 0X000017A0, 0X000019C4, 0X000019C0, 0X000019B8,
0X0000179C, 0X00001970, 0X0000196C, 0X00001964, 0X00001798, 0X0000191C, 0X00001918, 0X00001910,
0X00001794, 0X000018C8, 0X000018C4, 0X000018BC, 0X00001790, 0X00001874, 0X00001870, 0X00001868,
0X0000178C, 0X00001820, 0X0000181C, 0X00001814, 0X00001788, 0X000017CC, 0X000017C8, 0X000017C0,
0X00001784, 0X0000177C, 0X00001504, 0X00001500, 0X00001734, 0X000014EC, 0X00001708, 0X000014E8,
0X000016DC, 0X000016C4, 0X0000169C, 0X000016A4, 0X00001684, 0X0000167C, 0X000014E0, 0X00001654,
0X0000163C, 0X00001614, 0X0000161C, 0X00001598, 0X000015F0, 0X000015D8, 0X000015B0, 0X000015B8,
0X00001594, 0X0000158C, 0X000014DC, 0X0000155C, 0X000014D8, 0X00001528, 0X000014D0, 0X000014AC,
0X000014B4, 0X00001494, 0X00001468, 0X00001470, 0X00001344, 0X0000132C, 0X00001328, 0X00001410,
0X00001324, 0X00001320, 0X0000131C, 0X00001318, 0X0000138C, 0X00001314, 0X000012EC, 0X000012F4,
0X00000814, 0X0000128C, 0X00001288, 0X00001284, 0X00001260, 0X00001268, 0X00001220, 0X00001238,
0X00001218, 0X000011F4, 0X000011FC, 0X000010C4, 0X000011C0, 0X000010BC, 0X000010B4, 0X000010B0,
0X0000116C, 0X000010AC, 0X000010A8, 0X000010A4, 0X000010A0, 0X000010E0, 0X0000109C, 0X00001080,
0X00001088, 0X00000810, 0X00001020, 0X0000101C, 0X00001018, 0X00000FF4, 0X00000FFC, 0X00000FB4,
0X00000FCC, 0X00000FAC, 0X00000F88, 0X00000F90, 0X00000E54, 0X00000F50, 0X00000E4C, 0X00000E44,
0X00000E40, 0X00000EFC, 0X00000E3C, 0X00000E38, 0X00000E34, 0X00000E30, 0X00000E70, 0X00000E2C,
0X00000E10, 0X00000E18, 0X0000080C, 0X00000DB0, 0X00000DAC, 0X00000DA8, 0X00000D84, 0X00000D8C,
0X00000D44, 0X00000D5C, 0X00000D3C, 0X00000D18, 0X00000D20, 0X00000BC8, 0X00000CF8, 0X00000BC4,
0X00000CC8, 0X00000BC0, 0X00000BB8, 0X00000BB4, 0X00000C70, 0X00000BB0, 0X00000BAC, 0X00000BA8,
0X00000BA4, 0X00000BE4, 0X00000BA0, 0X00000B84, 0X00000B8C, 0X00000808, 0X00000AE0, 0X00000ADC,
0X00000AD8, 0X00000AF8, 0X00000AD4, 0X00000AB0, 0X00000AB8, 0X00000804, 0X00000A10, 0X00000A0C,
0X00000A08, 0X00000A28, 0X00000A04, 0X000009E0, 0X000009E8, 0X00000800, 0X0000093C, 0X00000938,
0X00000934, 0X00000954, 0X00000930, 0X0000090C, 0X00000914, 0X000007FC, 0X00000864, 0X00000860,
0X0000085C, 0X0000087C, 0X00000858, 0X00000834, 0X0000083C, 0X000007F8, 0X000007F0, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000007F8, 0X0000000A, 0X00000820, 0X000008F8,
0X000009CC, 0X00000A9C, 0X00000B70, 0X00000DFC, 0X0000106C, 0X000012D8, 0X00002170, 0X00003398,
0X70000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000858, 0X00000004, 0X00000840,
0X4849546F, 0X6F6C6261, 0X72204275, 0X696C7449, 0X6E204974, 0X656D0000, 0X00000868, 0X000008B0,
0X000008C8, 0X000008E0, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000884,
0X29000000, 0X636F6D2E, 0X6170706C, 0X652E6869, 0X746F6F6C, 0X626F782E, 0X746F6F6C, 0X6261722E,
0X666C6578, 0X69626C65, 0X73706163, 0X65000000, 0X029F0004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000064, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000064,
0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00010000, 0X70000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000930, 0X00000004, 0X00000918, 0X4849546F, 0X6F6C6261,
0X72204275, 0X696C7449, 0X6E204974, 0X656D0000, 0X00000940, 0X00000984, 0X0000099C, 0X000009B4,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000095C, 0X25000000, 0X636F6D2E,
0X6170706C, 0X652E6869, 0X746F6F6C, 0X626F782E, 0X746F6F6C, 0X6261722E, 0X73657061, 0X7261746F,
0X72000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000062, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000, 0X70000008, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000A04, 0X00000004, 0X000009EC, 0X4849546F, 0X6F6C6261, 0X72204275, 0X696C7449, 0X6E204974,
0X656D0000, 0X00000A14, 0X00000A54, 0X00000A6C, 0X00000A84, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000A30, 0X21000000, 0X636F6D2E, 0X6170706C, 0X652E6869, 0X746F6F6C,
0X626F782E, 0X746F6F6C, 0X6261722E, 0X73706163, 0X65000000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000063, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00010000, 0X70000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000AD4, 0X00000004, 0X00000ABC, 0X4849546F,
0X6F6C6261, 0X72204275, 0X696C7449, 0X6E204974, 0X656D0000, 0X00000AE4, 0X00000B28, 0X00000B40,
0X00000B58, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000B00, 0X25000000,
0X636F6D2E, 0X6170706C, 0X652E6869, 0X746F6F6C, 0X626F782E, 0X746F6F6C, 0X6261722E, 0X63757374,
0X6F6D697A, 0X65000000, 0X029C0004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000061, 0X00000003, 0000000000,
0000000000, 0000000000, 0000000000, 0X00010000, 0X71000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000BA0, 0X0000000C, 0X00000B90, 0X4849546F, 0X6F6C6261, 0X72204974, 0X656D0000,
0X00000BD0, 0X00000C14, 0X00000C2C, 0X00000C44, 0X00000C5C, 0X00000C84, 0X00000C9C, 0000000000,
0X00000CB4, 0X00000CE4, 0X00000D04, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000BEC, 0X26000000, 0X636F6D2E, 0X6D616376, 0X706C2E68, 0X69746F6F, 0X6C626172,
0X6974656D, 0X2E696E66, 0X6F2E636F, 0X6E74656E, 0X74730000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00010000, 0X05AB0006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000C78, 0X08000000, 0X436F6E74, 0X656E7473,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X49746F63, 0X436F0006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000CD0, 0X11000000, 0X5461626C, 0X65206F66, 0X20436F6E, 0X74656E74,
0X73000000, 0X54610006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000D00, 0000000000,
0000000000, 0X79000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000D3C, 0X00000003,
0X00000D24, 0X4D61634F, 0X53204963, 0X6F6E2052, 0X65666572, 0X656E6365, 0000000000, 0X00000D48,
0000000000, 0X00000D70, 0X05AF0006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000D64,
0X09000000, 0X486F6D65, 0X2049636F, 0X6E000000, 0X7A000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000DA8, 0X00000003, 0X00000D90, 0X4D61634F, 0X53204963, 0X6F6E2052, 0X65676973,
0X74726172, 0000000000, 0X00000DB4, 0X00000DCC, 0X00000DE4, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X74686F6D, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X6D616373, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0XFFFF8000, 0X71000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000E2C, 0X0000000C, 0X00000E1C, 0X4849546F,
0X6F6C6261, 0X72204974, 0X656D0000, 0X00000E5C, 0X00000EA0, 0X00000EB8, 0X00000ED0, 0X00000EE8,
0X00000F0C, 0X00000F24, 0000000000, 0X00000F3C, 0000000000, 0X00000F74, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000E78, 0X24000000, 0X636F6D2E, 0X6D616376,
0X706C2E68, 0X69746F6F, 0X6C626172, 0X6974656D, 0X2E696E66, 0X6F2E7365, 0X61726368, 0000000000,
0X05510004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000078, 0X02F90004, 0000000000,
0000000000, 0000000000, 0000000000, 0X0000000A, 0X00000003, 0000000000, 0000000000, 0000000000,
0000000000, 0X00010000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000F04,
0X06000000, 0X53656172, 0X63680000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X05E70004, 0000000000, 0000000000, 0000000000, 0000000000, 0X49737249, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000F58, 0X1A000000, 0X53656172, 0X63682064,
0X6576656C, 0X6F706572, 0X2E617070, 0X6C652E63, 0X6F6D0000, 0X79000008, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000FAC, 0X00000003, 0X00000F94, 0X4D61634F, 0X53204963, 0X6F6E2052,
0X65666572, 0X656E6365, 0000000000, 0X00000FB8, 0000000000, 0X00000FE0, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000FD4, 0X0A000000, 0X4170706C, 0X65204C6F, 0X676F0000,
0X7A000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001018, 0X00000003, 0X00001000,
0X4D61634F, 0X53204963, 0X6F6E2052, 0X65676973, 0X74726172, 0000000000, 0X00001024, 0X0000103C,
0X00001054, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X6361706C, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X6D616373, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0XFFFF8000, 0X71000008, 0000000000, 0000000000, 0000000000, 0000000000,
0X0000109C, 0X0000000C, 0X0000108C, 0X4849546F, 0X6F6C6261, 0X72204974, 0X656D0000, 0X000010CC,
0X00001110, 0X00001128, 0X00001140, 0X00001158, 0X0000117C, 0X00001194, 0000000000, 0X000011AC,
0000000000, 0X000011E0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X000010E8, 0X25000000, 0X636F6D2E, 0X6D616376, 0X706C2E68, 0X69746F6F, 0X6C626172, 0X6974656D,
0X2E696E66, 0X6F2E636C, 0X61737365, 0X73000000, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000005, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000005,
0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00010000, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00001174, 0X07000000, 0X436C6173, 0X73657300, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X49636C73, 0X68650006, 0000000000, 0000000000, 0000000000, 0000000000,
0X000011C8, 0X17000000, 0X44697370, 0X6C617920, 0X636C6173, 0X73206865, 0X69726172, 0X63687900,
0X79000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001218, 0X00000003, 0X00001200,
0X4D61634F, 0X53204963, 0X6F6E2052, 0X65666572, 0X656E6365, 0000000000, 0X00001224, 0000000000,
0X0000124C, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001240, 0X0A000000,
0X4170706C, 0X65204C6F, 0X676F0000, 0X7A000008, 0000000000, 0000000000, 0000000000, 0000000000,
0X00001284, 0X00000003, 0X0000126C, 0X4D61634F, 0X53204963, 0X6F6E2052, 0X65676973, 0X74726172,
0000000000, 0X00001290, 0X000012A8, 0X000012C0, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X61726E67, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X6D616373,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0XFFFF8000, 0X94010008, 0000000000,
0000000000, 0000000000, 0000000000, 0X00001314, 0X00000019, 0X000012F8, 0X48495365, 0X61726368,
0X4669656C, 0X6420546F, 0X6F6C6261, 0X72204974, 0X656D0000, 0X00001378, 0X000013B4, 0X000013CC,
0X000013E4, 0X000013FC, 0X00001424, 0X0000143C, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00001454, 0000000000, 0X00001AF4, 0X00001B80, 0X00001BD4, 0000000000, 0X00001C28,
0X00001C40, 0X00001C58, 0X00001C70, 0000000000, 0X00002138, 0X00002150, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00001394, 0X1F000000, 0X636F6D2E, 0X6D616376, 0X706C2E74,
0X6F6F6C62, 0X61726974, 0X656D2E68, 0X69736561, 0X72636800, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000006E, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000014, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00010000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00001418, 0X0B000000, 0X496E666F, 0X726D6174,
0X696F6E00, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X6F000008, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000148C, 0X00000003, 0X00001474, 0X4849546F, 0X6F6C6261, 0X72204974,
0X656D204F, 0X626A6563, 0X74000000, 0000000000, 0000000000, 0X00001498, 0X27000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000014D0, 0X00000011, 0X000014B8, 0X43617262, 0X6F6E2045,
0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00001514, 0000000000, 0X00001548, 0X00001578,
0X00001668, 0000000000, 0X000016F4, 0X00001720, 0000000000, 0000000000, 0000000000, 0000000000,
0X00001750, 0X00001768, 0000000000, 0000000000, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00001530, 0X16000000, 0X6B457665, 0X6E74436C, 0X61737354, 0X6F6F6C62,
0X61724974, 0X656D0000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001564,
0X10000000, 0X2F434520, 0X48616E64, 0X6C652045, 0X76656E74, 0000000000, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00001594, 0X00000002, 0X0000159C, 0X00001600, 0X15000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X000015D8, 0X00000001, 0X000015BC, 0X41747472,
0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000015DC, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X000015F8, 0X05000000, 0X4F776E65, 0X72000000,
0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000163C, 0X00000001, 0X00001620,
0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X00001640,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000165C, 0X09000000, 0X54686520,
0X4576656E, 0X74000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001684,
0X00000001, 0X00001688, 0X16000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000016C4,
0X00000001, 0X000016A8, 0X41747472, 0X69627574, 0X65204F75, 0X74707574, 0X20537065, 0X63696669,
0X65720000, 0X000016C8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000016E4,
0X0F000000, 0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00001710, 0X0F000000, 0X2F446F20, 0X43452043, 0X616C6C62, 0X61636B00,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000173C, 0X13000000, 0X4576656E,
0X7448616E, 0X646C6572, 0X50726F63, 0X50747200, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0X02F30007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001784,
0X0000000A, 0X000017AC, 0X00001800, 0X00001854, 0X000018A8, 0X000018FC, 0X00001950, 0X000019A4,
0X000019F8, 0X00001A4C, 0X00001AA0, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000017C8, 0X00000002, 0X000017D0, 0X000017E8, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X74626974, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000001,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000181C, 0X00000002, 0X00001824,
0X0000183C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626974, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000002, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00001870, 0X00000002, 0X00001878, 0X00001890, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X74626974, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000003, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000018C4,
0X00000002, 0X000018CC, 0X000018E4, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X74626974, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00001918, 0X00000002, 0X00001920, 0X00001938,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626974, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000005, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000196C, 0X00000002, 0X00001974, 0X0000198C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X74626974, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000006, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000019C0, 0X00000002,
0X000019C8, 0X000019E0, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626974,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000007, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00001A14, 0X00000002, 0X00001A1C, 0X00001A34, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X74626974, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000008, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00001A68, 0X00000002, 0X00001A70, 0X00001A88, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X636E746C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000009A,
0X02F70007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001ABC, 0X00000002, 0X00001AC4,
0X00001ADC, 0X02F20004, 0000000000, 0000000000, 0000000000, 0000000000, 0X636E746C, 0X02F70004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000069, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00001B10, 0X00000004, 0X00001B20, 0X00001B38, 0X00001B50, 0X00001B68,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000018, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000AA,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001B9C, 0X00000002, 0X00001BA4,
0X00001BBC, 0X03DF0004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000018, 0X04900004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000032, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00001BF0, 0X00000002, 0X00001BF8, 0X00001C10, 0X04900004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000018, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000012C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X27000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00001CA8, 0X00000011, 0X00001C90, 0X43617262, 0X6F6E2045, 0X76656E74, 0X2043616C,
0X6C626163, 0X6B000000, 0X00001CEC, 0000000000, 0X00001D28, 0X00001D58, 0X00001E48, 0X00001ED4,
0X00001EF0, 0X00001F1C, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001F4C, 0X00001F64,
0000000000, 0000000000, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00001D08, 0X1E000000, 0X556E7469, 0X746C6564, 0X20436172, 0X626F6E20, 0X4576656E, 0X74204361,
0X6C6C6261, 0X636B0000, 0X45760006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001D44,
0X10000000, 0X2F434520, 0X48616E64, 0X6C652045, 0X76656E74, 0000000000, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00001D74, 0X00000002, 0X00001D7C, 0X00001DE0, 0X15000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00001DB8, 0X00000001, 0X00001D9C, 0X41747472,
0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X00001DBC, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00001DD8, 0X05000000, 0X4F776E65, 0X72000000,
0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001E1C, 0X00000001, 0X00001E00,
0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X00001E20,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001E3C, 0X09000000, 0X54686520,
0X4576656E, 0X74000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001E64,
0X00000001, 0X00001E68, 0X16000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001EA4,
0X00000001, 0X00001E88, 0X41747472, 0X69627574, 0X65204F75, 0X74707574, 0X20537065, 0X63696669,
0X65720000, 0X00001EA8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001EC4,
0X0F000000, 0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X00001F0C, 0X0F000000, 0X2F446F20, 0X43452043, 0X616C6C62, 0X61636B00, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00001F38, 0X13000000, 0X4576656E, 0X7448616E,
0X646C6572, 0X50726F63, 0X50747200, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001F80, 0X00000005,
0X00001F94, 0X00001FE8, 0X0000203C, 0X00002090, 0X000020E4, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00001FB0, 0X00000002, 0X00001FB8, 0X00001FD0, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X636E746C, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000069, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002004,
0X00000002, 0X0000200C, 0X00002024, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X74786664, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000001, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00002058, 0X00000002, 0X00002060, 0X00002078,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X73726664, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X000020AC, 0X00000002, 0X000020B4, 0X000020CC, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X74626976, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000004, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002100, 0X00000002,
0X00002108, 0X00002120, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X636E746C,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000009A, 0X00000003, 0000000000,
0000000000, 0000000000, 0000000000, 0X00016D2E, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000216C, 0000000000, 0000000000, 0X96010008, 0000000000, 0000000000, 0000000000,
0000000000, 0X000021B0, 0X00000018, 0X00002190, 0X48495365, 0X676D656E, 0X74656456, 0X69657720,
0X546F6F6C, 0X62617220, 0X4974656D, 0000000000, 0X00002210, 0X00002260, 0X00002278, 0X00002290,
0X000022A8, 0X000022CC, 0X000022E4, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X000022FC, 0000000000, 0X0000299C, 0X00002A28, 0X00002A7C, 0000000000, 0X00002AD0, 0X00002AE8,
0X00002B00, 0X00002B18, 0000000000, 0X00002F30, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000222C, 0X32000000, 0X636F6D2E, 0X6D617274, 0X656E2E69, 0X6E666F77, 0X696E646F,
0X772E6869, 0X746F6F6C, 0X62617269, 0X74656D2E, 0X7365676D, 0X656E7465, 0X642E6E61, 0X76690000,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000001, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X00000003, 0000000000, 0000000000, 0000000000,
0000000000, 0X00010000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000022C4,
0X04000000, 0X4261636B, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X494E626B, 0X6F000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00002334, 0X00000003, 0X0000231C, 0X4849546F,
0X6F6C6261, 0X72204974, 0X656D204F, 0X626A6563, 0X74000000, 0000000000, 0000000000, 0X00002340,
0X27000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002378, 0X00000011, 0X00002360,
0X43617262, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X000023BC, 0000000000,
0X000023F0, 0X00002420, 0X00002510, 0000000000, 0X0000259C, 0X000025C8, 0000000000, 0000000000,
0000000000, 0000000000, 0X000025F8, 0X00002610, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X000023D8, 0X16000000, 0X6B457665, 0X6E74436C,
0X61737354, 0X6F6F6C62, 0X61724974, 0X656D0000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000240C, 0X10000000, 0X2F434520, 0X48616E64, 0X6C652045, 0X76656E74, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000243C, 0X00000002, 0X00002444,
0X000024A8, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002480, 0X00000001,
0X00002464, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0X00002484, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000024A0, 0X05000000,
0X4F776E65, 0X72000000, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000024E4,
0X00000001, 0X000024C8, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965,
0X72000000, 0X000024E8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002504,
0X09000000, 0X54686520, 0X4576656E, 0X74000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000252C, 0X00000001, 0X00002530, 0X16000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000256C, 0X00000001, 0X00002550, 0X41747472, 0X69627574, 0X65204F75, 0X74707574,
0X20537065, 0X63696669, 0X65720000, 0X00002570, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000258C, 0X0F000000, 0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X000025B8, 0X0F000000, 0X2F446F20, 0X43452043,
0X616C6C62, 0X61636B00, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000025E4,
0X13000000, 0X4576656E, 0X7448616E, 0X646C6572, 0X50726F63, 0X50747200, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X02F30007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000262C, 0X0000000A, 0X00002654, 0X000026A8, 0X000026FC, 0X00002750, 0X000027A4,
0X000027F8, 0X0000284C, 0X000028A0, 0X000028F4, 0X00002948, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00002670, 0X00000002, 0X00002678, 0X00002690, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X74626974, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000001, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000026C4,
0X00000002, 0X000026CC, 0X000026E4, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X74626974, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000002, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00002718, 0X00000002, 0X00002720, 0X00002738,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626974, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000003, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000276C, 0X00000002, 0X00002774, 0X0000278C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X74626974, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000004, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000027C0, 0X00000002,
0X000027C8, 0X000027E0, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626974,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000005, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00002814, 0X00000002, 0X0000281C, 0X00002834, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X74626974, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000006, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00002868, 0X00000002, 0X00002870, 0X00002888, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X74626974, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000007,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000028BC, 0X00000002, 0X000028C4,
0X000028DC, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626974, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000008, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00002910, 0X00000002, 0X00002918, 0X00002930, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X636E746C, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000009A, 0X02F70007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002964,
0X00000002, 0X0000296C, 0X00002984, 0X02F20004, 0000000000, 0000000000, 0000000000, 0000000000,
0X636E746C, 0X02F70004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000069, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000029B8, 0X00000004, 0X000029C8, 0X000029E0,
0X000029F8, 0X00002A10, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X0000001A, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000003A, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002A44,
0X00000002, 0X00002A4C, 0X00002A64, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X0000000C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003A, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00002A98, 0X00000002, 0X00002AA0, 0X00002AB8,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000016, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X0000003A, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X27000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X00002B50, 0X00000011, 0X00002B38, 0X43617262, 0X6F6E2045,
0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00002B94, 0000000000, 0X00002BD0, 0X00002C00,
0X00002CF0, 0X00002D7C, 0X00002D98, 0X00002DC4, 0000000000, 0000000000, 0000000000, 0000000000,
0X00002DF4, 0X00002E0C, 0000000000, 0000000000, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00002BB0, 0X1E000000, 0X556E7469, 0X746C6564, 0X20436172, 0X626F6E20,
0X4576656E, 0X74204361, 0X6C6C6261, 0X636B0000, 0X0A700006, 0000000000, 0000000000, 0000000000,
0000000000, 0X00002BEC, 0X10000000, 0X2F434520, 0X48616E64, 0X6C652045, 0X76656E74, 0000000000,
0X0A710007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002C1C, 0X00000002, 0X00002C24,
0X00002C88, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002C60, 0X00000001,
0X00002C44, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0X00002C64, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002C80, 0X05000000,
0X4F776E65, 0X72000000, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002CC4,
0X00000001, 0X00002CA8, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965,
0X72000000, 0X00002CC8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002CE4,
0X09000000, 0X54686520, 0X4576656E, 0X74000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X00002D0C, 0X00000001, 0X00002D10, 0X16000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00002D4C, 0X00000001, 0X00002D30, 0X41747472, 0X69627574, 0X65204F75, 0X74707574,
0X20537065, 0X63696669, 0X65720000, 0X00002D50, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X00002D6C, 0X0F000000, 0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400, 0X0A370007,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00002DB4, 0X0F000000, 0X2F446F20, 0X43452043, 0X616C6C62,
0X61636B00, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002DE0, 0X13000000,
0X4576656E, 0X7448616E, 0X646C6572, 0X50726F63, 0X50747200, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00002E28, 0X00000003, 0X00002E34, 0X00002E88, 0X00002EDC, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00002E50, 0X00000002, 0X00002E58, 0X00002E70, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X636E746C, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000069, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002EA4,
0X00000002, 0X00002EAC, 0X00002EC4, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X74626976, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00002EF8, 0X00000002, 0X00002F00, 0X00002F18,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X636E746C, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X0000009A, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X00002F4C, 0X00000002, 0X00002F54, 0X00003174, 0X97010008, 0000000000, 0000000000,
0000000000, 0000000000, 0X00002F8C, 0X00000009, 0X00002F74, 0X48495365, 0X676D656E, 0X74656456,
0X69657720, 0X5365676D, 0X656E7400, 0X00002FB0, 0X00002FC8, 0X00002FE0, 0X00003034, 0X0000304C,
0X00003064, 0000000000, 0000000000, 0X0000307C, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000001,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002FFC, 0X00000002, 0X00003004,
0X0000301C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000,
0X00010000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X494E626B, 0X79000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X000030B4, 0X00000003, 0X0000309C, 0X4D61634F,
0X53204963, 0X6F6E2052, 0X65666572, 0X656E6365, 0000000000, 0X000030C0, 0000000000, 0X000030E8,
0X06B30006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000030DC, 0X0A000000, 0X4261636B,
0X20417272, 0X6F770000, 0X7A000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00003120,
0X00000003, 0X00003108, 0X4D61634F, 0X53204963, 0X6F6E2052, 0X65676973, 0X74726172, 0000000000,
0X0000312C, 0X00003144, 0X0000315C, 0X09B50004, 0000000000, 0000000000, 0000000000, 0000000000,
0X6261726F, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X6D616373, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0XFFFF8000, 0X97010008, 0000000000, 0000000000,
0000000000, 0000000000, 0X000031AC, 0X00000009, 0X00003194, 0X48495365, 0X676D656E, 0X74656456,
0X69657720, 0X5365676D, 0X656E7400, 0X000031D0, 0X000031E8, 0X00003200, 0X00003254, 0X0000326C,
0X00003284, 0000000000, 0000000000, 0X0000329C, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000001,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000321C, 0X00000002, 0X00003224,
0X0000323C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000,
0X00010000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X494E6677, 0X79000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X000032D4, 0X00000003, 0X000032BC, 0X4D61634F,
0X53204963, 0X6F6E2052, 0X65666572, 0X656E6365, 0000000000, 0X000032E0, 0000000000, 0X0000330C,
0X09B50006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000032FC, 0X0D000000, 0X466F7277,
0X61726420, 0X4172726F, 0X77000000, 0X7A000008, 0000000000, 0000000000, 0000000000, 0000000000,
0X00003344, 0X00000003, 0X0000332C, 0X4D61634F, 0X53204963, 0X6F6E2052, 0X65676973, 0X74726172,
0000000000, 0X00003350, 0X00003368, 0X00003380, 0X08070004, 0000000000, 0000000000, 0000000000,
0000000000, 0X6661726F, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X6D616373,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0XFFFF8000, 0X71000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000033C8, 0X0000000C, 0X000033B8, 0X4849546F, 0X6F6C6261,
0X72204974, 0X656D0000, 0X000033F8, 0X0000343C, 0X00003454, 0X0000346C, 0X00003484, 0X000034AC,
0X000034C4, 0000000000, 0X000034DC, 0X00003510, 0X00003530, 0000000000, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00003414, 0X24000000, 0X636F6D2E, 0X6D616376, 0X706C2E68,
0X69746F6F, 0X6C626172, 0X6974656D, 0X2E696E66, 0X6F2E6368, 0X65636B73, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000006, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000,
0X00010000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000034A0, 0X0B000000,
0X436F6465, 0X20436865, 0X636B7300, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X6943686B, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X000034F8, 0X17000000, 0X43686563, 0X6B20466F,
0X7220436F, 0X64652050, 0X726F626C, 0X656D7300, 0X54610006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000352C, 0000000000, 0000000000, 0X79000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00003568, 0X00000003, 0X00003550, 0X4D61634F, 0X53204963, 0X6F6E2052, 0X65666572,
0X656E6365, 0000000000, 0X00003574, 0000000000, 0X000035A0, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00003590, 0X0C000000, 0X43617574, 0X696F6E20, 0X49636F6E, 0000000000,
0X7A000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000035D8, 0X00000003, 0X000035C0,
0X4D61634F, 0X53204963, 0X6F6E2052, 0X65676973, 0X74726172, 0000000000, 0X000035E4, 0X000035FC,
0X00003614, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X63617574, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X6D616373, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0XFFFF8000
	};
	Nat4 tempAttribute_Info_20_HIToolbar_2F_Items[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Info_20_HIToolbar_2F_Visible_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Info_20_HIToolbar_2F_Supports_20_Drop_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X023F0003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Info_20_HIToolbar_2F_Windows[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X01590007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Info_20_HIToolbar_2F_HIToolbar_20_Events[] = {
0000000000, 0X000004A0, 0X000000E4, 0X00000034, 0X00000014, 0X00000550, 0X0000054C, 0X00000544,
0X000003DC, 0X000004FC, 0X000004F8, 0X000004F0, 0X000003D8, 0X000004A8, 0X000004A4, 0X0000049C,
0X000003D4, 0X00000454, 0X00000450, 0X00000448, 0X000003D0, 0X00000400, 0X000003FC, 0X000003F4,
0X000003CC, 0X000003C4, 0X00000150, 0X0000014C, 0X0000037C, 0X00000138, 0X00000350, 0X00000134,
0X00000324, 0X0000030C, 0X000002E4, 0X000002EC, 0X000002CC, 0X000002C4, 0X0000012C, 0X0000029C,
0X00000284, 0X0000025C, 0X00000264, 0X000001E0, 0X00000238, 0X00000220, 0X000001F8, 0X00000200,
0X000001DC, 0X000001D4, 0X00000128, 0X000001A4, 0X00000124, 0X00000174, 0X0000011C, 0X000000F8,
0X00000100, 0X27000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000011C, 0X00000011,
0X00000104, 0X43617262, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000160,
0000000000, 0X00000190, 0X000001C0, 0X000002B0, 0000000000, 0X0000033C, 0X00000368, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000398, 0X000003B0, 0000000000, 0000000000, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000017C, 0X12000000, 0X6B457665,
0X6E74436C, 0X61737354, 0X6F6F6C62, 0X61720000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000001AC, 0X10000000, 0X2F434520, 0X48616E64, 0X6C652045, 0X76656E74, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X00000002, 0X000001E4,
0X00000248, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000220, 0X00000001,
0X00000204, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0X00000224, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000240, 0X05000000,
0X4F776E65, 0X72000000, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000284,
0X00000001, 0X00000268, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965,
0X72000000, 0X00000288, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002A4,
0X09000000, 0X54686520, 0X4576656E, 0X74000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X000002CC, 0X00000001, 0X000002D0, 0X16000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000030C, 0X00000001, 0X000002F0, 0X41747472, 0X69627574, 0X65204F75, 0X74707574,
0X20537065, 0X63696669, 0X65720000, 0X00000310, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000032C, 0X0F000000, 0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000358, 0X0F000000, 0X2F446F20, 0X43452043,
0X616C6C62, 0X61636B00, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000384,
0X13000000, 0X4576656E, 0X7448616E, 0X646C6572, 0X50726F63, 0X50747200, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X000003CC, 0X00000005, 0X000003E0, 0X00000434, 0X00000488, 0X000004DC, 0X00000530,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003FC, 0X00000002, 0X00000404,
0X0000041C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626172, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000001, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000450, 0X00000002, 0X00000458, 0X00000470, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X74626172, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000002, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000004A4,
0X00000002, 0X000004AC, 0X000004C4, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X74626172, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000003, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000004F8, 0X00000002, 0X00000500, 0X00000518,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626172, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000054C, 0X00000002, 0X00000554, 0X0000056C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X74626172, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000005
	};
	Nat4 tempAttribute_VPLInfo_20_View_2F_Frame[] = {
0000000000, 0X0000008C, 0X00000028, 0X00000005, 0X00000014, 0X00000050, 0X0000004C, 0X00000048,
0X00000044, 0X0000003C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000044,
0X00000004, 0X00000054, 0X0000006C, 0X00000084, 0X0000009C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000096, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000226
	};
	Nat4 tempAttribute_VPLInfo_20_View_2F_Selected[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_View_2F_Highlight[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_VPLInfo_20_View_2F_Visible_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_VPLInfo_20_View_2F_Content[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_View_2F_Window_20_Origin[] = {
0000000000, 0X00000054, 0X00000020, 0X00000003, 0X00000014, 0X00000040, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000002, 0X00000044,
0X0000005C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_View_2F_Viewport_20_Origin[] = {
0000000000, 0X00000054, 0X00000020, 0X00000003, 0X00000014, 0X00000040, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000002, 0X00000044,
0X0000005C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_View_2F_Select_20_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_View_2F_Vertical_20_Scroll_20_Bar[] = {
0000000000, 0X00000468, 0X000000C8, 0X0000002D, 0X00000014, 0X000002D4, 0X000004F8, 0X000002C8,
0X000004C8, 0X000002C4, 0X00000494, 0X000002C0, 0X00000460, 0X000002BC, 0X000002B8, 0X000002B4,
0X000003F8, 0X000003D4, 0X000003DC, 0X00000358, 0X000003B0, 0X00000398, 0X00000370, 0X00000378,
0X00000354, 0X0000034C, 0X000002B0, 0X00000320, 0X000002AC, 0X000002EC, 0X000002A4, 0X00000288,
0X00000290, 0X0000012C, 0X00000128, 0X00000124, 0X00000120, 0X0000011C, 0X00000200, 0X00000118,
0X00000114, 0X00000108, 0X00000158, 0X00000154, 0X00000150, 0X0000014C, 0X00000144, 0X00000104,
0X000000DC, 0X000000E4, 0X2F010008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000F8,
0X0000000E, 0X000000E8, 0X56504C53, 0X63726F6C, 0X6C204261, 0X72000000, 0000000000, 0000000000,
0000000000, 0X00000130, 0X000001BC, 0000000000, 0000000000, 0X000001D4, 0X000001EC, 0X00000214,
0X0000022C, 0X00000244, 0X0000025C, 0X00000274, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000014C, 0X00000004, 0X0000015C, 0X00000174, 0X0000018C, 0X000001A4, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000216, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000096, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000226, 0X00000003,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000182, 0X0D530006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000208, 0X0A000000, 0X5363726F, 0X6C6C2042, 0X61720000, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000064, 0X19000008, 0000000000, 0000000000,
0000000000, 0000000000, 0X000002A4, 0X0000000D, 0X00000294, 0X4D657468, 0X6F642043, 0X616C6C62,
0X61636B00, 0X000002D8, 0000000000, 0X0000030C, 0X00000338, 0X00000414, 0X00000430, 0X0000044C,
0X00000480, 0X000004B4, 0X000004E4, 0000000000, 0000000000, 0X00000518, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000002F4, 0X16000000, 0X41637469, 0X6F6E204D, 0X6574686F,
0X64204361, 0X6C6C6261, 0X636B0000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000328, 0X0F000000, 0X2F446F20, 0X4C697665, 0X20416374, 0X696F6E00, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000354, 0X00000002, 0X0000035C, 0X000003C0, 0X15000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X00000001, 0X0000037C, 0X41747472,
0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X0000039C, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X000003B8, 0X05000000, 0X4F776E65, 0X72000000,
0X17000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003F8, 0X00000001, 0X000003E0,
0X41747461, 0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X000003FC, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000002, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000468, 0X16000000, 0X2F446F20, 0X43616C6C, 0X6261636B, 0X204E6F20, 0X52657375, 0X6C740000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000049C, 0X14000000, 0X436F6E74,
0X726F6C41, 0X6374696F, 0X6E50726F, 0X63507472, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X000004D0, 0X13000000, 0X4E657743, 0X6F6E7472, 0X6F6C4163, 0X74696F6E,
0X55505000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000500, 0X17000000,
0X44697370, 0X6F736543, 0X6F6E7472, 0X6F6C4163, 0X74696F6E, 0X55505000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_View_2F_Canvas_20_Limits[] = {
0000000000, 0X00000054, 0X00000020, 0X00000003, 0X00000014, 0X00000040, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000002, 0X00000044,
0X0000005C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Text_2F_Name[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X0AF80006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X09000000, 0X496E666F, 0X20546578, 0X74000000
	};
	Nat4 tempAttribute_VPLInfo_20_Text_2F_Frame[] = {
0000000000, 0X0000008C, 0X00000028, 0X00000005, 0X00000014, 0X00000050, 0X0000004C, 0X00000048,
0X00000044, 0X0000003C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000044,
0X00000004, 0X00000054, 0X0000006C, 0X00000084, 0X0000009C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Text_2F_Selected[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Text_2F_Highlight[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_VPLInfo_20_Text_2F_Visible_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_VPLInfo_20_Text_2F_Dirty[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Text_2F_Justification[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Text_2F_Editable_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Description_2F_Title[] = {
0000000000, 0X00000024, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X04000000, 0X496E666F, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Description_2F_Topical_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Description_2F_Standard_20_List_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Description_2F_Standard_20_Text_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Description_2F_Search_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Description_2F_Search_20_Phrase[] = {
0000000000, 0X00000020, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Description_2F_Helper_20_Name[] = {
0000000000, 0X00000020, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Description_2F_List_20_Index[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000001
	};
	Nat4 tempAttribute_VPLInfo_20_Page_20_Description_2F_Data[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_VPLInfo_20_Window_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLInfo_20_Window_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 579 334 }{ 265 388 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_VPLInfo_20_Window_2F_Name,environment);
	tempAttribute = attribute_add("WindowRef",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Event Handler",tempClass,tempAttribute_VPLInfo_20_Window_2F_Window_20_Event_20_Handler,environment);
	tempAttribute = attribute_add("Drawers",tempClass,tempAttribute_VPLInfo_20_Window_2F_Drawers,environment);
	tempAttribute = attribute_add("View",tempClass,NULL,environment);
	tempAttribute = attribute_add("Frame",tempClass,tempAttribute_VPLInfo_20_Window_2F_Frame,environment);
	tempAttribute = attribute_add("Target",tempClass,NULL,environment);
	tempAttribute = attribute_add("Title",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Pasteboard Handler",tempClass,tempAttribute_VPLInfo_20_Window_2F_Window_20_Pasteboard_20_Handler,environment);
	tempAttribute = attribute_add("Window Printing Handler",tempClass,NULL,environment);
	tempAttribute = attribute_add("Data",tempClass,NULL,environment);
	tempAttribute = attribute_add("List Index",tempClass,tempAttribute_VPLInfo_20_Window_2F_List_20_Index,environment);
	tempAttribute = attribute_add("Project",tempClass,NULL,environment);
	tempAttribute = attribute_add("Data Cache",tempClass,tempAttribute_VPLInfo_20_Window_2F_Data_20_Cache,environment);
	tempAttribute = attribute_add("Data Cache Index",tempClass,tempAttribute_VPLInfo_20_Window_2F_Data_20_Cache_20_Index,environment);
	tempAttribute = attribute_add("Current Page",tempClass,NULL,environment);
	tempAttribute = attribute_add("Contents Page",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLSelect Window");
	return kNOERROR;
}

/* Start Universals: { 126 953 }{ 688 323 } */
Nat4 VPLU_VPLInfo_20_Window_2F_CE_20_HICommand_20_Process_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_CE_20_HICommand_20_Process_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 56 33 61 }*/
/* IO - VPL Root : { 28 94 33 99 }*/
/* IO - VPL Root : { 28 132 33 137 }*/
/* IO - VPL Root : { 28 170 33 175 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 80 68 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\'Itoc\'");
/* IO - VPL Terminal : { 47 94 52 99 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 104 8 120 108 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/HIC Contents");
/* IO - VPL Terminal : { 99 56 104 61 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 113 167 129 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"noErr");
/* IO - VPL Root : { 129 182 134 187 }*/
/* End Operation */

/* Begin Operation: { 154 20 162 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 149 114 154 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 93 95 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 56 33 61 }*/
/* IO - VPL Root : { 28 94 33 99 }*/
/* IO - VPL Root : { 28 132 33 137 }*/
/* IO - VPL Root : { 28 170 33 175 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 81 68 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\'Icls\'");
/* IO - VPL Terminal : { 47 94 52 99 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 104 11 120 105 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/HIC Classes");
/* IO - VPL Terminal : { 99 56 104 61 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 113 167 129 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"noErr");
/* IO - VPL Root : { 129 182 134 187 }*/
/* End Operation */

/* Begin Operation: { 154 20 162 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 149 114 154 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 147 235 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 56 33 61 }*/
/* IO - VPL Root : { 28 94 33 99 }*/
/* IO - VPL Root : { 28 132 33 137 }*/
/* IO - VPL Root : { 28 170 33 175 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 81 68 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\'IsrI\'");
/* IO - VPL Terminal : { 47 94 52 99 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 104 -3 120 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/HIC Search Apple");
/* IO - VPL Terminal : { 99 56 104 61 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 113 167 129 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"noErr");
/* IO - VPL Root : { 129 182 134 187 }*/
/* End Operation */

/* Begin Operation: { 154 20 162 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 149 114 154 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 93 95 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 56 33 61 }*/
/* IO - VPL Root : { 28 94 33 99 }*/
/* IO - VPL Root : { 28 132 33 137 }*/
/* IO - VPL Root : { 28 170 33 175 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 80 68 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\'IsrP\'");
/* IO - VPL Terminal : { 47 94 52 99 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 104 13 120 103 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/HIC Search");
/* IO - VPL Terminal : { 99 56 104 61 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 113 167 129 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"noErr");
/* IO - VPL Root : { 129 182 134 187 }*/
/* End Operation */

/* Begin Operation: { 154 20 162 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 149 114 154 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 93 95 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 56 33 61 }*/
/* IO - VPL Root : { 28 94 33 99 }*/
/* IO - VPL Root : { 28 132 33 137 }*/
/* IO - VPL Root : { 28 170 33 175 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 80 68 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\'INbk\'");
/* IO - VPL Terminal : { 47 94 52 99 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 104 8 120 108 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/HIC Nav Back");
/* IO - VPL Terminal : { 99 56 104 61 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 113 167 129 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"noErr");
/* IO - VPL Root : { 129 182 134 187 }*/
/* End Operation */

/* Begin Operation: { 154 20 162 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 149 114 154 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 93 95 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 56 33 61 }*/
/* IO - VPL Root : { 28 94 33 99 }*/
/* IO - VPL Root : { 28 132 33 137 }*/
/* IO - VPL Root : { 28 170 33 175 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 79 68 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\'INfw\'");
/* IO - VPL Terminal : { 47 94 52 99 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 104 -2 120 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/HIC Nav Forward");
/* IO - VPL Terminal : { 99 56 104 61 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 113 167 129 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"noErr");
/* IO - VPL Root : { 129 182 134 187 }*/
/* End Operation */

/* Begin Operation: { 154 20 162 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 149 114 154 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 93 95 }{ 200 300 } */
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

/* Begin Operation: { 78 93 95 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\'iChk\'");
/* IO - VPL Terminal : { 72 110 77 115 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 46 137 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/HIC Checks");
/* IO - VPL Terminal : { 114 92 119 97 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 158 137 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"noErr");
/* IO - VPL Root : { 138 174 143 179 }*/
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
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 92 70 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 56 33 61 }*/
/* IO - VPL Root : { 28 94 33 99 }*/
/* IO - VPL Root : { 28 132 33 137 }*/
/* IO - VPL Root : { 28 170 33 175 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 83 39 99 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//CE HICommand Process");
/* IO - VPL Terminal : { 78 67 83 72 }*/
/* IO - VPL Terminal : { 78 102 83 107 }*/
/* IO - VPL Terminal : { 78 143 83 148 }*/
/* IO - VPL Terminal : { 78 182 83 187 }*/
/* IO - VPL Root : { 99 116 104 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 141 22 149 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 136 116 141 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,3,1);
	result = connect_root_to_terminal(ptrA,4,0,4,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 92 70 }{ 268 302 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 53 33 58 }*/
/* IO - VPL Root : { 28 93 33 98 }*/
/* IO - VPL Root : { 28 139 33 144 }*/
/* IO - VPL Root : { 28 180 33 185 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 182 86 198 251 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Return Event Not Handled");
/* IO - VPL Terminal : { 177 165 182 170 }*/
/* IO - VPL Root : { 198 164 203 169 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 7 73 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Unhandled HICommand");
/* IO - VPL Root : { 73 64 78 69 }*/
/* End Operation */

/* Begin Operation: { 58 128 74 246 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"integer-to-string");
/* IO - VPL Terminal : { 53 185 58 190 }*/
/* IO - VPL Root : { 74 185 79 190 }*/
/* End Operation */

/* Begin Operation: { 95 55 111 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 90 87 95 92 }*/
/* IO - VPL Terminal : { 90 121 95 126 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 216 30 224 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 211 122 216 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,4,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLInfo_20_Window_2F_CE_20_Keyboard_20_Event_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_CE_20_Keyboard_20_Event_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 341 438 }{ 269 306 } */
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

/* Begin Operation: { 62 107 78 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"View");
/* IO - VPL Terminal : { 57 130 62 135 }*/
/* IO - VPL Root : { 78 121 83 126 }*/
/* IO - VPL Root : { 78 137 83 142 }*/
/* End Operation */

/* Begin Operation: { 63 23 79 83 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Target");
/* IO - VPL Terminal : { 58 51 63 56 }*/
/* IO - VPL Root : { 79 41 84 46 }*/
/* IO - VPL Root : { 79 61 84 66 }*/
/* End Operation */

/* Begin Operation: { 111 76 127 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 106 84 111 89 }*/
/* IO - VPL Terminal : { 106 94 111 99 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 158 37 174 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Return Event Not Handled");
/* IO - VPL Terminal : { 153 117 158 122 }*/
/* IO - VPL Root : { 174 116 179 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 209 22 217 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 204 116 209 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,2,1,2,3);
	result = connect_root_to_terminal(ptrA,3,0,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
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
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 114 33 119 }*/
/* IO - VPL Root : { 28 162 33 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 42 80 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//CE Keyboard Event");
/* IO - VPL Terminal : { 59 69 64 74 }*/
/* IO - VPL Terminal : { 59 117 64 122 }*/
/* IO - VPL Terminal : { 59 166 64 171 }*/
/* IO - VPL Root : { 80 115 85 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 123 20 131 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 118 114 123 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,3,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLInfo_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 451 309 }{ 292 318 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 70 80 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Get Axis");
/* IO - VPL Terminal : { 59 103 64 108 }*/
/* IO - VPL Root : { 80 103 85 108 }*/
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

/* Start Operations: { 160 518 }{ 266 316 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 78 80 240 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kEventParamMouseWheelAxis");
/* IO - VPL Root : { 80 157 85 162 }*/
/* End Operation */

/* Begin Operation: { 105 99 121 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Get part");
/* IO - VPL Terminal : { 100 116 105 121 }*/
/* IO - VPL Terminal : { 100 143 105 148 }*/
/* IO - VPL Root : { 121 115 126 120 }*/
/* IO - VPL Root : { 121 141 126 146 }*/
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

/* Start Operations: { 60 60 }{ 334 305 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 108 80 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"typeMouseWheelAxis");
/* IO - VPL Root : { 80 163 85 168 }*/
/* End Operation */

/* Begin Operation: { 64 239 80 247 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"2");
/* IO - VPL Root : { 80 241 85 246 }*/
/* End Operation */

/* Begin Operation: { 106 71 122 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Event Parameter");
/* IO - VPL Terminal : { 101 90 106 95 }*/
/* IO - VPL Terminal : { 101 126 106 131 }*/
/* IO - VPL Terminal : { 101 163 106 168 }*/
/* IO - VPL Terminal : { 101 199 106 204 }*/
/* IO - VPL Root : { 122 96 127 101 }*/
/* IO - VPL Root : { 122 130 127 135 }*/
/* IO - VPL Root : { 122 161 127 166 }*/
/* IO - VPL Root : { 122 197 127 202 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 163 164 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"extract?");
/* IO - VPL Terminal : { 143 176 148 181 }*/
/* IO - VPL Terminal : { 143 197 148 202 }*/
/* IO - VPL Terminal : { 143 222 148 227 }*/
/* IO - VPL Root : { 164 195 169 200 }*/
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

/* Start Operations: { 256 502 }{ 200 300 } */
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

/* Begin Operation: { 64 55 80 86 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 59 68 64 73 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 64 134 80 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 80 136 85 141 }*/
/* End Operation */

/* Begin Operation: { 106 98 122 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,3,"get-integer");
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Terminal : { 101 136 106 141 }*/
/* IO - VPL Terminal : { 101 164 106 169 }*/
/* IO - VPL Root : { 122 116 127 121 }*/
/* IO - VPL Root : { 122 136 127 141 }*/
/* IO - VPL Root : { 122 156 127 161 }*/
/* End Operation */

/* Begin Operation: { 148 25 156 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 154 148 159 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,3,0,3,3);
	result = connect_root_to_terminal(ptrA,3,3,1,4);
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

/* Begin Operation: { 55 112 71 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 71 114 76 119 }*/
/* End Operation */

/* Begin Operation: { 100 20 108 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 95 114 100 119 }*/
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

/* Begin Operation: { 190 22 198 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 84 190 89 }*/
/* IO - VPL Terminal : { 185 148 190 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,1,3,3);
	result = connect_root_to_terminal(ptrA,1,2,4,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,4,3,2,4);
	result = connect_root_to_terminal(ptrA,1,2,3,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 148 77 164 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 143 92 148 97 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 148 149 164 273 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Integer To Boolean");
/* IO - VPL Terminal : { 143 209 148 214 }*/
/* IO - VPL Root : { 164 209 169 214 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 24 198 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 118 190 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 64 175 80 247 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Get Delta");
/* IO - VPL Terminal : { 59 209 64 214 }*/
/* IO - VPL Root : { 80 209 85 214 }*/
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

/* Start Operations: { 160 518 }{ 266 316 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 70 80 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kEventParamMouseWheelDelta");
/* IO - VPL Root : { 80 150 85 155 }*/
/* End Operation */

/* Begin Operation: { 106 84 122 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get EP SInt32");
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Terminal : { 101 150 106 155 }*/
/* IO - VPL Root : { 122 116 127 121 }*/
/* IO - VPL Root : { 122 150 127 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 77 164 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 143 92 148 97 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 190 24 198 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 118 190 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 158 122 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Get Modifiers");
/* IO - VPL Terminal : { 101 204 106 209 }*/
/* IO - VPL Root : { 122 204 127 209 }*/
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

/* Start Operations: { 160 518 }{ 266 316 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 79 80 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kEventParamKeyModifiers");
/* IO - VPL Root : { 80 150 85 155 }*/
/* End Operation */

/* Begin Operation: { 106 84 122 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get EP UInt32");
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Terminal : { 101 150 106 155 }*/
/* IO - VPL Root : { 122 116 127 121 }*/
/* IO - VPL Root : { 122 150 127 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 77 164 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 143 92 148 97 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 190 24 198 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 118 190 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 145 71 161 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Respond");
/* IO - VPL Terminal : { 140 84 145 89 }*/
/* IO - VPL Terminal : { 140 103 145 108 }*/
/* IO - VPL Terminal : { 140 116 145 121 }*/
/* IO - VPL Terminal : { 140 132 145 137 }*/
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

/* Start Operations: { 551 445 }{ 300 293 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 58 35 63 }*/
/* IO - VPL Root : { 30 96 35 101 }*/
/* IO - VPL Root : { 30 134 35 139 }*/
/* IO - VPL Root : { 30 172 35 177 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 84 80 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 59 96 64 101 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 35 122 85 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"View");
/* IO - VPL Terminal : { 101 58 106 63 }*/
/* IO - VPL Root : { 122 49 127 54 }*/
/* IO - VPL Root : { 122 65 127 70 }*/
/* End Operation */

/* Begin Operation: { 106 121 122 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"-");
/* IO - VPL Terminal : { 101 134 106 139 }*/
/* IO - VPL Root : { 122 134 127 139 }*/
/* End Operation */

/* Begin Operation: { 106 176 122 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"20");
/* IO - VPL Root : { 122 182 127 187 }*/
/* End Operation */

/* Begin Operation: { 148 158 164 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"**");
/* IO - VPL Terminal : { 143 169 148 174 }*/
/* IO - VPL Terminal : { 143 182 148 187 }*/
/* IO - VPL Root : { 164 176 169 181 }*/
/* End Operation */

/* Begin Operation: { 190 66 206 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Move Origin V");
/* IO - VPL Terminal : { 185 99 190 104 }*/
/* IO - VPL Terminal : { 185 134 190 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 24 240 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,2,2,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 603 410 }{ 133 282 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 58 35 63 }*/
/* IO - VPL Root : { 30 96 35 101 }*/
/* IO - VPL Root : { 30 134 35 139 }*/
/* IO - VPL Root : { 30 172 35 177 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 69 21 77 213 } */
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

/* Begin Operation: { 187 101 203 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"noErr");
/* IO - VPL Root : { 203 116 208 121 }*/
/* End Operation */

/* Begin Operation: { 229 22 237 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 224 116 229 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,2,3,4);
	result = connect_root_to_terminal(ptrA,1,3,4,4);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 123 290 }{ 200 300 } */
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


Nat4 VPLU_VPLInfo_20_Window_2F_Search_20_For_20_Text_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_Search_20_For_20_Text_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 572 605 }{ 245 348 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 80 35 85 }*/
/* IO - VPL Root : { 30 122 35 127 }*/
/* IO - VPL Root : { 30 181 35 186 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 93 80 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Trim\"");
/* IO - VPL Terminal : { 59 122 64 127 }*/
/* IO - VPL Root : { 80 122 85 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 195 122 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\"\"");
/* IO - VPL Terminal : { 101 200 106 205 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 106 40 122 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"search everywhere");
/* IO - VPL Terminal : { 101 80 106 85 }*/
/* IO - VPL Terminal : { 101 122 106 127 }*/
/* IO - VPL Root : { 122 146 127 151 }*/
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

/* Start Operations: { 60 60 }{ 357 563 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 41 206 524 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( constant primitive procedure structure Persistent Method Class Attribute Operation )");
/* IO - VPL Root : { 206 280 211 285 }*/
/* End Operation */

/* Begin Operation: { 106 61 122 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Find State");
/* IO - VPL Terminal : { 101 98 106 103 }*/
/* IO - VPL Root : { 122 98 127 103 }*/
/* End Operation */

/* Begin Operation: { 64 172 80 292 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 59 229 64 234 }*/
/* IO - VPL Root : { 80 229 85 234 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 207 122 255 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 101 229 106 234 }*/
/* IO - VPL Root : { 122 229 127 234 }*/
/* End Operation */

/* Begin Operation: { 148 173 164 261 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Source Data");
/* IO - VPL Terminal : { 143 200 148 205 }*/
/* IO - VPL Terminal : { 143 229 148 234 }*/
/* IO - VPL Root : { 164 215 169 220 }*/
/* End Operation */

/* Begin Operation: { 148 76 164 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Find Text");
/* IO - VPL Terminal : { 143 98 148 103 }*/
/* IO - VPL Terminal : { 143 122 148 127 }*/
/* IO - VPL Root : { 164 111 169 116 }*/
/* End Operation */

/* Begin Operation: { 232 90 248 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Do Type Find");
/* IO - VPL Terminal : { 227 111 232 116 }*/
/* IO - VPL Terminal : { 227 157 232 162 }*/
/* IO - VPL Root : { 248 130 253 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 60 80 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Type Result");
/* IO - VPL Terminal : { 59 85 64 90 }*/
/* IO - VPL Terminal : { 59 146 64 151 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 22 114 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 101 116 106 121 }*/
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
/* IO - VPL Terminal : { 269 118 274 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,2,1,6);
	result = connect_root_to_terminal(ptrA,2,0,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,1,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [6 to 5] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 148 72 164 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"show results");
/* IO - VPL Terminal : { 143 80 148 85 }*/
/* IO - VPL Terminal : { 143 122 148 127 }*/
/* IO - VPL Terminal : { 143 146 148 151 }*/
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

/* Start Operations: { 60 60 }{ 313 319 } */
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

/* Begin Operation: { 78 135 95 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"FIlter NULLs");
/* IO - VPL Terminal : { 72 178 77 183 }*/
/* IO - VPL Root : { 96 178 101 183 }*/
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 89 80 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 106 85 111 }*/
/* IO - VPL Root : { 80 125 85 130 }*/
/* End Operation */

/* Begin Operation: { 106 123 122 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 101 159 106 164 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 116 148 121 }*/
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

/* Begin Operation: { 60 20 68 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 55 114 60 119 }*/
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

/* Begin Operation: { 120 71 137 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"save?");
/* IO - VPL Terminal : { 114 82 119 87 }*/
/* IO - VPL Terminal : { 114 95 119 100 }*/
/* IO - VPL Terminal : { 114 108 119 113 }*/
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

/* Start Operations: { 60 60 }{ 256 314 } */
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

/* Begin Operation: { 58 165 74 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 53 171 58 176 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 57 8 73 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Save To History");
/* IO - VPL Terminal : { 52 42 57 47 }*/
/* IO - VPL Terminal : { 52 92 57 97 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 94 21 102 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 141 137 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"setup page");
/* IO - VPL Terminal : { 114 167 119 172 }*/
/* IO - VPL Terminal : { 114 195 119 200 }*/
/* IO - VPL Root : { 138 181 143 186 }*/
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

/* Start Operations: { 395 413 }{ 318 325 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 68 35 73 }*/
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 22 80 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"VPLInfo Page Description");
/* IO - VPL Terminal : { 59 99 64 104 }*/
/* IO - VPL Root : { 80 99 85 104 }*/
/* End Operation */

/* Begin Operation: { 106 22 122 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Search Phrase");
/* IO - VPL Terminal : { 101 53 106 58 }*/
/* IO - VPL Terminal : { 101 86 106 91 }*/
/* IO - VPL Root : { 122 70 127 75 }*/
/* End Operation */

/* Begin Operation: { 148 86 164 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Data");
/* IO - VPL Terminal : { 143 100 148 105 }*/
/* IO - VPL Terminal : { 143 116 148 121 }*/
/* IO - VPL Root : { 164 108 169 113 }*/
/* End Operation */

/* Begin Operation: { 148 161 164 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 164 164 169 169 }*/
/* End Operation */

/* Begin Operation: { 190 114 206 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"List Index");
/* IO - VPL Terminal : { 185 138 190 143 }*/
/* IO - VPL Terminal : { 185 164 190 169 }*/
/* IO - VPL Root : { 206 151 211 156 }*/
/* End Operation */

/* Begin Operation: { 190 211 206 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 206 224 211 229 }*/
/* End Operation */

/* Begin Operation: { 232 163 248 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Search?");
/* IO - VPL Terminal : { 227 183 232 188 }*/
/* IO - VPL Terminal : { 227 205 232 210 }*/
/* IO - VPL Root : { 248 195 253 200 }*/
/* End Operation */

/* Begin Operation: { 64 211 80 250 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Search");
/* IO - VPL Root : { 80 228 85 233 }*/
/* End Operation */

/* Begin Operation: { 106 169 122 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Title");
/* IO - VPL Terminal : { 101 183 106 188 }*/
/* IO - VPL Terminal : { 101 199 106 204 }*/
/* IO - VPL Root : { 122 192 127 197 }*/
/* End Operation */

/* Begin Operation: { 106 235 122 326 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Find Result Data");
/* IO - VPL Root : { 122 278 127 283 }*/
/* End Operation */

/* Begin Operation: { 148 201 164 291 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Helper Name");
/* IO - VPL Terminal : { 143 229 148 234 }*/
/* IO - VPL Terminal : { 143 259 148 264 }*/
/* IO - VPL Root : { 164 244 169 249 }*/
/* End Operation */

/* Begin Operation: { 274 22 282 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 269 116 274 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,1,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
	result = connect_root_to_terminal(ptrA,1,9,1,11);
	result = connect_root_to_terminal(ptrA,1,10,2,11);
	result = connect_root_to_terminal(ptrA,1,1,1,12);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 116 179 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 180 134 185 139 }*/
/* End Operation */

/* Begin Operation: { 204 58 221 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Display Page");
/* IO - VPL Terminal : { 198 82 203 87 }*/
/* IO - VPL Terminal : { 198 108 203 113 }*/
/* IO - VPL Terminal : { 198 134 203 139 }*/
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
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,3,2,5);
	result = connect_root_to_terminal(ptrA,1,4,3,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 23 198 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
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
/* IO - VPL Root : { 30 68 35 73 }*/
/* IO - VPL Root : { 30 116 35 121 }*/
/* IO - VPL Root : { 30 164 35 169 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 96 54 112 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/HIC Contents");
/* IO - VPL Terminal : { 91 101 96 106 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 23 156 215 } */
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


Nat4 VPLU_VPLInfo_20_Window_2F_Lookup_20_Project_20_Info_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_Lookup_20_Project_20_Info_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 341 678 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 49 33 54 }*/
/* IO - VPL Root : { 28 92 33 97 }*/
/* IO - VPL Root : { 28 139 33 144 }*/
/* IO - VPL Root : { 28 183 33 188 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 22 74 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Once");
/* IO - VPL Terminal : { 53 49 58 54 }*/
/* IO - VPL Terminal : { 53 77 58 82 }*/
/* IO - VPL Root : { 74 63 79 68 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 127 74 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Trim\"");
/* IO - VPL Terminal : { 53 156 58 161 }*/
/* IO - VPL Root : { 74 156 79 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 108 12 124 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Search Text");
/* IO - VPL Terminal : { 103 42 108 47 }*/
/* IO - VPL Terminal : { 103 92 108 97 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 108 146 124 264 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Search For Text");
/* IO - VPL Terminal : { 103 175 108 180 }*/
/* IO - VPL Terminal : { 103 207 108 212 }*/
/* IO - VPL Terminal : { 103 237 108 242 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 143 21 151 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,4,0,3,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLInfo_20_Window_2F_HIC_20_Contents_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_HIC_20_Contents_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 570 632 }{ 244 303 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 130 49 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 122 94 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"new page?");
/* IO - VPL Terminal : { 73 159 78 164 }*/
/* IO - VPL Root : { 94 159 99 164 }*/
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

/* Begin Operation: { 64 68 80 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Contents Page");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 99 85 104 }*/
/* IO - VPL Root : { 80 132 85 137 }*/
/* End Operation */

/* Begin Operation: { 107 26 123 102 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 102 62 107 67 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 107 158 123 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Refresh");
/* IO - VPL Terminal : { 102 194 107 199 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 23 156 215 } */
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
	result = connect_root_to_terminal(ptrA,2,1,1,4);
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
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 46 80 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"VPLInfo Page Contents");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
/* End Operation */

/* Begin Operation: { 106 97 122 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create");
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Terminal : { 101 142 106 147 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 116 148 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 168 137 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 138 186 143 191 }*/
/* End Operation */

/* Begin Operation: { 162 107 178 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Display Page");
/* IO - VPL Terminal : { 157 130 162 135 }*/
/* IO - VPL Terminal : { 157 159 162 164 }*/
/* IO - VPL Terminal : { 156 186 161 191 }*/
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
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 570 632 }{ 259 329 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 109 80 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"obtain lists");
/* IO - VPL Terminal : { 59 149 64 154 }*/
/* IO - VPL Root : { 80 149 85 154 }*/
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

/* Start Operations: { 60 60 }{ 250 395 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 36 122 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"classes list");
/* IO - VPL Terminal : { 101 76 106 81 }*/
/* IO - VPL Root : { 122 76 127 81 }*/
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

/* Start Operations: { 60 60 }{ 320 330 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 59 80 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 199 206 260 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Class Data");
/* IO - VPL Root : { 206 227 211 232 }*/
/* End Operation */

/* Begin Operation: { 106 211 122 305 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Classes");
/* IO - VPL Terminal : { 101 260 106 265 }*/
/* IO - VPL Root : { 122 260 127 265 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 234 164 290 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 143 260 148 265 }*/
/* IO - VPL Root : { 164 250 169 255 }*/
/* IO - VPL Root : { 164 268 169 273 }*/
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,2,iList);
/* End Operation */

/* Begin Operation: { 148 22 164 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Find Result Data");
/* IO - VPL Terminal : { 143 75 148 80 }*/
/* IO - VPL Root : { 164 75 169 80 }*/
/* End Operation */

/* Begin Operation: { 148 171 164 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Classes");
/* IO - VPL Root : { 164 191 169 196 }*/
/* End Operation */

/* Begin Operation: { 232 153 248 281 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Setup Results List");
/* IO - VPL Terminal : { 227 162 232 167 }*/
/* IO - VPL Terminal : { 227 191 232 196 }*/
/* IO - VPL Terminal : { 227 227 232 232 }*/
/* IO - VPL Terminal : { 227 268 232 273 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,2,3,7);
	result = connect_root_to_terminal(ptrA,2,4,4,7);
	result = connect_root_to_terminal(ptrA,1,5,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 64 134 80 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"unis list");
/* IO - VPL Terminal : { 59 166 64 171 }*/
/* IO - VPL Root : { 80 166 85 171 }*/
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

/* Start Operations: { 275 72 }{ 320 330 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 59 80 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 184 206 267 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Universal Data");
/* IO - VPL Root : { 206 223 211 228 }*/
/* End Operation */

/* Begin Operation: { 106 207 122 317 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Universals");
/* IO - VPL Terminal : { 101 260 106 265 }*/
/* IO - VPL Root : { 122 260 127 265 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 234 164 290 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 143 260 148 265 }*/
/* IO - VPL Root : { 164 250 169 255 }*/
/* IO - VPL Root : { 164 268 169 273 }*/
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,2,iList);
/* End Operation */

/* Begin Operation: { 148 22 164 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Find Result Data");
/* IO - VPL Terminal : { 143 75 148 80 }*/
/* IO - VPL Root : { 164 75 169 80 }*/
/* End Operation */

/* Begin Operation: { 148 148 164 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Universals");
/* IO - VPL Root : { 164 176 169 181 }*/
/* End Operation */

/* Begin Operation: { 232 153 248 281 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Setup Results List");
/* IO - VPL Terminal : { 227 162 232 167 }*/
/* IO - VPL Terminal : { 227 176 232 181 }*/
/* IO - VPL Terminal : { 227 223 232 228 }*/
/* IO - VPL Terminal : { 227 268 232 273 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,2,3,7);
	result = connect_root_to_terminal(ptrA,2,4,4,7);
	result = connect_root_to_terminal(ptrA,1,5,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 64 219 80 288 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"pers list");
/* IO - VPL Terminal : { 59 251 64 256 }*/
/* IO - VPL Root : { 80 251 85 256 }*/
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

/* Start Operations: { 275 72 }{ 320 330 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 59 80 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 182 206 269 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Persistent Data");
/* IO - VPL Root : { 206 223 211 228 }*/
/* End Operation */

/* Begin Operation: { 106 205 122 319 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Persistents");
/* IO - VPL Terminal : { 101 260 106 265 }*/
/* IO - VPL Root : { 122 260 127 265 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 234 164 290 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 143 260 148 265 }*/
/* IO - VPL Root : { 164 250 169 255 }*/
/* IO - VPL Root : { 164 268 169 273 }*/
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,2,iList);
/* End Operation */

/* Begin Operation: { 148 22 164 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Find Result Data");
/* IO - VPL Terminal : { 143 75 148 80 }*/
/* IO - VPL Root : { 164 75 169 80 }*/
/* End Operation */

/* Begin Operation: { 148 146 164 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Persistents");
/* IO - VPL Root : { 164 176 169 181 }*/
/* End Operation */

/* Begin Operation: { 232 153 248 281 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Setup Results List");
/* IO - VPL Terminal : { 227 162 232 167 }*/
/* IO - VPL Terminal : { 227 176 232 181 }*/
/* IO - VPL Terminal : { 227 223 232 228 }*/
/* IO - VPL Terminal : { 227 268 232 273 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,2,3,7);
	result = connect_root_to_terminal(ptrA,2,4,4,7);
	result = connect_root_to_terminal(ptrA,1,5,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 243 122 324 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Errors list");
/* IO - VPL Terminal : { 101 281 106 286 }*/
/* IO - VPL Root : { 122 281 127 286 }*/
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

/* Start Operations: { 275 72 }{ 320 330 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 59 80 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 171 164 280 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Documentation Data");
/* IO - VPL Root : { 164 223 169 228 }*/
/* End Operation */

/* Begin Operation: { 106 22 122 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Find Result Data");
/* IO - VPL Terminal : { 101 75 106 80 }*/
/* IO - VPL Root : { 122 75 127 80 }*/
/* End Operation */

/* Begin Operation: { 106 152 122 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Messages");
/* IO - VPL Root : { 122 176 127 181 }*/
/* End Operation */

/* Begin Operation: { 106 262 122 279 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
/* IO - VPL Root : { 122 268 127 273 }*/
/* End Operation */

/* Begin Operation: { 190 153 206 281 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Setup Results List");
/* IO - VPL Terminal : { 185 162 190 167 }*/
/* IO - VPL Terminal : { 185 176 190 181 }*/
/* IO - VPL Terminal : { 185 223 190 228 }*/
/* IO - VPL Terminal : { 185 268 190 273 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 26 240 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 120 232 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,1,4,2,6);
	result = connect_root_to_terminal(ptrA,1,2,3,6);
	result = connect_root_to_terminal(ptrA,1,5,4,6);
	result = connect_root_to_terminal(ptrA,1,3,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 146 122 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"breaks list");
/* IO - VPL Terminal : { 101 184 106 189 }*/
/* IO - VPL Root : { 122 184 127 189 }*/
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

/* Start Operations: { 275 72 }{ 320 330 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 59 80 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 184 206 267 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Operation Data");
/* IO - VPL Root : { 206 223 211 228 }*/
/* End Operation */

/* Begin Operation: { 106 194 122 330 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get All Breakpoints");
/* IO - VPL Terminal : { 101 260 106 265 }*/
/* IO - VPL Root : { 122 260 127 265 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 234 164 290 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 143 260 148 265 }*/
/* IO - VPL Root : { 164 250 169 255 }*/
/* IO - VPL Root : { 164 268 169 273 }*/
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,2,iList);
/* End Operation */

/* Begin Operation: { 148 22 164 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Find Result Data");
/* IO - VPL Terminal : { 143 75 148 80 }*/
/* IO - VPL Root : { 164 75 169 80 }*/
/* End Operation */

/* Begin Operation: { 148 145 164 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Breakpoints");
/* IO - VPL Root : { 164 176 169 181 }*/
/* End Operation */

/* Begin Operation: { 232 153 248 281 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Setup Results List");
/* IO - VPL Terminal : { 227 162 232 167 }*/
/* IO - VPL Terminal : { 227 176 232 181 }*/
/* IO - VPL Terminal : { 227 223 232 228 }*/
/* IO - VPL Terminal : { 227 268 232 273 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,2,3,7);
	result = connect_root_to_terminal(ptrA,2,4,4,7);
	result = connect_root_to_terminal(ptrA,1,5,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 148 148 164 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,5,1,"pack");
/* IO - VPL Terminal : { 143 159 148 164 }*/
/* IO - VPL Terminal : { 143 166 148 171 }*/
/* IO - VPL Terminal : { 143 174 148 179 }*/
/* IO - VPL Terminal : { 143 184 148 189 }*/
/* IO - VPL Terminal : { 143 194 148 199 }*/
/* IO - VPL Root : { 164 170 169 175 }*/
/* End Operation */

/* Begin Operation: { 190 31 198 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 125 190 130 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,1,2,2,6);
	result = connect_root_to_terminal(ptrA,1,3,3,6);
	result = connect_root_to_terminal(ptrA,1,5,4,6);
	result = connect_root_to_terminal(ptrA,1,4,5,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 423 499 }{ 285 393 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 181 122 301 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 101 238 106 243 }*/
/* IO - VPL Root : { 122 238 127 243 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 64 49 80 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Project Info");
/* IO - VPL Root : { 80 81 85 86 }*/
/* End Operation */

/* Begin Operation: { 106 38 122 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Find Service");
/* IO - VPL Terminal : { 101 81 106 86 }*/
/* IO - VPL Root : { 122 81 127 86 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 148 94 164 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Project Info");
/* IO - VPL Terminal : { 143 128 148 133 }*/
/* IO - VPL Terminal : { 143 178 148 183 }*/
/* IO - VPL Root : { 164 153 169 158 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 190 96 206 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Current Data");
/* IO - VPL Terminal : { 185 153 190 158 }*/
/* IO - VPL Root : { 206 153 211 158 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 28 240 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 122 232 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 111 122 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"setup page");
/* IO - VPL Terminal : { 101 149 106 154 }*/
/* IO - VPL Root : { 122 149 127 154 }*/
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

/* Start Operations: { 395 413 }{ 284 369 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 22 80 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"VPLInfo Page Description");
/* IO - VPL Terminal : { 59 99 64 104 }*/
/* IO - VPL Root : { 80 99 85 104 }*/
/* End Operation */

/* Begin Operation: { 106 74 122 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"FIlter NULLs");
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Root : { 122 116 127 121 }*/
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 89 80 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 106 85 111 }*/
/* IO - VPL Root : { 80 125 85 130 }*/
/* End Operation */

/* Begin Operation: { 106 123 122 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 101 159 106 164 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 116 148 121 }*/
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

/* Begin Operation: { 60 20 68 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 55 114 60 119 }*/
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

/* Begin Operation: { 148 86 164 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Data");
/* IO - VPL Terminal : { 143 99 148 104 }*/
/* IO - VPL Terminal : { 143 116 148 121 }*/
/* IO - VPL Root : { 164 108 169 113 }*/
/* End Operation */

/* Begin Operation: { 148 161 164 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 164 164 169 169 }*/
/* End Operation */

/* Begin Operation: { 190 114 206 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"List Index");
/* IO - VPL Terminal : { 185 138 190 143 }*/
/* IO - VPL Terminal : { 185 164 190 169 }*/
/* IO - VPL Root : { 206 151 211 156 }*/
/* End Operation */

/* Begin Operation: { 64 206 80 255 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Contents");
/* IO - VPL Root : { 80 228 85 233 }*/
/* End Operation */

/* Begin Operation: { 106 180 122 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Title");
/* IO - VPL Terminal : { 101 194 106 199 }*/
/* IO - VPL Terminal : { 101 210 106 215 }*/
/* IO - VPL Root : { 122 203 127 208 }*/
/* End Operation */

/* Begin Operation: { 106 246 122 337 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Find Result Data");
/* IO - VPL Root : { 122 289 127 294 }*/
/* End Operation */

/* Begin Operation: { 148 201 164 291 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Helper Name");
/* IO - VPL Terminal : { 143 229 148 234 }*/
/* IO - VPL Terminal : { 143 259 148 264 }*/
/* IO - VPL Root : { 164 244 169 249 }*/
/* End Operation */

/* Begin Operation: { 232 22 240 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 100 232 105 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,1,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
	result = connect_root_to_terminal(ptrA,1,1,1,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 148 85 164 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Display Page");
/* IO - VPL Terminal : { 143 116 148 121 }*/
/* IO - VPL Terminal : { 143 149 148 154 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 25 198 217 } */
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

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 663 945 }{ 379 377 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 18 81 103 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"section list");
/* IO - VPL Terminal : { 60 58 65 63 }*/
/* IO - VPL Root : { 81 58 86 63 }*/
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

/* Start Operations: { 519 223 }{ 320 330 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 59 80 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 194 80 265 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Section Data");
/* IO - VPL Root : { 80 227 85 232 }*/
/* End Operation */

/* Begin Operation: { 106 149 122 259 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 101 185 106 190 }*/
/* IO - VPL Terminal : { 101 227 106 232 }*/
/* IO - VPL Root : { 122 204 127 209 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 239 164 283 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 143 259 148 264 }*/
/* IO - VPL Root : { 164 251 169 256 }*/
/* IO - VPL Root : { 164 265 169 270 }*/
/* End Operation */

/* Begin Operation: { 190 22 206 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Find Result Data");
/* IO - VPL Terminal : { 185 75 190 80 }*/
/* IO - VPL Root : { 206 75 211 80 }*/
/* End Operation */

/* Begin Operation: { 190 169 206 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Sections");
/* IO - VPL Root : { 206 191 211 196 }*/
/* End Operation */

/* Begin Operation: { 232 153 248 281 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Setup Results List");
/* IO - VPL Terminal : { 227 162 232 167 }*/
/* IO - VPL Terminal : { 227 191 232 196 }*/
/* IO - VPL Terminal : { 227 227 232 232 }*/
/* IO - VPL Terminal : { 227 265 232 270 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 27 282 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 269 121 274 126 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,2,3,7);
	result = connect_root_to_terminal(ptrA,2,4,4,7);
	result = connect_root_to_terminal(ptrA,1,5,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 65 117 81 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"classes list");
/* IO - VPL Terminal : { 60 157 65 162 }*/
/* IO - VPL Root : { 81 157 86 162 }*/
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

/* Start Operations: { 60 60 }{ 320 330 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 59 80 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 199 206 260 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Class Data");
/* IO - VPL Root : { 206 227 211 232 }*/
/* End Operation */

/* Begin Operation: { 106 211 122 305 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Classes");
/* IO - VPL Terminal : { 101 260 106 265 }*/
/* IO - VPL Root : { 122 260 127 265 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 234 164 290 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 143 260 148 265 }*/
/* IO - VPL Root : { 164 250 169 255 }*/
/* IO - VPL Root : { 164 268 169 273 }*/
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,2,iList);
/* End Operation */

/* Begin Operation: { 148 22 164 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Find Result Data");
/* IO - VPL Terminal : { 143 75 148 80 }*/
/* IO - VPL Root : { 164 75 169 80 }*/
/* End Operation */

/* Begin Operation: { 148 171 164 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Classes");
/* IO - VPL Root : { 164 191 169 196 }*/
/* End Operation */

/* Begin Operation: { 232 153 248 281 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Setup Results List");
/* IO - VPL Terminal : { 227 162 232 167 }*/
/* IO - VPL Terminal : { 227 191 232 196 }*/
/* IO - VPL Terminal : { 227 227 232 232 }*/
/* IO - VPL Terminal : { 227 268 232 273 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,2,3,7);
	result = connect_root_to_terminal(ptrA,2,4,4,7);
	result = connect_root_to_terminal(ptrA,1,5,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 65 229 81 298 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"unis list");
/* IO - VPL Terminal : { 60 261 65 266 }*/
/* IO - VPL Root : { 81 261 86 266 }*/
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

/* Start Operations: { 275 72 }{ 320 330 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 59 80 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 184 206 267 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Universal Data");
/* IO - VPL Root : { 206 223 211 228 }*/
/* End Operation */

/* Begin Operation: { 106 207 122 317 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Universals");
/* IO - VPL Terminal : { 101 260 106 265 }*/
/* IO - VPL Root : { 122 260 127 265 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 234 164 290 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 143 260 148 265 }*/
/* IO - VPL Root : { 164 250 169 255 }*/
/* IO - VPL Root : { 164 268 169 273 }*/
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,2,iList);
/* End Operation */

/* Begin Operation: { 148 22 164 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Find Result Data");
/* IO - VPL Terminal : { 143 75 148 80 }*/
/* IO - VPL Root : { 164 75 169 80 }*/
/* End Operation */

/* Begin Operation: { 148 148 164 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Universals");
/* IO - VPL Root : { 164 176 169 181 }*/
/* End Operation */

/* Begin Operation: { 232 153 248 281 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Setup Results List");
/* IO - VPL Terminal : { 227 162 232 167 }*/
/* IO - VPL Terminal : { 227 176 232 181 }*/
/* IO - VPL Terminal : { 227 223 232 228 }*/
/* IO - VPL Terminal : { 227 268 232 273 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,2,3,7);
	result = connect_root_to_terminal(ptrA,2,4,4,7);
	result = connect_root_to_terminal(ptrA,1,5,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 105 153 121 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"pers list");
/* IO - VPL Terminal : { 100 185 105 190 }*/
/* IO - VPL Root : { 121 185 126 190 }*/
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

/* Start Operations: { 275 72 }{ 320 330 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 59 80 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 182 206 269 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Persistent Data");
/* IO - VPL Root : { 206 223 211 228 }*/
/* End Operation */

/* Begin Operation: { 106 205 122 319 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Persistents");
/* IO - VPL Terminal : { 101 260 106 265 }*/
/* IO - VPL Root : { 122 260 127 265 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 234 164 290 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 143 260 148 265 }*/
/* IO - VPL Root : { 164 250 169 255 }*/
/* IO - VPL Root : { 164 268 169 273 }*/
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,2,iList);
/* End Operation */

/* Begin Operation: { 148 22 164 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Find Result Data");
/* IO - VPL Terminal : { 143 75 148 80 }*/
/* IO - VPL Root : { 164 75 169 80 }*/
/* End Operation */

/* Begin Operation: { 148 146 164 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Persistents");
/* IO - VPL Root : { 164 176 169 181 }*/
/* End Operation */

/* Begin Operation: { 232 153 248 281 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Setup Results List");
/* IO - VPL Terminal : { 227 162 232 167 }*/
/* IO - VPL Terminal : { 227 176 232 181 }*/
/* IO - VPL Terminal : { 227 223 232 228 }*/
/* IO - VPL Terminal : { 227 268 232 273 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,2,3,7);
	result = connect_root_to_terminal(ptrA,2,4,4,7);
	result = connect_root_to_terminal(ptrA,1,5,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 148 255 164 336 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Errors list");
/* IO - VPL Terminal : { 143 293 148 298 }*/
/* IO - VPL Root : { 164 293 169 298 }*/
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

/* Start Operations: { 275 72 }{ 320 330 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 59 80 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 171 164 280 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Documentation Data");
/* IO - VPL Root : { 164 223 169 228 }*/
/* End Operation */

/* Begin Operation: { 106 22 122 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Find Result Data");
/* IO - VPL Terminal : { 101 75 106 80 }*/
/* IO - VPL Root : { 122 75 127 80 }*/
/* End Operation */

/* Begin Operation: { 106 152 122 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Messages");
/* IO - VPL Root : { 122 176 127 181 }*/
/* End Operation */

/* Begin Operation: { 106 262 122 279 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
/* IO - VPL Root : { 122 268 127 273 }*/
/* End Operation */

/* Begin Operation: { 190 153 206 281 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Setup Results List");
/* IO - VPL Terminal : { 185 162 190 167 }*/
/* IO - VPL Terminal : { 185 176 190 181 }*/
/* IO - VPL Terminal : { 185 223 190 228 }*/
/* IO - VPL Terminal : { 185 268 190 273 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 26 240 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 120 232 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,1,4,2,6);
	result = connect_root_to_terminal(ptrA,1,2,3,6);
	result = connect_root_to_terminal(ptrA,1,5,4,6);
	result = connect_root_to_terminal(ptrA,1,3,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 132 56 148 123 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"libs list");
/* IO - VPL Terminal : { 127 87 132 92 }*/
/* IO - VPL Root : { 148 87 153 92 }*/
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

/* Start Operations: { 590 377 }{ 320 330 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 59 80 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 185 80 274 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Primitives Data");
/* IO - VPL Root : { 80 227 85 232 }*/
/* End Operation */

/* Begin Operation: { 106 149 122 259 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 101 185 106 190 }*/
/* IO - VPL Terminal : { 101 227 106 232 }*/
/* IO - VPL Root : { 122 204 127 209 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 239 164 283 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 143 259 148 264 }*/
/* IO - VPL Root : { 164 251 169 256 }*/
/* IO - VPL Root : { 164 265 169 270 }*/
/* End Operation */

/* Begin Operation: { 190 22 206 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Find Result Data");
/* IO - VPL Terminal : { 185 75 190 80 }*/
/* IO - VPL Root : { 206 75 211 80 }*/
/* End Operation */

/* Begin Operation: { 190 167 206 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Libraries");
/* IO - VPL Root : { 206 191 211 196 }*/
/* End Operation */

/* Begin Operation: { 232 153 248 281 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Setup Results List");
/* IO - VPL Terminal : { 227 162 232 167 }*/
/* IO - VPL Terminal : { 227 191 232 196 }*/
/* IO - VPL Terminal : { 227 227 232 232 }*/
/* IO - VPL Terminal : { 227 265 232 270 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 27 282 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 269 121 274 126 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,2,3,7);
	result = connect_root_to_terminal(ptrA,2,4,4,7);
	result = connect_root_to_terminal(ptrA,1,5,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 145 159 161 240 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"breaks list");
/* IO - VPL Terminal : { 140 197 145 202 }*/
/* IO - VPL Root : { 161 197 166 202 }*/
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

/* Start Operations: { 275 72 }{ 320 330 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 59 80 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 184 206 267 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Operation Data");
/* IO - VPL Root : { 206 223 211 228 }*/
/* End Operation */

/* Begin Operation: { 106 194 122 330 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get All Breakpoints");
/* IO - VPL Terminal : { 101 260 106 265 }*/
/* IO - VPL Root : { 122 260 127 265 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 234 164 290 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 143 260 148 265 }*/
/* IO - VPL Root : { 164 250 169 255 }*/
/* IO - VPL Root : { 164 268 169 273 }*/
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,2,iList);
/* End Operation */

/* Begin Operation: { 148 22 164 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Find Result Data");
/* IO - VPL Terminal : { 143 75 148 80 }*/
/* IO - VPL Root : { 164 75 169 80 }*/
/* End Operation */

/* Begin Operation: { 148 145 164 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Breakpoints");
/* IO - VPL Root : { 164 176 169 181 }*/
/* End Operation */

/* Begin Operation: { 232 153 248 281 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Setup Results List");
/* IO - VPL Terminal : { 227 162 232 167 }*/
/* IO - VPL Terminal : { 227 176 232 181 }*/
/* IO - VPL Terminal : { 227 223 232 228 }*/
/* IO - VPL Terminal : { 227 268 232 273 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,2,3,7);
	result = connect_root_to_terminal(ptrA,2,4,4,7);
	result = connect_root_to_terminal(ptrA,1,5,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 203 128 219 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,7,1,"pack");
/* IO - VPL Terminal : { 198 124 203 129 }*/
/* IO - VPL Terminal : { 198 132 203 137 }*/
/* IO - VPL Terminal : { 198 139 203 144 }*/
/* IO - VPL Terminal : { 198 146 203 151 }*/
/* IO - VPL Terminal : { 198 154 203 159 }*/
/* IO - VPL Terminal : { 198 164 203 169 }*/
/* IO - VPL Terminal : { 198 174 203 179 }*/
/* IO - VPL Root : { 219 150 224 155 }*/
/* End Operation */

/* Begin Operation: { 240 140 256 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Find Result Data");
/* IO - VPL Root : { 256 183 261 188 }*/
/* End Operation */

/* Begin Operation: { 282 99 298 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Display List");
/* IO - VPL Terminal : { 277 116 282 121 }*/
/* IO - VPL Terminal : { 277 150 282 155 }*/
/* IO - VPL Terminal : { 277 183 282 188 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 324 26 332 218 } */
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
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,1,1,8);
	result = connect_root_to_terminal(ptrA,1,6,2,8);
	result = connect_root_to_terminal(ptrA,1,2,3,8);
	result = connect_root_to_terminal(ptrA,1,3,4,8);
	result = connect_root_to_terminal(ptrA,1,4,5,8);
	result = connect_root_to_terminal(ptrA,1,7,6,8);
	result = connect_root_to_terminal(ptrA,1,5,7,8);
	result = connect_root_to_terminal(ptrA,1,0,1,10);
	result = connect_root_to_terminal(ptrA,1,8,2,10);
	result = connect_root_to_terminal(ptrA,1,9,3,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLInfo_20_Window_2F_HIC_20_Classes_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_HIC_20_Classes_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 345 339 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 194 206 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 206 197 211 202 }*/
/* End Operation */

/* Begin Operation: { 190 117 206 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Class Data");
/* IO - VPL Root : { 206 145 211 150 }*/
/* End Operation */

/* Begin Operation: { 64 109 80 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 59 166 64 171 }*/
/* IO - VPL Root : { 80 166 85 171 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 117 122 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Classes");
/* IO - VPL Terminal : { 101 166 106 171 }*/
/* IO - VPL Root : { 122 166 127 171 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 140 164 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 143 166 148 171 }*/
/* IO - VPL Root : { 164 156 169 161 }*/
/* IO - VPL Root : { 164 174 169 179 }*/
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,2,iList);
/* End Operation */

/* Begin Operation: { 232 89 248 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Helper List");
/* IO - VPL Terminal : { 227 116 232 121 }*/
/* IO - VPL Terminal : { 227 145 232 150 }*/
/* IO - VPL Terminal : { 227 174 232 179 }*/
/* IO - VPL Terminal : { 227 197 232 202 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 26 282 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,2,2,6);
	result = connect_root_to_terminal(ptrA,2,5,3,6);
	result = connect_root_to_terminal(ptrA,1,1,4,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 461 436 }{ 415 338 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 98 75 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 54 156 59 161 }*/
/* IO - VPL Root : { 75 156 80 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 108 110 124 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Classes");
/* IO - VPL Terminal : { 103 156 108 161 }*/
/* IO - VPL Root : { 124 156 129 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 151 173 167 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 167 184 172 189 }*/
/* End Operation */

/* Begin Operation: { 191 132 207 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"First Pass");
/* IO - VPL Terminal : { 186 156 191 161 }*/
/* IO - VPL Terminal : { 186 184 191 189 }*/
/* IO - VPL Root : { 207 156 212 161 }*/
/* IO - VPL Root : { 207 184 212 189 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,2,iList);

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

/* Begin Operation: { 51 40 67 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Super Class");
/* IO - VPL Terminal : { 46 82 51 87 }*/
/* IO - VPL Root : { 67 67 72 72 }*/
/* IO - VPL Root : { 67 96 72 101 }*/
/* End Operation */

/* Begin Operation: { 84 128 100 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 79 136 84 141 }*/
/* IO - VPL Terminal : { 79 146 84 151 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 135 22 143 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 130 82 135 87 }*/
/* IO - VPL Terminal : { 130 148 135 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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
/* IO - VPL Terminal : { 55 82 60 87 }*/
/* IO - VPL Terminal : { 55 146 60 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,2,1);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 233 71 249 245 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Create Class Heirarchy List");
/* IO - VPL Terminal : { 228 156 233 161 }*/
/* IO - VPL Root : { 249 156 254 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 283 86 299 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set List View");
/* IO - VPL Terminal : { 278 114 283 119 }*/
/* IO - VPL Terminal : { 278 156 283 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 330 31 338 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLInfo_20_Window_2F_HIC_20_Search_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_HIC_20_Search_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 267 289 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 102 80 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Search Text");
/* IO - VPL Terminal : { 59 161 64 166 }*/
/* IO - VPL Root : { 80 161 85 166 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 103 124 119 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Text");
/* IO - VPL Terminal : { 98 161 103 166 }*/
/* IO - VPL Root : { 119 161 124 166 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 147 80 163 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Search For Text");
/* IO - VPL Terminal : { 142 114 147 119 }*/
/* IO - VPL Terminal : { 142 161 147 166 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 189 27 197 219 } */
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


Nat4 VPLU_VPLInfo_20_Window_2F_HIC_20_Search_20_Apple_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_HIC_20_Search_20_Apple_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 267 289 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 55 80 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Search Text");
/* IO - VPL Terminal : { 59 114 64 119 }*/
/* IO - VPL Root : { 80 114 85 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 103 77 119 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Text");
/* IO - VPL Terminal : { 98 114 103 119 }*/
/* IO - VPL Root : { 119 114 124 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 147 46 163 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"URL Search Apple Dev");
/* IO - VPL Terminal : { 142 114 147 119 }*/
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

/* Start Operations: { 60 60 }{ 387 387 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 39 206 97 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"CF URL");
/* IO - VPL Terminal : { 185 66 190 71 }*/
/* IO - VPL Root : { 206 66 211 71 }*/
/* End Operation */

/* Begin Operation: { 98 42 114 316 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"http://developer.apple.com/cgi-bin/search.pl?q=");
/* IO - VPL Root : { 114 177 119 182 }*/
/* End Operation */

/* Begin Operation: { 145 82 161 349 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"&num=10&ie=utf8&oe=utf8&lr=lang_en&simp=1");
/* IO - VPL Root : { 161 213 166 218 }*/
/* End Operation */

/* Begin Operation: { 53 165 69 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Trim\"");
/* IO - VPL Terminal : { 48 194 53 199 }*/
/* IO - VPL Root : { 69 194 74 199 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 169 206 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 185 177 190 182 }*/
/* IO - VPL Terminal : { 185 194 190 199 }*/
/* IO - VPL Terminal : { 185 213 190 218 }*/
/* IO - VPL Root : { 206 194 211 199 }*/
/* End Operation */

/* Begin Operation: { 238 128 254 258 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create With String");
/* IO - VPL Terminal : { 233 155 238 160 }*/
/* IO - VPL Terminal : { 233 194 238 199 }*/
/* IO - VPL Terminal : { 233 235 238 240 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 238 24 254 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/LS Open URL");
/* IO - VPL Terminal : { 233 66 238 71 }*/
/* IO - VPL Root : { 254 67 259 72 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 276 86 292 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 271 120 276 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 317 24 325 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,3,3,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,1,1,7);
	result = connect_root_to_terminal(ptrA,1,1,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 189 27 197 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
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


Nat4 VPLU_VPLInfo_20_Window_2F_Find_20_Search_20_Text_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_Find_20_Search_20_Text_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 111 33 116 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 50 138 66 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( \'INFO\' 1 )");
/* IO - VPL Root : { 66 168 71 173 }*/
/* End Operation */

/* Begin Operation: { 95 85 111 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Control");
/* IO - VPL Terminal : { 90 111 95 116 }*/
/* IO - VPL Terminal : { 90 149 95 154 }*/
/* IO - VPL Root : { 111 129 116 134 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 138 21 146 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 133 111 138 116 }*/
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
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 73 6 89 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"HISearch Field Control");
/* IO - VPL Terminal : { 68 76 73 81 }*/
/* IO - VPL Root : { 89 76 94 81 }*/
/* End Operation */

/* Begin Operation: { 74 189 90 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( \'INFO\' 1 )");
/* IO - VPL Root : { 90 219 95 224 }*/
/* End Operation */

/* Begin Operation: { 117 59 133 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create From ID");
/* IO - VPL Terminal : { 112 76 117 81 }*/
/* IO - VPL Terminal : { 112 114 117 119 }*/
/* IO - VPL Terminal : { 112 155 117 160 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 160 21 168 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 155 115 160 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
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

/* Begin Operation: { 56 102 72 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 72 113 77 118 }*/
/* End Operation */

/* Begin Operation: { 101 19 109 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 96 113 101 118 }*/
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


Nat4 VPLU_VPLInfo_20_Window_2F_Set_20_Search_20_Text_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_Set_20_Search_20_Text_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 78 33 83 }*/
/* IO - VPL Root : { 28 149 33 154 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 19 78 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Search Text");
/* IO - VPL Terminal : { 57 78 62 83 }*/
/* IO - VPL Root : { 78 78 83 83 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 111 100 127 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Text");
/* IO - VPL Terminal : { 106 121 111 126 }*/
/* IO - VPL Terminal : { 106 149 111 154 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 151 22 159 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLInfo_20_Window_2F_Get_20_Search_20_Text_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_Get_20_Search_20_Text_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 62 60 78 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Search Text");
/* IO - VPL Terminal : { 57 119 62 124 }*/
/* IO - VPL Root : { 78 119 83 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 107 80 123 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Text");
/* IO - VPL Terminal : { 102 119 107 124 }*/
/* IO - VPL Root : { 123 119 128 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 151 21 159 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 146 119 151 124 }*/
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

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 61 109 77 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"");
/* IO - VPL Root : { 77 114 82 119 }*/
/* End Operation */

/* Begin Operation: { 106 20 114 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 101 114 106 119 }*/
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


Nat4 VPLU_VPLInfo_20_Window_2F_Get_20_Project_20_Data_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_Get_20_Project_20_Data_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 54 78 70 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 49 108 54 113 }*/
/* IO - VPL Root : { 70 97 75 102 }*/
/* IO - VPL Root : { 70 118 75 123 }*/
/* End Operation */

/* Begin Operation: { 100 21 108 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 95 108 100 113 }*/
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


Nat4 VPLU_VPLInfo_20_Window_2F_Get_20_Method_20_Data_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_Get_20_Method_20_Data_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 61 101 77 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 77 112 82 117 }*/
/* End Operation */

/* Begin Operation: { 106 20 114 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 101 112 106 117 }*/
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


Nat4 VPLU_VPLInfo_20_Window_2F_Display_20_Page_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_Display_20_Page_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 593 736 }{ 215 298 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 81 35 86 }*/
/* IO - VPL Root : { 30 154 35 159 }*/
/* IO - VPL Root : { 31 185 36 190 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 22 80 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Push Cache");
/* IO - VPL Terminal : { 59 47 64 52 }*/
/* IO - VPL Terminal : { 59 68 64 73 }*/
/* IO - VPL Terminal : { 58 89 63 94 }*/
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

/* Start Operations: { 429 519 }{ 353 303 } */
/* Begin Operation: { 36 50 44 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 96 50 101 }*/
/* IO - VPL Root : { 45 144 50 149 }*/
/* IO - VPL Root : { 45 192 50 197 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 176 95 248 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"integer?");
/* IO - VPL Terminal : { 72 210 77 215 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 36 95 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Data Cache Index");
/* IO - VPL Terminal : { 72 96 77 101 }*/
/* IO - VPL Root : { 96 75 101 80 }*/
/* IO - VPL Root : { 96 116 101 121 }*/
/* End Operation */

/* Begin Operation: { 120 36 137 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Data Cache");
/* IO - VPL Terminal : { 114 79 119 84 }*/
/* IO - VPL Root : { 138 64 143 69 }*/
/* IO - VPL Root : { 138 94 143 99 }*/
/* End Operation */

/* Begin Operation: { 120 166 137 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 114 178 119 183 }*/
/* IO - VPL Terminal : { 114 192 119 197 }*/
/* IO - VPL Root : { 138 186 143 191 }*/
/* End Operation */

/* Begin Operation: { 162 70 179 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Safe Get)");
/* IO - VPL Terminal : { 156 94 161 99 }*/
/* IO - VPL Terminal : { 156 120 161 125 }*/
/* IO - VPL Root : { 180 108 185 113 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 204 118 221 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 198 130 203 135 }*/
/* IO - VPL Terminal : { 198 144 203 149 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 246 36 263 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Data Cache Index");
/* IO - VPL Terminal : { 240 75 245 80 }*/
/* IO - VPL Terminal : { 240 116 245 121 }*/
/* IO - VPL Root : { 264 96 269 101 }*/
/* End Operation */

/* Begin Operation: { 288 36 296 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
	result = connect_root_to_terminal(ptrA,2,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,2,0,2,6);
	result = connect_root_to_terminal(ptrA,1,3,1,7);
	result = connect_root_to_terminal(ptrA,1,4,2,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 414 455 }{ 353 303 } */
/* Begin Operation: { 36 39 44 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 85 50 90 }*/
/* IO - VPL Root : { 45 133 50 138 }*/
/* IO - VPL Root : { 45 181 50 186 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 212 95 248 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 72 228 77 233 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 39 95 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Data Cache Index");
/* IO - VPL Terminal : { 72 99 77 104 }*/
/* IO - VPL Root : { 96 78 101 83 }*/
/* IO - VPL Root : { 96 119 101 124 }*/
/* End Operation */

/* Begin Operation: { 120 39 137 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Data Cache");
/* IO - VPL Terminal : { 114 82 119 87 }*/
/* IO - VPL Root : { 138 67 143 72 }*/
/* IO - VPL Root : { 138 97 143 102 }*/
/* End Operation */

/* Begin Operation: { 120 153 137 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 114 173 119 178 }*/
/* IO - VPL Root : { 138 173 143 178 }*/
/* End Operation */

/* Begin Operation: { 162 150 179 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Safe Get)");
/* IO - VPL Terminal : { 156 174 161 179 }*/
/* IO - VPL Terminal : { 156 200 161 205 }*/
/* IO - VPL Root : { 180 188 185 193 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 204 176 221 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 198 188 203 193 }*/
/* IO - VPL Terminal : { 198 202 203 207 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 204 36 221 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Data Cache Index");
/* IO - VPL Terminal : { 198 75 203 80 }*/
/* IO - VPL Terminal : { 198 116 203 121 }*/
/* IO - VPL Root : { 222 96 227 101 }*/
/* End Operation */

/* Begin Operation: { 246 39 254 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,1,4);
	result = connect_root_to_terminal(ptrA,2,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,2,0,2,6);
	result = connect_root_to_terminal(ptrA,1,3,1,7);
	result = connect_root_to_terminal(ptrA,1,4,2,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 429 519 }{ 292 290 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 31 68 36 73 }*/
/* IO - VPL Root : { 31 116 36 121 }*/
/* IO - VPL Root : { 31 164 36 169 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 29 80 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Data Cache Index");
/* IO - VPL Terminal : { 59 84 64 89 }*/
/* IO - VPL Root : { 80 64 85 69 }*/
/* IO - VPL Root : { 80 103 85 108 }*/
/* End Operation */

/* Begin Operation: { 106 25 122 107 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Data Cache");
/* IO - VPL Terminal : { 101 64 106 69 }*/
/* IO - VPL Root : { 122 50 127 55 }*/
/* IO - VPL Root : { 122 77 127 82 }*/
/* End Operation */

/* Begin Operation: { 148 53 164 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Safe Get)");
/* IO - VPL Terminal : { 143 77 148 82 }*/
/* IO - VPL Terminal : { 143 103 148 108 }*/
/* IO - VPL Root : { 164 91 169 96 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 190 130 206 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 185 138 190 143 }*/
/* IO - VPL Terminal : { 185 148 190 153 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 232 22 240 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,2,1,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 429 519 }{ 389 301 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 31 68 36 73 }*/
/* IO - VPL Root : { 31 116 36 121 }*/
/* IO - VPL Root : { 31 164 36 169 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 133 45 149 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Data Cache");
/* IO - VPL Terminal : { 128 84 133 89 }*/
/* IO - VPL Root : { 149 70 154 75 }*/
/* IO - VPL Root : { 149 97 154 102 }*/
/* End Operation */

/* Begin Operation: { 84 47 100 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Data Cache Index");
/* IO - VPL Terminal : { 79 102 84 107 }*/
/* IO - VPL Root : { 100 83 105 88 }*/
/* IO - VPL Root : { 100 121 105 126 }*/
/* End Operation */

/* Begin Operation: { 176 75 192 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"split-nth");
/* IO - VPL Terminal : { 171 97 176 102 }*/
/* IO - VPL Terminal : { 171 121 176 126 }*/
/* IO - VPL Root : { 192 97 197 102 }*/
/* IO - VPL Root : { 192 121 197 126 }*/
/* End Operation */

/* Begin Operation: { 213 104 229 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 208 125 213 130 }*/
/* IO - VPL Terminal : { 208 148 213 153 }*/
/* IO - VPL Root : { 229 137 234 142 }*/
/* End Operation */

/* Begin Operation: { 255 45 271 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Data Cache");
/* IO - VPL Terminal : { 250 70 255 75 }*/
/* IO - VPL Terminal : { 250 97 255 102 }*/
/* IO - VPL Root : { 271 84 276 89 }*/
/* End Operation */

/* Begin Operation: { 255 143 271 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 250 174 255 179 }*/
/* IO - VPL Root : { 271 174 276 179 }*/
/* End Operation */

/* Begin Operation: { 297 70 313 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Data Cache Index");
/* IO - VPL Terminal : { 292 106 297 111 }*/
/* IO - VPL Terminal : { 292 144 297 149 }*/
/* IO - VPL Root : { 313 125 318 130 }*/
/* End Operation */

/* Begin Operation: { 339 25 347 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 3] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 64 134 80 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Current Page");
/* IO - VPL Terminal : { 59 163 64 168 }*/
/* IO - VPL Terminal : { 59 194 64 199 }*/
/* IO - VPL Root : { 80 179 85 184 }*/
/* End Operation */

/* Begin Operation: { 106 66 122 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Open Helper Data");
/* IO - VPL Terminal : { 101 91 106 96 }*/
/* IO - VPL Terminal : { 101 144 106 149 }*/
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

/* Start Operations: { 60 60 }{ 410 358 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 71 164 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"List Data");
/* IO - VPL Terminal : { 143 104 148 109 }*/
/* IO - VPL Root : { 164 104 169 109 }*/
/* End Operation */

/* Begin Operation: { 190 22 206 78 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"frame");
/* IO - VPL Terminal : { 185 39 190 44 }*/
/* IO - VPL Terminal : { 185 61 190 66 }*/
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

/* Begin Operation: { 54 56 70 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 49 82 54 87 }*/
/* IO - VPL Root : { 70 72 75 77 }*/
/* IO - VPL Root : { 70 90 75 95 }*/
/* End Operation */

/* Begin Operation: { 127 130 143 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 122 146 127 151 }*/
/* IO - VPL Terminal : { 122 164 127 169 }*/
/* IO - VPL Root : { 143 156 148 161 }*/
/* End Operation */

/* Begin Operation: { 159 19 167 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 64 88 80 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Data");
/* IO - VPL Terminal : { 59 110 64 115 }*/
/* IO - VPL Root : { 80 102 85 107 }*/
/* IO - VPL Root : { 80 118 85 123 }*/
/* End Operation */

/* Begin Operation: { 190 92 206 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"List");
/* IO - VPL Terminal : { 185 104 190 109 }*/
/* IO - VPL Terminal : { 185 118 190 123 }*/
/* IO - VPL Root : { 206 111 211 116 }*/
/* End Operation */

/* Begin Operation: { 106 105 122 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper Name");
/* IO - VPL Terminal : { 101 148 106 153 }*/
/* IO - VPL Root : { 122 133 127 138 }*/
/* IO - VPL Root : { 122 163 127 168 }*/
/* End Operation */

/* Begin Operation: { 232 84 248 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Helper Name");
/* IO - VPL Terminal : { 227 111 232 116 }*/
/* IO - VPL Terminal : { 227 140 232 145 }*/
/* IO - VPL Root : { 248 126 253 131 }*/
/* End Operation */

/* Begin Operation: { 274 165 290 265 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Change Target");
/* IO - VPL Terminal : { 269 196 274 201 }*/
/* IO - VPL Terminal : { 269 229 274 234 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 56 290 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Data");
/* IO - VPL Terminal : { 269 84 274 89 }*/
/* IO - VPL Terminal : { 269 114 274 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 247 164 258 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 164 250 169 255 }*/
/* End Operation */

/* Begin Operation: { 64 169 80 247 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List Index");
/* IO - VPL Terminal : { 59 206 64 211 }*/
/* IO - VPL Root : { 80 193 85 198 }*/
/* IO - VPL Root : { 80 219 85 224 }*/
/* End Operation */

/* Begin Operation: { 190 190 206 284 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Replace NULL");
/* IO - VPL Terminal : { 185 219 190 224 }*/
/* IO - VPL Terminal : { 185 250 190 255 }*/
/* IO - VPL Root : { 206 239 211 244 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 189 248 267 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"List Index");
/* IO - VPL Terminal : { 227 213 232 218 }*/
/* IO - VPL Terminal : { 227 239 232 244 }*/
/* IO - VPL Root : { 248 226 253 231 }*/
/* End Operation */

/* Begin Operation: { 316 49 332 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Refresh");
/* IO - VPL Terminal : { 311 84 316 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 358 22 366 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
	result = connect_root_to_terminal(ptrA,2,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,2,5,2,6);
	result = connect_root_to_terminal(ptrA,1,0,1,8);
	result = connect_root_to_terminal(ptrA,1,6,2,8);
	result = connect_root_to_terminal(ptrA,2,0,1,10);
	result = connect_root_to_terminal(ptrA,2,10,1,11);
	result = connect_root_to_terminal(ptrA,1,9,2,11);
	result = connect_root_to_terminal(ptrA,1,0,1,12);
	result = connect_root_to_terminal(ptrA,1,11,2,12);
	result = connect_root_to_terminal(ptrA,1,0,1,13);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 2] */
/* Synchro [8 to 7] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,3,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLInfo_20_Window_2F_Display_20_Text_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_Display_20_Text_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 231 807 }{ 333 314 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 82 50 87 }*/
/* IO - VPL Root : { 45 130 50 135 }*/
/* IO - VPL Root : { 45 180 50 185 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 114 95 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"construct data");
/* IO - VPL Terminal : { 72 146 77 151 }*/
/* IO - VPL Terminal : { 72 180 77 185 }*/
/* IO - VPL Root : { 96 163 101 168 }*/
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

/* Start Operations: { 60 60 }{ 290 295 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 31 80 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Documentation Data");
/* IO - VPL Terminal : { 59 93 64 98 }*/
/* IO - VPL Root : { 80 93 85 98 }*/
/* End Operation */

/* Begin Operation: { 106 88 122 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Name");
/* IO - VPL Terminal : { 101 103 106 108 }*/
/* IO - VPL Terminal : { 101 120 106 125 }*/
/* IO - VPL Root : { 122 112 127 117 }*/
/* End Operation */

/* Begin Operation: { 64 194 80 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"form");
/* IO - VPL Terminal : { 59 205 64 210 }*/
/* IO - VPL Terminal : { 59 228 64 233 }*/
/* IO - VPL Root : { 80 218 85 223 }*/
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

/* Start Operations: { 60 60 }{ 317 323 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 93 161 109 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\n");
/* IO - VPL Root : { 109 164 114 169 }*/
/* End Operation */

/* Begin Operation: { 49 77 65 92 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"");
/* IO - VPL Root : { 65 82 70 87 }*/
/* End Operation */

/* Begin Operation: { 55 126 71 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Check)");
/* IO - VPL Terminal : { 50 156 55 161 }*/
/* IO - VPL Root : { 71 156 76 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 94 62 110 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"attach-l");
/* IO - VPL Terminal : { 89 69 94 74 }*/
/* IO - VPL Terminal : { 89 82 94 87 }*/
/* IO - VPL Terminal : { 89 104 94 109 }*/
/* IO - VPL Root : { 110 94 115 99 }*/
/* End Operation */

/* Begin Operation: { 138 68 154 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(To String)");
/* IO - VPL Terminal : { 133 94 138 99 }*/
/* IO - VPL Terminal : { 133 122 138 127 }*/
/* IO - VPL Root : { 154 108 159 113 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 191 19 199 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 186 113 191 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,1,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 167 122 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Text");
/* IO - VPL Terminal : { 101 181 106 186 }*/
/* IO - VPL Terminal : { 101 197 106 202 }*/
/* IO - VPL Root : { 122 189 127 194 }*/
/* End Operation */

/* Begin Operation: { 148 30 164 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Item Data");
/* IO - VPL Terminal : { 143 66 148 71 }*/
/* IO - VPL Root : { 164 66 169 71 }*/
/* End Operation */

/* Begin Operation: { 190 22 206 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Helper");
/* IO - VPL Terminal : { 185 51 190 56 }*/
/* IO - VPL Terminal : { 185 102 190 107 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 158 206 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 185 177 190 182 }*/
/* IO - VPL Terminal : { 185 197 190 202 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 22 240 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 116 232 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,1,2,6);
	result = connect_root_to_terminal(ptrA,1,1,1,7);
	result = connect_root_to_terminal(ptrA,1,5,2,7);
	result = connect_root_to_terminal(ptrA,1,5,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 139 137 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 114 163 119 168 }*/
/* IO - VPL Root : { 138 163 143 168 }*/
/* End Operation */

/* Begin Operation: { 162 99 179 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"describe page");
/* IO - VPL Terminal : { 156 130 161 135 }*/
/* IO - VPL Terminal : { 156 163 161 168 }*/
/* IO - VPL Root : { 180 147 185 152 }*/
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

/* Start Operations: { 60 60 }{ 297 468 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 84 164 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Documentation Data");
/* IO - VPL Root : { 164 136 169 141 }*/
/* End Operation */

/* Begin Operation: { 64 29 80 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"VPLInfo Page Description");
/* IO - VPL Terminal : { 59 106 64 111 }*/
/* IO - VPL Root : { 80 106 85 111 }*/
/* End Operation */

/* Begin Operation: { 106 92 122 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Title");
/* IO - VPL Terminal : { 101 106 106 111 }*/
/* IO - VPL Terminal : { 101 122 106 127 }*/
/* IO - VPL Root : { 122 115 127 120 }*/
/* End Operation */

/* Begin Operation: { 64 203 80 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 80 218 85 223 }*/
/* End Operation */

/* Begin Operation: { 106 174 122 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Topical?");
/* IO - VPL Terminal : { 101 195 106 200 }*/
/* IO - VPL Terminal : { 101 218 106 223 }*/
/* IO - VPL Root : { 122 207 127 212 }*/
/* End Operation */

/* Begin Operation: { 190 78 206 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Helper Name");
/* IO - VPL Terminal : { 185 106 190 111 }*/
/* IO - VPL Terminal : { 185 136 190 141 }*/
/* IO - VPL Root : { 206 121 211 126 }*/
/* End Operation */

/* Begin Operation: { 190 208 206 256 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Data");
/* IO - VPL Terminal : { 185 222 190 227 }*/
/* IO - VPL Terminal : { 185 238 190 243 }*/
/* IO - VPL Root : { 206 230 211 235 }*/
/* End Operation */

/* Begin Operation: { 64 323 80 352 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 80 335 85 340 }*/
/* End Operation */

/* Begin Operation: { 106 267 122 373 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Standard Text?");
/* IO - VPL Terminal : { 101 300 106 305 }*/
/* IO - VPL Terminal : { 101 335 106 340 }*/
/* IO - VPL Root : { 122 318 127 323 }*/
/* End Operation */

/* Begin Operation: { 232 26 240 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 120 232 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,2,1,6);
	result = connect_root_to_terminal(ptrA,1,1,2,6);
	result = connect_root_to_terminal(ptrA,1,2,1,7);
	result = connect_root_to_terminal(ptrA,2,0,2,7);
	result = connect_root_to_terminal(ptrA,1,2,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
	result = connect_root_to_terminal(ptrA,1,2,1,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 204 116 221 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 222 134 227 139 }*/
/* End Operation */

/* Begin Operation: { 246 58 263 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Display Page");
/* IO - VPL Terminal : { 240 82 245 87 }*/
/* IO - VPL Terminal : { 240 108 245 113 }*/
/* IO - VPL Terminal : { 240 134 245 139 }*/
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
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,3,2,5);
	result = connect_root_to_terminal(ptrA,1,4,3,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 231 807 }{ 296 301 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 65 35 70 }*/
/* IO - VPL Root : { 30 122 35 127 }*/
/* IO - VPL Root : { 30 186 35 191 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 43 122 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Documentation Data");
/* IO - VPL Root : { 122 95 127 100 }*/
/* End Operation */

/* Begin Operation: { 64 122 80 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"construct data");
/* IO - VPL Terminal : { 59 153 64 158 }*/
/* IO - VPL Terminal : { 59 186 64 191 }*/
/* IO - VPL Root : { 80 170 85 175 }*/
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

/* Start Operations: { 60 60 }{ 290 295 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 31 80 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Documentation Data");
/* IO - VPL Terminal : { 59 93 64 98 }*/
/* IO - VPL Root : { 80 93 85 98 }*/
/* End Operation */

/* Begin Operation: { 106 88 122 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Name");
/* IO - VPL Terminal : { 101 103 106 108 }*/
/* IO - VPL Terminal : { 101 120 106 125 }*/
/* IO - VPL Root : { 122 112 127 117 }*/
/* End Operation */

/* Begin Operation: { 64 194 80 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"form");
/* IO - VPL Terminal : { 59 205 64 210 }*/
/* IO - VPL Terminal : { 59 228 64 233 }*/
/* IO - VPL Root : { 80 218 85 223 }*/
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

/* Start Operations: { 60 60 }{ 317 323 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 93 161 109 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\n");
/* IO - VPL Root : { 109 164 114 169 }*/
/* End Operation */

/* Begin Operation: { 49 77 65 92 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"");
/* IO - VPL Root : { 65 82 70 87 }*/
/* End Operation */

/* Begin Operation: { 55 126 71 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Check)");
/* IO - VPL Terminal : { 50 156 55 161 }*/
/* IO - VPL Root : { 71 156 76 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 94 62 110 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"attach-l");
/* IO - VPL Terminal : { 89 69 94 74 }*/
/* IO - VPL Terminal : { 89 82 94 87 }*/
/* IO - VPL Terminal : { 89 104 94 109 }*/
/* IO - VPL Root : { 110 94 115 99 }*/
/* End Operation */

/* Begin Operation: { 138 68 154 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(To String)");
/* IO - VPL Terminal : { 133 94 138 99 }*/
/* IO - VPL Terminal : { 133 122 138 127 }*/
/* IO - VPL Root : { 154 108 159 113 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 191 19 199 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 186 113 191 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,1,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 167 122 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Text");
/* IO - VPL Terminal : { 101 181 106 186 }*/
/* IO - VPL Terminal : { 101 197 106 202 }*/
/* IO - VPL Root : { 122 189 127 194 }*/
/* End Operation */

/* Begin Operation: { 148 30 164 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Item Data");
/* IO - VPL Terminal : { 143 66 148 71 }*/
/* IO - VPL Root : { 164 66 169 71 }*/
/* End Operation */

/* Begin Operation: { 190 22 206 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Helper");
/* IO - VPL Terminal : { 185 51 190 56 }*/
/* IO - VPL Terminal : { 185 102 190 107 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 158 206 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 185 177 190 182 }*/
/* IO - VPL Terminal : { 185 197 190 202 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 22 240 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 116 232 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,1,2,6);
	result = connect_root_to_terminal(ptrA,1,1,1,7);
	result = connect_root_to_terminal(ptrA,1,5,2,7);
	result = connect_root_to_terminal(ptrA,1,5,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 148 148 164 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 143 170 148 175 }*/
/* IO - VPL Root : { 164 170 169 175 }*/
/* End Operation */

/* Begin Operation: { 190 52 206 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Helper List");
/* IO - VPL Terminal : { 185 65 190 70 }*/
/* IO - VPL Terminal : { 185 95 190 100 }*/
/* IO - VPL Terminal : { 185 127 190 132 }*/
/* IO - VPL Terminal : { 185 156 190 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 25 240 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLInfo_20_Window_2F_Display_20_List_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_Display_20_List_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 329 1139 }{ 291 358 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 54 35 59 }*/
/* IO - VPL Root : { 30 94 35 99 }*/
/* IO - VPL Root : { 30 145 35 150 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 88 80 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"FIlter NULLs");
/* IO - VPL Terminal : { 59 130 64 135 }*/
/* IO - VPL Root : { 80 130 85 135 }*/
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 89 80 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 106 85 111 }*/
/* IO - VPL Root : { 80 125 85 130 }*/
/* End Operation */

/* Begin Operation: { 106 123 122 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 101 159 106 164 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 116 148 121 }*/
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

/* Begin Operation: { 60 20 68 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 55 114 60 119 }*/
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

/* Begin Operation: { 106 225 122 246 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 101 233 106 238 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 106 41 122 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Helper List");
/* IO - VPL Terminal : { 101 54 106 59 }*/
/* IO - VPL Terminal : { 101 81 106 86 }*/
/* IO - VPL Terminal : { 101 113 106 118 }*/
/* IO - VPL Terminal : { 101 141 106 146 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 36 156 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,3,0,2,3);
	result = connect_root_to_terminal(ptrA,1,1,3,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 329 1139 }{ 248 263 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 58 35 63 }*/
/* IO - VPL Root : { 30 96 35 101 }*/
/* IO - VPL Root : { 30 134 35 139 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 79 80 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"No matches found.");
/* IO - VPL Root : { 80 127 85 132 }*/
/* End Operation */

/* Begin Operation: { 106 43 122 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Display Text");
/* IO - VPL Terminal : { 101 58 106 63 }*/
/* IO - VPL Terminal : { 101 93 106 98 }*/
/* IO - VPL Terminal : { 101 127 106 132 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLInfo_20_Window_2F_Open_20_Helper_20_List_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_Open_20_Helper_20_List_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 384 236 }{ 263 315 } */
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

/* Begin Operation: { 78 108 95 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"setup page");
/* IO - VPL Terminal : { 72 127 77 132 }*/
/* IO - VPL Terminal : { 72 148 77 153 }*/
/* IO - VPL Terminal : { 72 169 77 174 }*/
/* IO - VPL Root : { 96 148 101 153 }*/
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

/* Start Operations: { 60 60 }{ 318 325 } */
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

/* Begin Operation: { 64 22 80 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"VPLInfo Page Description");
/* IO - VPL Terminal : { 59 99 64 104 }*/
/* IO - VPL Root : { 80 99 85 104 }*/
/* End Operation */

/* Begin Operation: { 106 22 122 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Helper Name");
/* IO - VPL Terminal : { 101 50 106 55 }*/
/* IO - VPL Terminal : { 101 80 106 85 }*/
/* IO - VPL Root : { 122 65 127 70 }*/
/* End Operation */

/* Begin Operation: { 148 86 164 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Data");
/* IO - VPL Terminal : { 143 100 148 105 }*/
/* IO - VPL Terminal : { 143 116 148 121 }*/
/* IO - VPL Root : { 164 108 169 113 }*/
/* End Operation */

/* Begin Operation: { 190 114 206 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"List Index");
/* IO - VPL Terminal : { 185 138 190 143 }*/
/* IO - VPL Terminal : { 185 164 190 169 }*/
/* IO - VPL Root : { 206 151 211 156 }*/
/* End Operation */

/* Begin Operation: { 190 208 206 245 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 206 224 211 229 }*/
/* End Operation */

/* Begin Operation: { 232 162 248 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Topical?");
/* IO - VPL Terminal : { 227 183 232 188 }*/
/* IO - VPL Terminal : { 227 206 232 211 }*/
/* IO - VPL Root : { 248 195 253 200 }*/
/* End Operation */

/* Begin Operation: { 64 200 80 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 80 212 85 217 }*/
/* End Operation */

/* Begin Operation: { 106 146 122 248 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Standard List?");
/* IO - VPL Terminal : { 101 178 106 183 }*/
/* IO - VPL Terminal : { 101 212 106 217 }*/
/* IO - VPL Root : { 122 195 127 200 }*/
/* End Operation */

/* Begin Operation: { 274 22 282 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 269 116 274 121 }*/
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
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,1,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,1,1,1,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 106 137 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 138 124 143 129 }*/
/* End Operation */

/* Begin Operation: { 162 48 179 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Display Page");
/* IO - VPL Terminal : { 156 72 161 77 }*/
/* IO - VPL Terminal : { 156 98 161 103 }*/
/* IO - VPL Terminal : { 156 124 161 129 }*/
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
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,2,1);
	result = connect_root_to_terminal(ptrA,4,0,3,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 435 248 }{ 328 351 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 58 35 63 }*/
/* IO - VPL Root : { 30 96 35 101 }*/
/* IO - VPL Root : { 30 134 35 139 }*/
/* IO - VPL Root : { 30 172 35 177 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 155 34 171 90 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Deep?");
/* IO - VPL Terminal : { 150 62 155 67 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 82 80 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Universal Data");
/* IO - VPL Terminal : { 59 121 64 126 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 106 74 122 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Case Data");
/* IO - VPL Terminal : { 101 99 106 104 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 106 166 122 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Class Data");
/* IO - VPL Terminal : { 101 194 106 199 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 148 28 156 220 } */
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 64 31 80 97 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 59 62 64 67 }*/
/* IO - VPL Root : { 80 62 85 67 }*/
/* End Operation */

/* Begin Operation: { 106 59 122 70 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"1");
/* IO - VPL Terminal : { 101 62 106 67 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 64 257 80 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 80 260 85 265 }*/
/* End Operation */

/* Begin Operation: { 106 200 122 294 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Replace NULL");
/* IO - VPL Terminal : { 101 229 106 234 }*/
/* IO - VPL Terminal : { 101 260 106 265 }*/
/* IO - VPL Root : { 122 245 127 250 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 126 80 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"unpack");
/* IO - VPL Terminal : { 59 154 64 159 }*/
/* IO - VPL Root : { 80 154 85 159 }*/
/* End Operation */

/* Begin Operation: { 106 131 122 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Lists");
/* IO - VPL Terminal : { 101 154 106 159 }*/
/* IO - VPL Root : { 122 145 127 150 }*/
/* IO - VPL Root : { 122 161 127 166 }*/
/* End Operation */

/* Begin Operation: { 148 137 164 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Safe Get)");
/* IO - VPL Terminal : { 143 161 148 166 }*/
/* IO - VPL Terminal : { 143 187 148 192 }*/
/* IO - VPL Root : { 164 175 169 180 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 211 130 227 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"deeper?");
/* IO - VPL Terminal : { 206 150 211 155 }*/
/* IO - VPL Terminal : { 206 172 211 177 }*/
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

/* Start Operations: { 137 194 }{ 223 360 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 64 80 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper Name");
/* IO - VPL Terminal : { 59 107 64 112 }*/
/* IO - VPL Root : { 80 92 85 97 }*/
/* IO - VPL Root : { 80 122 85 127 }*/
/* End Operation */

/* Begin Operation: { 64 173 80 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 59 193 64 198 }*/
/* IO - VPL Root : { 80 185 85 190 }*/
/* IO - VPL Root : { 80 199 85 204 }*/
/* End Operation */

/* Begin Operation: { 106 181 122 263 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Universal Data");
/* IO - VPL Terminal : { 101 220 106 225 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 146 173 162 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Case Data");
/* IO - VPL Terminal : { 141 198 146 203 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 110 27 126 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Helper List");
/* IO - VPL Terminal : { 105 48 110 53 }*/
/* IO - VPL Terminal : { 105 71 110 76 }*/
/* IO - VPL Terminal : { 105 94 110 99 }*/
/* IO - VPL Terminal : { 105 117 110 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 175 24 183 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,2,0,1,5);
	result = connect_root_to_terminal(ptrA,2,1,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 235 310 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 165 80 265 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Change Target");
/* IO - VPL Terminal : { 59 196 64 201 }*/
/* IO - VPL Terminal : { 59 229 64 234 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 26 80 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Data");
/* IO - VPL Terminal : { 59 54 64 59 }*/
/* IO - VPL Terminal : { 59 84 64 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 113 122 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Refresh");
/* IO - VPL Terminal : { 101 148 106 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 157 28 165 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 274 32 282 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,4,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,3,0,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,2,7,1,8);
	result = connect_root_to_terminal(ptrA,1,5,2,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,1,0,2,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 703 864 }{ 325 368 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 61 35 66 }*/
/* IO - VPL Root : { 30 120 35 125 }*/
/* IO - VPL Root : { 30 168 35 173 }*/
/* IO - VPL Root : { 30 199 35 204 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 51 80 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"List Data");
/* IO - VPL Terminal : { 59 84 64 89 }*/
/* IO - VPL Root : { 80 84 85 89 }*/
/* End Operation */

/* Begin Operation: { 104 10 120 66 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"frame");
/* IO - VPL Terminal : { 99 27 104 32 }*/
/* IO - VPL Terminal : { 99 49 104 54 }*/
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

/* Begin Operation: { 54 56 70 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 49 82 54 87 }*/
/* IO - VPL Root : { 70 72 75 77 }*/
/* IO - VPL Root : { 70 90 75 95 }*/
/* End Operation */

/* Begin Operation: { 127 130 143 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 122 146 127 151 }*/
/* IO - VPL Terminal : { 122 164 127 169 }*/
/* IO - VPL Root : { 143 156 148 161 }*/
/* End Operation */

/* Begin Operation: { 159 19 167 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 72 122 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"List");
/* IO - VPL Terminal : { 101 84 106 89 }*/
/* IO - VPL Terminal : { 101 98 106 103 }*/
/* IO - VPL Root : { 122 91 127 96 }*/
/* End Operation */

/* Begin Operation: { 148 64 164 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Helper Name");
/* IO - VPL Terminal : { 143 91 148 96 }*/
/* IO - VPL Terminal : { 143 120 148 125 }*/
/* IO - VPL Root : { 164 106 169 111 }*/
/* End Operation */

/* Begin Operation: { 190 145 206 245 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Change Target");
/* IO - VPL Terminal : { 185 176 190 181 }*/
/* IO - VPL Terminal : { 185 209 190 214 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 33 206 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Data");
/* IO - VPL Terminal : { 185 61 190 66 }*/
/* IO - VPL Terminal : { 185 91 190 96 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 227 80 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 80 230 85 235 }*/
/* End Operation */

/* Begin Operation: { 106 170 122 264 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Replace NULL");
/* IO - VPL Terminal : { 101 199 106 204 }*/
/* IO - VPL Terminal : { 101 230 106 235 }*/
/* IO - VPL Root : { 122 219 127 224 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 169 164 247 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"List Index");
/* IO - VPL Terminal : { 143 193 148 198 }*/
/* IO - VPL Terminal : { 143 219 148 224 }*/
/* IO - VPL Root : { 164 206 169 211 }*/
/* End Operation */

/* Begin Operation: { 232 26 248 98 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Refresh");
/* IO - VPL Terminal : { 227 61 232 66 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 32 282 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,3,0,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,4,2,6);
	result = connect_root_to_terminal(ptrA,4,0,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
	result = connect_root_to_terminal(ptrA,1,0,1,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* Synchro [6 to 5] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLInfo_20_Window_2F_Open_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_Open_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 737 481 }{ 402 525 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 73 35 78 }*/
/* IO - VPL Root : { 30 192 35 197 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 152 80 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 59 171 64 176 }*/
/* IO - VPL Terminal : { 59 192 64 197 }*/
/* IO - VPL Root : { 80 182 85 187 }*/
/* End Operation */

/* Begin Operation: { 64 44 80 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"VPLInfo View");
/* IO - VPL Terminal : { 59 89 64 94 }*/
/* IO - VPL Root : { 80 89 85 94 }*/
/* End Operation */

/* Begin Operation: { 106 59 122 109 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"View");
/* IO - VPL Terminal : { 101 73 106 78 }*/
/* IO - VPL Terminal : { 101 89 106 94 }*/
/* IO - VPL Root : { 122 82 127 87 }*/
/* End Operation */

/* Begin Operation: { 112 155 128 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Size");
/* IO - VPL Terminal : { 107 190 112 195 }*/
/* IO - VPL Root : { 128 190 133 195 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 111 244 127 320 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Size");
/* IO - VPL Terminal : { 106 279 111 284 }*/
/* IO - VPL Root : { 127 279 132 284 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 156 202 172 304 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Subtract Point");
/* IO - VPL Terminal : { 151 234 156 239 }*/
/* IO - VPL Terminal : { 151 268 156 273 }*/
/* IO - VPL Root : { 172 251 177 256 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 237 171 253 237 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Resize");
/* IO - VPL Terminal : { 232 191 237 196 }*/
/* IO - VPL Terminal : { 232 213 237 218 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 193 94 209 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 209 105 214 110 }*/
/* End Operation */

/* Begin Operation: { 235 64 251 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Open");
/* IO - VPL Terminal : { 230 82 235 87 }*/
/* IO - VPL Terminal : { 230 105 235 110 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 289 90 305 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Focus Search Text");
/* IO - VPL Terminal : { 284 152 289 157 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 330 23 338 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,2,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,3,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
	result = connect_root_to_terminal(ptrA,1,0,1,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLInfo_20_Window_2F_Open_20_Once_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_Open_20_Once_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 152 346 }{ 252 307 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 71 33 76 }*/
/* IO - VPL Root : { 28 157 33 162 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 28 69 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Desktop");
/* IO - VPL Root : { 69 70 74 75 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 96 33 112 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Windows Type");
/* IO - VPL Terminal : { 91 70 96 75 }*/
/* IO - VPL Terminal : { 91 125 96 130 }*/
/* IO - VPL Root : { 112 97 117 102 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 134 26 150 47 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 129 34 134 39 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 133 107 149 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Find Data");
/* IO - VPL Terminal : { 128 127 133 132 }*/
/* IO - VPL Terminal : { 128 157 133 162 }*/
/* IO - VPL Root : { 149 144 154 149 }*/
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 63 77 79 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 58 136 63 141 }*/
/* IO - VPL Root : { 79 136 84 141 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 104 128 120 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 99 136 104 141 }*/
/* IO - VPL Terminal : { 99 146 104 151 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 143 22 151 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 116 143 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
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

/* Begin Operation: { 57 104 73 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 73 115 78 120 }*/
/* End Operation */

/* Begin Operation: { 102 21 110 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 97 115 102 120 }*/
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

/* Begin Operation: { 168 145 184 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 163 181 168 186 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 168 10 184 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Select Window");
/* IO - VPL Terminal : { 163 62 168 67 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 208 22 216 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 203 115 208 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,4,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
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

/* Begin Operation: { 57 107 73 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 52 121 57 126 }*/
/* IO - VPL Terminal : { 52 146 57 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 98 21 106 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 93 115 98 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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



	return kNOERROR;
}


Nat4 VPLU_VPLInfo_20_Window_2F_Open_20_Controls_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_Open_20_Controls_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 273 314 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 71 75 87 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Open Controls");
/* IO - VPL Terminal : { 66 133 71 138 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 113 86 129 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Search");
/* IO - VPL Terminal : { 108 114 113 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 422 237 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 309 329 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 114 75 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_persistent(tempOperation,environment,"Lookup History");
/* IO - VPL Root : { 75 164 80 169 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 115 13 131 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Search Text");
/* IO - VPL Terminal : { 110 50 115 55 }*/
/* IO - VPL Terminal : { 110 89 115 94 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 113 150 129 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Search For Text");
/* IO - VPL Terminal : { 108 173 113 178 }*/
/* IO - VPL Terminal : { 108 209 113 214 }*/
/* IO - VPL Terminal : { 108 247 113 252 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_value_to(tempOperation,environment,kSkip);
/* End Operation */

/* Begin Operation: { 160 22 168 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 110 178 126 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Title");
/* IO - VPL Terminal : { 105 201 110 206 }*/
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

/* Start Operations: { 60 60 }{ 318 283 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 68 106 84 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 63 167 68 172 }*/
/* IO - VPL Root : { 84 167 89 172 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 108 129 124 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Name");
/* IO - VPL Terminal : { 103 167 108 172 }*/
/* IO - VPL Root : { 124 168 129 173 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 145 101 161 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Information for \"");
/* IO - VPL Root : { 161 150 166 155 }*/
/* End Operation */

/* Begin Operation: { 190 134 206 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 185 150 190 155 }*/
/* IO - VPL Terminal : { 185 168 190 173 }*/
/* IO - VPL Root : { 206 160 211 165 }*/
/* End Operation */

/* Begin Operation: { 235 92 251 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Title");
/* IO - VPL Terminal : { 230 114 235 119 }*/
/* IO - VPL Terminal : { 230 143 235 148 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 273 18 281 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 112 14 128 70 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Proxy");
/* IO - VPL Terminal : { 107 41 112 46 }*/
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 123 382 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 549 812 }{ 213 324 } */
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 109 23 114 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 149 60 269 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 39 202 44 207 }*/
/* IO - VPL Root : { 60 203 65 208 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 85 94 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 73 96 78 101 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 78 168 94 240 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get File");
/* IO - VPL Terminal : { 73 203 78 208 }*/
/* IO - VPL Root : { 94 204 99 209 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 112 193 128 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 107 204 112 209 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 112 88 128 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Proxy Icon");
/* IO - VPL Terminal : { 107 109 112 114 }*/
/* IO - VPL Terminal : { 107 144 112 149 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 314 567 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 200 186 }{ 255 324 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 126 70 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Update Alias");
/* IO - VPL Terminal : { 49 172 54 177 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 99 94 115 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Alias Record");
/* IO - VPL Terminal : { 94 146 99 151 }*/
/* IO - VPL Root : { 115 145 120 150 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 141 214 157 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 136 225 141 230 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 142 58 158 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/~Set Proxy Alias");
/* IO - VPL Terminal : { 137 82 142 87 }*/
/* IO - VPL Terminal : { 137 145 142 150 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 185 24 193 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 146 25 154 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,3,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 167 65 183 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/HIC Contents");
/* IO - VPL Terminal : { 162 114 167 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 203 24 211 216 } */
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


Nat4 VPLU_VPLInfo_20_Window_2F_Search_20_Cancel_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_Search_20_Cancel_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 66 80 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/HIC Contents");
/* IO - VPL Terminal : { 59 116 64 121 }*/
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

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 196 306 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 114 35 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 197 80 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
/* IO - VPL Root : { 80 203 85 208 }*/
/* End Operation */

/* Begin Operation: { 64 86 80 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Find Result State");
/* IO - VPL Root : { 80 131 85 136 }*/
/* End Operation */

/* Begin Operation: { 106 89 122 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Helper List");
/* IO - VPL Terminal : { 101 114 106 119 }*/
/* IO - VPL Terminal : { 101 131 106 136 }*/
/* IO - VPL Terminal : { 101 159 106 164 }*/
/* IO - VPL Terminal : { 101 185 106 190 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,1,3,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLInfo_20_Window_2F_Install_20_Data_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_Install_20_Data_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 140 825 }{ 420 452 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 73 35 78 }*/
/* IO - VPL Root : { 30 159 35 164 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 121 80 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"text data?");
/* IO - VPL Terminal : { 59 159 64 164 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 73 80 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper Name");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 101 85 106 }*/
/* IO - VPL Root : { 80 131 85 136 }*/
/* End Operation */

/* Begin Operation: { 106 79 122 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Documentation Data");
/* IO - VPL Terminal : { 101 131 106 136 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 148 23 156 215 } */
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

/* Begin Operation: { 106 273 122 357 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"same data?");
/* IO - VPL Terminal : { 101 292 106 297 }*/
/* IO - VPL Terminal : { 101 327 106 332 }*/
/* IO - VPL Root : { 122 310 127 315 }*/
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
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 69 60 85 108 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Data");
/* IO - VPL Terminal : { 64 82 69 87 }*/
/* IO - VPL Root : { 85 74 90 79 }*/
/* IO - VPL Root : { 85 90 90 95 }*/
/* End Operation */

/* Begin Operation: { 103 128 119 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"=");
/* IO - VPL Terminal : { 98 136 103 141 }*/
/* IO - VPL Terminal : { 98 146 103 151 }*/
/* IO - VPL Root : { 119 141 124 146 }*/
/* End Operation */

/* Begin Operation: { 144 21 152 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 139 115 144 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 132 122 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Uninstall Data");
/* IO - VPL Terminal : { 101 179 106 184 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 59 122 107 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Data");
/* IO - VPL Terminal : { 101 73 106 78 }*/
/* IO - VPL Terminal : { 101 89 106 94 }*/
/* IO - VPL Root : { 122 81 127 86 }*/
/* End Operation */

/* Begin Operation: { 148 46 164 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"View");
/* IO - VPL Terminal : { 143 81 148 86 }*/
/* IO - VPL Root : { 164 73 169 78 }*/
/* IO - VPL Root : { 164 89 169 94 }*/
/* End Operation */

/* Begin Operation: { 190 95 206 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"create text item");
/* IO - VPL Terminal : { 185 126 190 131 }*/
/* IO - VPL Terminal : { 185 159 190 164 }*/
/* IO - VPL Root : { 206 143 211 148 }*/
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

/* Start Operations: { 60 60 }{ 352 290 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 58 164 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 143 84 148 89 }*/
/* IO - VPL Root : { 164 74 169 79 }*/
/* IO - VPL Root : { 164 92 169 97 }*/
/* End Operation */

/* Begin Operation: { 64 128 80 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 59 148 64 153 }*/
/* IO - VPL Root : { 80 140 85 145 }*/
/* IO - VPL Root : { 80 154 85 159 }*/
/* End Operation */

/* Begin Operation: { 106 126 122 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"unpack");
/* IO - VPL Terminal : { 101 154 106 159 }*/
/* IO - VPL Root : { 122 154 127 159 }*/
/* End Operation */

/* Begin Operation: { 190 129 206 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"create item");
/* IO - VPL Terminal : { 185 154 190 159 }*/
/* IO - VPL Terminal : { 185 198 190 203 }*/
/* IO - VPL Root : { 206 170 211 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 219 466 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 462 237 }{ 288 394 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 210 80 338 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_persistent(tempOperation,environment,"Info Use Web View?");
/* IO - VPL Root : { 80 272 85 277 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 260 122 289 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 101 272 106 277 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 64 57 80 115 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 59 84 64 89 }*/
/* IO - VPL Root : { 80 74 85 79 }*/
/* IO - VPL Root : { 80 93 85 98 }*/
/* End Operation */

/* Begin Operation: { 148 193 164 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Text");
/* IO - VPL Terminal : { 143 215 148 220 }*/
/* IO - VPL Root : { 164 207 169 212 }*/
/* IO - VPL Root : { 164 223 169 228 }*/
/* End Operation */

/* Begin Operation: { 109 12 126 104 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"VPLInfo Web");
/* IO - VPL Terminal : { 103 56 108 61 }*/
/* IO - VPL Root : { 127 56 132 61 }*/
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

/* Begin Operation: { 148 114 164 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 143 130 148 135 }*/
/* IO - VPL Terminal : { 143 148 148 153 }*/
/* IO - VPL Root : { 164 140 169 145 }*/
/* End Operation */

/* Begin Operation: { 106 167 122 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"URL");
/* IO - VPL Terminal : { 101 187 106 192 }*/
/* IO - VPL Root : { 122 179 127 184 }*/
/* IO - VPL Root : { 122 193 127 198 }*/
/* End Operation */

/* Begin Operation: { 190 122 207 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"/Load Text");
/* IO - VPL Terminal : { 184 141 189 146 }*/
/* IO - VPL Terminal : { 184 162 189 167 }*/
/* IO - VPL Terminal : { 184 183 189 188 }*/
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

/* Start Operations: { 60 60 }{ 210 268 } */
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

/* Begin Operation: { 232 24 240 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 118 232 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,2,0,2,6);
	result = connect_root_to_terminal(ptrA,2,3,1,7);
	result = connect_root_to_terminal(ptrA,1,5,1,8);
	result = connect_root_to_terminal(ptrA,2,4,2,8);
	result = connect_root_to_terminal(ptrA,2,7,3,8);
	result = connect_root_to_terminal(ptrA,1,5,1,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 505 522 }{ 291 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 87 25 103 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"VPLInfo Text");
/* IO - VPL Terminal : { 82 70 87 75 }*/
/* IO - VPL Root : { 103 70 108 75 }*/
/* End Operation */

/* Begin Operation: { 139 60 155 95 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 155 75 160 80 }*/
/* End Operation */

/* Begin Operation: { 184 30 200 104 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Editable?");
/* IO - VPL Terminal : { 179 52 184 57 }*/
/* IO - VPL Terminal : { 179 75 184 80 }*/
/* IO - VPL Root : { 200 65 205 70 }*/
/* End Operation */

/* Begin Operation: { 52 48 68 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 47 75 52 80 }*/
/* IO - VPL Root : { 68 65 73 70 }*/
/* IO - VPL Root : { 68 84 73 89 }*/
/* End Operation */

/* Begin Operation: { 127 193 143 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Text");
/* IO - VPL Terminal : { 122 215 127 220 }*/
/* IO - VPL Root : { 143 207 148 212 }*/
/* IO - VPL Root : { 143 223 148 228 }*/
/* End Operation */

/* Begin Operation: { 184 165 200 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Text");
/* IO - VPL Terminal : { 179 179 184 184 }*/
/* IO - VPL Terminal : { 179 195 184 200 }*/
/* IO - VPL Root : { 200 187 205 192 }*/
/* End Operation */

/* Begin Operation: { 39 225 55 236 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 55 228 60 233 }*/
/* End Operation */

/* Begin Operation: { 84 152 100 258 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Inset Rectangle");
/* IO - VPL Terminal : { 79 176 84 181 }*/
/* IO - VPL Terminal : { 79 202 84 207 }*/
/* IO - VPL Terminal : { 79 228 84 233 }*/
/* IO - VPL Root : { 100 203 105 208 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 128 116 144 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 123 132 128 137 }*/
/* IO - VPL Terminal : { 123 150 128 155 }*/
/* IO - VPL Root : { 144 142 149 147 }*/
/* End Operation */

/* Begin Operation: { 254 24 262 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 249 118 254 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,2,5,2,6);
	result = connect_root_to_terminal(ptrA,2,0,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,1,7,3,8);
	result = connect_root_to_terminal(ptrA,1,1,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
	result = connect_root_to_terminal(ptrA,1,1,1,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 232 148 248 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 227 170 232 175 }*/
/* IO - VPL Root : { 248 170 253 175 }*/
/* End Operation */

/* Begin Operation: { 274 23 282 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 269 117 274 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,1,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 232 55 248 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Set The Content");
/* IO - VPL Terminal : { 227 89 232 94 }*/
/* IO - VPL Terminal : { 227 125 232 130 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 358 786 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 349 503 }{ 230 258 } */
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 82 23 87 }*/
/* IO - VPL Root : { 18 146 23 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 70 60 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Content");
/* IO - VPL Terminal : { 39 107 44 112 }*/
/* IO - VPL Terminal : { 39 146 44 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 93 127 109 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
/* IO - VPL Root : { 109 133 114 138 }*/
/* End Operation */

/* Begin Operation: { 138 56 154 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Select List");
/* IO - VPL Terminal : { 133 88 138 93 }*/
/* IO - VPL Terminal : { 133 133 138 138 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 180 28 188 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 274 214 290 368 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_persistent(tempOperation,environment,"List View Canvas Buffer");
/* IO - VPL Root : { 290 287 295 292 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 129 290 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( 0 0 )");
/* IO - VPL Root : { 290 146 295 151 }*/
/* End Operation */

/* Begin Operation: { 316 49 332 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Canvas Limits");
/* IO - VPL Terminal : { 311 89 316 94 }*/
/* IO - VPL Terminal : { 311 131 316 136 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 316 248 332 334 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Set Origin?");
/* IO - VPL Terminal : { 311 267 316 272 }*/
/* IO - VPL Terminal : { 311 310 316 315 }*/
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

/* Start Operations: { 60 60 }{ 247 276 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 136 80 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 59 148 64 153 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 106 139 122 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( 0 0 )");
/* IO - VPL Root : { 122 156 127 161 }*/
/* End Operation */

/* Begin Operation: { 148 55 164 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Viewport Origin");
/* IO - VPL Terminal : { 143 84 148 89 }*/
/* IO - VPL Terminal : { 143 156 148 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 24 198 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 148 160 164 269 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"force page type");
/* IO - VPL Terminal : { 143 212 148 217 }*/
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

/* Begin Operation: { 147 124 163 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Current Page");
/* IO - VPL Terminal : { 142 169 147 174 }*/
/* IO - VPL Root : { 163 153 168 158 }*/
/* IO - VPL Root : { 163 184 168 189 }*/
/* End Operation */

/* Begin Operation: { 147 207 163 236 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 163 219 168 224 }*/
/* End Operation */

/* Begin Operation: { 189 151 205 257 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Standard Text?");
/* IO - VPL Terminal : { 184 184 189 189 }*/
/* IO - VPL Terminal : { 184 219 189 224 }*/
/* IO - VPL Root : { 205 202 210 207 }*/
/* End Operation */

/* Begin Operation: { 60 20 68 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
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
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,5,1,6);
	result = connect_root_to_terminal(ptrA,2,0,2,6);
	result = connect_root_to_terminal(ptrA,2,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,2,5,1,10);
	result = connect_root_to_terminal(ptrA,1,9,2,10);
	result = connect_root_to_terminal(ptrA,2,5,1,11);
	result = connect_root_to_terminal(ptrA,1,2,2,11);
	result = connect_root_to_terminal(ptrA,1,0,1,12);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [3 to 2] */
/* Synchro [3 to 3] */
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

/* Begin Operation: { 61 65 77 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Install Data");
/* IO - VPL Terminal : { 56 96 61 101 }*/
/* IO - VPL Terminal : { 56 137 61 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 107 19 115 211 } */
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


Nat4 VPLU_VPLInfo_20_Window_2F_HIC_20_Nav_20_Back_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_HIC_20_Nav_20_Back_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 210 181 }{ 384 311 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 70 95 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Data Cache Index");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 109 101 114 }*/
/* IO - VPL Root : { 96 150 101 155 }*/
/* End Operation */

/* Begin Operation: { 120 66 137 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Data Cache");
/* IO - VPL Terminal : { 114 109 119 114 }*/
/* IO - VPL Root : { 138 94 143 99 }*/
/* IO - VPL Root : { 138 124 143 129 }*/
/* End Operation */

/* Begin Operation: { 120 172 137 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"-1");
/* IO - VPL Terminal : { 114 192 119 197 }*/
/* IO - VPL Root : { 138 192 143 197 }*/
/* End Operation */

/* Begin Operation: { 162 100 179 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Safe Get)");
/* IO - VPL Terminal : { 156 124 161 129 }*/
/* IO - VPL Terminal : { 156 150 161 155 }*/
/* IO - VPL Root : { 180 138 185 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 204 182 221 258 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Refresh");
/* IO - VPL Terminal : { 198 218 203 223 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 136 221 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"-1");
/* IO - VPL Root : { 222 146 227 151 }*/
/* End Operation */

/* Begin Operation: { 246 70 263 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Display Page");
/* IO - VPL Terminal : { 240 94 245 99 }*/
/* IO - VPL Terminal : { 240 120 245 125 }*/
/* IO - VPL Terminal : { 240 146 245 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 288 58 305 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Refresh");
/* IO - VPL Terminal : { 282 94 287 99 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 330 36 338 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,2,1,7);
	result = connect_root_to_terminal(ptrA,1,4,2,7);
	result = connect_root_to_terminal(ptrA,1,6,3,7);
	result = connect_root_to_terminal(ptrA,1,2,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [7 to 5] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 210 181 }{ 200 300 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 130 49 135 }*/
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



	return kNOERROR;
}


Nat4 VPLU_VPLInfo_20_Window_2F_HIC_20_Nav_20_Forward_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_HIC_20_Nav_20_Forward_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 210 181 }{ 396 303 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 70 95 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Data Cache Index");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 109 101 114 }*/
/* IO - VPL Root : { 96 150 101 155 }*/
/* End Operation */

/* Begin Operation: { 120 66 137 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Data Cache");
/* IO - VPL Terminal : { 114 109 119 114 }*/
/* IO - VPL Root : { 138 94 143 99 }*/
/* IO - VPL Root : { 138 124 143 129 }*/
/* End Operation */

/* Begin Operation: { 120 172 137 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 114 192 119 197 }*/
/* IO - VPL Root : { 138 192 143 197 }*/
/* End Operation */

/* Begin Operation: { 162 100 179 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Safe Get)");
/* IO - VPL Terminal : { 156 124 161 129 }*/
/* IO - VPL Terminal : { 156 150 161 155 }*/
/* IO - VPL Root : { 180 138 185 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 204 182 221 258 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Refresh");
/* IO - VPL Terminal : { 198 218 203 223 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 136 221 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 222 146 227 151 }*/
/* End Operation */

/* Begin Operation: { 246 70 263 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Display Page");
/* IO - VPL Terminal : { 240 94 245 99 }*/
/* IO - VPL Terminal : { 240 120 245 125 }*/
/* IO - VPL Terminal : { 240 146 245 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 288 58 305 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Refresh");
/* IO - VPL Terminal : { 282 94 287 99 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 330 36 338 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,2,1,7);
	result = connect_root_to_terminal(ptrA,1,4,2,7);
	result = connect_root_to_terminal(ptrA,1,6,3,7);
	result = connect_root_to_terminal(ptrA,1,2,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [7 to 5] */
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


Nat4 VPLU_VPLInfo_20_Window_2F_Focus_20_Search_20_Text_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_Focus_20_Search_20_Text_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 492 887 }{ 320 335 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 115 35 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 118 80 240 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Search Text");
/* IO - VPL Terminal : { 59 176 64 181 }*/
/* IO - VPL Root : { 80 176 85 181 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 106 123 122 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get ControlRef");
/* IO - VPL Terminal : { 101 176 106 181 }*/
/* IO - VPL Root : { 122 176 127 181 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 219 164 246 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 143 230 148 235 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 148 62 164 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get WindowRef");
/* IO - VPL Terminal : { 143 115 148 120 }*/
/* IO - VPL Root : { 164 116 169 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 43 206 70 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 185 54 190 59 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 190 144 206 272 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kControlFocusNextPart");
/* IO - VPL Root : { 206 206 211 211 }*/
/* End Operation */

/* Begin Operation: { 232 118 248 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,3,3,"SetKeyboardFocus");
/* IO - VPL Terminal : { 227 146 232 151 }*/
/* IO - VPL Terminal : { 227 176 232 181 }*/
/* IO - VPL Terminal : { 227 206 232 211 }*/
/* IO - VPL Root : { 248 146 253 151 }*/
/* IO - VPL Root : { 248 176 253 181 }*/
/* IO - VPL Root : { 248 206 253 211 }*/
/* End Operation */

/* Begin Operation: { 274 22 282 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,7);
	result = connect_root_to_terminal(ptrA,1,2,2,7);
	result = connect_root_to_terminal(ptrA,1,6,3,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLInfo_20_Window_2F_Save_20_To_20_History_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_Save_20_To_20_History_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 161 443 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 81 35 86 }*/
/* IO - VPL Root : { 30 153 35 158 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 102 80 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_persistent(tempOperation,environment,"Lookup History");
/* IO - VPL Terminal : { 59 153 64 158 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 25 114 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLInfo_20_Window_2F_Create_20_Banner_20_Item_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_Create_20_Banner_20_Item_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 308 336 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 67 35 72 }*/
/* IO - VPL Root : { 30 162 35 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 57 121 67 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 121 60 126 65 }*/
/* End Operation */

/* Begin Operation: { 64 138 80 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 80 141 85 146 }*/
/* End Operation */

/* Begin Operation: { 60 44 76 94 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"View");
/* IO - VPL Terminal : { 55 67 60 72 }*/
/* IO - VPL Root : { 76 58 81 63 }*/
/* IO - VPL Root : { 76 74 81 79 }*/
/* End Operation */

/* Begin Operation: { 106 91 122 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"row width");
/* IO - VPL Terminal : { 101 115 106 120 }*/
/* IO - VPL Terminal : { 101 141 106 146 }*/
/* IO - VPL Root : { 122 128 127 133 }*/
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

/* Start Operations: { 60 60 }{ 275 369 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 44 80 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/View Size");
/* IO - VPL Terminal : { 59 84 64 89 }*/
/* IO - VPL Root : { 80 84 85 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 44 122 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 101 84 106 89 }*/
/* IO - VPL Root : { 122 71 127 76 }*/
/* IO - VPL Root : { 122 99 127 104 }*/
/* End Operation */

/* Begin Operation: { 64 157 80 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"2");
/* IO - VPL Root : { 80 160 85 165 }*/
/* End Operation */

/* Begin Operation: { 106 142 122 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"*");
/* IO - VPL Terminal : { 101 150 106 155 }*/
/* IO - VPL Terminal : { 101 160 106 165 }*/
/* IO - VPL Root : { 122 156 127 161 }*/
/* End Operation */

/* Begin Operation: { 148 105 164 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"-");
/* IO - VPL Terminal : { 143 113 148 118 }*/
/* IO - VPL Terminal : { 143 123 148 128 }*/
/* IO - VPL Root : { 164 118 169 123 }*/
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
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,2,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 63 177 79 271 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Current Page");
/* IO - VPL Terminal : { 58 222 63 227 }*/
/* IO - VPL Root : { 79 206 84 211 }*/
/* IO - VPL Root : { 79 237 84 242 }*/
/* End Operation */

/* Begin Operation: { 148 77 164 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"create banner");
/* IO - VPL Terminal : { 143 99 148 104 }*/
/* IO - VPL Terminal : { 143 123 148 128 }*/
/* IO - VPL Terminal : { 143 147 148 152 }*/
/* IO - VPL Root : { 164 108 169 113 }*/
/* IO - VPL Root : { 164 141 169 146 }*/
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

/* Start Operations: { 60 60 }{ 354 433 } */
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

/* Begin Operation: { 50 211 66 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"36");
/* IO - VPL Root : { 66 217 71 222 }*/
/* End Operation */

/* Begin Operation: { 158 209 174 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 153 217 158 222 }*/
/* IO - VPL Terminal : { 153 227 158 232 }*/
/* IO - VPL Root : { 174 222 179 227 }*/
/* End Operation */

/* Begin Operation: { 101 20 117 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Select Banner View");
/* IO - VPL Terminal : { 96 82 101 87 }*/
/* IO - VPL Root : { 117 82 122 87 }*/
/* End Operation */

/* Begin Operation: { 58 171 74 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( 0 4 )");
/* IO - VPL Root : { 74 188 79 193 }*/
/* End Operation */

/* Begin Operation: { 95 173 111 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"attach-r");
/* IO - VPL Terminal : { 90 194 95 199 }*/
/* IO - VPL Terminal : { 90 217 95 222 }*/
/* IO - VPL Terminal : { 90 233 95 238 }*/
/* IO - VPL Root : { 111 206 116 211 }*/
/* End Operation */

/* Begin Operation: { 163 103 179 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Frame");
/* IO - VPL Terminal : { 158 126 163 131 }*/
/* IO - VPL Terminal : { 158 161 163 166 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 209 159 225 237 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Initialize");
/* IO - VPL Terminal : { 204 180 209 185 }*/
/* IO - VPL Terminal : { 204 216 209 221 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 276 27 284 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 271 89 276 94 }*/
/* IO - VPL Terminal : { 271 153 276 158 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,1,2,5);
	result = connect_root_to_terminal(ptrA,2,0,3,5);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,3,1,7);
	result = connect_root_to_terminal(ptrA,3,0,2,7);
	result = connect_root_to_terminal(ptrA,1,2,1,8);
	result = connect_root_to_terminal(ptrA,1,3,2,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 138 206 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 185 159 190 164 }*/
/* IO - VPL Root : { 206 159 211 164 }*/
/* End Operation */

/* Begin Operation: { 104 193 120 289 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Search?");
/* IO - VPL Terminal : { 99 237 104 242 }*/
/* IO - VPL Root : { 120 236 125 241 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 144 224 160 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 139 236 144 241 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 232 28 240 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 93 232 98 }*/
/* IO - VPL Terminal : { 227 159 232 164 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,1,4,2,6);
	result = connect_root_to_terminal(ptrA,2,5,3,6);
	result = connect_root_to_terminal(ptrA,2,6,1,7);
	result = connect_root_to_terminal(ptrA,2,5,1,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,1,6,1,10);
	result = connect_root_to_terminal(ptrA,1,7,2,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 4] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 161 408 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 68 80 84 91 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 84 83 89 88 }*/
/* End Operation */

/* Begin Operation: { 68 141 84 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
/* IO - VPL Root : { 84 147 89 152 }*/
/* End Operation */

/* Begin Operation: { 113 21 121 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 108 83 113 88 }*/
/* IO - VPL Terminal : { 108 147 113 152 }*/
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


Nat4 VPLU_VPLInfo_20_Window_2F_OLD_20_Search_20_For_20_Text_23__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_OLD_20_Search_20_For_20_Text_23__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 572 605 }{ 473 559 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 80 35 85 }*/
/* IO - VPL Root : { 30 122 35 127 }*/
/* IO - VPL Root : { 30 181 35 186 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 93 80 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Trim\"");
/* IO - VPL Terminal : { 59 122 64 127 }*/
/* IO - VPL Root : { 80 122 85 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 115 122 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\"\"");
/* IO - VPL Terminal : { 101 120 106 125 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 232 41 248 524 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( constant primitive procedure structure Persistent Method Class Attribute Operation )");
/* IO - VPL Root : { 248 280 253 285 }*/
/* End Operation */

/* Begin Operation: { 148 61 164 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Find State");
/* IO - VPL Terminal : { 143 98 148 103 }*/
/* IO - VPL Root : { 164 98 169 103 }*/
/* End Operation */

/* Begin Operation: { 108 172 124 292 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 103 229 108 234 }*/
/* IO - VPL Root : { 124 229 129 234 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 154 207 170 255 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 149 229 154 234 }*/
/* IO - VPL Root : { 170 229 175 234 }*/
/* End Operation */

/* Begin Operation: { 195 173 211 261 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Source Data");
/* IO - VPL Terminal : { 190 200 195 205 }*/
/* IO - VPL Terminal : { 190 229 195 234 }*/
/* IO - VPL Root : { 211 215 216 220 }*/
/* End Operation */

/* Begin Operation: { 190 76 206 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Find Text");
/* IO - VPL Terminal : { 185 98 190 103 }*/
/* IO - VPL Terminal : { 185 122 190 127 }*/
/* IO - VPL Root : { 206 111 211 116 }*/
/* End Operation */

/* Begin Operation: { 274 90 290 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Do Type Find");
/* IO - VPL Terminal : { 269 111 274 116 }*/
/* IO - VPL Terminal : { 269 157 274 162 }*/
/* IO - VPL Root : { 290 130 295 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 60 80 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Type Result");
/* IO - VPL Terminal : { 59 85 64 90 }*/
/* IO - VPL Terminal : { 59 146 64 151 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 22 114 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 101 116 106 121 }*/
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
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 316 22 332 77 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"save?");
/* IO - VPL Terminal : { 311 38 316 43 }*/
/* IO - VPL Terminal : { 311 56 316 61 }*/
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

/* Start Operations: { 60 60 }{ 256 314 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 165 74 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 53 171 58 176 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 58 31 74 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_persistent(tempOperation,environment,"Lookup History");
/* IO - VPL Terminal : { 53 82 58 87 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 94 21 102 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 316 203 332 274 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"empty??");
/* IO - VPL Terminal : { 311 220 316 225 }*/
/* IO - VPL Terminal : { 311 258 316 263 }*/
/* IO - VPL Root : { 332 236 337 241 }*/
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

/* Start Operations: { 60 60 }{ 213 315 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 78 122 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Find Result Data");
/* IO - VPL Root : { 122 121 127 126 }*/
/* End Operation */

/* Begin Operation: { 64 76 80 97 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 59 84 64 89 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 148 27 156 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 121 148 126 }*/
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
	result = connect_root_to_terminal(ptrA,2,0,1,1);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 358 71 374 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Display List");
/* IO - VPL Terminal : { 353 80 358 85 }*/
/* IO - VPL Terminal : { 353 109 358 114 }*/
/* IO - VPL Terminal : { 353 137 358 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 400 25 408 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,4,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,4,1,8);
	result = connect_root_to_terminal(ptrA,1,1,2,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,1,3,2,9);
	result = connect_root_to_terminal(ptrA,1,1,1,10);
	result = connect_root_to_terminal(ptrA,1,9,2,10);
	result = connect_root_to_terminal(ptrA,1,9,1,11);
	result = connect_root_to_terminal(ptrA,1,1,2,11);
	result = connect_root_to_terminal(ptrA,1,0,1,12);
	result = connect_root_to_terminal(ptrA,1,9,2,12);
	result = connect_root_to_terminal(ptrA,1,11,3,12);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [8 to 7] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

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

/* Begin Operation: { 96 54 112 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/HIC Contents");
/* IO - VPL Terminal : { 91 101 96 106 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 23 156 215 } */
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


Nat4 VPLU_VPLInfo_20_Window_2F_CE_20_Mouse_20_Moved_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_CE_20_Mouse_20_Moved_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 361 329 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 74 33 79 }*/
/* IO - VPL Root : { 28 155 33 160 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 246 32 262 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Return Event Not Handled");
/* IO - VPL Terminal : { 241 111 246 116 }*/
/* IO - VPL Root : { 262 111 267 116 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 67 35 83 103 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Do Web?");
/* IO - VPL Terminal : { 62 50 67 55 }*/
/* IO - VPL Terminal : { 62 78 67 83 }*/
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

/* Start Operations: { 136 348 }{ 428 485 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 39 80 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Current Page");
/* IO - VPL Terminal : { 59 84 64 89 }*/
/* IO - VPL Root : { 80 68 85 73 }*/
/* IO - VPL Root : { 80 99 85 104 }*/
/* End Operation */

/* Begin Operation: { 106 32 122 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Standard Text?");
/* IO - VPL Terminal : { 101 99 106 104 }*/
/* IO - VPL Root : { 122 99 127 104 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 87 164 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 143 99 148 104 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 190 61 206 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"View");
/* IO - VPL Terminal : { 185 84 190 89 }*/
/* IO - VPL Root : { 206 75 211 80 }*/
/* IO - VPL Root : { 206 91 211 96 }*/
/* End Operation */

/* Begin Operation: { 190 140 206 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Web View");
/* IO - VPL Root : { 206 164 211 169 }*/
/* End Operation */

/* Begin Operation: { 232 85 248 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Item Name");
/* IO - VPL Terminal : { 227 115 232 120 }*/
/* IO - VPL Terminal : { 227 164 232 169 }*/
/* IO - VPL Root : { 248 141 253 146 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 274 225 290 337 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Up Drawing");
/* IO - VPL Terminal : { 269 279 274 284 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 99 290 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Item Record");
/* IO - VPL Terminal : { 269 141 274 146 }*/
/* IO - VPL Root : { 290 126 295 131 }*/
/* IO - VPL Root : { 290 155 295 160 }*/
/* End Operation */

/* Begin Operation: { 316 83 332 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 311 94 316 99 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 231 280 247 354 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"GetMouse");
/* IO - VPL Terminal : { 226 315 231 320 }*/
/* IO - VPL Root : { 247 315 252 320 }*/
/* End Operation */

/* Begin Operation: { 187 270 203 424 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,0,1,"GetCurrentKeyModifiers");
/* IO - VPL Root : { 203 345 208 350 }*/
/* End Operation */

/* Begin Operation: { 316 257 332 409 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,4,3,"HandleControlSetCursor");
/* IO - VPL Terminal : { 311 285 316 290 }*/
/* IO - VPL Terminal : { 311 315 316 320 }*/
/* IO - VPL Terminal : { 311 345 316 350 }*/
/* IO - VPL Terminal : { 311 375 316 380 }*/
/* IO - VPL Root : { 332 293 337 298 }*/
/* IO - VPL Root : { 332 331 337 336 }*/
/* IO - VPL Root : { 332 369 337 374 }*/
/* End Operation */

/* Begin Operation: { 358 28 366 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,6,1,8);
	result = connect_root_to_terminal(ptrA,2,8,1,9);
	result = connect_root_to_terminal(ptrA,2,8,1,12);
	result = connect_root_to_terminal(ptrA,1,10,2,12);
	result = connect_root_to_terminal(ptrA,1,11,3,12);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [8 to 7] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 299 20 307 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 294 111 299 116 }*/
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


Nat4 VPLU_VPLInfo_20_Window_2F_HIC_20_Messages_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_HIC_20_Messages_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 495 346 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 126 50 131 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 98 61 114 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 93 118 98 123 }*/
/* IO - VPL Root : { 114 118 119 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 98 197 115 259 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Messages");
/* IO - VPL Root : { 116 226 121 231 }*/
/* End Operation */

/* Begin Operation: { 140 74 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Find Project Info List");
/* IO - VPL Terminal : { 135 118 140 123 }*/
/* IO - VPL Terminal : { 135 164 140 169 }*/
/* IO - VPL Root : { 156 142 161 147 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 182 96 198 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Current Find Result");
/* IO - VPL Terminal : { 177 169 182 174 }*/
/* IO - VPL Root : { 198 169 203 174 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 231 120 248 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 225 141 230 146 }*/
/* IO - VPL Root : { 249 133 254 138 }*/
/* IO - VPL Root : { 249 148 254 153 }*/
/* End Operation */

/* Begin Operation: { 284 118 301 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 278 148 283 153 }*/
/* IO - VPL Root : { 302 137 307 142 }*/
/* IO - VPL Root : { 302 158 307 163 }*/
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,2,iList);
/* End Operation */

/* Begin Operation: { 332 132 349 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Documentation Data");
/* IO - VPL Root : { 350 191 355 196 }*/
/* End Operation */

/* Begin Operation: { 374 108 391 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Display List");
/* IO - VPL Terminal : { 368 126 373 131 }*/
/* IO - VPL Terminal : { 368 158 373 163 }*/
/* IO - VPL Terminal : { 368 191 373 196 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 436 43 444 235 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,2,5,1,6);
	result = connect_root_to_terminal(ptrA,1,0,1,8);
	result = connect_root_to_terminal(ptrA,2,6,2,8);
	result = connect_root_to_terminal(ptrA,1,7,3,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLInfo_20_Window_2F_HIC_20_Checks_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_HIC_20_Checks_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 570 632 }{ 244 303 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 130 49 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 122 94 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"new page?");
/* IO - VPL Terminal : { 73 159 78 164 }*/
/* IO - VPL Root : { 94 159 99 164 }*/
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

/* Begin Operation: { 64 30 81 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"VPLInfo Page Code Checks");
/* IO - VPL Terminal : { 58 116 63 121 }*/
/* IO - VPL Root : { 82 116 87 121 }*/
/* End Operation */

/* Begin Operation: { 106 97 122 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create");
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Terminal : { 101 142 106 147 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 116 148 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
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
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 68 80 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Contents Page");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 99 85 104 }*/
/* IO - VPL Root : { 80 132 85 137 }*/
/* End Operation */

/* Begin Operation: { 107 26 123 102 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 102 62 107 67 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 107 158 123 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Refresh");
/* IO - VPL Terminal : { 102 194 107 199 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 23 156 215 } */
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
	result = connect_root_to_terminal(ptrA,2,1,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 168 137 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 138 186 143 191 }*/
/* End Operation */

/* Begin Operation: { 162 107 178 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Display Page");
/* IO - VPL Terminal : { 157 130 162 135 }*/
/* IO - VPL Terminal : { 157 159 162 164 }*/
/* IO - VPL Terminal : { 156 186 161 191 }*/
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
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLInfo_20_Window_2F_Get_20_Creation_20_Attributes_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Window_2F_Get_20_Creation_20_Attributes_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 268 349 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 304 95 350 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( 10 4 )");
/* IO - VPL Root : { 96 325 101 330 }*/
/* End Operation */

/* Begin Operation: { 120 202 137 284 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Is MacOS?");
/* IO - VPL Terminal : { 114 227 119 232 }*/
/* IO - VPL Terminal : { 114 254 119 259 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 222 95 288 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_evaluate(tempOperation,environment,"1 << 7");
/* IO - VPL Root : { 96 253 101 258 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 36 95 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Get Creation Attributes");
/* IO - VPL Terminal : { 72 119 77 124 }*/
/* IO - VPL Root : { 96 119 101 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 120 118 137 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Terminal : { 114 144 119 149 }*/
/* IO - VPL Root : { 138 138 143 143 }*/
/* End Operation */

/* Begin Operation: { 204 44 212 236 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 138 203 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,3,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 150 266 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 47 95 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Get Creation Attributes");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
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
	result = connect_root_to_terminal(ptrA,1,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_OLD_20_Info_20_Window_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_OLD_20_Info_20_Window_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_OLD_20_Info_20_Window_2F_Name,environment);
	tempAttribute = attribute_add("WindowRef",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Event Handler",tempClass,tempAttribute_OLD_20_Info_20_Window_2F_Window_20_Event_20_Handler,environment);
	tempAttribute = attribute_add("Drawers",tempClass,tempAttribute_OLD_20_Info_20_Window_2F_Drawers,environment);
	tempAttribute = attribute_add("Project",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Document Window");
	return kNOERROR;
}

/* Start Universals: { 317 980 }{ 499 318 } */
Nat4 VPLU_OLD_20_Info_20_Window_2F_Open_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_OLD_20_Info_20_Window_2F_Open_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 323 315 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 111 33 116 }*/
/* IO - VPL Root : { 28 180 33 185 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 153 68 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 47 172 52 177 }*/
/* IO - VPL Terminal : { 47 193 52 198 }*/
/* IO - VPL Root : { 68 183 73 188 }*/
/* End Operation */

/* Begin Operation: { 93 152 109 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"main");
/* IO - VPL Root : { 109 163 114 168 }*/
/* End Operation */

/* Begin Operation: { 92 195 108 261 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Info Window");
/* IO - VPL Root : { 108 226 113 231 }*/
/* End Operation */

/* Begin Operation: { 143 128 159 257 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create Nib Window");
/* IO - VPL Terminal : { 138 156 143 161 }*/
/* IO - VPL Terminal : { 138 189 143 194 }*/
/* IO - VPL Terminal : { 138 226 143 231 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 191 60 207 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Controls");
/* IO - VPL Terminal : { 186 111 191 116 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 143 39 159 95 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Show");
/* IO - VPL Terminal : { 138 64 143 69 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 223 27 231 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_OLD_20_Info_20_Window_2F_Open_20_Controls_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_OLD_20_Info_20_Window_2F_Open_20_Controls_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 62 29 78 77 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Text");
/* IO - VPL Terminal : { 57 52 62 57 }*/
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 422 237 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 220 17 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 75 163 91 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"");
/* IO - VPL Root : { 91 168 96 173 }*/
/* End Operation */

/* Begin Operation: { 120 85 136 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Output Text");
/* IO - VPL Terminal : { 115 114 120 119 }*/
/* IO - VPL Terminal : { 115 168 120 173 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 160 22 168 214 } */
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

/* Begin Operation: { 62 164 78 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"List");
/* IO - VPL Terminal : { 57 184 62 189 }*/
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 422 237 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 220 17 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 72 63 88 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/HIC Contents");
/* IO - VPL Terminal : { 67 114 72 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 128 22 136 214 } */
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

/* Begin Operation: { 113 86 129 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Search");
/* IO - VPL Terminal : { 108 114 113 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 422 237 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 309 329 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 114 75 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_persistent(tempOperation,environment,"Lookup History");
/* IO - VPL Root : { 75 164 80 169 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 115 13 131 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Search Text");
/* IO - VPL Terminal : { 110 50 115 55 }*/
/* IO - VPL Terminal : { 110 89 115 94 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 113 150 129 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Search For Text");
/* IO - VPL Terminal : { 108 173 113 178 }*/
/* IO - VPL Terminal : { 108 209 113 214 }*/
/* IO - VPL Terminal : { 108 247 113 252 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 160 22 168 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 110 178 126 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Title");
/* IO - VPL Terminal : { 105 201 110 206 }*/
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

/* Start Operations: { 60 60 }{ 318 283 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 68 106 84 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 63 167 68 172 }*/
/* IO - VPL Root : { 84 167 89 172 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 108 129 124 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Name");
/* IO - VPL Terminal : { 103 167 108 172 }*/
/* IO - VPL Root : { 124 168 129 173 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 145 101 161 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Information for \"");
/* IO - VPL Root : { 161 150 166 155 }*/
/* End Operation */

/* Begin Operation: { 190 134 206 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 185 150 190 155 }*/
/* IO - VPL Terminal : { 185 168 190 173 }*/
/* IO - VPL Root : { 206 160 211 165 }*/
/* End Operation */

/* Begin Operation: { 235 92 251 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Title");
/* IO - VPL Terminal : { 230 114 235 119 }*/
/* IO - VPL Terminal : { 230 143 235 148 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 273 18 281 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 112 14 128 70 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Proxy");
/* IO - VPL Terminal : { 107 41 112 46 }*/
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 123 382 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 549 812 }{ 213 324 } */
/* Begin Operation: { 10 20 18 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 18 109 23 114 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 149 60 269 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 39 202 44 207 }*/
/* IO - VPL Root : { 60 203 65 208 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 85 94 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 73 96 78 101 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 78 168 94 240 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get File");
/* IO - VPL Terminal : { 73 203 78 208 }*/
/* IO - VPL Root : { 94 204 99 209 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 112 193 128 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 107 204 112 209 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 112 88 128 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Proxy Icon");
/* IO - VPL Terminal : { 107 109 112 114 }*/
/* IO - VPL Terminal : { 107 144 112 149 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 314 567 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 200 186 }{ 255 324 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 126 70 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Update Alias");
/* IO - VPL Terminal : { 49 172 54 177 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 99 94 115 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Alias Record");
/* IO - VPL Terminal : { 94 146 99 151 }*/
/* IO - VPL Root : { 115 145 120 150 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 141 214 157 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 136 225 141 230 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 142 58 158 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/~Set Proxy Alias");
/* IO - VPL Terminal : { 137 82 142 87 }*/
/* IO - VPL Terminal : { 137 145 142 150 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 185 24 193 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 146 25 154 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,3,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 149 22 157 214 } */
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


Nat4 VPLU_OLD_20_Info_20_Window_2F_Find_20_Output_20_Text_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_OLD_20_Info_20_Window_2F_Find_20_Output_20_Text_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 111 33 116 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 50 138 66 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( \'INFO\' 3 )");
/* IO - VPL Root : { 66 168 71 173 }*/
/* End Operation */

/* Begin Operation: { 95 85 111 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Control");
/* IO - VPL Terminal : { 90 111 95 116 }*/
/* IO - VPL Terminal : { 90 149 95 154 }*/
/* IO - VPL Root : { 111 129 116 134 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 138 21 146 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 133 111 138 116 }*/
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
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 73 15 89 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"HITextView Control");
/* IO - VPL Terminal : { 68 76 73 81 }*/
/* IO - VPL Root : { 89 76 94 81 }*/
/* End Operation */

/* Begin Operation: { 74 189 90 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( \'INFO\' 3 )");
/* IO - VPL Root : { 90 219 95 224 }*/
/* End Operation */

/* Begin Operation: { 117 59 133 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create From ID");
/* IO - VPL Terminal : { 112 76 117 81 }*/
/* IO - VPL Terminal : { 112 114 117 119 }*/
/* IO - VPL Terminal : { 112 155 117 160 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 160 21 168 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 155 115 160 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
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

/* Begin Operation: { 56 102 72 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 72 113 77 118 }*/
/* End Operation */

/* Begin Operation: { 101 19 109 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 96 113 101 118 }*/
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


Nat4 VPLU_OLD_20_Info_20_Window_2F_Find_20_List_20_View_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_OLD_20_Info_20_Window_2F_Find_20_List_20_View_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 99 114 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 108 33 113 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 44 115 60 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( \'INFO\' 2 )");
/* IO - VPL Root : { 60 144 65 149 }*/
/* End Operation */

/* Begin Operation: { 89 83 105 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Control");
/* IO - VPL Terminal : { 84 108 89 113 }*/
/* IO - VPL Terminal : { 84 144 89 149 }*/
/* IO - VPL Root : { 105 130 110 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 143 24 151 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 112 143 117 }*/
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
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 30 75 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Databrowser Control");
/* IO - VPL Terminal : { 54 96 59 101 }*/
/* IO - VPL Root : { 75 96 80 101 }*/
/* End Operation */

/* Begin Operation: { 59 200 75 263 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( \'INFO\' 2 )");
/* IO - VPL Root : { 75 229 80 234 }*/
/* End Operation */

/* Begin Operation: { 104 67 120 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create From ID");
/* IO - VPL Terminal : { 99 96 104 101 }*/
/* IO - VPL Terminal : { 99 125 104 130 }*/
/* IO - VPL Terminal : { 99 156 104 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 152 24 160 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 147 118 152 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
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
/* IO - VPL Terminal : { 55 114 60 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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


Nat4 VPLU_OLD_20_Info_20_Window_2F_Find_20_Search_20_Text_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_OLD_20_Info_20_Window_2F_Find_20_Search_20_Text_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 111 33 116 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 50 138 66 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( \'INFO\' 1 )");
/* IO - VPL Root : { 66 168 71 173 }*/
/* End Operation */

/* Begin Operation: { 95 85 111 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Control");
/* IO - VPL Terminal : { 90 111 95 116 }*/
/* IO - VPL Terminal : { 90 149 95 154 }*/
/* IO - VPL Root : { 111 129 116 134 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 138 21 146 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 133 111 138 116 }*/
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
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 73 6 89 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"HISearch Field Control");
/* IO - VPL Terminal : { 68 76 73 81 }*/
/* IO - VPL Root : { 89 76 94 81 }*/
/* End Operation */

/* Begin Operation: { 74 189 90 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( \'INFO\' 1 )");
/* IO - VPL Root : { 90 219 95 224 }*/
/* End Operation */

/* Begin Operation: { 117 59 133 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create From ID");
/* IO - VPL Terminal : { 112 76 117 81 }*/
/* IO - VPL Terminal : { 112 114 117 119 }*/
/* IO - VPL Terminal : { 112 155 117 160 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 160 21 168 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 155 115 160 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
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

/* Begin Operation: { 56 102 72 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 72 113 77 118 }*/
/* End Operation */

/* Begin Operation: { 101 19 109 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 96 113 101 118 }*/
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


Nat4 VPLU_OLD_20_Info_20_Window_2F_Find_20_Edit_20_Text_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_OLD_20_Info_20_Window_2F_Find_20_Edit_20_Text_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 111 33 116 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 50 138 66 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( \'INFO\' 4 )");
/* IO - VPL Root : { 66 168 71 173 }*/
/* End Operation */

/* Begin Operation: { 95 85 111 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Control");
/* IO - VPL Terminal : { 90 111 95 116 }*/
/* IO - VPL Terminal : { 90 149 95 154 }*/
/* IO - VPL Root : { 111 129 116 134 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 138 21 146 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 133 111 138 116 }*/
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
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 73 -2 89 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Edit Unicode Text Control");
/* IO - VPL Terminal : { 68 76 73 81 }*/
/* IO - VPL Root : { 89 76 94 81 }*/
/* End Operation */

/* Begin Operation: { 74 189 90 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( \'INFO\' 4 )");
/* IO - VPL Root : { 90 219 95 224 }*/
/* End Operation */

/* Begin Operation: { 117 59 133 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create From ID");
/* IO - VPL Terminal : { 112 76 117 81 }*/
/* IO - VPL Terminal : { 112 114 117 119 }*/
/* IO - VPL Terminal : { 112 155 117 160 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 160 21 168 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 155 115 160 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
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

/* Begin Operation: { 56 102 72 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 72 113 77 118 }*/
/* End Operation */

/* Begin Operation: { 101 19 109 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 96 113 101 118 }*/
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


Nat4 VPLU_OLD_20_Info_20_Window_2F_Set_20_Output_20_Text_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_OLD_20_Info_20_Window_2F_Set_20_Output_20_Text_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 78 33 83 }*/
/* IO - VPL Root : { 28 149 33 154 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 19 78 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Output Text");
/* IO - VPL Terminal : { 57 78 62 83 }*/
/* IO - VPL Root : { 78 78 83 83 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 111 100 127 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Text");
/* IO - VPL Terminal : { 106 121 111 126 }*/
/* IO - VPL Terminal : { 106 149 111 154 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 151 22 159 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_OLD_20_Info_20_Window_2F_Set_20_List_20_View_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_OLD_20_Info_20_Window_2F_Set_20_List_20_View_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 78 33 83 }*/
/* IO - VPL Root : { 28 149 33 154 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 26 78 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find List View");
/* IO - VPL Terminal : { 57 78 62 83 }*/
/* IO - VPL Root : { 78 78 83 83 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 111 73 127 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Content List");
/* IO - VPL Terminal : { 106 110 111 115 }*/
/* IO - VPL Terminal : { 106 149 111 154 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 151 22 159 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_OLD_20_Info_20_Window_2F_Set_20_Search_20_Text_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_OLD_20_Info_20_Window_2F_Set_20_Search_20_Text_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 78 33 83 }*/
/* IO - VPL Root : { 28 149 33 154 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 19 78 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Search Text");
/* IO - VPL Terminal : { 57 78 62 83 }*/
/* IO - VPL Root : { 78 78 83 83 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 111 100 127 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Text");
/* IO - VPL Terminal : { 106 121 111 126 }*/
/* IO - VPL Terminal : { 106 149 111 154 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 151 22 159 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_OLD_20_Info_20_Window_2F_Get_20_Search_20_Text_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_OLD_20_Info_20_Window_2F_Get_20_Search_20_Text_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 62 60 78 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Search Text");
/* IO - VPL Terminal : { 57 119 62 124 }*/
/* IO - VPL Root : { 78 119 83 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 107 80 123 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Text");
/* IO - VPL Terminal : { 102 119 107 124 }*/
/* IO - VPL Root : { 123 119 128 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 151 21 159 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 146 119 151 124 }*/
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

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 61 109 77 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"");
/* IO - VPL Root : { 77 114 82 119 }*/
/* End Operation */

/* Begin Operation: { 106 20 114 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 101 114 106 119 }*/
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


Nat4 VPLU_OLD_20_Info_20_Window_2F_CE_20_HICommand_20_Process_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_OLD_20_Info_20_Window_2F_CE_20_HICommand_20_Process_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 56 33 61 }*/
/* IO - VPL Root : { 28 94 33 99 }*/
/* IO - VPL Root : { 28 132 33 137 }*/
/* IO - VPL Root : { 28 170 33 175 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 80 68 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\'Itoc\'");
/* IO - VPL Terminal : { 47 94 52 99 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 104 8 120 108 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/HIC Contents");
/* IO - VPL Terminal : { 99 56 104 61 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 113 167 129 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"noErr");
/* IO - VPL Root : { 129 182 134 187 }*/
/* End Operation */

/* Begin Operation: { 154 20 162 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 149 114 154 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 93 95 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 56 33 61 }*/
/* IO - VPL Root : { 28 94 33 99 }*/
/* IO - VPL Root : { 28 132 33 137 }*/
/* IO - VPL Root : { 28 170 33 175 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 81 68 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\'Icls\'");
/* IO - VPL Terminal : { 47 94 52 99 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 104 11 120 105 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/HIC Classes");
/* IO - VPL Terminal : { 99 56 104 61 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 113 167 129 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"noErr");
/* IO - VPL Root : { 129 182 134 187 }*/
/* End Operation */

/* Begin Operation: { 154 20 162 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 149 114 154 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 93 95 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 56 33 61 }*/
/* IO - VPL Root : { 28 94 33 99 }*/
/* IO - VPL Root : { 28 132 33 137 }*/
/* IO - VPL Root : { 28 170 33 175 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 81 68 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\'IsrI\'");
/* IO - VPL Terminal : { 47 94 52 99 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 104 -3 120 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/HIC Search Apple");
/* IO - VPL Terminal : { 99 56 104 61 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 113 167 129 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"noErr");
/* IO - VPL Root : { 129 182 134 187 }*/
/* End Operation */

/* Begin Operation: { 154 20 162 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 149 114 154 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 93 95 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 56 33 61 }*/
/* IO - VPL Root : { 28 94 33 99 }*/
/* IO - VPL Root : { 28 132 33 137 }*/
/* IO - VPL Root : { 28 170 33 175 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 80 68 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\'IsrP\'");
/* IO - VPL Terminal : { 47 94 52 99 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 104 13 120 103 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/HIC Search");
/* IO - VPL Terminal : { 99 56 104 61 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 113 167 129 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"noErr");
/* IO - VPL Root : { 129 182 134 187 }*/
/* End Operation */

/* Begin Operation: { 154 20 162 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 149 114 154 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 132 468 }{ 268 302 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 53 33 58 }*/
/* IO - VPL Root : { 28 93 33 98 }*/
/* IO - VPL Root : { 28 139 33 144 }*/
/* IO - VPL Root : { 28 180 33 185 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 182 86 198 251 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Return Event Not Handled");
/* IO - VPL Terminal : { 177 165 182 170 }*/
/* IO - VPL Root : { 198 164 203 169 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 7 73 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Unhandled HICommand");
/* IO - VPL Root : { 73 64 78 69 }*/
/* End Operation */

/* Begin Operation: { 58 128 74 246 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"integer-to-string");
/* IO - VPL Terminal : { 53 185 58 190 }*/
/* IO - VPL Root : { 74 185 79 190 }*/
/* End Operation */

/* Begin Operation: { 95 55 111 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 90 87 95 92 }*/
/* IO - VPL Terminal : { 90 121 95 126 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 216 30 224 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 211 122 216 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,4,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_OLD_20_Info_20_Window_2F_HIC_20_Contents_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_OLD_20_Info_20_Window_2F_HIC_20_Contents_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 310 517 }{ 328 350 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 23 94 123 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Windows Menu");
/* IO - VPL Root : { 94 69 99 74 }*/
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
/* End Operation */

/* Begin Operation: { 116 -131 132 368 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( Window Sections Universals Persistents Classes Methods Attributes \"Class Attributes\" )");
/* IO - VPL Root : { 132 116 137 121 }*/
/* End Operation */

/* Begin Operation: { 161 22 169 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 116 161 121 }*/
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

/* Begin Operation: { 81 139 97 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Errors");
/* IO - VPL Root : { 97 156 102 161 }*/
/* End Operation */

/* Begin Operation: { 55 131 71 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Class Heirarchy");
/* IO - VPL Root : { 71 173 76 178 }*/
/* End Operation */

/* Begin Operation: { 126 134 142 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"pack");
/* IO - VPL Terminal : { 121 144 126 149 }*/
/* IO - VPL Terminal : { 121 156 126 161 }*/
/* IO - VPL Terminal : { 121 173 126 178 }*/
/* IO - VPL Root : { 142 156 147 161 }*/
/* End Operation */

/* Begin Operation: { 165 86 181 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set List View");
/* IO - VPL Terminal : { 160 114 165 119 }*/
/* IO - VPL Terminal : { 160 156 165 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 202 25 210 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_OLD_20_Info_20_Window_2F_HIC_20_Classes_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_OLD_20_Info_20_Window_2F_HIC_20_Classes_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 461 436 }{ 415 338 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 98 75 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 54 156 59 161 }*/
/* IO - VPL Root : { 75 156 80 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 108 110 124 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Classes");
/* IO - VPL Terminal : { 103 156 108 161 }*/
/* IO - VPL Root : { 124 156 129 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 151 173 167 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 167 184 172 189 }*/
/* End Operation */

/* Begin Operation: { 191 132 207 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"First Pass");
/* IO - VPL Terminal : { 186 156 191 161 }*/
/* IO - VPL Terminal : { 186 184 191 189 }*/
/* IO - VPL Root : { 207 156 212 161 }*/
/* IO - VPL Root : { 207 184 212 189 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,2,iList);

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

/* Begin Operation: { 51 40 67 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Super Class");
/* IO - VPL Terminal : { 46 82 51 87 }*/
/* IO - VPL Root : { 67 67 72 72 }*/
/* IO - VPL Root : { 67 96 72 101 }*/
/* End Operation */

/* Begin Operation: { 84 128 100 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 79 136 84 141 }*/
/* IO - VPL Terminal : { 79 146 84 151 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 135 22 143 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 130 82 135 87 }*/
/* IO - VPL Terminal : { 130 148 135 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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
/* IO - VPL Terminal : { 55 82 60 87 }*/
/* IO - VPL Terminal : { 55 146 60 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,2,1);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 233 71 249 245 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Create Class Heirarchy List");
/* IO - VPL Terminal : { 228 156 233 161 }*/
/* IO - VPL Root : { 249 156 254 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 283 86 299 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set List View");
/* IO - VPL Terminal : { 278 114 283 119 }*/
/* IO - VPL Terminal : { 278 156 283 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 330 31 338 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_OLD_20_Info_20_Window_2F_HIC_20_Search_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_OLD_20_Info_20_Window_2F_HIC_20_Search_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 267 289 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 102 80 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Search Text");
/* IO - VPL Terminal : { 59 161 64 166 }*/
/* IO - VPL Root : { 80 161 85 166 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 103 124 119 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Text");
/* IO - VPL Terminal : { 98 161 103 166 }*/
/* IO - VPL Root : { 119 161 124 166 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 147 80 163 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Search For Text");
/* IO - VPL Terminal : { 142 114 147 119 }*/
/* IO - VPL Terminal : { 142 161 147 166 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 189 27 197 219 } */
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


Nat4 VPLU_OLD_20_Info_20_Window_2F_HIC_20_Search_20_Apple_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_OLD_20_Info_20_Window_2F_HIC_20_Search_20_Apple_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 267 289 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 55 80 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Search Text");
/* IO - VPL Terminal : { 59 114 64 119 }*/
/* IO - VPL Root : { 80 114 85 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 103 77 119 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Text");
/* IO - VPL Terminal : { 98 114 103 119 }*/
/* IO - VPL Root : { 119 114 124 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 147 46 163 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"URL Search Apple Dev");
/* IO - VPL Terminal : { 142 114 147 119 }*/
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

/* Start Operations: { 60 60 }{ 387 387 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 39 206 97 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"CF URL");
/* IO - VPL Terminal : { 185 66 190 71 }*/
/* IO - VPL Root : { 206 66 211 71 }*/
/* End Operation */

/* Begin Operation: { 98 42 114 316 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"http://developer.apple.com/cgi-bin/search.pl?q=");
/* IO - VPL Root : { 114 177 119 182 }*/
/* End Operation */

/* Begin Operation: { 145 82 161 349 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"&num=10&ie=utf8&oe=utf8&lr=lang_en&simp=1");
/* IO - VPL Root : { 161 213 166 218 }*/
/* End Operation */

/* Begin Operation: { 53 165 69 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Trim\"");
/* IO - VPL Terminal : { 48 194 53 199 }*/
/* IO - VPL Root : { 69 194 74 199 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 169 206 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 185 177 190 182 }*/
/* IO - VPL Terminal : { 185 194 190 199 }*/
/* IO - VPL Terminal : { 185 213 190 218 }*/
/* IO - VPL Root : { 206 194 211 199 }*/
/* End Operation */

/* Begin Operation: { 238 128 254 258 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create With String");
/* IO - VPL Terminal : { 233 155 238 160 }*/
/* IO - VPL Terminal : { 233 194 238 199 }*/
/* IO - VPL Terminal : { 233 235 238 240 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 238 24 254 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/LS Open URL");
/* IO - VPL Terminal : { 233 66 238 71 }*/
/* IO - VPL Root : { 254 67 259 72 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 276 86 292 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 271 120 276 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 317 24 325 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,3,3,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,1,1,7);
	result = connect_root_to_terminal(ptrA,1,1,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 189 27 197 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
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


Nat4 VPLU_OLD_20_Info_20_Window_2F_Get_20_Project_20_Data_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_OLD_20_Info_20_Window_2F_Get_20_Project_20_Data_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 54 78 70 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 49 108 54 113 }*/
/* IO - VPL Root : { 70 97 75 102 }*/
/* IO - VPL Root : { 70 118 75 123 }*/
/* End Operation */

/* Begin Operation: { 100 21 108 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 95 108 100 113 }*/
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


Nat4 VPLU_OLD_20_Info_20_Window_2F_Search_20_For_20_Text_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_OLD_20_Info_20_Window_2F_Search_20_For_20_Text_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 398 1184 }{ 361 350 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 78 33 83 }*/
/* IO - VPL Root : { 28 120 33 125 }*/
/* IO - VPL Root : { 28 179 33 184 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 91 75 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Trim\"");
/* IO - VPL Terminal : { 54 120 59 125 }*/
/* IO - VPL Root : { 75 120 80 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 97 115 113 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\"\"");
/* IO - VPL Terminal : { 92 120 97 125 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 55 172 71 292 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 50 232 55 237 }*/
/* IO - VPL Root : { 71 232 76 237 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 96 184 112 285 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"get thing info");
/* IO - VPL Terminal : { 91 192 96 197 }*/
/* IO - VPL Terminal : { 91 231 96 236 }*/
/* IO - VPL Terminal : { 91 260 96 265 }*/
/* IO - VPL Root : { 112 207 117 212 }*/
/* IO - VPL Root : { 112 232 117 237 }*/
/* IO - VPL Root : { 112 257 117 262 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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

/* Start Operations: { 60 60 }{ 246 317 } */
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

/* Begin Operation: { 93 196 109 245 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"hint?");
/* IO - VPL Terminal : { 88 218 93 223 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 33 70 94 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 49 61 54 66 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 53 155 69 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"procedure");
/* IO - VPL Terminal : { 48 180 53 185 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 103 28 111 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
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

/* Begin Operation: { 48 110 64 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"procedure");
/* IO - VPL Root : { 64 136 69 141 }*/
/* End Operation */

/* Begin Operation: { 93 40 109 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Library Info");
/* IO - VPL Terminal : { 88 66 93 71 }*/
/* IO - VPL Terminal : { 88 98 93 103 }*/
/* IO - VPL Terminal : { 88 136 93 141 }*/
/* IO - VPL Root : { 109 99 114 104 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 149 41 165 68 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 144 52 149 57 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 145 139 161 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 161 151 166 156 }*/
/* End Operation */

/* Begin Operation: { 190 25 198 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 87 190 92 }*/
/* IO - VPL Terminal : { 185 151 190 156 }*/
/* IO - VPL Terminal : { 185 190 190 195 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,2,3,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 307 329 } */
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

/* Begin Operation: { 54 169 70 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"hint?");
/* IO - VPL Terminal : { 49 191 54 196 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 33 70 94 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 49 61 54 66 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 53 155 69 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"constant");
/* IO - VPL Terminal : { 48 176 53 181 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 103 28 111 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
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

/* Begin Operation: { 54 98 70 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"constant");
/* IO - VPL Root : { 70 120 75 125 }*/
/* End Operation */

/* Begin Operation: { 99 24 115 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Library Info");
/* IO - VPL Terminal : { 94 50 99 55 }*/
/* IO - VPL Terminal : { 94 82 99 87 }*/
/* IO - VPL Terminal : { 94 120 99 125 }*/
/* IO - VPL Root : { 115 83 120 88 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 183 43 199 70 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 178 54 183 59 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 181 141 197 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 197 153 202 158 }*/
/* End Operation */

/* Begin Operation: { 224 27 232 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 219 73 224 78 }*/
/* IO - VPL Terminal : { 219 121 224 126 }*/
/* IO - VPL Terminal : { 219 169 224 174 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,2,3,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 286 295 } */
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

/* Begin Operation: { 54 169 70 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"hint?");
/* IO - VPL Terminal : { 49 191 54 196 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 33 70 94 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 49 61 54 66 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 53 155 69 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"structure");
/* IO - VPL Terminal : { 48 179 53 184 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 103 28 111 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
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

/* Begin Operation: { 51 98 67 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"structure");
/* IO - VPL Root : { 67 123 72 128 }*/
/* End Operation */

/* Begin Operation: { 96 27 112 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Library Info");
/* IO - VPL Terminal : { 91 53 96 58 }*/
/* IO - VPL Terminal : { 91 85 96 90 }*/
/* IO - VPL Terminal : { 91 123 96 128 }*/
/* IO - VPL Root : { 112 86 117 91 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 182 43 198 70 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 177 54 182 59 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 180 141 196 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 196 153 201 158 }*/
/* End Operation */

/* Begin Operation: { 223 27 231 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 218 73 223 78 }*/
/* IO - VPL Terminal : { 218 121 223 126 }*/
/* IO - VPL Terminal : { 218 169 223 174 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,2,3,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 297 298 } */
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

/* Begin Operation: { 54 169 70 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"hint?");
/* IO - VPL Terminal : { 49 191 54 196 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 33 70 94 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 49 61 54 66 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 53 155 69 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"primitive");
/* IO - VPL Terminal : { 48 179 53 184 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 103 28 111 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
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

/* Begin Operation: { 58 96 74 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"primitive");
/* IO - VPL Root : { 74 121 79 126 }*/
/* End Operation */

/* Begin Operation: { 103 25 119 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Library Info");
/* IO - VPL Terminal : { 98 51 103 56 }*/
/* IO - VPL Terminal : { 98 83 103 88 }*/
/* IO - VPL Terminal : { 98 121 103 126 }*/
/* IO - VPL Root : { 119 84 124 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 188 45 204 72 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 183 56 188 61 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 184 142 200 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 200 155 205 160 }*/
/* End Operation */

/* Begin Operation: { 229 29 237 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 224 75 229 80 }*/
/* IO - VPL Terminal : { 224 123 229 128 }*/
/* IO - VPL Terminal : { 224 171 229 176 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,2,3,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 107 107 }{ 200 300 } */
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

/* Begin Operation: { 60 156 76 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 55 184 60 189 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 102 128 118 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 118 143 123 148 }*/
/* End Operation */

/* Begin Operation: { 102 35 118 96 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"No Entry\"");
/* IO - VPL Root : { 118 63 123 68 }*/
/* End Operation */

/* Begin Operation: { 147 17 155 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 142 63 147 68 }*/
/* IO - VPL Terminal : { 142 111 147 116 }*/
/* IO - VPL Terminal : { 142 159 147 164 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,3,0,3,4);
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

/* Begin Operation: { 51 53 67 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"No Entry\"");
/* IO - VPL Root : { 67 82 72 87 }*/
/* End Operation */

/* Begin Operation: { 51 131 67 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 67 146 72 151 }*/
/* End Operation */

/* Begin Operation: { 51 193 67 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"");
/* IO - VPL Root : { 67 198 72 203 }*/
/* End Operation */

/* Begin Operation: { 96 20 104 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 91 66 96 71 }*/
/* IO - VPL Terminal : { 91 114 96 119 }*/
/* IO - VPL Terminal : { 91 162 96 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
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

/* Begin Operation: { 172 212 188 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\n");
/* IO - VPL Root : { 188 215 193 220 }*/
/* End Operation */

/* Begin Operation: { 128 128 144 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"");
/* IO - VPL Root : { 144 133 149 138 }*/
/* End Operation */

/* Begin Operation: { 134 177 150 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Check)");
/* IO - VPL Terminal : { 129 207 134 212 }*/
/* IO - VPL Root : { 150 207 155 212 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 173 113 189 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"attach-l");
/* IO - VPL Terminal : { 168 120 173 125 }*/
/* IO - VPL Terminal : { 168 133 173 138 }*/
/* IO - VPL Terminal : { 168 155 173 160 }*/
/* IO - VPL Root : { 189 145 194 150 }*/
/* End Operation */

/* Begin Operation: { 217 119 233 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(To String)");
/* IO - VPL Terminal : { 212 145 217 150 }*/
/* IO - VPL Terminal : { 212 173 217 178 }*/
/* IO - VPL Root : { 233 159 238 164 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 259 49 275 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Output Text");
/* IO - VPL Terminal : { 254 78 259 83 }*/
/* IO - VPL Terminal : { 254 124 259 129 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 143 28 159 83 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"save?");
/* IO - VPL Terminal : { 138 44 143 49 }*/
/* IO - VPL Terminal : { 138 62 143 67 }*/
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

/* Start Operations: { 60 60 }{ 256 314 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 159 74 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 53 171 58 176 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 58 31 74 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_persistent(tempOperation,environment,"Lookup History");
/* IO - VPL Terminal : { 53 82 58 87 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 94 21 102 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 308 22 316 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,3,0,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,7);
	result = connect_root_to_terminal(ptrA,1,1,1,8);
	result = connect_root_to_terminal(ptrA,1,6,2,8);
	result = connect_root_to_terminal(ptrA,1,7,3,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,1,5,2,9);
	result = connect_root_to_terminal(ptrA,1,0,1,10);
	result = connect_root_to_terminal(ptrA,1,9,2,10);
	result = connect_root_to_terminal(ptrA,1,1,1,11);
	result = connect_root_to_terminal(ptrA,2,4,2,11);
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

/* Begin Operation: { 68 117 84 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"");
/* IO - VPL Root : { 84 122 89 127 }*/
/* End Operation */

/* Begin Operation: { 113 39 129 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Output Text");
/* IO - VPL Terminal : { 108 66 113 71 }*/
/* IO - VPL Terminal : { 108 122 113 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 144 23 152 215 } */
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


Nat4 VPLU_OLD_20_Info_20_Window_2F_Open_20_Once_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_OLD_20_Info_20_Window_2F_Open_20_Once_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 152 346 }{ 252 307 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 71 33 76 }*/
/* IO - VPL Root : { 28 157 33 162 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 28 69 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Desktop");
/* IO - VPL Root : { 69 70 74 75 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 96 33 112 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Windows Type");
/* IO - VPL Terminal : { 91 70 96 75 }*/
/* IO - VPL Terminal : { 91 125 96 130 }*/
/* IO - VPL Root : { 112 97 117 102 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 134 26 150 47 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 129 34 134 39 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 133 107 149 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Find Data");
/* IO - VPL Terminal : { 128 127 133 132 }*/
/* IO - VPL Terminal : { 128 157 133 162 }*/
/* IO - VPL Root : { 149 144 154 149 }*/
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 63 77 79 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 58 136 63 141 }*/
/* IO - VPL Root : { 79 136 84 141 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 104 128 120 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 99 136 104 141 }*/
/* IO - VPL Terminal : { 99 146 104 151 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 143 22 151 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 116 143 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
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

/* Begin Operation: { 57 104 73 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 73 115 78 120 }*/
/* End Operation */

/* Begin Operation: { 102 21 110 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 97 115 102 120 }*/
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

/* Begin Operation: { 168 145 184 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 163 181 168 186 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 167 64 183 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Select");
/* IO - VPL Terminal : { 162 94 167 99 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 208 22 216 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 203 115 208 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,4,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
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

/* Begin Operation: { 57 107 73 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 52 121 57 126 }*/
/* IO - VPL Terminal : { 52 146 57 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 98 21 106 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 93 115 98 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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



	return kNOERROR;
}


Nat4 VPLU_OLD_20_Info_20_Window_2F_Lookup_20_Project_20_Info_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_OLD_20_Info_20_Window_2F_Lookup_20_Project_20_Info_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 145 196 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 49 33 54 }*/
/* IO - VPL Root : { 28 92 33 97 }*/
/* IO - VPL Root : { 28 139 33 144 }*/
/* IO - VPL Root : { 28 183 33 188 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 22 74 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Once");
/* IO - VPL Terminal : { 53 49 58 54 }*/
/* IO - VPL Terminal : { 53 77 58 82 }*/
/* IO - VPL Root : { 74 63 79 68 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 127 74 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Trim\"");
/* IO - VPL Terminal : { 53 156 58 161 }*/
/* IO - VPL Root : { 74 156 79 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 108 12 124 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Search Text");
/* IO - VPL Terminal : { 103 42 108 47 }*/
/* IO - VPL Terminal : { 103 92 108 97 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 108 146 124 264 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Search For Text");
/* IO - VPL Terminal : { 103 175 108 180 }*/
/* IO - VPL Terminal : { 103 207 108 212 }*/
/* IO - VPL Terminal : { 103 237 108 242 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 143 21 151 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,4,0,3,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_OLD_20_Info_20_Window_2F_Get_20_Method_20_Data_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_OLD_20_Info_20_Window_2F_Get_20_Method_20_Data_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 61 101 77 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 77 112 82 117 }*/
/* End Operation */

/* Begin Operation: { 106 20 114 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 101 112 106 117 }*/
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


Nat4 VPLU_OLD_20_Info_20_Window_2F_Search_20_Cancel_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_OLD_20_Info_20_Window_2F_Search_20_Cancel_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 117 33 122 }*/
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



Nat4 VPLC_Info_20_HIToolbar_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Info_20_HIToolbar_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 117 530 }{ 251 464 } */
	tempAttribute = attribute_add("HIObject Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Identifier",tempClass,tempAttribute_Info_20_HIToolbar_2F_Identifier,environment);
	tempAttribute = attribute_add("Attributes",tempClass,tempAttribute_Info_20_HIToolbar_2F_Attributes,environment);
	tempAttribute = attribute_add("Known Items",tempClass,tempAttribute_Info_20_HIToolbar_2F_Known_20_Items,environment);
	tempAttribute = attribute_add("Items",tempClass,tempAttribute_Info_20_HIToolbar_2F_Items,environment);
	tempAttribute = attribute_add("Visible?",tempClass,tempAttribute_Info_20_HIToolbar_2F_Visible_3F_,environment);
	tempAttribute = attribute_add("Supports Drop?",tempClass,tempAttribute_Info_20_HIToolbar_2F_Supports_20_Drop_3F_,environment);
	tempAttribute = attribute_add("Windows",tempClass,tempAttribute_Info_20_HIToolbar_2F_Windows,environment);
	tempAttribute = attribute_add("HIToolbar Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("HIToolbar Events",tempClass,tempAttribute_Info_20_HIToolbar_2F_HIToolbar_20_Events,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"HIToolbar");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
/* Stop Universals */



Nat4 VPLC_VPLInfo_20_View_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLInfo_20_View_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 370 347 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Item Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Frame",tempClass,tempAttribute_VPLInfo_20_View_2F_Frame,environment);
	tempAttribute = attribute_add("Selected",tempClass,tempAttribute_VPLInfo_20_View_2F_Selected,environment);
	tempAttribute = attribute_add("Highlight",tempClass,tempAttribute_VPLInfo_20_View_2F_Highlight,environment);
	tempAttribute = attribute_add("Visible?",tempClass,tempAttribute_VPLInfo_20_View_2F_Visible_3F_,environment);
	tempAttribute = attribute_add("Content",tempClass,tempAttribute_VPLInfo_20_View_2F_Content,environment);
	tempAttribute = attribute_add("Window Origin",tempClass,tempAttribute_VPLInfo_20_View_2F_Window_20_Origin,environment);
	tempAttribute = attribute_add("Viewport Origin",tempClass,tempAttribute_VPLInfo_20_View_2F_Viewport_20_Origin,environment);
	tempAttribute = attribute_add("Select List",tempClass,tempAttribute_VPLInfo_20_View_2F_Select_20_List,environment);
	tempAttribute = attribute_add("Vertical Scroll Bar",tempClass,tempAttribute_VPLInfo_20_View_2F_Vertical_20_Scroll_20_Bar,environment);
	tempAttribute = attribute_add("Horizontal Scroll Bar",tempClass,NULL,environment);
	tempAttribute = attribute_add("Canvas Limits",tempClass,tempAttribute_VPLInfo_20_View_2F_Canvas_20_Limits,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Select View");
	return kNOERROR;
}

/* Start Universals: { 242 1100 }{ 200 300 } */
Nat4 VPLU_VPLInfo_20_View_2F_Erase_20_View_20_CG_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_View_2F_Erase_20_View_20_CG_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 739 1058 }{ 294 385 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 73 35 78 }*/
/* IO - VPL Root : { 30 158 35 163 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 77 158 93 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Get Info");
/* IO - VPL Terminal : { 72 188 77 193 }*/
/* IO - VPL Root : { 93 177 98 182 }*/
/* IO - VPL Root : { 93 201 98 206 }*/
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

/* Start Operations: { 95 90 }{ 388 406 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 75 80 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 117 85 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 113 228 130 306 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 107 265 112 270 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 72 122 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Current Page");
/* IO - VPL Terminal : { 101 117 106 122 }*/
/* IO - VPL Root : { 122 101 127 106 }*/
/* IO - VPL Root : { 122 132 127 137 }*/
/* End Operation */

/* Begin Operation: { 147 239 163 315 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 142 275 147 280 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 68 164 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Standard List?");
/* IO - VPL Terminal : { 143 132 148 137 }*/
/* IO - VPL Root : { 164 132 169 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 120 206 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 185 132 190 137 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 193 193 209 329 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Standard Text?");
/* IO - VPL Terminal : { 188 259 193 264 }*/
/* IO - VPL Root : { 209 259 214 264 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 235 247 251 276 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 230 259 235 264 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 283 22 299 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Topical?");
/* IO - VPL Terminal : { 278 68 283 73 }*/
/* IO - VPL Root : { 299 67 304 72 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 283 139 299 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Title");
/* IO - VPL Terminal : { 278 177 283 182 }*/
/* IO - VPL Root : { 299 177 304 182 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 325 23 333 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 320 85 325 90 }*/
/* IO - VPL Terminal : { 320 149 325 154 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,3,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,2,3,1,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,2,3,1,9);
	result = connect_root_to_terminal(ptrA,2,3,1,10);
	result = connect_root_to_terminal(ptrA,1,9,1,11);
	result = connect_root_to_terminal(ptrA,1,10,2,11);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* Synchro [5 to 4] */
/* End Connect Synchros */

/* End Case */

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

/* Begin Operation: { 64 72 80 101 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 80 84 85 89 }*/
/* End Operation */

/* Begin Operation: { 64 118 80 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Information");
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 64 34 80 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/View Rect");
/* IO - VPL Terminal : { 59 73 64 78 }*/
/* IO - VPL Root : { 80 72 85 77 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 23 122 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"list-to-CGRect");
/* IO - VPL Terminal : { 101 72 106 77 }*/
/* IO - VPL Root : { 122 72 127 77 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 208 101 224 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Paint White");
/* IO - VPL Terminal : { 203 124 208 129 }*/
/* IO - VPL Terminal : { 203 158 208 163 }*/
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

/* Start Operations: { 718 889 }{ 332 328 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 70 35 75 }*/
/* IO - VPL Root : { 30 164 35 169 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 149 206 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1.0");
/* IO - VPL Root : { 206 157 211 162 }*/
/* End Operation */

/* Begin Operation: { 232 68 248 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Fill RGB Color");
/* IO - VPL Terminal : { 227 87 232 92 }*/
/* IO - VPL Terminal : { 227 112 232 117 }*/
/* IO - VPL Terminal : { 227 134 232 139 }*/
/* IO - VPL Terminal : { 227 157 232 162 }*/
/* IO - VPL Terminal : { 227 182 232 187 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 103 228 119 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"2");
/* IO - VPL Root : { 119 231 124 236 }*/
/* End Operation */

/* Begin Operation: { 148 123 164 245 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Fill Rounded Rect");
/* IO - VPL Terminal : { 143 140 148 145 }*/
/* IO - VPL Terminal : { 143 168 148 173 }*/
/* IO - VPL Terminal : { 143 198 148 203 }*/
/* IO - VPL Terminal : { 143 231 148 236 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 22 282 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
	result = connect_root_to_terminal(ptrA,1,1,4,2);
	result = connect_root_to_terminal(ptrA,1,1,5,2);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
	result = connect_root_to_terminal(ptrA,1,0,2,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
	result = connect_root_to_terminal(ptrA,1,3,4,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 2] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 166 102 182 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Paint Stripe");
/* IO - VPL Terminal : { 161 129 166 134 }*/
/* IO - VPL Terminal : { 161 158 166 163 }*/
/* IO - VPL Terminal : { 161 177 166 182 }*/
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

/* Start Operations: { 718 889 }{ 332 328 } */
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

/* Begin Operation: { 54 152 70 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 49 164 54 169 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 190 178 206 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1.0");
/* IO - VPL Root : { 206 186 211 191 }*/
/* End Operation */

/* Begin Operation: { 184 55 200 82 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0.88");
/* IO - VPL Root : { 200 66 205 71 }*/
/* End Operation */

/* Begin Operation: { 191 92 208 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0.8450");
/* IO - VPL Root : { 209 112 214 117 }*/
/* End Operation */

/* Begin Operation: { 232 68 248 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Fill RGB Color");
/* IO - VPL Terminal : { 227 87 232 92 }*/
/* IO - VPL Terminal : { 227 112 232 117 }*/
/* IO - VPL Terminal : { 227 134 232 139 }*/
/* IO - VPL Terminal : { 227 157 232 162 }*/
/* IO - VPL Terminal : { 227 182 232 187 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 103 228 119 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"2");
/* IO - VPL Root : { 119 231 124 236 }*/
/* End Operation */

/* Begin Operation: { 49 52 65 69 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"97");
/* IO - VPL Root : { 65 58 70 63 }*/
/* End Operation */

/* Begin Operation: { 48 90 64 101 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 64 93 69 98 }*/
/* End Operation */

/* Begin Operation: { 94 28 110 92 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"set-nth");
/* IO - VPL Terminal : { 89 42 94 47 }*/
/* IO - VPL Terminal : { 89 58 94 63 }*/
/* IO - VPL Terminal : { 89 74 94 79 }*/
/* IO - VPL Root : { 110 58 115 63 }*/
/* End Operation */

/* Begin Operation: { 129 12 145 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"list-to-CGRect");
/* IO - VPL Terminal : { 124 61 129 66 }*/
/* IO - VPL Root : { 145 61 150 66 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 123 164 245 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Fill Rounded Rect");
/* IO - VPL Terminal : { 143 140 148 145 }*/
/* IO - VPL Terminal : { 143 168 148 173 }*/
/* IO - VPL Terminal : { 143 198 148 203 }*/
/* IO - VPL Terminal : { 143 231 148 236 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 22 282 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,4,3,5);
	result = connect_root_to_terminal(ptrA,1,4,4,5);
	result = connect_root_to_terminal(ptrA,1,2,5,5);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,1,7,2,9);
	result = connect_root_to_terminal(ptrA,1,8,3,9);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
	result = connect_root_to_terminal(ptrA,2,0,1,11);
	result = connect_root_to_terminal(ptrA,1,10,2,11);
	result = connect_root_to_terminal(ptrA,1,6,3,11);
	result = connect_root_to_terminal(ptrA,1,6,4,11);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [11 to 5] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 127 191 143 263 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Box Text");
/* IO - VPL Terminal : { 122 201 127 206 }*/
/* IO - VPL Terminal : { 122 218 127 223 }*/
/* IO - VPL Terminal : { 122 238 127 243 }*/
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

/* Start Operations: { 427 214 }{ 346 414 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 82 49 87 }*/
/* IO - VPL Root : { 44 130 49 135 }*/
/* IO - VPL Root : { 44 178 49 183 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 36 221 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"ensure string");
/* IO - VPL Terminal : { 198 82 203 87 }*/
/* IO - VPL Root : { 222 82 227 87 }*/
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

/* Start Operations: { 60 60 }{ 305 483 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 91 301 107 405 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"To CFStringRef");
/* IO - VPL Terminal : { 86 351 91 356 }*/
/* IO - VPL Root : { 107 351 112 356 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 133 335 150 371 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 127 351 132 356 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 78 84 95 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 96 100 101 105 }*/
/* End Operation */

/* Begin Operation: { 78 142 95 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 96 152 101 157 }*/
/* End Operation */

/* Begin Operation: { 120 50 137 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"CFStringCreateMutable");
/* IO - VPL Terminal : { 114 100 119 105 }*/
/* IO - VPL Terminal : { 114 152 119 157 }*/
/* IO - VPL Root : { 138 126 143 131 }*/
/* End Operation */

/* Begin Operation: { 120 222 137 308 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"To CString");
/* IO - VPL Terminal : { 114 263 119 268 }*/
/* IO - VPL Root : { 138 263 143 268 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 249 179 391 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kCFStringEncodingUTF8");
/* IO - VPL Root : { 180 318 185 323 }*/
/* End Operation */

/* Begin Operation: { 204 150 221 310 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,3,1,"CFStringAppendCString");
/* IO - VPL Terminal : { 198 188 203 193 }*/
/* IO - VPL Terminal : { 198 228 203 233 }*/
/* IO - VPL Terminal : { 198 268 203 273 }*/
/* IO - VPL Root : { 222 228 227 233 }*/
/* End Operation */

/* Begin Operation: { 133 397 150 481 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,0,"CFRelease");
/* IO - VPL Terminal : { 127 437 132 442 }*/
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
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,8);
	result = connect_root_to_terminal(ptrA,1,6,2,8);
	result = connect_root_to_terminal(ptrA,1,7,3,8);
	result = connect_root_to_terminal(ptrA,1,1,1,9);
	result = connect_root_to_terminal(ptrA,1,5,1,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 397 369 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 87 95 261 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kCFStringEncodingMacRoman");
/* IO - VPL Root : { 96 172 101 177 }*/
/* End Operation */

/* Begin Operation: { 120 244 137 298 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Beep");
/* End Operation */

/* Begin Operation: { 120 90 136 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Create CFStringRef");
/* IO - VPL Terminal : { 115 130 120 135 }*/
/* IO - VPL Terminal : { 115 172 120 177 }*/
/* IO - VPL Root : { 136 151 141 156 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 233 178 260 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 157 244 162 249 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 162 41 179 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Encoding warning:");
/* IO - VPL Root : { 180 94 185 99 }*/
/* End Operation */

/* Begin Operation: { 204 40 221 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug Console");
/* IO - VPL Terminal : { 198 94 203 99 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 190 221 260 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,0,"CFShow");
/* IO - VPL Terminal : { 198 223 203 228 }*/
/* End Operation */

/* Begin Operation: { 246 75 263 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 264 91 269 96 }*/
/* End Operation */

/* Begin Operation: { 246 127 263 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 264 137 269 142 }*/
/* End Operation */

/* Begin Operation: { 288 47 305 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,3,1,"CFStringCreateMutableCopy");
/* IO - VPL Terminal : { 282 91 287 96 }*/
/* IO - VPL Terminal : { 282 137 287 142 }*/
/* IO - VPL Terminal : { 282 183 287 188 }*/
/* IO - VPL Root : { 306 137 311 142 }*/
/* End Operation */

/* Begin Operation: { 246 190 263 274 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,0,"CFRelease");
/* IO - VPL Terminal : { 240 230 245 235 }*/
/* End Operation */

/* Begin Operation: { 330 43 338 235 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 324 137 329 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,3,1,7);
	result = connect_root_to_terminal(ptrA,1,8,1,10);
	result = connect_root_to_terminal(ptrA,1,9,2,10);
	result = connect_root_to_terminal(ptrA,1,3,3,10);
	result = connect_root_to_terminal(ptrA,1,3,1,11);
	result = connect_root_to_terminal(ptrA,1,10,1,12);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 311 755 }{ 298 321 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 47 95 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Encoding failure");
/* IO - VPL Root : { 96 94 101 99 }*/
/* End Operation */

/* Begin Operation: { 78 173 95 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Check\"");
/* IO - VPL Terminal : { 72 206 77 211 }*/
/* IO - VPL Root : { 96 206 101 211 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 60 137 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 114 94 119 99 }*/
/* IO - VPL Terminal : { 114 130 119 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
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

/* Begin Operation: { 78 80 94 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"To CFStringRef");
/* IO - VPL Terminal : { 73 130 78 135 }*/
/* IO - VPL Root : { 94 130 99 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 114 137 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 114 130 119 135 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 162 41 170 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 135 161 140 }*/
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

/* Begin Operation: { 78 237 95 295 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"in ref?");
/* IO - VPL Terminal : { 72 264 77 269 }*/
/* IO - VPL Root : { 96 265 101 270 }*/
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

/* Start Operations: { 60 60 }{ 262 589 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 93 95 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 72 130 77 135 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 65 137 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Root : { 138 130 143 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 300 95 330 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0.93");
/* IO - VPL Root : { 96 313 101 318 }*/
/* End Operation */

/* Begin Operation: { 78 363 95 393 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0.93");
/* IO - VPL Root : { 96 376 101 381 }*/
/* End Operation */

/* Begin Operation: { 120 273 137 403 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Fill RGB Color");
/* IO - VPL Terminal : { 114 292 119 297 }*/
/* IO - VPL Terminal : { 114 313 119 318 }*/
/* IO - VPL Terminal : { 114 334 119 339 }*/
/* IO - VPL Terminal : { 114 355 119 360 }*/
/* IO - VPL Terminal : { 114 376 119 381 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 265 179 415 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Stroke RGB Color");
/* IO - VPL Terminal : { 156 288 161 293 }*/
/* IO - VPL Terminal : { 156 313 161 318 }*/
/* IO - VPL Terminal : { 156 338 161 343 }*/
/* IO - VPL Terminal : { 156 363 161 368 }*/
/* IO - VPL Terminal : { 156 388 161 393 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 475 136 492 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"72");
/* IO - VPL Root : { 136 481 141 486 }*/
/* End Operation */

/* Begin Operation: { 162 447 178 519 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,0,"TextSize");
/* IO - VPL Terminal : { 157 481 162 486 }*/
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
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,3,2,5);
	result = connect_root_to_terminal(ptrA,1,3,3,5);
	result = connect_root_to_terminal(ptrA,1,3,4,5);
	result = connect_root_to_terminal(ptrA,1,4,5,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,3,2,6);
	result = connect_root_to_terminal(ptrA,1,3,3,6);
	result = connect_root_to_terminal(ptrA,1,3,4,6);
	result = connect_root_to_terminal(ptrA,1,4,5,6);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,1,2,1,9);
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

/* Begin Operation: { 120 114 137 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
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

/* Begin Operation: { 120 191 137 293 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Make TextInfo");
/* IO - VPL Root : { 138 240 143 245 }*/
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

/* Start Operations: { 60 60 }{ 547 674 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 156 95 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"31");
/* IO - VPL Root : { 96 166 101 171 }*/
/* End Operation */

/* Begin Operation: { 78 36 95 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"HIThemeTextInfo");
/* IO - VPL Root : { 96 86 101 91 }*/
/* End Operation */

/* Begin Operation: { 120 74 137 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"make-external");
/* IO - VPL Terminal : { 114 108 119 113 }*/
/* IO - VPL Terminal : { 114 144 119 149 }*/
/* IO - VPL Root : { 138 127 143 132 }*/
/* End Operation */

/* Begin Operation: { 120 212 137 392 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kHIThemeTextInfoVersionZero");
/* IO - VPL Root : { 138 300 143 305 }*/
/* End Operation */

/* Begin Operation: { 164 191 181 259 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"version");
/* IO - VPL Terminal : { 158 211 163 216 }*/
/* IO - VPL Terminal : { 158 233 163 238 }*/
/* IO - VPL Root : { 182 223 187 228 }*/
/* End Operation */

/* Begin Operation: { 198 310 214 442 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kThemeCurrentPortFont");
/* IO - VPL Root : { 214 374 219 379 }*/
/* End Operation */

/* Begin Operation: { 161 283 177 399 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kThemeStateInactive");
/* IO - VPL Root : { 177 339 182 344 }*/
/* End Operation */

/* Begin Operation: { 204 219 221 273 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"state");
/* IO - VPL Terminal : { 198 235 203 240 }*/
/* IO - VPL Terminal : { 198 253 203 258 }*/
/* IO - VPL Root : { 222 244 227 249 }*/
/* End Operation */

/* Begin Operation: { 246 241 263 303 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"fontID");
/* IO - VPL Terminal : { 240 259 245 264 }*/
/* IO - VPL Terminal : { 240 277 245 282 }*/
/* IO - VPL Root : { 264 270 269 275 }*/
/* End Operation */

/* Begin Operation: { 246 327 263 527 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kHIThemeTextHorizontalFlushLeft");
/* IO - VPL Root : { 264 425 269 430 }*/
/* End Operation */

/* Begin Operation: { 288 253 305 393 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"horizontalFlushness");
/* IO - VPL Terminal : { 282 297 287 302 }*/
/* IO - VPL Terminal : { 282 343 287 348 }*/
/* IO - VPL Root : { 306 321 311 326 }*/
/* End Operation */

/* Begin Operation: { 288 411 305 611 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kHIThemeTextVerticalFlushCenter");
/* IO - VPL Root : { 306 509 311 514 }*/
/* End Operation */

/* Begin Operation: { 330 304 347 428 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"verticalFlushness");
/* IO - VPL Terminal : { 324 343 329 348 }*/
/* IO - VPL Terminal : { 324 384 329 389 }*/
/* IO - VPL Root : { 348 364 353 369 }*/
/* End Operation */

/* Begin Operation: { 330 469 347 493 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 348 479 353 484 }*/
/* End Operation */

/* Begin Operation: { 372 364 389 432 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"options");
/* IO - VPL Terminal : { 366 384 371 389 }*/
/* IO - VPL Terminal : { 366 406 371 411 }*/
/* IO - VPL Root : { 390 396 395 401 }*/
/* End Operation */

/* Begin Operation: { 372 448 389 636 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kHIThemeTextTruncationMiddle");
/* IO - VPL Root : { 390 540 395 545 }*/
/* End Operation */

/* Begin Operation: { 414 355 431 485 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"truncationPosition");
/* IO - VPL Terminal : { 408 396 413 401 }*/
/* IO - VPL Terminal : { 408 439 413 444 }*/
/* IO - VPL Root : { 432 418 437 423 }*/
/* End Operation */

/* Begin Operation: { 414 501 431 525 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 432 511 437 516 }*/
/* End Operation */

/* Begin Operation: { 456 401 473 539 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"truncationMaxLines");
/* IO - VPL Terminal : { 450 445 455 450 }*/
/* IO - VPL Terminal : { 450 491 455 496 }*/
/* IO - VPL Root : { 474 468 479 473 }*/
/* End Operation */

/* Begin Operation: { 498 36 506 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 492 130 497 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,1,6,2,9);
	result = connect_root_to_terminal(ptrA,1,9,1,11);
	result = connect_root_to_terminal(ptrA,1,10,2,11);
	result = connect_root_to_terminal(ptrA,1,11,1,13);
	result = connect_root_to_terminal(ptrA,1,12,2,13);
	result = connect_root_to_terminal(ptrA,1,13,1,15);
	result = connect_root_to_terminal(ptrA,1,14,2,15);
	result = connect_root_to_terminal(ptrA,1,15,1,17);
	result = connect_root_to_terminal(ptrA,1,16,2,17);
	result = connect_root_to_terminal(ptrA,1,17,1,19);
	result = connect_root_to_terminal(ptrA,1,18,2,19);
	result = connect_root_to_terminal(ptrA,1,3,1,20);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 204 207 221 377 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kHIThemeOrientationNormal");
/* IO - VPL Root : { 222 290 227 295 }*/
/* End Operation */

/* Begin Operation: { 162 178 179 256 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"get frame");
/* IO - VPL Terminal : { 156 215 161 220 }*/
/* IO - VPL Root : { 180 215 185 220 }*/
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

/* Start Operations: { 60 60 }{ 475 499 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 138 178 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1000");
/* IO - VPL Root : { 178 151 183 156 }*/
/* End Operation */

/* Begin Operation: { 120 208 136 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"88");
/* IO - VPL Root : { 136 214 141 219 }*/
/* End Operation */

/* Begin Operation: { 78 102 95 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 120 101 125 }*/
/* IO - VPL Root : { 96 140 101 145 }*/
/* End Operation */

/* Begin Operation: { 120 102 136 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,4,"unpack");
/* IO - VPL Terminal : { 115 130 120 135 }*/
/* IO - VPL Root : { 136 108 141 113 }*/
/* IO - VPL Root : { 136 123 141 128 }*/
/* IO - VPL Root : { 136 138 141 143 }*/
/* IO - VPL Root : { 136 153 141 158 }*/
/* End Operation */

/* Begin Operation: { 162 192 178 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"--");
/* IO - VPL Terminal : { 157 202 162 207 }*/
/* IO - VPL Terminal : { 157 214 162 219 }*/
/* IO - VPL Root : { 178 208 183 213 }*/
/* End Operation */

/* Begin Operation: { 120 61 136 78 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"14");
/* IO - VPL Root : { 136 67 141 72 }*/
/* End Operation */

/* Begin Operation: { 162 45 178 83 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 157 55 162 60 }*/
/* IO - VPL Terminal : { 157 67 162 72 }*/
/* IO - VPL Root : { 178 62 183 67 }*/
/* End Operation */

/* Begin Operation: { 204 113 220 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"pack");
/* IO - VPL Terminal : { 199 114 204 119 }*/
/* IO - VPL Terminal : { 199 127 204 132 }*/
/* IO - VPL Terminal : { 199 138 204 143 }*/
/* IO - VPL Terminal : { 199 151 204 156 }*/
/* IO - VPL Root : { 220 135 225 140 }*/
/* End Operation */

/* Begin Operation: { 246 82 263 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"list-to-CGRect");
/* IO - VPL Terminal : { 240 135 245 140 }*/
/* IO - VPL Root : { 264 135 269 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 288 190 305 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"-1");
/* IO - VPL Root : { 306 200 311 205 }*/
/* End Operation */

/* Begin Operation: { 288 150 305 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 306 160 311 165 }*/
/* End Operation */

/* Begin Operation: { 78 182 95 298 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Viewport Origin");
/* IO - VPL Terminal : { 72 238 77 243 }*/
/* IO - VPL Root : { 96 218 101 223 }*/
/* IO - VPL Root : { 96 256 101 261 }*/
/* End Operation */

/* Begin Operation: { 128 289 145 357 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 122 321 127 326 }*/
/* IO - VPL Root : { 146 309 151 314 }*/
/* IO - VPL Root : { 146 331 151 336 }*/
/* End Operation */

/* Begin Operation: { 199 289 216 333 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"-1");
/* IO - VPL Terminal : { 193 309 198 314 }*/
/* IO - VPL Root : { 217 309 222 314 }*/
/* End Operation */

/* Begin Operation: { 330 112 347 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,3,1,"CGRectOffset");
/* IO - VPL Terminal : { 324 135 329 140 }*/
/* IO - VPL Terminal : { 324 160 329 165 }*/
/* IO - VPL Terminal : { 324 185 329 190 }*/
/* IO - VPL Root : { 348 160 353 165 }*/
/* End Operation */

/* Begin Operation: { 372 36 380 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 366 130 371 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,3,4,1,5);
	result = connect_root_to_terminal(ptrA,1,2,2,5);
	result = connect_root_to_terminal(ptrA,2,4,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,5,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,3,4,3,8);
	result = connect_root_to_terminal(ptrA,1,1,4,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,1,0,1,12);
	result = connect_root_to_terminal(ptrA,2,12,1,13);
	result = connect_root_to_terminal(ptrA,1,13,1,14);
	result = connect_root_to_terminal(ptrA,1,9,1,15);
	result = connect_root_to_terminal(ptrA,2,13,2,15);
	result = connect_root_to_terminal(ptrA,1,14,3,15);
	result = connect_root_to_terminal(ptrA,1,15,1,16);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 443 304 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 138 178 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1000");
/* IO - VPL Root : { 178 151 183 156 }*/
/* End Operation */

/* Begin Operation: { 120 208 136 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"88");
/* IO - VPL Root : { 136 214 141 219 }*/
/* End Operation */

/* Begin Operation: { 78 102 95 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 120 101 125 }*/
/* IO - VPL Root : { 96 140 101 145 }*/
/* End Operation */

/* Begin Operation: { 120 102 136 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,4,"unpack");
/* IO - VPL Terminal : { 115 130 120 135 }*/
/* IO - VPL Root : { 136 108 141 113 }*/
/* IO - VPL Root : { 136 123 141 128 }*/
/* IO - VPL Root : { 136 138 141 143 }*/
/* IO - VPL Root : { 136 153 141 158 }*/
/* End Operation */

/* Begin Operation: { 162 192 178 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"--");
/* IO - VPL Terminal : { 157 202 162 207 }*/
/* IO - VPL Terminal : { 157 214 162 219 }*/
/* IO - VPL Root : { 178 208 183 213 }*/
/* End Operation */

/* Begin Operation: { 120 61 136 78 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"14");
/* IO - VPL Root : { 136 67 141 72 }*/
/* End Operation */

/* Begin Operation: { 162 45 178 83 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 157 55 162 60 }*/
/* IO - VPL Terminal : { 157 67 162 72 }*/
/* IO - VPL Root : { 178 62 183 67 }*/
/* End Operation */

/* Begin Operation: { 204 113 220 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"pack");
/* IO - VPL Terminal : { 199 114 204 119 }*/
/* IO - VPL Terminal : { 199 127 204 132 }*/
/* IO - VPL Terminal : { 199 138 204 143 }*/
/* IO - VPL Terminal : { 199 151 204 156 }*/
/* IO - VPL Root : { 220 135 225 140 }*/
/* End Operation */

/* Begin Operation: { 246 82 263 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"list-to-CGRect");
/* IO - VPL Terminal : { 240 135 245 140 }*/
/* IO - VPL Root : { 264 135 269 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 288 190 305 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"-1");
/* IO - VPL Root : { 306 200 311 205 }*/
/* End Operation */

/* Begin Operation: { 288 150 305 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 306 160 311 165 }*/
/* End Operation */

/* Begin Operation: { 330 112 347 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,3,1,"CGRectOffset");
/* IO - VPL Terminal : { 324 135 329 140 }*/
/* IO - VPL Terminal : { 324 160 329 165 }*/
/* IO - VPL Terminal : { 324 185 329 190 }*/
/* IO - VPL Root : { 348 160 353 165 }*/
/* End Operation */

/* Begin Operation: { 372 36 380 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 366 130 371 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,3,4,1,5);
	result = connect_root_to_terminal(ptrA,1,2,2,5);
	result = connect_root_to_terminal(ptrA,2,4,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,5,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,3,4,3,8);
	result = connect_root_to_terminal(ptrA,1,1,4,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,1,9,1,12);
	result = connect_root_to_terminal(ptrA,1,11,2,12);
	result = connect_root_to_terminal(ptrA,1,10,3,12);
	result = connect_root_to_terminal(ptrA,1,12,1,13);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 246 167 263 319 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,5,3,"HIThemeDrawTextBox");
/* IO - VPL Terminal : { 240 190 245 195 }*/
/* IO - VPL Terminal : { 240 215 245 220 }*/
/* IO - VPL Terminal : { 240 240 245 245 }*/
/* IO - VPL Terminal : { 240 265 245 270 }*/
/* IO - VPL Terminal : { 240 290 245 295 }*/
/* IO - VPL Root : { 264 203 269 208 }*/
/* IO - VPL Root : { 264 241 269 246 }*/
/* IO - VPL Root : { 264 279 269 284 }*/
/* End Operation */

/* Begin Operation: { 246 45 262 123 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,0,"CFRelease");
/* IO - VPL Terminal : { 241 82 246 87 }*/
/* End Operation */

/* Begin Operation: { 288 36 296 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,3,3,6);
	result = connect_root_to_terminal(ptrA,1,2,4,6);
	result = connect_root_to_terminal(ptrA,1,4,5,6);
	result = connect_root_to_terminal(ptrA,1,1,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [7 to 6] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 427 214 }{ 502 607 } */
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

/* Begin Operation: { 62 186 78 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"14");
/* IO - VPL Root : { 78 192 83 197 }*/
/* End Operation */

/* Begin Operation: { 65 49 81 109 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,4,"unpack");
/* IO - VPL Terminal : { 60 77 65 82 }*/
/* IO - VPL Root : { 81 55 86 60 }*/
/* IO - VPL Root : { 81 70 86 75 }*/
/* IO - VPL Root : { 81 85 86 90 }*/
/* IO - VPL Root : { 81 100 86 105 }*/
/* End Operation */

/* Begin Operation: { 99 155 115 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 94 165 99 170 }*/
/* IO - VPL Terminal : { 94 177 99 182 }*/
/* IO - VPL Root : { 115 172 120 177 }*/
/* End Operation */

/* Begin Operation: { 60 138 76 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"88");
/* IO - VPL Root : { 76 144 81 149 }*/
/* End Operation */

/* Begin Operation: { 96 92 112 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"--");
/* IO - VPL Terminal : { 91 102 96 107 }*/
/* IO - VPL Terminal : { 91 114 96 119 }*/
/* IO - VPL Root : { 112 108 117 113 }*/
/* End Operation */

/* Begin Operation: { 91 61 107 92 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1000");
/* IO - VPL Root : { 107 74 112 79 }*/
/* End Operation */

/* Begin Operation: { 136 36 152 84 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"pack");
/* IO - VPL Terminal : { 131 37 136 42 }*/
/* IO - VPL Terminal : { 131 50 136 55 }*/
/* IO - VPL Terminal : { 131 61 136 66 }*/
/* IO - VPL Terminal : { 131 74 136 79 }*/
/* IO - VPL Root : { 152 58 157 63 }*/
/* End Operation */

/* Begin Operation: { 210 91 226 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"list-to-Rect");
/* IO - VPL Terminal : { 205 146 210 151 }*/
/* IO - VPL Root : { 226 146 231 151 }*/
/* End Operation */

/* Begin Operation: { 252 34 268 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"To CFStringRef");
/* IO - VPL Terminal : { 247 84 252 89 }*/
/* IO - VPL Root : { 268 84 273 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 252 178 268 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 268 191 273 196 }*/
/* End Operation */

/* Begin Operation: { 252 239 268 266 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 268 250 273 255 }*/
/* End Operation */

/* Begin Operation: { 141 105 157 237 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kThemeCurrentPortFont");
/* IO - VPL Root : { 157 169 162 174 }*/
/* End Operation */

/* Begin Operation: { 170 167 186 275 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kThemeStateActive");
/* IO - VPL Root : { 186 219 191 224 }*/
/* End Operation */

/* Begin Operation: { 249 159 265 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 265 162 270 167 }*/
/* End Operation */

/* Begin Operation: { 175 463 191 480 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"72");
/* IO - VPL Root : { 191 469 196 474 }*/
/* End Operation */

/* Begin Operation: { 49 410 65 543 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( 61000 61000 61000 )");
/* IO - VPL Root : { 65 474 70 479 }*/
/* End Operation */

/* Begin Operation: { 94 421 110 529 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"list-to-RGB");
/* IO - VPL Terminal : { 89 474 94 479 }*/
/* IO - VPL Root : { 110 474 115 479 }*/
/* End Operation */

/* Begin Operation: { 136 429 152 524 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,0,"RGBForeColor");
/* IO - VPL Terminal : { 131 474 136 479 }*/
/* End Operation */

/* Begin Operation: { 220 435 236 507 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,0,"TextSize");
/* IO - VPL Terminal : { 215 469 220 474 }*/
/* End Operation */

/* Begin Operation: { 205 186 221 302 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kThemeStateInactive");
/* IO - VPL Root : { 221 242 226 247 }*/
/* End Operation */

/* Begin Operation: { 294 68 310 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,7,2,"DrawThemeTextBox");
/* IO - VPL Terminal : { 289 82 294 87 }*/
/* IO - VPL Terminal : { 289 98 294 103 }*/
/* IO - VPL Terminal : { 289 114 294 119 }*/
/* IO - VPL Terminal : { 289 130 294 135 }*/
/* IO - VPL Terminal : { 289 146 294 151 }*/
/* IO - VPL Terminal : { 289 162 294 167 }*/
/* IO - VPL Terminal : { 289 178 294 183 }*/
/* IO - VPL Root : { 310 109 315 114 }*/
/* IO - VPL Root : { 310 152 315 157 }*/
/* End Operation */

/* Begin Operation: { 336 47 352 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,0,"CFRelease");
/* IO - VPL Terminal : { 331 84 336 89 }*/
/* End Operation */

/* Begin Operation: { 323 306 339 438 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Set Standard Colors");
/* End Operation */

/* Begin Operation: { 398 26 406 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,3,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,3,2,7);
	result = connect_root_to_terminal(ptrA,3,2,3,7);
	result = connect_root_to_terminal(ptrA,1,6,4,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,1,16,1,17);
	result = connect_root_to_terminal(ptrA,1,17,1,18);
	result = connect_root_to_terminal(ptrA,1,15,1,19);
	result = connect_root_to_terminal(ptrA,1,9,1,21);
	result = connect_root_to_terminal(ptrA,1,12,2,21);
	result = connect_root_to_terminal(ptrA,1,20,3,21);
	result = connect_root_to_terminal(ptrA,1,10,4,21);
	result = connect_root_to_terminal(ptrA,1,8,5,21);
	result = connect_root_to_terminal(ptrA,1,14,6,21);
	result = connect_root_to_terminal(ptrA,1,11,7,21);
	result = connect_root_to_terminal(ptrA,1,9,1,22);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [19 to 18] */
/* Synchro [21 to 19] */
/* Synchro [22 to 21] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 250 23 258 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,2,0,2,5);
	result = connect_root_to_terminal(ptrA,1,1,3,5);
	result = connect_root_to_terminal(ptrA,2,1,1,6);
	result = connect_root_to_terminal(ptrA,1,0,2,6);
	result = connect_root_to_terminal(ptrA,2,0,3,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [5 to 4] */
/* Synchro [6 to 5] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 739 1058 }{ 236 379 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 73 35 78 }*/
/* IO - VPL Root : { 30 158 35 163 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 148 80 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Text View?");
/* IO - VPL Terminal : { 59 188 64 193 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 95 90 }{ 297 302 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 75 80 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 117 85 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 72 122 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Current Page");
/* IO - VPL Terminal : { 101 117 106 122 }*/
/* IO - VPL Root : { 122 101 127 106 }*/
/* IO - VPL Root : { 122 132 127 137 }*/
/* End Operation */

/* Begin Operation: { 148 66 164 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Standard Text?");
/* IO - VPL Terminal : { 143 132 148 137 }*/
/* IO - VPL Root : { 164 132 169 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 120 206 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 185 132 190 137 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 232 23 240 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 64 34 80 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/View Rect");
/* IO - VPL Terminal : { 59 73 64 78 }*/
/* IO - VPL Root : { 80 72 85 77 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 23 122 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"list-to-CGRect");
/* IO - VPL Terminal : { 101 72 106 77 }*/
/* IO - VPL Root : { 122 72 127 77 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 101 164 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Paint White");
/* IO - VPL Terminal : { 143 124 148 129 }*/
/* IO - VPL Terminal : { 143 158 148 163 }*/
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

/* Start Operations: { 718 889 }{ 332 328 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 70 35 75 }*/
/* IO - VPL Root : { 30 164 35 169 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 149 206 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1.0");
/* IO - VPL Root : { 206 157 211 162 }*/
/* End Operation */

/* Begin Operation: { 232 68 248 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Fill RGB Color");
/* IO - VPL Terminal : { 227 87 232 92 }*/
/* IO - VPL Terminal : { 227 112 232 117 }*/
/* IO - VPL Terminal : { 227 134 232 139 }*/
/* IO - VPL Terminal : { 227 157 232 162 }*/
/* IO - VPL Terminal : { 227 182 232 187 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 103 228 119 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"2");
/* IO - VPL Root : { 119 231 124 236 }*/
/* End Operation */

/* Begin Operation: { 148 123 164 245 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Fill Rounded Rect");
/* IO - VPL Terminal : { 143 140 148 145 }*/
/* IO - VPL Terminal : { 143 168 148 173 }*/
/* IO - VPL Terminal : { 143 198 148 203 }*/
/* IO - VPL Terminal : { 143 231 148 236 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 22 282 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
	result = connect_root_to_terminal(ptrA,1,1,4,2);
	result = connect_root_to_terminal(ptrA,1,1,5,2);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
	result = connect_root_to_terminal(ptrA,1,0,2,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
	result = connect_root_to_terminal(ptrA,1,3,4,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 2] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 23 198 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

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

/* Begin Operation: { 64 59 80 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Erase View CG");
/* IO - VPL Terminal : { 59 88 64 93 }*/
/* IO - VPL Terminal : { 59 137 64 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 106 22 114 214 } */
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


Nat4 VPLU_VPLInfo_20_View_2F_Align_20_Content_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_View_2F_Align_20_Content_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 174 371 }{ 254 316 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 216 80 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 80 219 85 224 }*/
/* End Operation */

/* Begin Operation: { 64 31 80 95 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Content");
/* IO - VPL Terminal : { 59 61 64 66 }*/
/* IO - VPL Root : { 80 50 85 55 }*/
/* IO - VPL Root : { 80 71 85 76 }*/
/* End Operation */

/* Begin Operation: { 106 39 122 107 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 101 71 106 76 }*/
/* IO - VPL Root : { 122 59 127 64 }*/
/* IO - VPL Root : { 122 81 127 86 }*/
/* End Operation */

/* Begin Operation: { 64 129 80 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Banner?");
/* IO - VPL Terminal : { 59 160 64 165 }*/
/* IO - VPL Root : { 80 160 85 165 }*/
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

/* Start Operations: { 60 60 }{ 335 313 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 72 80 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 115 85 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 70 122 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Current Page");
/* IO - VPL Terminal : { 101 115 106 120 }*/
/* IO - VPL Root : { 122 99 127 104 }*/
/* IO - VPL Root : { 122 130 127 135 }*/
/* End Operation */

/* Begin Operation: { 148 22 164 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Standard List?");
/* IO - VPL Terminal : { 143 85 148 90 }*/
/* IO - VPL Root : { 164 84 169 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 72 206 101 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 185 84 190 89 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 148 179 164 275 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Search?");
/* IO - VPL Terminal : { 143 228 148 233 }*/
/* IO - VPL Root : { 164 228 169 233 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 216 206 245 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 185 228 190 233 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 232 116 248 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"40");
/* IO - VPL Root : { 248 122 253 127 }*/
/* End Operation */

/* Begin Operation: { 274 28 282 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 269 122 274 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
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

/* Begin Operation: { 66 111 82 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 82 114 87 119 }*/
/* End Operation */

/* Begin Operation: { 111 20 119 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 106 114 111 119 }*/
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

/* Begin Operation: { 106 148 122 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 101 160 106 165 }*/
/* IO - VPL Terminal : { 101 180 106 185 }*/
/* IO - VPL Root : { 122 170 127 175 }*/
/* End Operation */

/* Begin Operation: { 148 61 164 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Relocate");
/* IO - VPL Terminal : { 143 81 148 86 }*/
/* IO - VPL Terminal : { 143 112 148 117 }*/
/* IO - VPL Root : { 164 112 169 117 }*/
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

/* Start Operations: { 408 223 }{ 300 294 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 140 80 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Location");
/* IO - VPL Terminal : { 59 166 64 171 }*/
/* IO - VPL Terminal : { 59 207 64 212 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 22 80 98 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Size");
/* IO - VPL Terminal : { 59 59 64 64 }*/
/* IO - VPL Root : { 80 59 85 64 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 44 122 104 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 101 72 106 77 }*/
/* IO - VPL Root : { 122 60 127 65 }*/
/* IO - VPL Root : { 122 83 127 88 }*/
/* End Operation */

/* Begin Operation: { 161 129 177 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 177 132 182 137 }*/
/* End Operation */

/* Begin Operation: { 128 45 144 56 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 144 48 149 53 }*/
/* End Operation */

/* Begin Operation: { 173 38 189 76 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 168 48 173 53 }*/
/* IO - VPL Terminal : { 168 60 173 65 }*/
/* IO - VPL Root : { 189 55 194 60 }*/
/* End Operation */

/* Begin Operation: { 203 101 219 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 198 111 203 116 }*/
/* IO - VPL Terminal : { 198 132 203 137 }*/
/* IO - VPL Root : { 219 123 224 128 }*/
/* End Operation */

/* Begin Operation: { 245 136 261 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Add Point");
/* IO - VPL Terminal : { 240 158 245 163 }*/
/* IO - VPL Terminal : { 240 182 245 187 }*/
/* IO - VPL Root : { 261 171 266 176 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 287 21 295 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 282 115 287 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,3,2,6);
	result = connect_root_to_terminal(ptrA,1,3,1,7);
	result = connect_root_to_terminal(ptrA,1,4,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,2,0,2,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 29 198 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,1,2,5);
	result = connect_root_to_terminal(ptrA,2,3,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,6,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLInfo_20_View_2F_Resize_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_View_2F_Resize_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 64 62 80 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"VPLView/Resize");
/* IO - VPL Terminal : { 59 97 64 102 }*/
/* IO - VPL Terminal : { 59 134 64 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 60 122 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Redraw");
/* IO - VPL Terminal : { 101 84 106 89 }*/
/* IO - VPL Terminal : { 101 106 106 111 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 24 156 216 } */
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

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 598 675 }{ 329 379 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 68 35 73 }*/
/* IO - VPL Root : { 30 144 35 149 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 59 80 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 59 97 64 102 }*/
/* IO - VPL Root : { 80 89 85 94 }*/
/* IO - VPL Root : { 80 105 85 110 }*/
/* End Operation */

/* Begin Operation: { 106 87 122 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,4,"unpack");
/* IO - VPL Terminal : { 101 127 106 132 }*/
/* IO - VPL Root : { 122 96 127 101 }*/
/* IO - VPL Root : { 122 113 127 118 }*/
/* IO - VPL Root : { 122 130 127 135 }*/
/* IO - VPL Root : { 122 151 127 156 }*/
/* End Operation */

/* Begin Operation: { 64 181 80 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 59 209 64 214 }*/
/* IO - VPL Root : { 80 195 85 200 }*/
/* IO - VPL Root : { 80 221 85 226 }*/
/* End Operation */

/* Begin Operation: { 148 195 164 267 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"iplus");
/* IO - VPL Terminal : { 143 218 148 223 }*/
/* IO - VPL Terminal : { 143 243 148 248 }*/
/* IO - VPL Root : { 164 230 169 235 }*/
/* End Operation */

/* Begin Operation: { 148 107 164 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"iplus");
/* IO - VPL Terminal : { 143 130 148 135 }*/
/* IO - VPL Terminal : { 143 155 148 160 }*/
/* IO - VPL Root : { 164 142 169 147 }*/
/* End Operation */

/* Begin Operation: { 190 101 206 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"pack");
/* IO - VPL Terminal : { 185 110 190 115 }*/
/* IO - VPL Terminal : { 185 124 190 129 }*/
/* IO - VPL Terminal : { 185 140 190 145 }*/
/* IO - VPL Terminal : { 185 158 190 163 }*/
/* IO - VPL Root : { 206 135 211 140 }*/
/* End Operation */

/* Begin Operation: { 232 33 248 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Frame");
/* IO - VPL Terminal : { 227 68 232 73 }*/
/* IO - VPL Terminal : { 227 105 232 110 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 231 175 247 277 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Resize content");
/* IO - VPL Terminal : { 226 190 231 195 }*/
/* IO - VPL Terminal : { 226 252 231 257 }*/
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
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 54 80 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Content");
/* IO - VPL Terminal : { 59 84 64 89 }*/
/* IO - VPL Root : { 80 73 85 78 }*/
/* IO - VPL Root : { 80 94 85 99 }*/
/* End Operation */

/* Begin Operation: { 106 103 122 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Resize");
/* IO - VPL Terminal : { 101 123 106 128 }*/
/* IO - VPL Terminal : { 101 148 106 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 148 24 156 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 185 255 201 325 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Redraw");
/* IO - VPL Terminal : { 180 276 185 281 }*/
/* IO - VPL Terminal : { 180 301 185 306 }*/
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
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,4,2,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
	result = connect_root_to_terminal(ptrA,3,2,1,5);
	result = connect_root_to_terminal(ptrA,1,3,2,5);
	result = connect_root_to_terminal(ptrA,1,2,1,6);
	result = connect_root_to_terminal(ptrA,2,2,2,6);
	result = connect_root_to_terminal(ptrA,1,5,3,6);
	result = connect_root_to_terminal(ptrA,1,4,4,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,0,1,8);
	result = connect_root_to_terminal(ptrA,2,0,2,8);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLInfo_20_View_2F_Create_20_Banner_20_Item_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_View_2F_Create_20_Banner_20_Item_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 308 336 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 67 35 72 }*/
/* IO - VPL Root : { 30 162 35 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 57 121 67 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 121 60 126 65 }*/
/* End Operation */

/* Begin Operation: { 64 138 80 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 80 141 85 146 }*/
/* End Operation */

/* Begin Operation: { 106 91 122 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"row width");
/* IO - VPL Terminal : { 101 115 106 120 }*/
/* IO - VPL Terminal : { 101 141 106 146 }*/
/* IO - VPL Root : { 122 128 127 133 }*/
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

/* Start Operations: { 60 60 }{ 275 369 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 44 80 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/View Size");
/* IO - VPL Terminal : { 59 84 64 89 }*/
/* IO - VPL Root : { 80 84 85 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 44 122 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 101 84 106 89 }*/
/* IO - VPL Root : { 122 71 127 76 }*/
/* IO - VPL Root : { 122 99 127 104 }*/
/* End Operation */

/* Begin Operation: { 64 157 80 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"2");
/* IO - VPL Root : { 80 160 85 165 }*/
/* End Operation */

/* Begin Operation: { 106 142 122 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"*");
/* IO - VPL Terminal : { 101 150 106 155 }*/
/* IO - VPL Terminal : { 101 160 106 165 }*/
/* IO - VPL Root : { 122 156 127 161 }*/
/* End Operation */

/* Begin Operation: { 148 105 164 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"-");
/* IO - VPL Terminal : { 143 113 148 118 }*/
/* IO - VPL Terminal : { 143 123 148 128 }*/
/* IO - VPL Root : { 164 118 169 123 }*/
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
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,2,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 148 77 164 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"create banner");
/* IO - VPL Terminal : { 143 99 148 104 }*/
/* IO - VPL Terminal : { 143 123 148 128 }*/
/* IO - VPL Terminal : { 143 147 148 152 }*/
/* IO - VPL Root : { 164 108 169 113 }*/
/* IO - VPL Root : { 164 141 169 146 }*/
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

/* Start Operations: { 60 60 }{ 354 433 } */
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

/* Begin Operation: { 50 211 66 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"36");
/* IO - VPL Root : { 66 217 71 222 }*/
/* End Operation */

/* Begin Operation: { 158 209 174 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 153 217 158 222 }*/
/* IO - VPL Terminal : { 153 227 158 232 }*/
/* IO - VPL Root : { 174 222 179 227 }*/
/* End Operation */

/* Begin Operation: { 101 20 117 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Select Banner View");
/* IO - VPL Terminal : { 96 82 101 87 }*/
/* IO - VPL Root : { 117 82 122 87 }*/
/* End Operation */

/* Begin Operation: { 58 171 74 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( 0 4 )");
/* IO - VPL Root : { 74 188 79 193 }*/
/* End Operation */

/* Begin Operation: { 95 173 111 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"attach-r");
/* IO - VPL Terminal : { 90 194 95 199 }*/
/* IO - VPL Terminal : { 90 217 95 222 }*/
/* IO - VPL Terminal : { 90 233 95 238 }*/
/* IO - VPL Root : { 111 206 116 211 }*/
/* End Operation */

/* Begin Operation: { 163 103 179 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Frame");
/* IO - VPL Terminal : { 158 126 163 131 }*/
/* IO - VPL Terminal : { 158 161 163 166 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 209 159 225 237 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Initialize");
/* IO - VPL Terminal : { 204 180 209 185 }*/
/* IO - VPL Terminal : { 204 216 209 221 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 276 27 284 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 271 89 276 94 }*/
/* IO - VPL Terminal : { 271 153 276 158 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,1,2,5);
	result = connect_root_to_terminal(ptrA,2,0,3,5);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,3,1,7);
	result = connect_root_to_terminal(ptrA,3,0,2,7);
	result = connect_root_to_terminal(ptrA,1,2,1,8);
	result = connect_root_to_terminal(ptrA,1,3,2,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 138 206 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 185 159 190 164 }*/
/* IO - VPL Root : { 206 159 211 164 }*/
/* End Operation */

/* Begin Operation: { 232 28 240 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 93 232 98 }*/
/* IO - VPL Terminal : { 227 159 232 164 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,2,0,3,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 3] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLInfo_20_View_2F_Advance_20_Focus_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_View_2F_Advance_20_Focus_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 536 1033 }{ 479 429 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 78 35 83 }*/
/* IO - VPL Root : { 30 153 35 158 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 162 80 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"-1");
/* IO - VPL Root : { 80 168 85 173 }*/
/* End Operation */

/* Begin Operation: { 64 195 80 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 80 198 85 203 }*/
/* End Operation */

/* Begin Operation: { 106 140 122 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"choose");
/* IO - VPL Terminal : { 101 153 106 158 }*/
/* IO - VPL Terminal : { 101 168 106 173 }*/
/* IO - VPL Terminal : { 101 183 106 188 }*/
/* IO - VPL Root : { 122 168 127 173 }*/
/* End Operation */

/* Begin Operation: { 106 48 122 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Content");
/* IO - VPL Terminal : { 101 78 106 83 }*/
/* IO - VPL Root : { 122 67 127 72 }*/
/* IO - VPL Root : { 122 88 127 93 }*/
/* End Operation */

/* Begin Operation: { 148 48 164 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"current index");
/* IO - VPL Terminal : { 143 78 148 83 }*/
/* IO - VPL Terminal : { 143 110 148 115 }*/
/* IO - VPL Root : { 164 94 169 99 }*/
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

/* Start Operations: { 60 60 }{ 346 322 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 45 80 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Select List");
/* IO - VPL Terminal : { 59 84 64 89 }*/
/* IO - VPL Root : { 80 70 85 75 }*/
/* IO - VPL Root : { 80 97 85 102 }*/
/* End Operation */

/* Begin Operation: { 106 22 122 88 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 101 53 106 58 }*/
/* IO - VPL Root : { 122 53 127 58 }*/
/* End Operation */

/* Begin Operation: { 148 50 164 61 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"1");
/* IO - VPL Terminal : { 143 53 148 58 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 100 134 116 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"unpack");
/* IO - VPL Terminal : { 95 162 100 167 }*/
/* IO - VPL Root : { 116 162 121 167 }*/
/* End Operation */

/* Begin Operation: { 148 136 164 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(in)");
/* IO - VPL Terminal : { 143 148 148 153 }*/
/* IO - VPL Terminal : { 143 162 148 167 }*/
/* IO - VPL Root : { 164 156 169 161 }*/
/* End Operation */

/* Begin Operation: { 190 34 198 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 128 190 133 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,2,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 168 298 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 113 80 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 146 206 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 185 156 190 161 }*/
/* IO - VPL Terminal : { 185 168 190 173 }*/
/* IO - VPL Root : { 206 162 211 167 }*/
/* End Operation */

/* Begin Operation: { 190 96 206 107 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 206 99 211 104 }*/
/* End Operation */

/* Begin Operation: { 148 184 164 250 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 143 215 148 220 }*/
/* IO - VPL Root : { 164 215 169 220 }*/
/* End Operation */

/* Begin Operation: { 232 142 248 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Between Wrap");
/* IO - VPL Terminal : { 227 165 232 170 }*/
/* IO - VPL Terminal : { 227 190 232 195 }*/
/* IO - VPL Terminal : { 227 215 232 220 }*/
/* IO - VPL Root : { 248 190 253 195 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 189 237 205 275 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 184 254 189 259 }*/
/* IO - VPL Root : { 205 254 210 259 }*/
/* End Operation */

/* Begin Operation: { 274 262 290 292 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 269 270 274 275 }*/
/* IO - VPL Terminal : { 269 280 274 285 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 274 191 290 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 269 199 274 204 }*/
/* IO - VPL Terminal : { 269 209 274 214 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 274 72 290 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Safe Get)");
/* IO - VPL Terminal : { 269 88 274 93 }*/
/* IO - VPL Terminal : { 269 122 274 127 }*/
/* IO - VPL Root : { 290 110 295 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 316 43 332 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Select List");
/* IO - VPL Terminal : { 311 77 316 82 }*/
/* IO - VPL Terminal : { 311 113 316 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 416 24 424 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,2,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,3,2,6);
	result = connect_root_to_terminal(ptrA,2,4,1,8);
	result = connect_root_to_terminal(ptrA,1,7,1,9);
	result = connect_root_to_terminal(ptrA,1,6,2,9);
	result = connect_root_to_terminal(ptrA,1,8,3,9);
	result = connect_root_to_terminal(ptrA,1,8,1,10);
	result = connect_root_to_terminal(ptrA,1,6,1,11);
	result = connect_root_to_terminal(ptrA,1,10,2,11);
	result = connect_root_to_terminal(ptrA,1,5,1,12);
	result = connect_root_to_terminal(ptrA,1,9,2,12);
	result = connect_root_to_terminal(ptrA,2,4,1,13);
	result = connect_root_to_terminal(ptrA,1,9,2,13);
	result = connect_root_to_terminal(ptrA,1,0,1,14);
	result = connect_root_to_terminal(ptrA,1,13,2,14);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [12 to 11] */
/* Synchro [13 to 12] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 536 1033 }{ 200 300 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 98 49 103 }*/
/* IO - VPL Root : { 44 162 49 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 57 94 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Select List");
/* IO - VPL Terminal : { 73 84 78 89 }*/
/* IO - VPL Terminal : { 73 133 78 138 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 97 137 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"focus search field?");
/* IO - VPL Terminal : { 114 157 119 162 }*/
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

/* Start Operations: { 60 60 }{ 257 269 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 85 94 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window");
/* IO - VPL Terminal : { 73 130 78 135 }*/
/* IO - VPL Root : { 94 129 99 134 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 92 137 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 114 129 119 134 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 162 64 178 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Focus Search Text");
/* IO - VPL Terminal : { 157 128 162 133 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
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
	result = connect_root_to_terminal(ptrA,1,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLInfo_20_View_2F_Setup_20_Drawing_20_CG_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_View_2F_Setup_20_Drawing_20_CG_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 335 185 }{ 272 290 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 82 35 87 }*/
/* IO - VPL Root : { 30 157 35 162 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 38 122 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window");
/* IO - VPL Terminal : { 101 82 106 87 }*/
/* IO - VPL Root : { 122 82 127 87 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 146 222 162 249 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 141 233 146 238 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 64 28 80 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Up Drawing");
/* IO - VPL Terminal : { 59 82 64 87 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 45 164 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Sync CGContext Origin");
/* IO - VPL Terminal : { 143 87 148 92 }*/
/* IO - VPL Terminal : { 143 157 148 162 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 2] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 335 185 }{ 200 300 } */
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


/* Stop Universals */



Nat4 VPLC_VPLInfo_20_Text_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLInfo_20_Text_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Item Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_VPLInfo_20_Text_2F_Name,environment);
	tempAttribute = attribute_add("Frame",tempClass,tempAttribute_VPLInfo_20_Text_2F_Frame,environment);
	tempAttribute = attribute_add("Selected",tempClass,tempAttribute_VPLInfo_20_Text_2F_Selected,environment);
	tempAttribute = attribute_add("Highlight",tempClass,tempAttribute_VPLInfo_20_Text_2F_Highlight,environment);
	tempAttribute = attribute_add("Visible?",tempClass,tempAttribute_VPLInfo_20_Text_2F_Visible_3F_,environment);
	tempAttribute = attribute_add("Text Editor",tempClass,NULL,environment);
	tempAttribute = attribute_add("Text",tempClass,NULL,environment);
	tempAttribute = attribute_add("Dirty",tempClass,tempAttribute_VPLInfo_20_Text_2F_Dirty,environment);
	tempAttribute = attribute_add("Justification",tempClass,tempAttribute_VPLInfo_20_Text_2F_Justification,environment);
	tempAttribute = attribute_add("Editable?",tempClass,tempAttribute_VPLInfo_20_Text_2F_Editable_3F_,environment);
	tempAttribute = attribute_add("Data",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLEdit Text");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
Nat4 VPLU_VPLInfo_20_Text_2F_Process_20_Click_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Text_2F_Process_20_Click_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 68 33 73 }*/
/* IO - VPL Root : { 28 158 33 163 }*/
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


Nat4 VPLU_VPLInfo_20_Text_2F_Resize_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Text_2F_Resize_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 263 304 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 82 35 87 }*/
/* IO - VPL Root : { 30 161 35 166 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 99 80 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Size");
/* IO - VPL Terminal : { 59 137 64 142 }*/
/* IO - VPL Root : { 80 136 85 141 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 113 122 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Add Point");
/* IO - VPL Terminal : { 101 136 106 141 }*/
/* IO - VPL Terminal : { 101 161 106 166 }*/
/* IO - VPL Root : { 122 149 127 154 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 62 164 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Size");
/* IO - VPL Terminal : { 143 82 148 87 }*/
/* IO - VPL Terminal : { 143 113 148 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 31 198 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLInfo_20_Text_2F_Create_20_HIThemeTextInfo_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Text_2F_Create_20_HIThemeTextInfo_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 547 674 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 128 50 133 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 441 178 476 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 178 456 183 461 }*/
/* End Operation */

/* Begin Operation: { 162 396 178 425 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 178 408 183 413 }*/
/* End Operation */

/* Begin Operation: { 162 331 178 380 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"list item");
/* IO - VPL Root : { 178 353 183 358 }*/
/* End Operation */

/* Begin Operation: { 204 318 220 442 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Set Operation Font");
/* IO - VPL Terminal : { 199 353 204 358 }*/
/* IO - VPL Terminal : { 199 400 204 405 }*/
/* IO - VPL Terminal : { 199 431 204 436 }*/
/* IO - VPL Root : { 220 357 225 362 }*/
/* IO - VPL Root : { 220 398 225 403 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 156 95 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"31");
/* IO - VPL Root : { 96 166 101 171 }*/
/* End Operation */

/* Begin Operation: { 78 36 95 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"HIThemeTextInfo");
/* IO - VPL Root : { 96 86 101 91 }*/
/* End Operation */

/* Begin Operation: { 120 74 137 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"make-external");
/* IO - VPL Terminal : { 114 108 119 113 }*/
/* IO - VPL Terminal : { 114 144 119 149 }*/
/* IO - VPL Root : { 138 127 143 132 }*/
/* End Operation */

/* Begin Operation: { 120 212 137 392 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kHIThemeTextInfoVersionZero");
/* IO - VPL Root : { 138 300 143 305 }*/
/* End Operation */

/* Begin Operation: { 162 183 179 251 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"version");
/* IO - VPL Terminal : { 156 203 161 208 }*/
/* IO - VPL Terminal : { 156 225 161 230 }*/
/* IO - VPL Root : { 180 215 185 220 }*/
/* End Operation */

/* Begin Operation: { 204 219 221 273 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"state");
/* IO - VPL Terminal : { 198 235 203 240 }*/
/* IO - VPL Terminal : { 198 253 203 258 }*/
/* IO - VPL Root : { 222 244 227 249 }*/
/* End Operation */

/* Begin Operation: { 246 241 263 303 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"fontID");
/* IO - VPL Terminal : { 240 259 245 264 }*/
/* IO - VPL Terminal : { 240 277 245 282 }*/
/* IO - VPL Root : { 264 270 269 275 }*/
/* End Operation */

/* Begin Operation: { 246 319 263 535 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kHIThemeTextHorizontalFlushCenter");
/* IO - VPL Root : { 264 425 269 430 }*/
/* End Operation */

/* Begin Operation: { 78 283 95 377 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Justification");
/* IO - VPL Terminal : { 72 328 77 333 }*/
/* IO - VPL Root : { 96 312 101 317 }*/
/* IO - VPL Root : { 96 343 101 348 }*/
/* End Operation */

/* Begin Operation: { 288 253 305 393 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"horizontalFlushness");
/* IO - VPL Terminal : { 282 297 287 302 }*/
/* IO - VPL Terminal : { 282 343 287 348 }*/
/* IO - VPL Root : { 306 321 311 326 }*/
/* End Operation */

/* Begin Operation: { 288 419 305 603 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kHIThemeTextVerticalFlushTop");
/* IO - VPL Root : { 306 509 311 514 }*/
/* End Operation */

/* Begin Operation: { 330 304 347 428 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"verticalFlushness");
/* IO - VPL Terminal : { 324 343 329 348 }*/
/* IO - VPL Terminal : { 324 384 329 389 }*/
/* IO - VPL Root : { 348 364 353 369 }*/
/* End Operation */

/* Begin Operation: { 330 469 347 493 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 348 479 353 484 }*/
/* End Operation */

/* Begin Operation: { 372 364 389 432 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"options");
/* IO - VPL Terminal : { 366 384 371 389 }*/
/* IO - VPL Terminal : { 366 406 371 411 }*/
/* IO - VPL Root : { 390 396 395 401 }*/
/* End Operation */

/* Begin Operation: { 372 452 389 632 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kHIThemeTextTruncationNone");
/* IO - VPL Root : { 390 540 395 545 }*/
/* End Operation */

/* Begin Operation: { 414 355 431 485 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"truncationPosition");
/* IO - VPL Terminal : { 408 396 413 401 }*/
/* IO - VPL Terminal : { 408 439 413 444 }*/
/* IO - VPL Root : { 432 418 437 423 }*/
/* End Operation */

/* Begin Operation: { 414 501 431 525 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 432 511 437 516 }*/
/* End Operation */

/* Begin Operation: { 456 401 473 539 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"truncationMaxLines");
/* IO - VPL Terminal : { 450 445 455 450 }*/
/* IO - VPL Terminal : { 450 491 455 496 }*/
/* IO - VPL Root : { 474 468 479 473 }*/
/* End Operation */

/* Begin Operation: { 498 36 506 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 492 130 497 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,1,3,4);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,5,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
	result = connect_root_to_terminal(ptrA,2,4,2,10);
	result = connect_root_to_terminal(ptrA,1,10,1,11);
	result = connect_root_to_terminal(ptrA,1,4,2,11);
	result = connect_root_to_terminal(ptrA,1,0,1,13);
	result = connect_root_to_terminal(ptrA,1,11,1,14);
	result = connect_root_to_terminal(ptrA,2,13,2,14);
	result = connect_root_to_terminal(ptrA,1,14,1,16);
	result = connect_root_to_terminal(ptrA,1,15,2,16);
	result = connect_root_to_terminal(ptrA,1,16,1,18);
	result = connect_root_to_terminal(ptrA,1,17,2,18);
	result = connect_root_to_terminal(ptrA,1,18,1,20);
	result = connect_root_to_terminal(ptrA,1,19,2,20);
	result = connect_root_to_terminal(ptrA,1,20,1,22);
	result = connect_root_to_terminal(ptrA,1,21,2,22);
	result = connect_root_to_terminal(ptrA,1,7,1,23);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_VPLInfo_20_Page_20_Description_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLInfo_20_Page_20_Description_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 213 290 }{ 200 300 } */
	tempAttribute = attribute_add("Title",tempClass,tempAttribute_VPLInfo_20_Page_20_Description_2F_Title,environment);
	tempAttribute = attribute_add("Topical?",tempClass,tempAttribute_VPLInfo_20_Page_20_Description_2F_Topical_3F_,environment);
	tempAttribute = attribute_add("Standard List?",tempClass,tempAttribute_VPLInfo_20_Page_20_Description_2F_Standard_20_List_3F_,environment);
	tempAttribute = attribute_add("Standard Text?",tempClass,tempAttribute_VPLInfo_20_Page_20_Description_2F_Standard_20_Text_3F_,environment);
	tempAttribute = attribute_add("Search?",tempClass,tempAttribute_VPLInfo_20_Page_20_Description_2F_Search_3F_,environment);
	tempAttribute = attribute_add("Search Phrase",tempClass,tempAttribute_VPLInfo_20_Page_20_Description_2F_Search_20_Phrase,environment);
	tempAttribute = attribute_add("Helper Name",tempClass,tempAttribute_VPLInfo_20_Page_20_Description_2F_Helper_20_Name,environment);
	tempAttribute = attribute_add("List Index",tempClass,tempAttribute_VPLInfo_20_Page_20_Description_2F_List_20_Index,environment);
	tempAttribute = attribute_add("Data",tempClass,tempAttribute_VPLInfo_20_Page_20_Description_2F_Data,environment);
	tempAttribute = attribute_add("Window",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 170 1105 }{ 200 300 } */
Nat4 VPLU_VPLInfo_20_Page_20_Description_2F_Get_20_Title_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Page_20_Description_2F_Get_20_Title_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 60 90 76 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Title");
/* IO - VPL Terminal : { 55 114 60 119 }*/
/* IO - VPL Root : { 76 105 81 110 }*/
/* IO - VPL Root : { 76 122 81 127 }*/
/* End Operation */

/* Begin Operation: { 100 20 108 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 95 114 100 119 }*/
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


Nat4 VPLU_VPLInfo_20_Page_20_Description_2F_Get_20_Topical_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Page_20_Description_2F_Get_20_Topical_3F__universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 60 78 76 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Topical?");
/* IO - VPL Terminal : { 55 114 60 119 }*/
/* IO - VPL Root : { 76 101 81 106 }*/
/* IO - VPL Root : { 76 126 81 131 }*/
/* End Operation */

/* Begin Operation: { 100 20 108 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 95 114 100 119 }*/
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


Nat4 VPLU_VPLInfo_20_Page_20_Description_2F_Get_20_Standard_20_List_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Page_20_Description_2F_Get_20_Standard_20_List_3F__universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 60 54 76 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Standard List?");
/* IO - VPL Terminal : { 55 114 60 119 }*/
/* IO - VPL Root : { 76 93 81 98 }*/
/* IO - VPL Root : { 76 134 81 139 }*/
/* End Operation */

/* Begin Operation: { 100 20 108 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 95 114 100 119 }*/
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


Nat4 VPLU_VPLInfo_20_Page_20_Description_2F_Get_20_Search_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Page_20_Description_2F_Get_20_Search_3F__universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 60 82 76 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Search?");
/* IO - VPL Terminal : { 55 114 60 119 }*/
/* IO - VPL Root : { 76 102 81 107 }*/
/* IO - VPL Root : { 76 124 81 129 }*/
/* End Operation */

/* Begin Operation: { 100 20 108 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 95 114 100 119 }*/
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


Nat4 VPLU_VPLInfo_20_Page_20_Description_2F_Get_20_Search_20_Phrase_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Page_20_Description_2F_Get_20_Search_20_Phrase_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 60 58 76 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Search Phrase");
/* IO - VPL Terminal : { 55 114 60 119 }*/
/* IO - VPL Root : { 76 94 81 99 }*/
/* IO - VPL Root : { 76 132 81 137 }*/
/* End Operation */

/* Begin Operation: { 100 20 108 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 95 114 100 119 }*/
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


Nat4 VPLU_VPLInfo_20_Page_20_Description_2F_Get_20_Standard_20_Text_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Page_20_Description_2F_Get_20_Standard_20_Text_3F__universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 60 54 76 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Standard Text?");
/* IO - VPL Terminal : { 55 114 60 119 }*/
/* IO - VPL Root : { 76 93 81 98 }*/
/* IO - VPL Root : { 76 134 81 139 }*/
/* End Operation */

/* Begin Operation: { 100 20 108 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 95 114 100 119 }*/
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


Nat4 VPLU_VPLInfo_20_Page_20_Description_2F_Refresh_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Page_20_Description_2F_Refresh_universal_load(V_Method method,V_Environment environment)
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


Nat4 VPLU_VPLInfo_20_Page_20_Description_2F_Destroy_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Page_20_Description_2F_Destroy_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

	method_type_to(method,environment,"Destructor");

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 68 80 85 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
/* IO - VPL Root : { 80 74 85 79 }*/
/* End Operation */

/* Begin Operation: { 106 44 122 92 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Data");
/* IO - VPL Terminal : { 101 58 106 63 }*/
/* IO - VPL Terminal : { 101 74 106 79 }*/
/* IO - VPL Root : { 122 66 127 71 }*/
/* End Operation */

/* Begin Operation: { 64 166 80 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 80 177 85 182 }*/
/* End Operation */

/* Begin Operation: { 106 138 122 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Window");
/* IO - VPL Terminal : { 101 157 106 162 }*/
/* IO - VPL Terminal : { 101 177 106 182 }*/
/* IO - VPL Root : { 122 168 127 173 }*/
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
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


Nat4 VPLU_VPLInfo_20_Page_20_Description_2F_Create_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLInfo_20_Page_20_Description_2F_Create_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 262 302 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 72 35 77 }*/
/* IO - VPL Root : { 30 154 35 159 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 74 80 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Contents Page");
/* IO - VPL Terminal : { 59 105 64 110 }*/
/* IO - VPL Terminal : { 59 138 64 143 }*/
/* IO - VPL Root : { 80 122 85 127 }*/
/* End Operation */

/* Begin Operation: { 106 82 122 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Window");
/* IO - VPL Terminal : { 101 101 106 106 }*/
/* IO - VPL Terminal : { 101 122 106 127 }*/
/* IO - VPL Root : { 122 112 127 117 }*/
/* End Operation */

/* Begin Operation: { 148 78 164 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Refresh");
/* IO - VPL Terminal : { 143 112 148 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 22 198 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */






Nat4	loadClasses_Info_20_Window(V_Environment environment);
Nat4	loadClasses_Info_20_Window(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("VPLInfo Window",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLInfo_20_Window_class_load(result,environment);
	result = class_new("OLD Info Window",environment);
	if(result == NULL) return kERROR;
	VPLC_OLD_20_Info_20_Window_class_load(result,environment);
	result = class_new("Info HIToolbar",environment);
	if(result == NULL) return kERROR;
	VPLC_Info_20_HIToolbar_class_load(result,environment);
	result = class_new("VPLInfo View",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLInfo_20_View_class_load(result,environment);
	result = class_new("VPLInfo Text",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLInfo_20_Text_class_load(result,environment);
	result = class_new("VPLInfo Page Description",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLInfo_20_Page_20_Description_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Info_20_Window(V_Environment environment);
Nat4	loadUniversals_Info_20_Window(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Show Project Info",environment);
	if(result == NULL) return kERROR;
	VPLU_Show_20_Project_20_Info_universal_load(result,environment);

	result = method_new("Show Project Messages",environment);
	if(result == NULL) return kERROR;
	VPLU_Show_20_Project_20_Messages_universal_load(result,environment);

	result = method_new("Lookup Project Info",environment);
	if(result == NULL) return kERROR;
	VPLU_Lookup_20_Project_20_Info_universal_load(result,environment);

	result = method_new("VPLInfo Window/CE HICommand Process",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_CE_20_HICommand_20_Process_universal_load(result,environment);

	result = method_new("VPLInfo Window/CE Keyboard Event",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_CE_20_Keyboard_20_Event_universal_load(result,environment);

	result = method_new("VPLInfo Window/CE Mouse Wheel Moved",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_CE_20_Mouse_20_Wheel_20_Moved_universal_load(result,environment);

	result = method_new("VPLInfo Window/Search For Text",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_Search_20_For_20_Text_universal_load(result,environment);

	result = method_new("VPLInfo Window/Lookup Project Info",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_Lookup_20_Project_20_Info_universal_load(result,environment);

	result = method_new("VPLInfo Window/HIC Contents",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_HIC_20_Contents_universal_load(result,environment);

	result = method_new("VPLInfo Window/HIC Classes",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_HIC_20_Classes_universal_load(result,environment);

	result = method_new("VPLInfo Window/HIC Search",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_HIC_20_Search_universal_load(result,environment);

	result = method_new("VPLInfo Window/HIC Search Apple",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_HIC_20_Search_20_Apple_universal_load(result,environment);

	result = method_new("VPLInfo Window/Find Search Text",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_Find_20_Search_20_Text_universal_load(result,environment);

	result = method_new("VPLInfo Window/Set Search Text",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_Set_20_Search_20_Text_universal_load(result,environment);

	result = method_new("VPLInfo Window/Get Search Text",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_Get_20_Search_20_Text_universal_load(result,environment);

	result = method_new("VPLInfo Window/Get Project Data",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_Get_20_Project_20_Data_universal_load(result,environment);

	result = method_new("VPLInfo Window/Get Method Data",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_Get_20_Method_20_Data_universal_load(result,environment);

	result = method_new("VPLInfo Window/Display Page",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_Display_20_Page_universal_load(result,environment);

	result = method_new("VPLInfo Window/Display Text",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_Display_20_Text_universal_load(result,environment);

	result = method_new("VPLInfo Window/Display List",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_Display_20_List_universal_load(result,environment);

	result = method_new("VPLInfo Window/Open Helper List",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_Open_20_Helper_20_List_universal_load(result,environment);

	result = method_new("VPLInfo Window/Open",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_Open_universal_load(result,environment);

	result = method_new("VPLInfo Window/Open Once",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_Open_20_Once_universal_load(result,environment);

	result = method_new("VPLInfo Window/Open Controls",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_Open_20_Controls_universal_load(result,environment);

	result = method_new("VPLInfo Window/Search Cancel",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_Search_20_Cancel_universal_load(result,environment);

	result = method_new("VPLInfo Window/Install Data",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_Install_20_Data_universal_load(result,environment);

	result = method_new("VPLInfo Window/HIC Nav Back",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_HIC_20_Nav_20_Back_universal_load(result,environment);

	result = method_new("VPLInfo Window/HIC Nav Forward",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_HIC_20_Nav_20_Forward_universal_load(result,environment);

	result = method_new("VPLInfo Window/Focus Search Text",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_Focus_20_Search_20_Text_universal_load(result,environment);

	result = method_new("VPLInfo Window/Save To History",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_Save_20_To_20_History_universal_load(result,environment);

	result = method_new("VPLInfo Window/Create Banner Item",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_Create_20_Banner_20_Item_universal_load(result,environment);

	result = method_new("VPLInfo Window/OLD Search For Text#",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_OLD_20_Search_20_For_20_Text_23__universal_load(result,environment);

	result = method_new("VPLInfo Window/CE Mouse Moved",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_CE_20_Mouse_20_Moved_universal_load(result,environment);

	result = method_new("VPLInfo Window/HIC Messages",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_HIC_20_Messages_universal_load(result,environment);

	result = method_new("VPLInfo Window/HIC Checks",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_HIC_20_Checks_universal_load(result,environment);

	result = method_new("VPLInfo Window/Get Creation Attributes",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Window_2F_Get_20_Creation_20_Attributes_universal_load(result,environment);

	result = method_new("OLD Info Window/Open",environment);
	if(result == NULL) return kERROR;
	VPLU_OLD_20_Info_20_Window_2F_Open_universal_load(result,environment);

	result = method_new("OLD Info Window/Open Controls",environment);
	if(result == NULL) return kERROR;
	VPLU_OLD_20_Info_20_Window_2F_Open_20_Controls_universal_load(result,environment);

	result = method_new("OLD Info Window/Find Output Text",environment);
	if(result == NULL) return kERROR;
	VPLU_OLD_20_Info_20_Window_2F_Find_20_Output_20_Text_universal_load(result,environment);

	result = method_new("OLD Info Window/Find List View",environment);
	if(result == NULL) return kERROR;
	VPLU_OLD_20_Info_20_Window_2F_Find_20_List_20_View_universal_load(result,environment);

	result = method_new("OLD Info Window/Find Search Text",environment);
	if(result == NULL) return kERROR;
	VPLU_OLD_20_Info_20_Window_2F_Find_20_Search_20_Text_universal_load(result,environment);

	result = method_new("OLD Info Window/Find Edit Text",environment);
	if(result == NULL) return kERROR;
	VPLU_OLD_20_Info_20_Window_2F_Find_20_Edit_20_Text_universal_load(result,environment);

	result = method_new("OLD Info Window/Set Output Text",environment);
	if(result == NULL) return kERROR;
	VPLU_OLD_20_Info_20_Window_2F_Set_20_Output_20_Text_universal_load(result,environment);

	result = method_new("OLD Info Window/Set List View",environment);
	if(result == NULL) return kERROR;
	VPLU_OLD_20_Info_20_Window_2F_Set_20_List_20_View_universal_load(result,environment);

	result = method_new("OLD Info Window/Set Search Text",environment);
	if(result == NULL) return kERROR;
	VPLU_OLD_20_Info_20_Window_2F_Set_20_Search_20_Text_universal_load(result,environment);

	result = method_new("OLD Info Window/Get Search Text",environment);
	if(result == NULL) return kERROR;
	VPLU_OLD_20_Info_20_Window_2F_Get_20_Search_20_Text_universal_load(result,environment);

	result = method_new("OLD Info Window/CE HICommand Process",environment);
	if(result == NULL) return kERROR;
	VPLU_OLD_20_Info_20_Window_2F_CE_20_HICommand_20_Process_universal_load(result,environment);

	result = method_new("OLD Info Window/HIC Contents",environment);
	if(result == NULL) return kERROR;
	VPLU_OLD_20_Info_20_Window_2F_HIC_20_Contents_universal_load(result,environment);

	result = method_new("OLD Info Window/HIC Classes",environment);
	if(result == NULL) return kERROR;
	VPLU_OLD_20_Info_20_Window_2F_HIC_20_Classes_universal_load(result,environment);

	result = method_new("OLD Info Window/HIC Search",environment);
	if(result == NULL) return kERROR;
	VPLU_OLD_20_Info_20_Window_2F_HIC_20_Search_universal_load(result,environment);

	result = method_new("OLD Info Window/HIC Search Apple",environment);
	if(result == NULL) return kERROR;
	VPLU_OLD_20_Info_20_Window_2F_HIC_20_Search_20_Apple_universal_load(result,environment);

	result = method_new("OLD Info Window/Get Project Data",environment);
	if(result == NULL) return kERROR;
	VPLU_OLD_20_Info_20_Window_2F_Get_20_Project_20_Data_universal_load(result,environment);

	result = method_new("OLD Info Window/Search For Text",environment);
	if(result == NULL) return kERROR;
	VPLU_OLD_20_Info_20_Window_2F_Search_20_For_20_Text_universal_load(result,environment);

	result = method_new("OLD Info Window/Open Once",environment);
	if(result == NULL) return kERROR;
	VPLU_OLD_20_Info_20_Window_2F_Open_20_Once_universal_load(result,environment);

	result = method_new("OLD Info Window/Lookup Project Info",environment);
	if(result == NULL) return kERROR;
	VPLU_OLD_20_Info_20_Window_2F_Lookup_20_Project_20_Info_universal_load(result,environment);

	result = method_new("OLD Info Window/Get Method Data",environment);
	if(result == NULL) return kERROR;
	VPLU_OLD_20_Info_20_Window_2F_Get_20_Method_20_Data_universal_load(result,environment);

	result = method_new("OLD Info Window/Search Cancel",environment);
	if(result == NULL) return kERROR;
	VPLU_OLD_20_Info_20_Window_2F_Search_20_Cancel_universal_load(result,environment);

	result = method_new("VPLInfo View/Erase View CG",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_View_2F_Erase_20_View_20_CG_universal_load(result,environment);

	result = method_new("VPLInfo View/Align Content",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_View_2F_Align_20_Content_universal_load(result,environment);

	result = method_new("VPLInfo View/Resize",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_View_2F_Resize_universal_load(result,environment);

	result = method_new("VPLInfo View/Create Banner Item",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_View_2F_Create_20_Banner_20_Item_universal_load(result,environment);

	result = method_new("VPLInfo View/Advance Focus",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_View_2F_Advance_20_Focus_universal_load(result,environment);

	result = method_new("VPLInfo View/Setup Drawing CG",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_View_2F_Setup_20_Drawing_20_CG_universal_load(result,environment);

	result = method_new("VPLInfo Text/Process Click",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Text_2F_Process_20_Click_universal_load(result,environment);

	result = method_new("VPLInfo Text/Resize",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Text_2F_Resize_universal_load(result,environment);

	result = method_new("VPLInfo Text/Create HIThemeTextInfo",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Text_2F_Create_20_HIThemeTextInfo_universal_load(result,environment);

	result = method_new("VPLInfo Page Description/Get Title",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Page_20_Description_2F_Get_20_Title_universal_load(result,environment);

	result = method_new("VPLInfo Page Description/Get Topical?",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Page_20_Description_2F_Get_20_Topical_3F__universal_load(result,environment);

	result = method_new("VPLInfo Page Description/Get Standard List?",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Page_20_Description_2F_Get_20_Standard_20_List_3F__universal_load(result,environment);

	result = method_new("VPLInfo Page Description/Get Search?",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Page_20_Description_2F_Get_20_Search_3F__universal_load(result,environment);

	result = method_new("VPLInfo Page Description/Get Search Phrase",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Page_20_Description_2F_Get_20_Search_20_Phrase_universal_load(result,environment);

	result = method_new("VPLInfo Page Description/Get Standard Text?",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Page_20_Description_2F_Get_20_Standard_20_Text_3F__universal_load(result,environment);

	result = method_new("VPLInfo Page Description/Refresh",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Page_20_Description_2F_Refresh_universal_load(result,environment);

	result = method_new("VPLInfo Page Description/Destroy",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Page_20_Description_2F_Destroy_universal_load(result,environment);

	result = method_new("VPLInfo Page Description/Create",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLInfo_20_Page_20_Description_2F_Create_universal_load(result,environment);

	return kNOERROR;

}


	Nat4 tempPersistent_Default_20_Info_20_Lists[] = {
0000000000, 0X0000022C, 0X00000070, 0X00000017, 0X00000014, 0X000001E0, 0X000001DC, 0X0000024C,
0X000001D4, 0X00000224, 0X000001D0, 0X000001FC, 0X000001CC, 0X000001A4, 0X000001AC, 0X00000090,
0X000000E0, 0X000000DC, 0X00000144, 0X000000D4, 0X00000120, 0X000000D0, 0X000000FC, 0X000000CC,
0X000000A8, 0X000000B0, 0X0000008C, 0X00000084, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000008C, 0X00000002, 0X00000094, 0X00000190, 0XCE000008, 0000000000, 0000000000,
0000000000, 0000000000, 0X000000CC, 0X00000007, 0X000000B4, 0X56504C50, 0X726F6A65, 0X63742049,
0X6E666F20, 0X546F6F6C, 0X73000000, 0X000000E8, 0X0000010C, 0X00000130, 0000000000, 0X0000015C,
0X00000178, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000104,
0X05000000, 0X546F6F6C, 0X73000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000128, 0X05000000, 0X546F6F6C, 0X73000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000014C, 0X0E000000, 0X556E6976, 0X65727361, 0X6C204461, 0X74610000, 0X07620007,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X045D0003, 0000000000,
0000000000, 0000000000, 0000000000, 0X00010007, 0XCF000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X000001CC, 0X00000007, 0X000001B0, 0X56504C50, 0X726F6A65, 0X63742049, 0X6E666F20,
0X4D657373, 0X61676573, 0000000000, 0X000001E8, 0X00000210, 0X00000238, 0000000000, 0X00000268,
0X00000284, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000204,
0X08000000, 0X4D657373, 0X61676573, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000022C, 0X08000000, 0X4D657373, 0X61676573, 0000000000, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000254, 0X12000000, 0X446F6375, 0X6D656E74, 0X6174696F,
0X6E204461, 0X74610000, 0X07620007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X045D0003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00010007
	};
	Nat4 tempPersistent_Info_20_Use_20_Web_20_View_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempPersistent_VPLInfo_20_Window_2F_Toolbar[] = {
0000000000, 0X00005F20, 0X00001058, 0X00000411, 0X00000014, 0X00006F4C, 0X00006F54, 0X00006B08,
0X00006F04, 0X00006F00, 0X00006EF8, 0X00006D90, 0X00006EB0, 0X00006EAC, 0X00006EA4, 0X00006D8C,
0X00006E5C, 0X00006E58, 0X00006E50, 0X00006D88, 0X00006E08, 0X00006E04, 0X00006DFC, 0X00006D84,
0X00006DB4, 0X00006DB0, 0X00006DA8, 0X00006D80, 0X00006D78, 0X00006B04, 0X00006B00, 0X00006D30,
0X00006AEC, 0X00006D04, 0X00006AE8, 0X00006CD8, 0X00006CC0, 0X00006C98, 0X00006CA0, 0X00006C80,
0X00006C78, 0X00006AE0, 0X00006C50, 0X00006C38, 0X00006C10, 0X00006C18, 0X00006B94, 0X00006BEC,
0X00006BD4, 0X00006BAC, 0X00006BB4, 0X00006B90, 0X00006B88, 0X00006ADC, 0X00006B58, 0X00006AD8,
0X00006AD4, 0X00006B28, 0X00006AD0, 0X00006AAC, 0X00006AB4, 0X000010AC, 0X000010A4, 0X000010A0,
0X0000109C, 0X00006838, 0X00006A00, 0X000069FC, 0X000069F8, 0X000069D4, 0X000069DC, 0X00006994,
0X000069AC, 0X0000698C, 0X00006968, 0X00006970, 0X00006834, 0X00006930, 0X0000682C, 0X00006824,
0X00006820, 0X000068DC, 0X0000681C, 0X00006818, 0X00006814, 0X00006810, 0X00006850, 0X0000680C,
0X000067F0, 0X000067F8, 0X00003F8C, 0X000067D0, 0X000059E0, 0X000059DC, 0X0000634C, 0X00006770,
0X0000676C, 0X00006764, 0X000065FC, 0X0000671C, 0X00006718, 0X00006710, 0X000065F8, 0X000066C8,
0X000066C4, 0X000066BC, 0X000065F4, 0X00006674, 0X00006670, 0X00006668, 0X000065F0, 0X00006620,
0X0000661C, 0X00006614, 0X000065EC, 0X000065E4, 0X00006348, 0X00006344, 0X0000659C, 0X00006330,
0X00006570, 0X0000632C, 0X00006328, 0X00006528, 0X00006510, 0X000064E8, 0X000064F0, 0X000064D0,
0X000064C8, 0X00006324, 0X000064A0, 0X00006488, 0X00006460, 0X00006468, 0X000063E4, 0X0000643C,
0X00006424, 0X000063FC, 0X00006404, 0X000063E0, 0X000063D8, 0X00006320, 0X000063A8, 0X0000631C,
0X00006318, 0X0000636C, 0X00006314, 0X000062F0, 0X000062F8, 0X000059D4, 0X000059D0, 0X000059CC,
0X000059C8, 0X00006260, 0X0000625C, 0X00006254, 0X000059C0, 0X0000620C, 0X00006208, 0X00006200,
0X000059BC, 0X00006188, 0X00006184, 0X00006180, 0X0000617C, 0X00006174, 0X000059B8, 0X0000612C,
0X00006128, 0X00006120, 0X00005E14, 0X000060D8, 0X000060D4, 0X000060CC, 0X00005E10, 0X00006084,
0X00006080, 0X00006078, 0X00005E0C, 0X00006030, 0X0000602C, 0X00006024, 0X00005E08, 0X00005FDC,
0X00005FD8, 0X00005FD0, 0X00005E04, 0X00005F88, 0X00005F84, 0X00005F7C, 0X00005E00, 0X00005F34,
0X00005F30, 0X00005F28, 0X00005DFC, 0X00005EE0, 0X00005EDC, 0X00005ED4, 0X00005DF8, 0X00005E8C,
0X00005E88, 0X00005E80, 0X00005DF4, 0X00005E38, 0X00005E34, 0X00005E2C, 0X00005DF0, 0X00005DE8,
0X00005B70, 0X00005B6C, 0X00005DA0, 0X00005B58, 0X00005D74, 0X00005B54, 0X00005D48, 0X00005D30,
0X00005D08, 0X00005D10, 0X00005CF0, 0X00005CE8, 0X00005B4C, 0X00005CC0, 0X00005CA8, 0X00005C80,
0X00005C88, 0X00005C04, 0X00005C5C, 0X00005C44, 0X00005C1C, 0X00005C24, 0X00005C00, 0X00005BF8,
0X00005B48, 0X00005BC8, 0X00005B44, 0X00005B94, 0X00005B3C, 0X00005B18, 0X00005B20, 0X00005B00,
0X00005AD4, 0X00005ADC, 0X000059B0, 0X000059AC, 0X00005998, 0X00005994, 0X00005A7C, 0X00005990,
0X0000598C, 0X00005988, 0X00005984, 0X000059F8, 0X00005980, 0X00005958, 0X00005960, 0X00003F88,
0X0000570C, 0X000058F8, 0X000058F4, 0X000058F0, 0X000058CC, 0X000058D4, 0X00005888, 0X000058A0,
0X00005880, 0X0000585C, 0X00005864, 0X00005708, 0X0000583C, 0X00005704, 0X00005808, 0X00005700,
0X000056F8, 0X000056F4, 0X000057B0, 0X000056F0, 0X000056EC, 0X000056E8, 0X000056E4, 0X00005724,
0X000056E0, 0X000056C4, 0X000056CC, 0X00003F84, 0X000054A0, 0X00005664, 0X00005660, 0X0000565C,
0X00005638, 0X00005640, 0X000055F8, 0X00005610, 0X000055F0, 0X000055CC, 0X000055D4, 0X0000549C,
0X00005598, 0X00005494, 0X0000548C, 0X00005488, 0X00005544, 0X00005484, 0X00005480, 0X0000547C,
0X00005478, 0X000054B8, 0X00005474, 0X00005458, 0X00005460, 0X00003F80, 0X00005214, 0X000053F8,
0X000053F4, 0X000053F0, 0X000053CC, 0X000053D4, 0X0000538C, 0X000053A4, 0X00005384, 0X00005360,
0X00005368, 0X00005210, 0X00005340, 0X0000520C, 0X00005310, 0X00005208, 0X00005200, 0X000051FC,
0X000052B8, 0X000051F8, 0X000051F4, 0X000051F0, 0X000051EC, 0X0000522C, 0X000051E8, 0X000051CC,
0X000051D4, 0X00003F7C, 0X0000516C, 0X00005168, 0X00005164, 0X00005140, 0X00005148, 0X000050FC,
0X00005114, 0X000050F4, 0X000050D0, 0X000050D8, 0X00004FEC, 0X00004FE0, 0X00004FDC, 0X00004FD8,
0X00005040, 0X0000503C, 0X00005034, 0X00004FD4, 0X00004FD0, 0X00004FCC, 0X00004FA8, 0X00004FB0,
0X00004D70, 0X00004F48, 0X00004F44, 0X00004F40, 0X00004F1C, 0X00004F24, 0X00004EDC, 0X00004EF4,
0X00004ED4, 0X00004EB0, 0X00004EB8, 0X00004DCC, 0X00004DC0, 0X00004DBC, 0X00004DB8, 0X00004E20,
0X00004E1C, 0X00004E14, 0X00004DB4, 0X00004DB0, 0X00004DAC, 0X00004D88, 0X00004D90, 0X00004D6C,
0X00004D64, 0X0000402C, 0X000049A8, 0X00004D1C, 0X00004D18, 0X00004D10, 0X00004C50, 0X00004CC8,
0X00004CC4, 0X00004CBC, 0X00004C4C, 0X00004C74, 0X00004C70, 0X00004C68, 0X00004C48, 0X00004C40,
0X000049A4, 0X000049A0, 0X00004BF8, 0X0000498C, 0X00004BCC, 0X00004988, 0X00004984, 0X00004B84,
0X00004B6C, 0X00004B44, 0X00004B4C, 0X00004B2C, 0X00004B24, 0X00004980, 0X00004AFC, 0X00004AE4,
0X00004ABC, 0X00004AC4, 0X00004A40, 0X00004A98, 0X00004A80, 0X00004A58, 0X00004A60, 0X00004A3C,
0X00004A34, 0X0000497C, 0X00004A04, 0X00004978, 0X00004974, 0X000049C8, 0X00004970, 0X0000494C,
0X00004954, 0X00004024, 0X00004020, 0X0000401C, 0X00004018, 0X000048BC, 0X000048B8, 0X000048B0,
0X00004010, 0X00004868, 0X00004864, 0X0000485C, 0X0000400C, 0X000047E4, 0X000047E0, 0X000047DC,
0X000047D8, 0X000047D0, 0X00004008, 0X00004788, 0X00004784, 0X0000477C, 0X00004470, 0X00004734,
0X00004730, 0X00004728, 0X0000446C, 0X000046E0, 0X000046DC, 0X000046D4, 0X00004468, 0X0000468C,
0X00004688, 0X00004680, 0X00004464, 0X00004638, 0X00004634, 0X0000462C, 0X00004460, 0X000045E4,
0X000045E0, 0X000045D8, 0X0000445C, 0X00004590, 0X0000458C, 0X00004584, 0X00004458, 0X0000453C,
0X00004538, 0X00004530, 0X00004454, 0X000044E8, 0X000044E4, 0X000044DC, 0X00004450, 0X00004494,
0X00004490, 0X00004488, 0X0000444C, 0X00004444, 0X000041CC, 0X000041C8, 0X000043FC, 0X000041B4,
0X000043D0, 0X000041B0, 0X000043A4, 0X0000438C, 0X00004364, 0X0000436C, 0X0000434C, 0X00004344,
0X000041A8, 0X0000431C, 0X00004304, 0X000042DC, 0X000042E4, 0X00004260, 0X000042B8, 0X000042A0,
0X00004278, 0X00004280, 0X0000425C, 0X00004254, 0X000041A4, 0X00004224, 0X000041A0, 0X000041F0,
0X00004198, 0X00004174, 0X0000417C, 0X0000415C, 0X00004130, 0X00004138, 0X00004000, 0X00003FFC,
0X00003FE8, 0X00003FE4, 0X000040DC, 0X00003FE0, 0X00003FDC, 0X00003FD8, 0X00003FD4, 0X00004044,
0X00003FD0, 0X00003FA4, 0X00003FAC, 0X00003F78, 0X00003F70, 0X00001098, 0X00003F10, 0X00003F0C,
0X00003F08, 0X00003EE4, 0X00003EEC, 0X00003EA0, 0X00003EB8, 0X00003E98, 0X00003E74, 0X00003E7C,
0X00003D20, 0X00003E54, 0X00003D1C, 0X00003E20, 0X00003D18, 0X00003D10, 0X00003D0C, 0X00003DC8,
0X00003D08, 0X00003D04, 0X00003D00, 0X00003CFC, 0X00003D3C, 0X00003CF8, 0X00003CDC, 0X00003CE4,
0X0000114C, 0X00003C7C, 0X00003C78, 0X00003C74, 0X00003C50, 0X00003C58, 0X00003C0C, 0X00003C24,
0X00003C04, 0X00003BE0, 0X00003BE8, 0X00003AFC, 0X00003AF0, 0X00003AEC, 0X00003AE8, 0X00003B50,
0X00003B4C, 0X00003B44, 0X00003AE4, 0X00003AE0, 0X00003ADC, 0X00003AB8, 0X00003AC0, 0X00003880,
0X00003A58, 0X00003A54, 0X00003A50, 0X00003A2C, 0X00003A34, 0X000039EC, 0X00003A04, 0X000039E4,
0X000039C0, 0X000039C8, 0X000038DC, 0X000038D0, 0X000038CC, 0X000038C8, 0X00003930, 0X0000392C,
0X00003924, 0X000038C4, 0X000038C0, 0X000038BC, 0X00003898, 0X000038A0, 0X0000387C, 0X00003874,
0X00002B3C, 0X0000382C, 0X00003828, 0X00003820, 0X00003760, 0X000037D8, 0X000037D4, 0X000037CC,
0X0000375C, 0X00003784, 0X00003780, 0X00003778, 0X00003758, 0X00003750, 0X000034B4, 0X000034B0,
0X00003708, 0X0000349C, 0X000036DC, 0X00003498, 0X00003494, 0X00003694, 0X0000367C, 0X00003654,
0X0000365C, 0X0000363C, 0X00003634, 0X00003490, 0X0000360C, 0X000035F4, 0X000035CC, 0X000035D4,
0X00003550, 0X000035A8, 0X00003590, 0X00003568, 0X00003570, 0X0000354C, 0X00003544, 0X0000348C,
0X00003514, 0X00003488, 0X000034D8, 0X00003480, 0X0000345C, 0X00003464, 0X00002B34, 0X00002B30,
0X00002B2C, 0X00002B28, 0X000033CC, 0X000033C8, 0X000033C0, 0X00002B20, 0X00003378, 0X00003374,
0X0000336C, 0X00002B1C, 0X000032F4, 0X000032F0, 0X000032EC, 0X000032E8, 0X000032E0, 0X00002B18,
0X00003298, 0X00003294, 0X0000328C, 0X00002F80, 0X00003244, 0X00003240, 0X00003238, 0X00002F7C,
0X000031F0, 0X000031EC, 0X000031E4, 0X00002F78, 0X0000319C, 0X00003198, 0X00003190, 0X00002F74,
0X00003148, 0X00003144, 0X0000313C, 0X00002F70, 0X000030F4, 0X000030F0, 0X000030E8, 0X00002F6C,
0X000030A0, 0X0000309C, 0X00003094, 0X00002F68, 0X0000304C, 0X00003048, 0X00003040, 0X00002F64,
0X00002FF8, 0X00002FF4, 0X00002FEC, 0X00002F60, 0X00002FA4, 0X00002FA0, 0X00002F98, 0X00002F5C,
0X00002F54, 0X00002CDC, 0X00002CD8, 0X00002F0C, 0X00002CC4, 0X00002EE0, 0X00002CC0, 0X00002EB4,
0X00002E9C, 0X00002E74, 0X00002E7C, 0X00002E5C, 0X00002E54, 0X00002CB8, 0X00002E2C, 0X00002E14,
0X00002DEC, 0X00002DF4, 0X00002D70, 0X00002DC8, 0X00002DB0, 0X00002D88, 0X00002D90, 0X00002D6C,
0X00002D64, 0X00002CB4, 0X00002D34, 0X00002CB0, 0X00002D00, 0X00002CA8, 0X00002C84, 0X00002C8C,
0X00002C6C, 0X00002C40, 0X00002C48, 0X00002B10, 0X00002AF8, 0X00002AF4, 0X00002BEC, 0X00002AF0,
0X00002AEC, 0X00002AE8, 0X00002AE4, 0X00002B54, 0X00002AE0, 0X00002AB4, 0X00002ABC, 0X00001148,
0X00002A94, 0X00001CA4, 0X00001CA0, 0X00002A34, 0X00002A30, 0X00002A28, 0X000028C0, 0X000029E0,
0X000029DC, 0X000029D4, 0X000028BC, 0X0000298C, 0X00002988, 0X00002980, 0X000028B8, 0X00002938,
0X00002934, 0X0000292C, 0X000028B4, 0X000028E4, 0X000028E0, 0X000028D8, 0X000028B0, 0X000028A8,
0X0000260C, 0X00002608, 0X00002860, 0X000025F4, 0X00002834, 0X000025F0, 0X000025EC, 0X000027EC,
0X000027D4, 0X000027AC, 0X000027B4, 0X00002794, 0X0000278C, 0X000025E8, 0X00002764, 0X0000274C,
0X00002724, 0X0000272C, 0X000026A8, 0X00002700, 0X000026E8, 0X000026C0, 0X000026C8, 0X000026A4,
0X0000269C, 0X000025E4, 0X0000266C, 0X000025E0, 0X00002630, 0X000025D8, 0X000025B4, 0X000025BC,
0X00001C98, 0X00001C94, 0X00001C90, 0X00001C8C, 0X00002524, 0X00002520, 0X00002518, 0X00001C84,
0X000024D0, 0X000024CC, 0X000024C4, 0X00001C80, 0X0000244C, 0X00002448, 0X00002444, 0X00002440,
0X00002438, 0X00001C7C, 0X000023F0, 0X000023EC, 0X000023E4, 0X000020D8, 0X0000239C, 0X00002398,
0X00002390, 0X000020D4, 0X00002348, 0X00002344, 0X0000233C, 0X000020D0, 0X000022F4, 0X000022F0,
0X000022E8, 0X000020CC, 0X000022A0, 0X0000229C, 0X00002294, 0X000020C8, 0X0000224C, 0X00002248,
0X00002240, 0X000020C4, 0X000021F8, 0X000021F4, 0X000021EC, 0X000020C0, 0X000021A4, 0X000021A0,
0X00002198, 0X000020BC, 0X00002150, 0X0000214C, 0X00002144, 0X000020B8, 0X000020FC, 0X000020F8,
0X000020F0, 0X000020B4, 0X000020AC, 0X00001E34, 0X00001E30, 0X00002064, 0X00001E1C, 0X00002038,
0X00001E18, 0X0000200C, 0X00001FF4, 0X00001FCC, 0X00001FD4, 0X00001FB4, 0X00001FAC, 0X00001E10,
0X00001F84, 0X00001F6C, 0X00001F44, 0X00001F4C, 0X00001EC8, 0X00001F20, 0X00001F08, 0X00001EE0,
0X00001EE8, 0X00001EC4, 0X00001EBC, 0X00001E0C, 0X00001E8C, 0X00001E08, 0X00001E58, 0X00001E00,
0X00001DDC, 0X00001DE4, 0X00001DC4, 0X00001D98, 0X00001DA0, 0X00001C74, 0X00001C5C, 0X00001C58,
0X00001D40, 0X00001C54, 0X00001C50, 0X00001C4C, 0X00001C48, 0X00001CBC, 0X00001C44, 0X00001C1C,
0X00001C24, 0X00001144, 0X00001BBC, 0X00001BB8, 0X00001BB4, 0X00001B90, 0X00001B98, 0X00001B50,
0X00001B68, 0X00001B48, 0X00001B24, 0X00001B2C, 0X000019F4, 0X00001AF0, 0X000019EC, 0X000019E4,
0X000019E0, 0X00001A9C, 0X000019DC, 0X000019D8, 0X000019D4, 0X000019D0, 0X00001A10, 0X000019CC,
0X000019B0, 0X000019B8, 0X00001140, 0X00001950, 0X0000194C, 0X00001948, 0X00001924, 0X0000192C,
0X000018E4, 0X000018FC, 0X000018DC, 0X000018B8, 0X000018C0, 0X00001784, 0X00001880, 0X0000177C,
0X00001774, 0X00001770, 0X0000182C, 0X0000176C, 0X00001768, 0X00001764, 0X00001760, 0X000017A0,
0X0000175C, 0X00001740, 0X00001748, 0X0000113C, 0X000016E0, 0X000016DC, 0X000016D8, 0X000016B4,
0X000016BC, 0X00001674, 0X0000168C, 0X0000166C, 0X00001648, 0X00001650, 0X000014F8, 0X00001628,
0X000014F4, 0X000015F8, 0X000014F0, 0X000014E8, 0X000014E4, 0X000015A0, 0X000014E0, 0X000014DC,
0X000014D8, 0X000014D4, 0X00001514, 0X000014D0, 0X000014B4, 0X000014BC, 0X00001138, 0X00001410,
0X0000140C, 0X00001408, 0X00001428, 0X00001404, 0X000013E0, 0X000013E8, 0X00001134, 0X00001340,
0X0000133C, 0X00001338, 0X00001358, 0X00001334, 0X00001310, 0X00001318, 0X00001130, 0X0000126C,
0X00001268, 0X00001264, 0X00001284, 0X00001260, 0X0000123C, 0X00001244, 0X0000112C, 0X00001194,
0X00001190, 0X0000118C, 0X000011AC, 0X00001188, 0X00001164, 0X0000116C, 0X00001128, 0X00001120,
0X00001094, 0X00001090, 0X000010C4, 0X0000108C, 0X0000106C, 0X00001074, 0XC6000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X00001088, 0X0000000A, 0X00001078, 0X496E666F, 0X20484954,
0X6F6F6C62, 0X61720000, 0000000000, 0X000010B0, 0X000010F4, 0X0000110C, 0X00003F5C, 0X00006A4C,
0X00006A64, 0X00006A7C, 0000000000, 0X00006A98, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000010CC, 0X24000000, 0X636F6D2E, 0X616E6465, 0X73636F74, 0X69612E6D, 0X61727465,
0X6E2E6869, 0X746F6F6C, 0X6261722E, 0X696E666F, 0000000000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000003, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00001128, 0X0000000A, 0X00001150, 0X00001228, 0X000012FC, 0X000013CC, 0X000014A0, 0X0000172C,
0X0000199C, 0X00001C08, 0X00002AA0, 0X00003CC8, 0X70000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00001188, 0X00000004, 0X00001170, 0X4849546F, 0X6F6C6261, 0X72204275, 0X696C7449,
0X6E204974, 0X656D0000, 0X00001198, 0X000011E0, 0X000011F8, 0X00001210, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000011B4, 0X29000000, 0X636F6D2E, 0X6170706C, 0X652E6869,
0X746F6F6C, 0X626F782E, 0X746F6F6C, 0X6261722E, 0X666C6578, 0X69626C65, 0X73706163, 0X65000000,
0X029F0004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000064, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000064, 0X00000003, 0000000000, 0000000000, 0000000000,
0000000000, 0X00010000, 0X70000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001260,
0X00000004, 0X00001248, 0X4849546F, 0X6F6C6261, 0X72204275, 0X696C7449, 0X6E204974, 0X656D0000,
0X00001270, 0X000012B4, 0X000012CC, 0X000012E4, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000128C, 0X25000000, 0X636F6D2E, 0X6170706C, 0X652E6869, 0X746F6F6C, 0X626F782E,
0X746F6F6C, 0X6261722E, 0X73657061, 0X7261746F, 0X72000000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000062, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00010000, 0X70000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00001334, 0X00000004, 0X0000131C, 0X4849546F,
0X6F6C6261, 0X72204275, 0X696C7449, 0X6E204974, 0X656D0000, 0X00001344, 0X00001384, 0X0000139C,
0X000013B4, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001360, 0X21000000,
0X636F6D2E, 0X6170706C, 0X652E6869, 0X746F6F6C, 0X626F782E, 0X746F6F6C, 0X6261722E, 0X73706163,
0X65000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000063, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000, 0X70000008, 0000000000, 0000000000, 0000000000, 0000000000,
0X00001404, 0X00000004, 0X000013EC, 0X4849546F, 0X6F6C6261, 0X72204275, 0X696C7449, 0X6E204974,
0X656D0000, 0X00001414, 0X00001458, 0X00001470, 0X00001488, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00001430, 0X25000000, 0X636F6D2E, 0X6170706C, 0X652E6869, 0X746F6F6C,
0X626F782E, 0X746F6F6C, 0X6261722E, 0X63757374, 0X6F6D697A, 0X65000000, 0X029C0004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000061, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00010000,
0X71000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000014D0, 0X0000000C, 0X000014C0,
0X4849546F, 0X6F6C6261, 0X72204974, 0X656D0000, 0X00001500, 0X00001544, 0X0000155C, 0X00001574,
0X0000158C, 0X000015B4, 0X000015CC, 0000000000, 0X000015E4, 0X00001614, 0X00001634, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000151C, 0X26000000, 0X636F6D2E,
0X6D616376, 0X706C2E68, 0X69746F6F, 0X6C626172, 0X6974656D, 0X2E696E66, 0X6F2E636F, 0X6E74656E,
0X74730000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000002, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000002, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000, 0X05AB0006, 0000000000, 0000000000, 0000000000, 0000000000,
0X000015A8, 0X08000000, 0X436F6E74, 0X656E7473, 0000000000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X49746F63, 0X436F0006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001600, 0X11000000,
0X5461626C, 0X65206F66, 0X20436F6E, 0X74656E74, 0X73000000, 0X54610006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00001630, 0000000000, 0000000000, 0X79000008, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000166C, 0X00000003, 0X00001654, 0X4D61634F, 0X53204963, 0X6F6E2052,
0X65666572, 0X656E6365, 0000000000, 0X00001678, 0000000000, 0X000016A0, 0X05AF0006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00001694, 0X09000000, 0X486F6D65, 0X2049636F, 0X6E000000,
0X7A000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000016D8, 0X00000003, 0X000016C0,
0X4D61634F, 0X53204963, 0X6F6E2052, 0X65676973, 0X74726172, 0000000000, 0X000016E4, 0X000016FC,
0X00001714, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74686F6D, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X6D616373, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0XFFFF8000, 0X71000008, 0000000000, 0000000000, 0000000000, 0000000000,
0X0000175C, 0X0000000C, 0X0000174C, 0X4849546F, 0X6F6C6261, 0X72204974, 0X656D0000, 0X0000178C,
0X000017D0, 0X000017E8, 0X00001800, 0X00001818, 0X0000183C, 0X00001854, 0000000000, 0X0000186C,
0000000000, 0X000018A4, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X000017A8, 0X24000000, 0X636F6D2E, 0X6D616376, 0X706C2E68, 0X69746F6F, 0X6C626172, 0X6974656D,
0X2E696E66, 0X6F2E7365, 0X61726368, 0000000000, 0X05510004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000078, 0X02F90004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000000A,
0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00010000, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00001834, 0X06000000, 0X53656172, 0X63680000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X05E70004, 0000000000, 0000000000,
0000000000, 0000000000, 0X49737249, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00001888, 0X1A000000, 0X53656172, 0X63682064, 0X6576656C, 0X6F706572, 0X2E617070, 0X6C652E63,
0X6F6D0000, 0X79000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000018DC, 0X00000003,
0X000018C4, 0X4D61634F, 0X53204963, 0X6F6E2052, 0X65666572, 0X656E6365, 0000000000, 0X000018E8,
0000000000, 0X00001910, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001904,
0X0A000000, 0X4170706C, 0X65204C6F, 0X676F0000, 0X7A000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00001948, 0X00000003, 0X00001930, 0X4D61634F, 0X53204963, 0X6F6E2052, 0X65676973,
0X74726172, 0000000000, 0X00001954, 0X0000196C, 0X00001984, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X6361706C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X6D616373, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0XFFFF8000, 0X71000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X000019CC, 0X0000000C, 0X000019BC, 0X4849546F,
0X6F6C6261, 0X72204974, 0X656D0000, 0X000019FC, 0X00001A40, 0X00001A58, 0X00001A70, 0X00001A88,
0X00001AAC, 0X00001AC4, 0000000000, 0X00001ADC, 0000000000, 0X00001B10, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00001A18, 0X25000000, 0X636F6D2E, 0X6D616376,
0X706C2E68, 0X69746F6F, 0X6C626172, 0X6974656D, 0X2E696E66, 0X6F2E636C, 0X61737365, 0X73000000,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000005, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000005, 0X00000003, 0000000000, 0000000000, 0000000000,
0000000000, 0X00010000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001AA4,
0X07000000, 0X436C6173, 0X73657300, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X49636C73, 0X68650006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00001AF8, 0X17000000, 0X44697370, 0X6C617920,
0X636C6173, 0X73206865, 0X69726172, 0X63687900, 0X79000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00001B48, 0X00000003, 0X00001B30, 0X4D61634F, 0X53204963, 0X6F6E2052, 0X65666572,
0X656E6365, 0000000000, 0X00001B54, 0000000000, 0X00001B7C, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00001B70, 0X0A000000, 0X4170706C, 0X65204C6F, 0X676F0000, 0X7A000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00001BB4, 0X00000003, 0X00001B9C, 0X4D61634F,
0X53204963, 0X6F6E2052, 0X65676973, 0X74726172, 0000000000, 0X00001BC0, 0X00001BD8, 0X00001BF0,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X61726E67, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X6D616373, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0XFFFF8000, 0X94010008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001C44,
0X00000019, 0X00001C28, 0X48495365, 0X61726368, 0X4669656C, 0X6420546F, 0X6F6C6261, 0X72204974,
0X656D0000, 0X00001CA8, 0X00001CE4, 0X00001CFC, 0X00001D14, 0X00001D2C, 0X00001D54, 0X00001D6C,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001D84, 0000000000, 0X00002424,
0X000024B0, 0X00002504, 0000000000, 0X00002558, 0X00002570, 0X00002588, 0X000025A0, 0000000000,
0X00002A68, 0X00002A80, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001CC4,
0X1F000000, 0X636F6D2E, 0X6D616376, 0X706C2E74, 0X6F6F6C62, 0X61726974, 0X656D2E68, 0X69736561,
0X72636800, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000006E, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00001D48, 0X0B000000, 0X496E666F, 0X726D6174, 0X696F6E00, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X6F000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001DBC, 0X00000003,
0X00001DA4, 0X4849546F, 0X6F6C6261, 0X72204974, 0X656D204F, 0X626A6563, 0X74000000, 0000000000,
0000000000, 0X00001DC8, 0X27000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001E00,
0X00000011, 0X00001DE8, 0X43617262, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000,
0X00001E44, 0000000000, 0X00001E78, 0X00001EA8, 0X00001F98, 0000000000, 0X00002024, 0X00002050,
0000000000, 0000000000, 0000000000, 0000000000, 0X00002080, 0X00002098, 0000000000, 0000000000,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001E60, 0X16000000,
0X6B457665, 0X6E74436C, 0X61737354, 0X6F6F6C62, 0X61724974, 0X656D0000, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00001E94, 0X10000000, 0X2F434520, 0X48616E64, 0X6C652045,
0X76656E74, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001EC4,
0X00000002, 0X00001ECC, 0X00001F30, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000,
0X00001F08, 0X00000001, 0X00001EEC, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563,
0X69666965, 0X72000000, 0X00001F0C, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00001F28, 0X05000000, 0X4F776E65, 0X72000000, 0X15000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00001F6C, 0X00000001, 0X00001F50, 0X41747472, 0X69627574, 0X6520496E, 0X70757420,
0X53706563, 0X69666965, 0X72000000, 0X00001F70, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X00001F8C, 0X09000000, 0X54686520, 0X4576656E, 0X74000000, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00001FB4, 0X00000001, 0X00001FB8, 0X16000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X00001FF4, 0X00000001, 0X00001FD8, 0X41747472, 0X69627574,
0X65204F75, 0X74707574, 0X20537065, 0X63696669, 0X65720000, 0X00001FF8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00002014, 0X0F000000, 0X43616C6C, 0X6261636B, 0X20526573,
0X756C7400, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002040, 0X0F000000,
0X2F446F20, 0X43452043, 0X616C6C62, 0X61636B00, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000206C, 0X13000000, 0X4576656E, 0X7448616E, 0X646C6572, 0X50726F63, 0X50747200,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X02F30007, 0000000000,
0000000000, 0000000000, 0000000000, 0X000020B4, 0X0000000A, 0X000020DC, 0X00002130, 0X00002184,
0X000021D8, 0X0000222C, 0X00002280, 0X000022D4, 0X00002328, 0X0000237C, 0X000023D0, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000020F8, 0X00000002, 0X00002100, 0X00002118,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626974, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000214C, 0X00000002, 0X00002154, 0X0000216C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X74626974, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000021A0, 0X00000002,
0X000021A8, 0X000021C0, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626974,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000003, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X000021F4, 0X00000002, 0X000021FC, 0X00002214, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X74626974, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000004, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00002248, 0X00000002, 0X00002250, 0X00002268, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X74626974, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000005,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000229C, 0X00000002, 0X000022A4,
0X000022BC, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626974, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000006, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X000022F0, 0X00000002, 0X000022F8, 0X00002310, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X74626974, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000007, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002344,
0X00000002, 0X0000234C, 0X00002364, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X74626974, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000008, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00002398, 0X00000002, 0X000023A0, 0X000023B8,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X636E746C, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X0000009A, 0X02F70007, 0000000000, 0000000000, 0000000000,
0000000000, 0X000023EC, 0X00000002, 0X000023F4, 0X0000240C, 0X02F20004, 0000000000, 0000000000,
0000000000, 0000000000, 0X636E746C, 0X02F70004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000069, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002440, 0X00000004,
0X00002450, 0X00002468, 0X00002480, 0X00002498, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000018, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X000000AA, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X000024CC, 0X00000002, 0X000024D4, 0X000024EC, 0X03DF0004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000018, 0X04900004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000032, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002520, 0X00000002,
0X00002528, 0X00002540, 0X04900004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000018,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000012C, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X27000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000025D8, 0X00000011, 0X000025C0,
0X43617262, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X0000261C, 0000000000,
0X00002658, 0X00002688, 0X00002778, 0X00002804, 0X00002820, 0X0000284C, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000287C, 0X00002894, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00002638, 0X1E000000, 0X556E7469, 0X746C6564,
0X20436172, 0X626F6E20, 0X4576656E, 0X74204361, 0X6C6C6261, 0X636B0000, 0X45760006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00002674, 0X10000000, 0X2F434520, 0X48616E64, 0X6C652045,
0X76656E74, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000026A4,
0X00000002, 0X000026AC, 0X00002710, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000,
0X000026E8, 0X00000001, 0X000026CC, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563,
0X69666965, 0X72000000, 0X000026EC, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00002708, 0X05000000, 0X4F776E65, 0X72000000, 0X15000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000274C, 0X00000001, 0X00002730, 0X41747472, 0X69627574, 0X6520496E, 0X70757420,
0X53706563, 0X69666965, 0X72000000, 0X00002750, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000276C, 0X09000000, 0X54686520, 0X4576656E, 0X74000000, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00002794, 0X00000001, 0X00002798, 0X16000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000027D4, 0X00000001, 0X000027B8, 0X41747472, 0X69627574,
0X65204F75, 0X74707574, 0X20537065, 0X63696669, 0X65720000, 0X000027D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000027F4, 0X0F000000, 0X43616C6C, 0X6261636B, 0X20526573,
0X756C7400, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000283C, 0X0F000000, 0X2F446F20,
0X43452043, 0X616C6C62, 0X61636B00, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00002868, 0X13000000, 0X4576656E, 0X7448616E, 0X646C6572, 0X50726F63, 0X50747200, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X000028B0, 0X00000005, 0X000028C4, 0X00002918, 0X0000296C, 0X000029C0,
0X00002A14, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000028E0, 0X00000002,
0X000028E8, 0X00002900, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X636E746C,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000069, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00002934, 0X00000002, 0X0000293C, 0X00002954, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X74786664, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000001, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00002988, 0X00000002, 0X00002990, 0X000029A8, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X73726664, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000001,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000029DC, 0X00000002, 0X000029E4,
0X000029FC, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626976, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00002A30, 0X00000002, 0X00002A38, 0X00002A50, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X636E746C, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000009A, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00016D2E,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002A9C, 0000000000, 0000000000,
0X96010008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002AE0, 0X00000018, 0X00002AC0,
0X48495365, 0X676D656E, 0X74656456, 0X69657720, 0X546F6F6C, 0X62617220, 0X4974656D, 0000000000,
0X00002B40, 0X00002B90, 0X00002BA8, 0X00002BC0, 0X00002BD8, 0X00002BFC, 0X00002C14, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X00002C2C, 0000000000, 0X000032CC, 0X00003358,
0X000033AC, 0000000000, 0X00003400, 0X00003418, 0X00003430, 0X00003448, 0000000000, 0X00003860,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002B5C, 0X32000000, 0X636F6D2E,
0X6D617274, 0X656E2E69, 0X6E666F77, 0X696E646F, 0X772E6869, 0X746F6F6C, 0X62617269, 0X74656D2E,
0X7365676D, 0X656E7465, 0X642E6E61, 0X76690000, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000001, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000001,
0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00010000, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00002BF4, 0X04000000, 0X4261636B, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X494E626B, 0X6F000008, 0000000000, 0000000000, 0000000000, 0000000000,
0X00002C64, 0X00000003, 0X00002C4C, 0X4849546F, 0X6F6C6261, 0X72204974, 0X656D204F, 0X626A6563,
0X74000000, 0000000000, 0000000000, 0X00002C70, 0X27000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00002CA8, 0X00000011, 0X00002C90, 0X43617262, 0X6F6E2045, 0X76656E74, 0X2043616C,
0X6C626163, 0X6B000000, 0X00002CEC, 0000000000, 0X00002D20, 0X00002D50, 0X00002E40, 0000000000,
0X00002ECC, 0X00002EF8, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002F28, 0X00002F40,
0000000000, 0000000000, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00002D08, 0X16000000, 0X6B457665, 0X6E74436C, 0X61737354, 0X6F6F6C62, 0X61724974, 0X656D0000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002D3C, 0X10000000, 0X2F434520,
0X48616E64, 0X6C652045, 0X76656E74, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X00002D6C, 0X00000002, 0X00002D74, 0X00002DD8, 0X15000008, 0000000000, 0000000000,
0000000000, 0000000000, 0X00002DB0, 0X00000001, 0X00002D94, 0X41747472, 0X69627574, 0X6520496E,
0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X00002DB4, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00002DD0, 0X05000000, 0X4F776E65, 0X72000000, 0X15000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X00002E14, 0X00000001, 0X00002DF8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X00002E18, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00002E34, 0X09000000, 0X54686520, 0X4576656E, 0X74000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002E5C, 0X00000001, 0X00002E60,
0X16000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002E9C, 0X00000001, 0X00002E80,
0X41747472, 0X69627574, 0X65204F75, 0X74707574, 0X20537065, 0X63696669, 0X65720000, 0X00002EA0,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002EBC, 0X0F000000, 0X43616C6C,
0X6261636B, 0X20526573, 0X756C7400, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00002EE8, 0X0F000000, 0X2F446F20, 0X43452043, 0X616C6C62, 0X61636B00, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00002F14, 0X13000000, 0X4576656E, 0X7448616E, 0X646C6572,
0X50726F63, 0X50747200, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X02F30007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002F5C, 0X0000000A, 0X00002F84,
0X00002FD8, 0X0000302C, 0X00003080, 0X000030D4, 0X00003128, 0X0000317C, 0X000031D0, 0X00003224,
0X00003278, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00002FA0, 0X00000002,
0X00002FA8, 0X00002FC0, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626974,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000001, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00002FF4, 0X00000002, 0X00002FFC, 0X00003014, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X74626974, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00003048, 0X00000002, 0X00003050, 0X00003068, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X74626974, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000003,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000309C, 0X00000002, 0X000030A4,
0X000030BC, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626974, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X000030F0, 0X00000002, 0X000030F8, 0X00003110, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X74626974, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000005, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00003144,
0X00000002, 0X0000314C, 0X00003164, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X74626974, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00003198, 0X00000002, 0X000031A0, 0X000031B8,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626974, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000007, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X000031EC, 0X00000002, 0X000031F4, 0X0000320C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X74626974, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000008, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00003240, 0X00000002,
0X00003248, 0X00003260, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X636E746C,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000009A, 0X02F70007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00003294, 0X00000002, 0X0000329C, 0X000032B4, 0X02F20004,
0000000000, 0000000000, 0000000000, 0000000000, 0X636E746C, 0X02F70004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000069, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000032E8, 0X00000004, 0X000032F8, 0X00003310, 0X00003328, 0X00003340, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000001A,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003A, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00003374, 0X00000002, 0X0000337C, 0X00003394, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X0000000C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000003A, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000033C8, 0X00000002, 0X000033D0, 0X000033E8, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000016, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003A,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0X27000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00003480,
0X00000011, 0X00003468, 0X43617262, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000,
0X000034C4, 0000000000, 0X00003500, 0X00003530, 0X00003620, 0X000036AC, 0X000036C8, 0X000036F4,
0000000000, 0000000000, 0000000000, 0000000000, 0X00003724, 0X0000373C, 0000000000, 0000000000,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000034E0, 0X1E000000,
0X556E7469, 0X746C6564, 0X20436172, 0X626F6E20, 0X4576656E, 0X74204361, 0X6C6C6261, 0X636B0000,
0X0A700006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000351C, 0X10000000, 0X2F434520,
0X48616E64, 0X6C652045, 0X76656E74, 0000000000, 0X0A710007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000354C, 0X00000002, 0X00003554, 0X000035B8, 0X15000008, 0000000000, 0000000000,
0000000000, 0000000000, 0X00003590, 0X00000001, 0X00003574, 0X41747472, 0X69627574, 0X6520496E,
0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X00003594, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X000035B0, 0X05000000, 0X4F776E65, 0X72000000, 0X15000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000035F4, 0X00000001, 0X000035D8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000035F8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00003614, 0X09000000, 0X54686520, 0X4576656E, 0X74000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000363C, 0X00000001, 0X00003640,
0X16000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000367C, 0X00000001, 0X00003660,
0X41747472, 0X69627574, 0X65204F75, 0X74707574, 0X20537065, 0X63696669, 0X65720000, 0X00003680,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000369C, 0X0F000000, 0X43616C6C,
0X6261636B, 0X20526573, 0X756C7400, 0X0A370007, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000036E4,
0X0F000000, 0X2F446F20, 0X43452043, 0X616C6C62, 0X61636B00, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00003710, 0X13000000, 0X4576656E, 0X7448616E, 0X646C6572, 0X50726F63,
0X50747200, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00003758, 0X00000003, 0X00003764, 0X000037B8,
0X0000380C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00003780, 0X00000002,
0X00003788, 0X000037A0, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X636E746C,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000069, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X000037D4, 0X00000002, 0X000037DC, 0X000037F4, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X74626976, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000004, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00003828, 0X00000002, 0X00003830, 0X00003848, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X636E746C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000009A,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000387C, 0X00000002, 0X00003884,
0X00003AA4, 0X97010008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000038BC, 0X00000009,
0X000038A4, 0X48495365, 0X676D656E, 0X74656456, 0X69657720, 0X5365676D, 0X656E7400, 0X000038E0,
0X000038F8, 0X00003910, 0X00003964, 0X0000397C, 0X00003994, 0000000000, 0000000000, 0X000039AC,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000392C, 0X00000002, 0X00003934, 0X0000394C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000003,
0000000000, 0000000000, 0000000000, 0000000000, 0X00010000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X494E626B, 0X79000008, 0000000000, 0000000000, 0000000000, 0000000000,
0X000039E4, 0X00000003, 0X000039CC, 0X4D61634F, 0X53204963, 0X6F6E2052, 0X65666572, 0X656E6365,
0000000000, 0X000039F0, 0000000000, 0X00003A18, 0X06B30006, 0000000000, 0000000000, 0000000000,
0000000000, 0X00003A0C, 0X0A000000, 0X4261636B, 0X20417272, 0X6F770000, 0X7A000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X00003A50, 0X00000003, 0X00003A38, 0X4D61634F, 0X53204963,
0X6F6E2052, 0X65676973, 0X74726172, 0000000000, 0X00003A5C, 0X00003A74, 0X00003A8C, 0X09B50004,
0000000000, 0000000000, 0000000000, 0000000000, 0X6261726F, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X6D616373, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0XFFFF8000, 0X97010008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00003ADC, 0X00000009,
0X00003AC4, 0X48495365, 0X676D656E, 0X74656456, 0X69657720, 0X5365676D, 0X656E7400, 0X00003B00,
0X00003B18, 0X00003B30, 0X00003B84, 0X00003B9C, 0X00003BB4, 0000000000, 0000000000, 0X00003BCC,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X00003B4C, 0X00000002, 0X00003B54, 0X00003B6C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000003,
0000000000, 0000000000, 0000000000, 0000000000, 0X00010000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X494E6677, 0X79000008, 0000000000, 0000000000, 0000000000, 0000000000,
0X00003C04, 0X00000003, 0X00003BEC, 0X4D61634F, 0X53204963, 0X6F6E2052, 0X65666572, 0X656E6365,
0000000000, 0X00003C10, 0000000000, 0X00003C3C, 0X09B50006, 0000000000, 0000000000, 0000000000,
0000000000, 0X00003C2C, 0X0D000000, 0X466F7277, 0X61726420, 0X4172726F, 0X77000000, 0X7A000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00003C74, 0X00000003, 0X00003C5C, 0X4D61634F,
0X53204963, 0X6F6E2052, 0X65676973, 0X74726172, 0000000000, 0X00003C80, 0X00003C98, 0X00003CB0,
0X08070004, 0000000000, 0000000000, 0000000000, 0000000000, 0X6661726F, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X6D616373, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0XFFFF8000, 0X71000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00003CF8,
0X0000000C, 0X00003CE8, 0X4849546F, 0X6F6C6261, 0X72204974, 0X656D0000, 0X00003D28, 0X00003D6C,
0X00003D84, 0X00003D9C, 0X00003DB4, 0X00003DDC, 0X00003DF4, 0000000000, 0X00003E0C, 0X00003E40,
0X00003E60, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00003D44,
0X24000000, 0X636F6D2E, 0X6D616376, 0X706C2E68, 0X69746F6F, 0X6C626172, 0X6974656D, 0X2E696E66,
0X6F2E6368, 0X65636B73, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006, 0X00000003,
0000000000, 0000000000, 0000000000, 0000000000, 0X00010000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00003DD0, 0X0B000000, 0X436F6465, 0X20436865, 0X636B7300, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X6943686B, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00003E28, 0X17000000, 0X43686563, 0X6B20466F, 0X7220436F, 0X64652050, 0X726F626C, 0X656D7300,
0X54610006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00003E5C, 0000000000, 0000000000,
0X79000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00003E98, 0X00000003, 0X00003E80,
0X4D61634F, 0X53204963, 0X6F6E2052, 0X65666572, 0X656E6365, 0000000000, 0X00003EA4, 0000000000,
0X00003ED0, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00003EC0, 0X0C000000,
0X43617574, 0X696F6E20, 0X49636F6E, 0000000000, 0X7A000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00003F08, 0X00000003, 0X00003EF0, 0X4D61634F, 0X53204963, 0X6F6E2052, 0X65676973,
0X74726172, 0000000000, 0X00003F14, 0X00003F2C, 0X00003F44, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X63617574, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X6D616373, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0XFFFF8000, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00003F78, 0X00000006, 0X00003F90, 0X000051B8,
0X00005444, 0X000056B0, 0X00005944, 0X000067DC, 0X96010008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00003FD0, 0X00000018, 0X00003FB0, 0X48495365, 0X676D656E, 0X74656456, 0X69657720,
0X546F6F6C, 0X62617220, 0X4974656D, 0000000000, 0X00004030, 0X00004080, 0X00004098, 0X000040B0,
0X000040C8, 0X000040EC, 0X00004104, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001058,
0X0000411C, 0000000000, 0X000047BC, 0X00004848, 0X0000489C, 0000000000, 0X000048F0, 0X00004908,
0X00004920, 0X00004938, 0000000000, 0X00004D50, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000404C, 0X32000000, 0X636F6D2E, 0X6D617274, 0X656E2E69, 0X6E666F77, 0X696E646F,
0X772E6869, 0X746F6F6C, 0X62617269, 0X74656D2E, 0X7365676D, 0X656E7465, 0X642E6E61, 0X76690000,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000001, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X00000003, 0000000000, 0000000000, 0000000000,
0000000000, 0X00010000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000040E4,
0X04000000, 0X4261636B, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X494E626B, 0X6F000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00004154, 0X00000003, 0X0000413C, 0X4849546F,
0X6F6C6261, 0X72204974, 0X656D204F, 0X626A6563, 0X74000000, 0000000000, 0000000000, 0X00004160,
0X27000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00004198, 0X00000011, 0X00004180,
0X43617262, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X000041DC, 0000000000,
0X00004210, 0X00004240, 0X00004330, 0000000000, 0X000043BC, 0X000043E8, 0000000000, 0000000000,
0000000000, 0000000000, 0X00004418, 0X00004430, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X000041F8, 0X16000000, 0X6B457665, 0X6E74436C,
0X61737354, 0X6F6F6C62, 0X61724974, 0X656D0000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000422C, 0X10000000, 0X2F434520, 0X48616E64, 0X6C652045, 0X76656E74, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000425C, 0X00000002, 0X00004264,
0X000042C8, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000042A0, 0X00000001,
0X00004284, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0X000042A4, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000042C0, 0X05000000,
0X4F776E65, 0X72000000, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00004304,
0X00000001, 0X000042E8, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965,
0X72000000, 0X00004308, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00004324,
0X09000000, 0X54686520, 0X4576656E, 0X74000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000434C, 0X00000001, 0X00004350, 0X16000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000438C, 0X00000001, 0X00004370, 0X41747472, 0X69627574, 0X65204F75, 0X74707574,
0X20537065, 0X63696669, 0X65720000, 0X00004390, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000043AC, 0X0F000000, 0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X000043D8, 0X0F000000, 0X2F446F20, 0X43452043,
0X616C6C62, 0X61636B00, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00004404,
0X13000000, 0X4576656E, 0X7448616E, 0X646C6572, 0X50726F63, 0X50747200, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X02F30007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000444C, 0X0000000A, 0X00004474, 0X000044C8, 0X0000451C, 0X00004570, 0X000045C4,
0X00004618, 0X0000466C, 0X000046C0, 0X00004714, 0X00004768, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00004490, 0X00000002, 0X00004498, 0X000044B0, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X74626974, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000001, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000044E4,
0X00000002, 0X000044EC, 0X00004504, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X74626974, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000002, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00004538, 0X00000002, 0X00004540, 0X00004558,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626974, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000003, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000458C, 0X00000002, 0X00004594, 0X000045AC, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X74626974, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000004, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000045E0, 0X00000002,
0X000045E8, 0X00004600, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626974,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000005, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00004634, 0X00000002, 0X0000463C, 0X00004654, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X74626974, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000006, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00004688, 0X00000002, 0X00004690, 0X000046A8, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X74626974, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000007,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000046DC, 0X00000002, 0X000046E4,
0X000046FC, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626974, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000008, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00004730, 0X00000002, 0X00004738, 0X00004750, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X636E746C, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000009A, 0X02F70007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00004784,
0X00000002, 0X0000478C, 0X000047A4, 0X02F20004, 0000000000, 0000000000, 0000000000, 0000000000,
0X636E746C, 0X02F70004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000069, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000047D8, 0X00000004, 0X000047E8, 0X00004800,
0X00004818, 0X00004830, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X0000001A, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000003A, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00004864,
0X00000002, 0X0000486C, 0X00004884, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X0000000C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003A, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000048B8, 0X00000002, 0X000048C0, 0X000048D8,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000016, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X0000003A, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X27000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X00004970, 0X00000011, 0X00004958, 0X43617262, 0X6F6E2045,
0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X000049B4, 0X00003F90, 0X000049F0, 0X00004A20,
0X00004B10, 0X00004B9C, 0X00004BB8, 0X00004BE4, 0000000000, 0000000000, 0000000000, 0000000000,
0X00004C14, 0X00004C2C, 0X00003F90, 0000000000, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X000049D0, 0X1E000000, 0X556E7469, 0X746C6564, 0X20436172, 0X626F6E20,
0X4576656E, 0X74204361, 0X6C6C6261, 0X636B0000, 0X0A700006, 0000000000, 0000000000, 0000000000,
0000000000, 0X00004A0C, 0X10000000, 0X2F434520, 0X48616E64, 0X6C652045, 0X76656E74, 0000000000,
0X0A710007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00004A3C, 0X00000002, 0X00004A44,
0X00004AA8, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00004A80, 0X00000001,
0X00004A64, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0X00004A84, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00004AA0, 0X05000000,
0X4F776E65, 0X72000000, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00004AE4,
0X00000001, 0X00004AC8, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965,
0X72000000, 0X00004AE8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00004B04,
0X09000000, 0X54686520, 0X4576656E, 0X74000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X00004B2C, 0X00000001, 0X00004B30, 0X16000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00004B6C, 0X00000001, 0X00004B50, 0X41747472, 0X69627574, 0X65204F75, 0X74707574,
0X20537065, 0X63696669, 0X65720000, 0X00004B70, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X00004B8C, 0X0F000000, 0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400, 0X0A370007,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00004BD4, 0X0F000000, 0X2F446F20, 0X43452043, 0X616C6C62,
0X61636B00, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00004C00, 0X13000000,
0X4576656E, 0X7448616E, 0X646C6572, 0X50726F63, 0X50747200, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00004C48, 0X00000003, 0X00004C54, 0X00004CA8, 0X00004CFC, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00004C70, 0X00000002, 0X00004C78, 0X00004C90, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X636E746C, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000069, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00004CC4,
0X00000002, 0X00004CCC, 0X00004CE4, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X74626976, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00004D18, 0X00000002, 0X00004D20, 0X00004D38,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X636E746C, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X0000009A, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X00004D6C, 0X00000002, 0X00004D74, 0X00004F94, 0X97010008, 0000000000, 0000000000,
0000000000, 0000000000, 0X00004DAC, 0X00000009, 0X00004D94, 0X48495365, 0X676D656E, 0X74656456,
0X69657720, 0X5365676D, 0X656E7400, 0X00004DD0, 0X00004DE8, 0X00004E00, 0X00004E54, 0X00004E6C,
0X00004E84, 0000000000, 0000000000, 0X00004E9C, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000001, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000001,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00004E1C, 0X00000002, 0X00004E24,
0X00004E3C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000,
0X00010000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X494E626B, 0X79000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00004ED4, 0X00000003, 0X00004EBC, 0X4D61634F,
0X53204963, 0X6F6E2052, 0X65666572, 0X656E6365, 0000000000, 0X00004EE0, 0000000000, 0X00004F08,
0X06B30006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00004EFC, 0X0A000000, 0X4261636B,
0X20417272, 0X6F770000, 0X7A000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00004F40,
0X00000003, 0X00004F28, 0X4D61634F, 0X53204963, 0X6F6E2052, 0X65676973, 0X74726172, 0000000000,
0X00004F4C, 0X00004F64, 0X00004F7C, 0X09B50004, 0000000000, 0000000000, 0000000000, 0000000000,
0X6261726F, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X6D616373, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0XFFFF8000, 0X97010008, 0000000000, 0000000000,
0000000000, 0000000000, 0X00004FCC, 0X00000009, 0X00004FB4, 0X48495365, 0X676D656E, 0X74656456,
0X69657720, 0X5365676D, 0X656E7400, 0X00004FF0, 0X00005008, 0X00005020, 0X00005074, 0X0000508C,
0X000050A4, 0000000000, 0000000000, 0X000050BC, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000002, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000001,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000503C, 0X00000002, 0X00005044,
0X0000505C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000,
0X00010000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X494E6677, 0X79000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X000050F4, 0X00000003, 0X000050DC, 0X4D61634F,
0X53204963, 0X6F6E2052, 0X65666572, 0X656E6365, 0000000000, 0X00005100, 0000000000, 0X0000512C,
0X09B50006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000511C, 0X0D000000, 0X466F7277,
0X61726420, 0X4172726F, 0X77000000, 0X7A000008, 0000000000, 0000000000, 0000000000, 0000000000,
0X00005164, 0X00000003, 0X0000514C, 0X4D61634F, 0X53204963, 0X6F6E2052, 0X65676973, 0X74726172,
0000000000, 0X00005170, 0X00005188, 0X000051A0, 0X08070004, 0000000000, 0000000000, 0000000000,
0000000000, 0X6661726F, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X6D616373,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0XFFFF8000, 0X71000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000051E8, 0X0000000C, 0X000051D8, 0X4849546F, 0X6F6C6261,
0X72204974, 0X656D0000, 0X00005218, 0X0000525C, 0X00005274, 0X0000528C, 0X000052A4, 0X000052CC,
0X000052E4, 0000000000, 0X000052FC, 0X0000532C, 0X0000534C, 0X00001058, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00005234, 0X26000000, 0X636F6D2E, 0X6D616376, 0X706C2E68,
0X69746F6F, 0X6C626172, 0X6974656D, 0X2E696E66, 0X6F2E636F, 0X6E74656E, 0X74730000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000002, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000,
0X00010000, 0X05AB0006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000052C0, 0X08000000,
0X436F6E74, 0X656E7473, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X49746F63, 0X436F0006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00005318, 0X11000000, 0X5461626C, 0X65206F66,
0X20436F6E, 0X74656E74, 0X73000000, 0X54610006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00005348, 0000000000, 0000000000, 0X79000008, 0000000000, 0000000000, 0000000000, 0000000000,
0X00005384, 0X00000003, 0X0000536C, 0X4D61634F, 0X53204963, 0X6F6E2052, 0X65666572, 0X656E6365,
0000000000, 0X00005390, 0000000000, 0X000053B8, 0X05AF0006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000053AC, 0X09000000, 0X486F6D65, 0X2049636F, 0X6E000000, 0X7A000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000053F0, 0X00000003, 0X000053D8, 0X4D61634F, 0X53204963,
0X6F6E2052, 0X65676973, 0X74726172, 0000000000, 0X000053FC, 0X00005414, 0X0000542C, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X74686F6D, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X6D616373, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0XFFFF8000, 0X71000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00005474, 0X0000000C,
0X00005464, 0X4849546F, 0X6F6C6261, 0X72204974, 0X656D0000, 0X000054A4, 0X000054E8, 0X00005500,
0X00005518, 0X00005530, 0X00005554, 0X0000556C, 0000000000, 0X00005584, 0000000000, 0X000055B8,
0X00001058, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000054C0, 0X25000000,
0X636F6D2E, 0X6D616376, 0X706C2E68, 0X69746F6F, 0X6C626172, 0X6974656D, 0X2E696E66, 0X6F2E636C,
0X61737365, 0X73000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000005,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000005, 0X00000003, 0000000000,
0000000000, 0000000000, 0000000000, 0X00010000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000554C, 0X07000000, 0X436C6173, 0X73657300, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X49636C73, 0X68650006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000055A0, 0X17000000,
0X44697370, 0X6C617920, 0X636C6173, 0X73206865, 0X69726172, 0X63687900, 0X79000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000055F0, 0X00000003, 0X000055D8, 0X4D61634F, 0X53204963,
0X6F6E2052, 0X65666572, 0X656E6365, 0000000000, 0X000055FC, 0000000000, 0X00005624, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00005618, 0X0A000000, 0X4170706C, 0X65204C6F,
0X676F0000, 0X7A000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000565C, 0X00000003,
0X00005644, 0X4D61634F, 0X53204963, 0X6F6E2052, 0X65676973, 0X74726172, 0000000000, 0X00005668,
0X00005680, 0X00005698, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X61726E67,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X6D616373, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0XFFFF8000, 0X71000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X000056E0, 0X0000000C, 0X000056D0, 0X4849546F, 0X6F6C6261, 0X72204974, 0X656D0000,
0X00005710, 0X00005754, 0X0000576C, 0X00005784, 0X0000579C, 0X000057C4, 0X000057DC, 0000000000,
0X000057F4, 0X00005828, 0X00005848, 0X00001058, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000572C, 0X24000000, 0X636F6D2E, 0X6D616376, 0X706C2E68, 0X69746F6F, 0X6C626172,
0X6974656D, 0X2E696E66, 0X6F2E6368, 0X65636B73, 0000000000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000006, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00010000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X000057B8, 0X0B000000, 0X436F6465, 0X20436865,
0X636B7300, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X6943686B, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00005810, 0X17000000, 0X43686563, 0X6B20466F, 0X7220436F, 0X64652050,
0X726F626C, 0X656D7300, 0X54610006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00005844,
0000000000, 0000000000, 0X79000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00005880,
0X00000003, 0X00005868, 0X4D61634F, 0X53204963, 0X6F6E2052, 0X65666572, 0X656E6365, 0000000000,
0X0000588C, 0000000000, 0X000058B8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X000058A8, 0X0C000000, 0X43617574, 0X696F6E20, 0X49636F6E, 0000000000, 0X7A000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000058F0, 0X00000003, 0X000058D8, 0X4D61634F, 0X53204963,
0X6F6E2052, 0X65676973, 0X74726172, 0000000000, 0X000058FC, 0X00005914, 0X0000592C, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X63617574, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X6D616373, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0XFFFF8000, 0X94010008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00005980, 0X00000019,
0X00005964, 0X48495365, 0X61726368, 0X4669656C, 0X6420546F, 0X6F6C6261, 0X72204974, 0X656D0000,
0X000059E4, 0X00005A20, 0X00005A38, 0X00005A50, 0X00005A68, 0X00005A90, 0X00005AA8, 0000000000,
0000000000, 0000000000, 0000000000, 0X00001058, 0X00005AC0, 0000000000, 0X00006160, 0X000061EC,
0X00006240, 0000000000, 0X00006294, 0X000062AC, 0X000062C4, 0X000062DC, 0000000000, 0X000067A4,
0X000067BC, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00005A00, 0X1F000000,
0X636F6D2E, 0X6D616376, 0X706C2E74, 0X6F6F6C62, 0X61726974, 0X656D2E68, 0X69736561, 0X72636800,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000006E, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000, 0000000000,
0000000000, 0X00010000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00005A84,
0X0B000000, 0X496E666F, 0X726D6174, 0X696F6E00, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X6F000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00005AF8, 0X00000003, 0X00005AE0,
0X4849546F, 0X6F6C6261, 0X72204974, 0X656D204F, 0X626A6563, 0X74000000, 0000000000, 0000000000,
0X00005B04, 0X27000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00005B3C, 0X00000011,
0X00005B24, 0X43617262, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00005B80,
0000000000, 0X00005BB4, 0X00005BE4, 0X00005CD4, 0000000000, 0X00005D60, 0X00005D8C, 0000000000,
0000000000, 0000000000, 0000000000, 0X00005DBC, 0X00005DD4, 0000000000, 0000000000, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00005B9C, 0X16000000, 0X6B457665,
0X6E74436C, 0X61737354, 0X6F6F6C62, 0X61724974, 0X656D0000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00005BD0, 0X10000000, 0X2F434520, 0X48616E64, 0X6C652045, 0X76656E74,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00005C00, 0X00000002,
0X00005C08, 0X00005C6C, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00005C44,
0X00000001, 0X00005C28, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965,
0X72000000, 0X00005C48, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00005C64,
0X05000000, 0X4F776E65, 0X72000000, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000,
0X00005CA8, 0X00000001, 0X00005C8C, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563,
0X69666965, 0X72000000, 0X00005CAC, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00005CC8, 0X09000000, 0X54686520, 0X4576656E, 0X74000000, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00005CF0, 0X00000001, 0X00005CF4, 0X16000008, 0000000000, 0000000000,
0000000000, 0000000000, 0X00005D30, 0X00000001, 0X00005D14, 0X41747472, 0X69627574, 0X65204F75,
0X74707574, 0X20537065, 0X63696669, 0X65720000, 0X00005D34, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00005D50, 0X0F000000, 0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00005D7C, 0X0F000000, 0X2F446F20,
0X43452043, 0X616C6C62, 0X61636B00, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00005DA8, 0X13000000, 0X4576656E, 0X7448616E, 0X646C6572, 0X50726F63, 0X50747200, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X02F30007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00005DF0, 0X0000000A, 0X00005E18, 0X00005E6C, 0X00005EC0, 0X00005F14,
0X00005F68, 0X00005FBC, 0X00006010, 0X00006064, 0X000060B8, 0X0000610C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00005E34, 0X00000002, 0X00005E3C, 0X00005E54, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X74626974, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000001, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00005E88, 0X00000002, 0X00005E90, 0X00005EA8, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X74626974, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000002,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00005EDC, 0X00000002, 0X00005EE4,
0X00005EFC, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626974, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000003, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00005F30, 0X00000002, 0X00005F38, 0X00005F50, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X74626974, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00005F84,
0X00000002, 0X00005F8C, 0X00005FA4, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X74626974, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000005, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00005FD8, 0X00000002, 0X00005FE0, 0X00005FF8,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626974, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000006, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000602C, 0X00000002, 0X00006034, 0X0000604C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X74626974, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00006080, 0X00000002,
0X00006088, 0X000060A0, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626974,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000008, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X000060D4, 0X00000002, 0X000060DC, 0X000060F4, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X636E746C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000009A, 0X02F70007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00006128, 0X00000002, 0X00006130, 0X00006148, 0X02F20004, 0000000000, 0000000000, 0000000000,
0000000000, 0X636E746C, 0X02F70004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000069,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000617C, 0X00000004, 0X0000618C,
0X000061A4, 0X000061BC, 0X000061D4, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000018, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X000000AA, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00006208, 0X00000002, 0X00006210, 0X00006228, 0X03DF0004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000018, 0X04900004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000032,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000625C, 0X00000002, 0X00006264,
0X0000627C, 0X04900004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000018, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X0000012C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X27000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00006314, 0X00000011, 0X000062FC, 0X43617262,
0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00006358, 0X00005944, 0X00006394,
0X000063C4, 0X000064B4, 0X00006540, 0X0000655C, 0X00006588, 0000000000, 0000000000, 0000000000,
0000000000, 0X000065B8, 0X000065D0, 0X00005944, 0000000000, 0000000000, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00006374, 0X1E000000, 0X556E7469, 0X746C6564, 0X20436172,
0X626F6E20, 0X4576656E, 0X74204361, 0X6C6C6261, 0X636B0000, 0X45760006, 0000000000, 0000000000,
0000000000, 0000000000, 0X000063B0, 0X10000000, 0X2F434520, 0X48616E64, 0X6C652045, 0X76656E74,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000063E0, 0X00000002,
0X000063E8, 0X0000644C, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00006424,
0X00000001, 0X00006408, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965,
0X72000000, 0X00006428, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00006444,
0X05000000, 0X4F776E65, 0X72000000, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000,
0X00006488, 0X00000001, 0X0000646C, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563,
0X69666965, 0X72000000, 0X0000648C, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X000064A8, 0X09000000, 0X54686520, 0X4576656E, 0X74000000, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X000064D0, 0X00000001, 0X000064D4, 0X16000008, 0000000000, 0000000000,
0000000000, 0000000000, 0X00006510, 0X00000001, 0X000064F4, 0X41747472, 0X69627574, 0X65204F75,
0X74707574, 0X20537065, 0X63696669, 0X65720000, 0X00006514, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00006530, 0X0F000000, 0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00006578, 0X0F000000, 0X2F446F20, 0X43452043,
0X616C6C62, 0X61636B00, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000065A4,
0X13000000, 0X4576656E, 0X7448616E, 0X646C6572, 0X50726F63, 0X50747200, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X000065EC, 0X00000005, 0X00006600, 0X00006654, 0X000066A8, 0X000066FC, 0X00006750,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000661C, 0X00000002, 0X00006624,
0X0000663C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X636E746C, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000069, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00006670, 0X00000002, 0X00006678, 0X00006690, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X74786664, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000001, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000066C4,
0X00000002, 0X000066CC, 0X000066E4, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X73726664, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000001, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00006718, 0X00000002, 0X00006720, 0X00006738,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626976, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000676C, 0X00000002, 0X00006774, 0X0000678C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X636E746C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X0000009A, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00016D2E, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X000067D8, 0000000000, 0000000000, 0X71000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X0000680C, 0X0000000C, 0X000067FC, 0X4849546F,
0X6F6C6261, 0X72204974, 0X656D0000, 0X0000683C, 0X00006880, 0X00006898, 0X000068B0, 0X000068C8,
0X000068EC, 0X00006904, 0000000000, 0X0000691C, 0000000000, 0X00006954, 0X00001058, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00006858, 0X24000000, 0X636F6D2E, 0X6D616376,
0X706C2E68, 0X69746F6F, 0X6C626172, 0X6974656D, 0X2E696E66, 0X6F2E7365, 0X61726368, 0000000000,
0X05510004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000078, 0X02F90004, 0000000000,
0000000000, 0000000000, 0000000000, 0X0000000A, 0X00000003, 0000000000, 0000000000, 0000000000,
0000000000, 0X00010000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000068E4,
0X06000000, 0X53656172, 0X63680000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X05E70004, 0000000000, 0000000000, 0000000000, 0000000000, 0X49737249, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00006938, 0X1A000000, 0X53656172, 0X63682064,
0X6576656C, 0X6F706572, 0X2E617070, 0X6C652E63, 0X6F6D0000, 0X79000008, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000698C, 0X00000003, 0X00006974, 0X4D61634F, 0X53204963, 0X6F6E2052,
0X65666572, 0X656E6365, 0000000000, 0X00006998, 0000000000, 0X000069C0, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000069B4, 0X0A000000, 0X4170706C, 0X65204C6F, 0X676F0000,
0X7A000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000069F8, 0X00000003, 0X000069E0,
0X4D61634F, 0X53204963, 0X6F6E2052, 0X65676973, 0X74726172, 0000000000, 0X00006A04, 0X00006A1C,
0X00006A34, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X6361706C, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X6D616373, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0XFFFF8000, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000,
0X00010000, 0X023F0003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00010000, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X27000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X00006AD0, 0X00000011, 0X00006AB8, 0X43617262, 0X6F6E2045,
0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00006B14, 0X00001058, 0X00006B44, 0X00006B74,
0X00006C64, 0000000000, 0X00006CF0, 0X00006D1C, 0000000000, 0000000000, 0000000000, 0000000000,
0X00006D4C, 0X00006D64, 0X00006F38, 0000000000, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00006B30, 0X12000000, 0X6B457665, 0X6E74436C, 0X61737354, 0X6F6F6C62,
0X61720000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00006B60, 0X10000000,
0X2F434520, 0X48616E64, 0X6C652045, 0X76656E74, 0000000000, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00006B90, 0X00000002, 0X00006B98, 0X00006BFC, 0X15000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X00006BD4, 0X00000001, 0X00006BB8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X00006BD8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00006BF4, 0X05000000, 0X4F776E65, 0X72000000, 0X15000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00006C38, 0X00000001, 0X00006C1C, 0X41747472,
0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X00006C3C, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00006C58, 0X09000000, 0X54686520, 0X4576656E,
0X74000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00006C80, 0X00000001,
0X00006C84, 0X16000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00006CC0, 0X00000001,
0X00006CA4, 0X41747472, 0X69627574, 0X65204F75, 0X74707574, 0X20537065, 0X63696669, 0X65720000,
0X00006CC4, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00006CE0, 0X0F000000,
0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X00006D0C, 0X0F000000, 0X2F446F20, 0X43452043, 0X616C6C62, 0X61636B00, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00006D38, 0X13000000, 0X4576656E, 0X7448616E,
0X646C6572, 0X50726F63, 0X50747200, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00006D80, 0X00000005,
0X00006D94, 0X00006DE8, 0X00006E3C, 0X00006E90, 0X00006EE4, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00006DB0, 0X00000002, 0X00006DB8, 0X00006DD0, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X74626172, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000001, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00006E04,
0X00000002, 0X00006E0C, 0X00006E24, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X74626172, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000002, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00006E58, 0X00000002, 0X00006E60, 0X00006E78,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626172, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000003, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X00006EAC, 0X00000002, 0X00006EB4, 0X00006ECC, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X74626172, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000004, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00006F00, 0X00000002,
0X00006F08, 0X00006F20, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626172,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000005, 0X2A000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X00006F74, 0X00000001, 0X00006F58, 0X43617262, 0X6F6E2045,
0X76656E74, 0X20546172, 0X67657420, 0X50726F78, 0X79000000, 0000000000
	};
	Nat4 tempPersistent_OLD_20_Info_20_Window_2F_Toolbar[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0E000000, 0X496E666F, 0X20484954, 0X6F6F6C62,
0X61720000
	};
	Nat4 tempPersistent_Info_20_HIToolbar_2F_HIObject_20_Class[] = {
0000000000, 0X000006E8, 0X00000150, 0X0000004F, 0X00000014, 0X00000804, 0X00000800, 0X000007F8,
0X00000540, 0X000007B0, 0X000007AC, 0X000007A4, 0X0000053C, 0X0000075C, 0X00000758, 0X00000750,
0X00000538, 0X00000708, 0X00000704, 0X000006FC, 0X00000534, 0X000006B4, 0X000006B0, 0X000006A8,
0X00000530, 0X00000660, 0X0000065C, 0X00000654, 0X0000052C, 0X0000060C, 0X00000608, 0X00000600,
0X00000528, 0X000005B8, 0X000005B4, 0X000005AC, 0X00000524, 0X00000564, 0X00000560, 0X00000558,
0X00000520, 0X00000518, 0X00000290, 0X0000028C, 0X000004D0, 0X00000278, 0X000004A4, 0X00000274,
0X00000270, 0X0000045C, 0X00000444, 0X0000041C, 0X00000424, 0X00000404, 0X000003FC, 0X0000026C,
0X000003D4, 0X000003BC, 0X00000394, 0X0000039C, 0X00000318, 0X00000370, 0X00000358, 0X00000330,
0X00000338, 0X00000314, 0X0000030C, 0X00000268, 0X000002DC, 0X00000264, 0X00000260, 0X000002AC,
0X0000025C, 0X00000238, 0X00000240, 0X00000190, 0X0000020C, 0X0000018C, 0X000001EC, 0X00000184,
0X000001A8, 0X00000180, 0X00000164, 0X0000016C, 0X6A000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000180, 0X00000005, 0X00000170, 0X48494F62, 0X6A656374, 0X20436C61, 0X73730000,
0X00000194, 0X000001D8, 0000000000, 0X000001F8, 0X00000224, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X000001B0, 0X24000000, 0X636F6D2E, 0X616E6465, 0X73636F74, 0X69612E6D,
0X61727465, 0X6E2E6869, 0X746F6F6C, 0X6261722E, 0X696E666F, 0000000000, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0000000000, 0000000000, 0X023F0006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000214, 0X0E000000, 0X496E666F, 0X20484954, 0X6F6F6C62,
0X61720000, 0X6B000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X0000000F,
0X00000244, 0X48494F62, 0X6A656374, 0X20436C61, 0X73732043, 0X616C6C62, 0X61636B00, 0X00000298,
0X00000150, 0X000002C8, 0X000002F8, 0X000003E8, 0X00000474, 0X00000490, 0X000004BC, 0000000000,
0000000000, 0000000000, 0000000000, 0X000004EC, 0X00000504, 0000000000, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000002B4, 0X13000000, 0X6B457665, 0X6E74436C, 0X61737348,
0X494F626A, 0X65637400, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E4,
0X12000000, 0X2F434520, 0X48494F62, 0X6A656374, 0X20457665, 0X6E740000, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000314, 0X00000002, 0X0000031C, 0X00000380, 0X15000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000358, 0X00000001, 0X0000033C, 0X41747472,
0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X0000035C, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000378, 0X05000000, 0X4F776E65, 0X72000000,
0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003BC, 0X00000001, 0X000003A0,
0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000003C0,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003DC, 0X09000000, 0X54686520,
0X4576656E, 0X74000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000404,
0X00000001, 0X00000408, 0X16000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000444,
0X00000001, 0X00000428, 0X41747472, 0X69627574, 0X65204F75, 0X74707574, 0X20537065, 0X63696669,
0X65720000, 0X00000448, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000464,
0X0F000000, 0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400, 0X06640007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000004AC, 0X0F000000, 0X2F446F20, 0X48492043, 0X616C6C62, 0X61636B00, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X000004D8, 0X13000000, 0X4576656E, 0X7448616E,
0X646C6572, 0X50726F63, 0X50747200, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000520, 0X00000009,
0X00000544, 0X00000598, 0X000005EC, 0X00000640, 0X00000694, 0X000006E8, 0X0000073C, 0X00000790,
0X000007E4, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000560, 0X00000002,
0X00000568, 0X00000580, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X68696F62,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000001, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X000005B4, 0X00000002, 0X000005BC, 0X000005D4, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X68696F62, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000608, 0X00000002, 0X00000610, 0X00000628, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X68696F62, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000003,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000065C, 0X00000002, 0X00000664,
0X0000067C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X68696F62, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X000006B0, 0X00000002, 0X000006B8, 0X000006D0, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X68696F62, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000005, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000704,
0X00000002, 0X0000070C, 0X00000724, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X74626172, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000001, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000758, 0X00000002, 0X00000760, 0X00000778,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626172, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000002, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X000007AC, 0X00000002, 0X000007B4, 0X000007CC, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X74626172, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000003, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000800, 0X00000002,
0X00000808, 0X00000820, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626172,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004
	};

Nat4	loadPersistents_Info_20_Window(V_Environment environment);
Nat4	loadPersistents_Info_20_Window(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	tempPersistent = create_persistentNode("Default Info Lists",tempPersistent_Default_20_Info_20_Lists,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Info Use Web View?",tempPersistent_Info_20_Use_20_Web_20_View_3F_,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("VPLInfo Window/Toolbar",tempPersistent_VPLInfo_20_Window_2F_Toolbar,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("OLD Info Window/Toolbar",tempPersistent_OLD_20_Info_20_Window_2F_Toolbar,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Info HIToolbar/HIObject Class",tempPersistent_Info_20_HIToolbar_2F_HIObject_20_Class,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	return kNOERROR;

}

Nat4	load_Info_20_Window(V_Environment environment);
Nat4	load_Info_20_Window(V_Environment environment)
{

	loadClasses_Info_20_Window(environment);
	loadUniversals_Info_20_Window(environment);
	loadPersistents_Info_20_Window(environment);
	return kNOERROR;

}

