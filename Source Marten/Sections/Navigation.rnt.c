/* A VPL Section File */
/*

Navigation.rnt.c
Copyright: 2002 Scott B. Anderson

*/

Nat4 VPLU_Nav_20_Ask_20_Discard_20_Changes_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Ask_20_Discard_20_Changes_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 99 46 104 }*/
/* IO - VPL Root : { 41 136 46 141 }*/
/* IO - VPL Root : { 41 173 46 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 100 86 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"setup dialog");
/* IO - VPL Terminal : { 65 117 70 122 }*/
/* IO - VPL Terminal : { 65 136 70 141 }*/
/* IO - VPL Terminal : { 65 155 70 160 }*/
/* IO - VPL Root : { 86 137 91 142 }*/
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

/* Start Operations: { 60 60 }{ 295 308 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 99 46 104 }*/
/* IO - VPL Root : { 41 136 46 141 }*/
/* IO - VPL Root : { 41 173 46 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 8 86 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Nav Ask Discard Changes Dialog");
/* IO - VPL Terminal : { 65 105 70 110 }*/
/* IO - VPL Root : { 86 105 91 110 }*/
/* End Operation */

/* Begin Operation: { 106 70 122 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Modality");
/* IO - VPL Terminal : { 101 101 106 106 }*/
/* IO - VPL Terminal : { 101 134 106 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 70 158 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Parent Window");
/* IO - VPL Terminal : { 137 112 142 117 }*/
/* IO - VPL Terminal : { 137 156 142 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 178 74 194 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Completion Behavior");
/* IO - VPL Terminal : { 173 126 178 131 }*/
/* IO - VPL Terminal : { 173 180 178 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 215 65 223 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 210 138 215 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 60 122 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 101 86 106 91 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 106 151 122 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Safe Run");
/* IO - VPL Terminal : { 101 181 106 186 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 114 86 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Run");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 109 86 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 64 114 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
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

/* Begin Operation: { 137 64 145 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,3,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Ask_20_Review_20_Documents_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Ask_20_Review_20_Documents_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 100 86 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"setup dialog");
/* IO - VPL Terminal : { 65 124 70 129 }*/
/* IO - VPL Terminal : { 65 150 70 155 }*/
/* IO - VPL Root : { 86 137 91 142 }*/
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

/* Start Operations: { 60 60 }{ 212 398 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 8 86 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Nav Ask Review Documents Dialog");
/* IO - VPL Terminal : { 65 109 70 114 }*/
/* IO - VPL Root : { 86 109 91 114 }*/
/* End Operation */

/* Begin Operation: { 106 41 122 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Document Count");
/* IO - VPL Terminal : { 101 84 106 89 }*/
/* IO - VPL Terminal : { 101 129 106 134 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 74 158 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Completion Behavior");
/* IO - VPL Terminal : { 137 126 142 131 }*/
/* IO - VPL Terminal : { 137 180 142 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 179 65 187 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 174 138 179 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 60 122 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 101 86 106 91 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 106 151 122 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Safe Run");
/* IO - VPL Terminal : { 101 181 106 186 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 114 86 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Run");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 109 86 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 64 114 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
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

/* Begin Operation: { 137 64 145 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Ask_20_Save_20_Changes_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Ask_20_Save_20_Changes_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 25 41 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 68 46 73 }*/
/* IO - VPL Root : { 41 113 46 118 }*/
/* IO - VPL Root : { 41 158 46 163 }*/
/* IO - VPL Root : { 41 203 46 208 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 102 86 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"setup dialog");
/* IO - VPL Terminal : { 65 115 70 120 }*/
/* IO - VPL Terminal : { 65 130 70 135 }*/
/* IO - VPL Terminal : { 65 145 70 150 }*/
/* IO - VPL Terminal : { 65 160 70 165 }*/
/* IO - VPL Root : { 86 139 91 144 }*/
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

/* Start Operations: { 60 60 }{ 273 309 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 92 46 97 }*/
/* IO - VPL Root : { 41 122 46 127 }*/
/* IO - VPL Root : { 41 152 46 157 }*/
/* IO - VPL Root : { 41 182 46 187 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 8 86 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Nav Ask Save Changes Dialog");
/* IO - VPL Terminal : { 65 97 70 102 }*/
/* IO - VPL Root : { 86 97 91 102 }*/
/* End Operation */

/* Begin Operation: { 106 53 122 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Action");
/* IO - VPL Terminal : { 101 80 106 85 }*/
/* IO - VPL Terminal : { 101 109 106 114 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 70 158 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Modality");
/* IO - VPL Terminal : { 137 101 142 106 }*/
/* IO - VPL Terminal : { 137 134 142 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 178 70 194 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Parent Window");
/* IO - VPL Terminal : { 173 112 178 117 }*/
/* IO - VPL Terminal : { 173 156 178 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 214 74 230 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Completion Behavior");
/* IO - VPL Terminal : { 209 126 214 131 }*/
/* IO - VPL Terminal : { 209 180 214 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 251 65 259 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 246 138 251 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,4,0,2,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 60 122 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 101 86 106 91 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 106 151 122 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Safe Run");
/* IO - VPL Terminal : { 101 181 106 186 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 114 86 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Run");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 109 86 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 64 114 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
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

/* Begin Operation: { 137 64 145 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,3,1);
	result = connect_root_to_terminal(ptrA,4,0,4,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Choose_20_File_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Choose_20_File_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 25 41 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 68 46 73 }*/
/* IO - VPL Root : { 41 113 46 118 }*/
/* IO - VPL Root : { 41 158 46 163 }*/
/* IO - VPL Root : { 41 203 46 208 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 102 86 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"setup dialog");
/* IO - VPL Terminal : { 65 115 70 120 }*/
/* IO - VPL Terminal : { 65 130 70 135 }*/
/* IO - VPL Terminal : { 65 145 70 150 }*/
/* IO - VPL Terminal : { 65 160 70 165 }*/
/* IO - VPL Root : { 86 139 91 144 }*/
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

/* Start Operations: { 60 60 }{ 249 301 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 92 46 97 }*/
/* IO - VPL Root : { 41 122 46 127 }*/
/* IO - VPL Root : { 41 152 46 157 }*/
/* IO - VPL Root : { 41 182 46 187 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 18 86 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Nav Choose File Dialog");
/* IO - VPL Terminal : { 65 89 70 94 }*/
/* IO - VPL Root : { 86 89 91 94 }*/
/* End Operation */

/* Begin Operation: { 106 45 122 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Type List");
/* IO - VPL Terminal : { 101 77 106 82 }*/
/* IO - VPL Terminal : { 101 111 106 116 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 70 158 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Modality");
/* IO - VPL Terminal : { 137 101 142 106 }*/
/* IO - VPL Terminal : { 137 134 142 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 178 70 194 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Parent Window");
/* IO - VPL Terminal : { 173 112 178 117 }*/
/* IO - VPL Terminal : { 173 156 178 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 214 74 230 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Completion Behavior");
/* IO - VPL Terminal : { 209 126 214 131 }*/
/* IO - VPL Terminal : { 209 180 214 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 251 65 259 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 246 138 251 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,4,0,2,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 60 122 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 101 86 106 91 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 106 151 122 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Safe Run");
/* IO - VPL Terminal : { 101 181 106 186 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 114 86 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Run");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 109 86 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 64 114 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
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

/* Begin Operation: { 137 64 145 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,3,1);
	result = connect_root_to_terminal(ptrA,4,0,4,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Choose_20_Folder_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Choose_20_Folder_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 57 41 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 92 46 97 }*/
/* IO - VPL Root : { 41 129 46 134 }*/
/* IO - VPL Root : { 41 166 46 171 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 93 86 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"setup dialog");
/* IO - VPL Terminal : { 65 110 70 115 }*/
/* IO - VPL Terminal : { 65 129 70 134 }*/
/* IO - VPL Terminal : { 65 148 70 153 }*/
/* IO - VPL Root : { 86 130 91 135 }*/
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

/* Start Operations: { 60 60 }{ 261 303 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 99 46 104 }*/
/* IO - VPL Root : { 41 136 46 141 }*/
/* IO - VPL Root : { 41 173 46 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 19 86 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Nav Choose Folder Dialog");
/* IO - VPL Terminal : { 65 97 70 102 }*/
/* IO - VPL Root : { 86 97 91 102 }*/
/* End Operation */

/* Begin Operation: { 106 70 122 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Modality");
/* IO - VPL Terminal : { 101 101 106 106 }*/
/* IO - VPL Terminal : { 101 134 106 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 70 158 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Parent Window");
/* IO - VPL Terminal : { 137 112 142 117 }*/
/* IO - VPL Terminal : { 137 156 142 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 178 74 194 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Completion Behavior");
/* IO - VPL Terminal : { 173 126 178 131 }*/
/* IO - VPL Terminal : { 173 180 178 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 215 65 223 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 210 138 215 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 46 122 102 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 101 72 106 77 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 106 150 122 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Safe Run");
/* IO - VPL Terminal : { 101 180 106 185 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 114 86 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Run");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 109 86 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 64 114 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
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

/* Begin Operation: { 137 56 145 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,3,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Choose_20_Object_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Choose_20_Object_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 57 41 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 92 46 97 }*/
/* IO - VPL Root : { 41 129 46 134 }*/
/* IO - VPL Root : { 41 166 46 171 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 93 86 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"setup dialog");
/* IO - VPL Terminal : { 65 110 70 115 }*/
/* IO - VPL Terminal : { 65 129 70 134 }*/
/* IO - VPL Terminal : { 65 148 70 153 }*/
/* IO - VPL Root : { 86 130 91 135 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 99 46 104 }*/
/* IO - VPL Root : { 41 136 46 141 }*/
/* IO - VPL Root : { 41 173 46 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 18 86 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Nav Choose Object Dialog");
/* IO - VPL Terminal : { 65 97 70 102 }*/
/* IO - VPL Root : { 86 97 91 102 }*/
/* End Operation */

/* Begin Operation: { 106 70 122 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Modality");
/* IO - VPL Terminal : { 101 101 106 106 }*/
/* IO - VPL Terminal : { 101 134 106 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 70 158 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Parent Window");
/* IO - VPL Terminal : { 137 112 142 117 }*/
/* IO - VPL Terminal : { 137 156 142 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 178 74 194 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Completion Behavior");
/* IO - VPL Terminal : { 173 126 178 131 }*/
/* IO - VPL Terminal : { 173 180 178 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 215 65 223 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 210 138 215 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 46 122 102 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 101 72 106 77 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 106 150 122 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Safe Run");
/* IO - VPL Terminal : { 101 180 106 185 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 114 86 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Run");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 109 86 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 64 114 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
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

/* Begin Operation: { 137 56 145 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,3,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Choose_20_Volume_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Choose_20_Volume_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 57 41 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 92 46 97 }*/
/* IO - VPL Root : { 41 129 46 134 }*/
/* IO - VPL Root : { 41 166 46 171 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 93 86 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"setup dialog");
/* IO - VPL Terminal : { 65 110 70 115 }*/
/* IO - VPL Terminal : { 65 129 70 134 }*/
/* IO - VPL Terminal : { 65 148 70 153 }*/
/* IO - VPL Root : { 86 130 91 135 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 99 46 104 }*/
/* IO - VPL Root : { 41 136 46 141 }*/
/* IO - VPL Root : { 41 173 46 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 17 86 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Nav Choose Volume Dialog");
/* IO - VPL Terminal : { 65 97 70 102 }*/
/* IO - VPL Root : { 86 97 91 102 }*/
/* End Operation */

/* Begin Operation: { 106 70 122 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Modality");
/* IO - VPL Terminal : { 101 101 106 106 }*/
/* IO - VPL Terminal : { 101 134 106 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 70 158 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Parent Window");
/* IO - VPL Terminal : { 137 112 142 117 }*/
/* IO - VPL Terminal : { 137 156 142 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 178 74 194 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Completion Behavior");
/* IO - VPL Terminal : { 173 126 178 131 }*/
/* IO - VPL Terminal : { 173 180 178 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 215 65 223 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 210 138 215 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 46 122 102 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 101 72 106 77 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 106 150 122 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Safe Run");
/* IO - VPL Terminal : { 101 180 106 185 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 114 86 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Run");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 109 86 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 64 114 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
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

/* Begin Operation: { 137 56 145 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,3,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Get_20_File_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Get_20_File_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 25 41 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 68 46 73 }*/
/* IO - VPL Root : { 41 113 46 118 }*/
/* IO - VPL Root : { 41 158 46 163 }*/
/* IO - VPL Root : { 41 203 46 208 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 102 86 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"setup dialog");
/* IO - VPL Terminal : { 65 115 70 120 }*/
/* IO - VPL Terminal : { 65 130 70 135 }*/
/* IO - VPL Terminal : { 65 145 70 150 }*/
/* IO - VPL Terminal : { 65 160 70 165 }*/
/* IO - VPL Root : { 86 139 91 144 }*/
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

/* Start Operations: { 306 60 }{ 276 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 92 46 97 }*/
/* IO - VPL Root : { 41 122 46 127 }*/
/* IO - VPL Root : { 41 152 46 157 }*/
/* IO - VPL Root : { 41 182 46 187 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 27 86 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Nav Get File Dialog");
/* IO - VPL Terminal : { 65 89 70 94 }*/
/* IO - VPL Root : { 86 89 91 94 }*/
/* End Operation */

/* Begin Operation: { 106 53 122 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Type List");
/* IO - VPL Terminal : { 101 84 106 89 }*/
/* IO - VPL Terminal : { 101 117 106 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 70 158 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Modality");
/* IO - VPL Terminal : { 137 101 142 106 }*/
/* IO - VPL Terminal : { 137 134 142 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 178 70 194 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Parent Window");
/* IO - VPL Terminal : { 173 112 178 117 }*/
/* IO - VPL Terminal : { 173 156 178 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 214 74 230 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Completion Behavior");
/* IO - VPL Terminal : { 209 126 214 131 }*/
/* IO - VPL Terminal : { 209 180 214 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 251 65 259 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 246 138 251 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,4,0,2,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 60 122 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 101 86 106 91 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 106 151 122 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Safe Run");
/* IO - VPL Terminal : { 101 181 106 186 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 114 86 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Run");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 109 86 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 64 114 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
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

/* Begin Operation: { 137 64 145 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,3,1);
	result = connect_root_to_terminal(ptrA,4,0,4,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_New_20_Folder_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_New_20_Folder_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 31 41 247 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 72 46 77 }*/
/* IO - VPL Root : { 41 115 46 120 }*/
/* IO - VPL Root : { 41 158 46 163 }*/
/* IO - VPL Root : { 41 201 46 206 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 110 86 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"setup dialog");
/* IO - VPL Terminal : { 65 123 70 128 }*/
/* IO - VPL Terminal : { 65 138 70 143 }*/
/* IO - VPL Terminal : { 65 153 70 158 }*/
/* IO - VPL Terminal : { 65 168 70 173 }*/
/* IO - VPL Root : { 86 147 91 152 }*/
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

/* Start Operations: { 60 60 }{ 291 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 92 46 97 }*/
/* IO - VPL Root : { 41 122 46 127 }*/
/* IO - VPL Root : { 41 152 46 157 }*/
/* IO - VPL Root : { 41 182 46 187 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 26 86 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Nav New Folder Dialog");
/* IO - VPL Terminal : { 65 97 70 102 }*/
/* IO - VPL Root : { 86 97 91 102 }*/
/* End Operation */

/* Begin Operation: { 106 44 122 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set File Name");
/* IO - VPL Terminal : { 101 77 106 82 }*/
/* IO - VPL Terminal : { 101 112 106 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 70 158 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Modality");
/* IO - VPL Terminal : { 137 101 142 106 }*/
/* IO - VPL Terminal : { 137 134 142 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 178 70 194 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Parent Window");
/* IO - VPL Terminal : { 173 112 178 117 }*/
/* IO - VPL Terminal : { 173 156 178 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 214 74 230 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Completion Behavior");
/* IO - VPL Terminal : { 209 126 214 131 }*/
/* IO - VPL Terminal : { 209 180 214 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 251 65 259 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 246 138 251 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,4,0,2,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 63 122 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 101 89 106 94 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 106 167 122 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Safe Run");
/* IO - VPL Terminal : { 101 197 106 202 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 114 86 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Run");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 109 86 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 64 114 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
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

/* Begin Operation: { 137 64 145 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,3,1);
	result = connect_root_to_terminal(ptrA,4,0,4,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Put_20_File_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Put_20_File_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 527 1022 }{ 188 371 } */
/* Begin Operation: { 33 25 41 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 51 46 56 }*/
/* IO - VPL Root : { 41 80 46 85 }*/
/* IO - VPL Root : { 41 111 46 116 }*/
/* IO - VPL Root : { 41 139 46 144 }*/
/* IO - VPL Root : { 41 171 46 176 }*/
/* IO - VPL Root : { 41 210 46 215 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 67 77 83 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"setup dialog");
/* IO - VPL Terminal : { 62 87 67 92 }*/
/* IO - VPL Terminal : { 62 99 67 104 }*/
/* IO - VPL Terminal : { 62 111 67 116 }*/
/* IO - VPL Terminal : { 62 123 67 128 }*/
/* IO - VPL Terminal : { 62 135 67 140 }*/
/* IO - VPL Terminal : { 62 147 67 152 }*/
/* IO - VPL Root : { 83 118 88 123 }*/
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

/* Start Operations: { 134 684 }{ 320 318 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 83 46 88 }*/
/* IO - VPL Root : { 41 104 46 109 }*/
/* IO - VPL Root : { 41 125 46 130 }*/
/* IO - VPL Root : { 41 146 46 151 }*/
/* IO - VPL Root : { 41 167 46 172 }*/
/* IO - VPL Root : { 41 188 46 193 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 27 86 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Nav Put File Dialog");
/* IO - VPL Terminal : { 65 89 70 94 }*/
/* IO - VPL Root : { 86 89 91 94 }*/
/* End Operation */

/* Begin Operation: { 142 29 158 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set File Creator");
/* IO - VPL Terminal : { 137 67 142 72 }*/
/* IO - VPL Terminal : { 137 107 142 112 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 15 122 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set File Type");
/* IO - VPL Terminal : { 101 47 106 52 }*/
/* IO - VPL Terminal : { 101 81 106 86 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 178 70 194 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Modality");
/* IO - VPL Terminal : { 173 101 178 106 }*/
/* IO - VPL Terminal : { 173 134 178 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 214 70 230 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Parent Window");
/* IO - VPL Terminal : { 209 112 214 117 }*/
/* IO - VPL Terminal : { 209 156 214 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 250 74 266 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Completion Behavior");
/* IO - VPL Terminal : { 245 126 250 131 }*/
/* IO - VPL Terminal : { 245 180 250 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 109 156 125 258 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set File Name");
/* IO - VPL Terminal : { 104 189 109 194 }*/
/* IO - VPL Terminal : { 104 225 109 230 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 287 65 295 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 282 138 287 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,4,0,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,5,0,2,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,6,0,2,6);
	result = connect_root_to_terminal(ptrA,1,1,1,7);
	result = connect_root_to_terminal(ptrA,1,0,2,7);
	result = connect_root_to_terminal(ptrA,1,1,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 55 122 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 101 81 106 86 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 106 151 122 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Safe Run");
/* IO - VPL Terminal : { 101 183 106 188 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 114 86 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Run");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 109 86 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 64 114 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
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

/* Begin Operation: { 137 64 145 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,3,1);
	result = connect_root_to_terminal(ptrA,4,0,4,1);
	result = connect_root_to_terminal(ptrA,5,0,5,1);
	result = connect_root_to_terminal(ptrA,6,0,6,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_New_20_NavTypeList_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_New_20_NavTypeList_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 393 295 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 73 33 78 }*/
/* IO - VPL Root : { 28 157 33 162 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 101 23 117 91 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NavTypeList");
/* IO - VPL Root : { 117 55 122 60 }*/
/* End Operation */

/* Begin Operation: { 66 148 82 235 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"extract info");
/* IO - VPL Terminal : { 61 189 66 194 }*/
/* IO - VPL Root : { 82 163 87 168 }*/
/* IO - VPL Root : { 82 180 87 185 }*/
/* IO - VPL Root : { 82 197 87 202 }*/
/* IO - VPL Root : { 82 214 87 219 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 125 318 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 341 327 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 105 86 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 137 91 142 }*/
/* End Operation */

/* Begin Operation: { 106 188 122 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 101 198 106 203 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 142 185 158 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 158 195 163 200 }*/
/* End Operation */

/* Begin Operation: { 106 50 122 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"12 + ((A-1) * 4)");
/* IO - VPL Terminal : { 101 99 106 104 }*/
/* IO - VPL Root : { 122 99 127 104 }*/
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
/* Begin Operation: { 29 64 37 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 37 137 42 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 132 165 148 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"12");
/* IO - VPL Root : { 148 178 153 183 }*/
/* End Operation */

/* Begin Operation: { 89 148 105 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 105 158 110 163 }*/
/* End Operation */

/* Begin Operation: { 85 89 101 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"-1");
/* IO - VPL Terminal : { 80 106 85 111 }*/
/* IO - VPL Root : { 101 106 106 111 }*/
/* End Operation */

/* Begin Operation: { 131 105 147 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"**");
/* IO - VPL Terminal : { 126 116 131 121 }*/
/* IO - VPL Terminal : { 126 129 131 134 }*/
/* IO - VPL Root : { 147 123 152 128 }*/
/* End Operation */

/* Begin Operation: { 168 120 184 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 163 130 168 135 }*/
/* IO - VPL Terminal : { 163 142 168 147 }*/
/* IO - VPL Root : { 184 137 189 142 }*/
/* End Operation */

/* Begin Operation: { 223 64 231 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 218 137 223 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
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

/* Begin Operation: { 141 213 157 237 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 157 223 162 228 }*/
/* End Operation */

/* Begin Operation: { 178 157 194 237 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"make-list");
/* IO - VPL Terminal : { 173 175 178 180 }*/
/* IO - VPL Terminal : { 173 195 178 200 }*/
/* IO - VPL Terminal : { 173 215 178 220 }*/
/* IO - VPL Root : { 194 195 199 200 }*/
/* End Operation */

/* Begin Operation: { 215 64 223 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 210 99 215 104 }*/
/* IO - VPL Terminal : { 210 137 215 142 }*/
/* IO - VPL Terminal : { 210 173 215 178 }*/
/* IO - VPL Terminal : { 210 195 215 200 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,1,3,2,6);
	result = connect_root_to_terminal(ptrA,1,5,3,6);
	result = connect_root_to_terminal(ptrA,1,4,1,7);
	result = connect_root_to_terminal(ptrA,1,1,2,7);
	result = connect_root_to_terminal(ptrA,1,0,3,7);
	result = connect_root_to_terminal(ptrA,1,6,4,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 159 86 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( \'****\' )");
/* IO - VPL Root : { 86 186 91 191 }*/
/* End Operation */

/* Begin Operation: { 70 127 86 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 86 137 91 142 }*/
/* End Operation */

/* Begin Operation: { 70 80 86 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"12");
/* IO - VPL Root : { 86 93 91 98 }*/
/* End Operation */

/* Begin Operation: { 97 171 113 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( 0 )");
/* IO - VPL Root : { 113 182 118 187 }*/
/* End Operation */

/* Begin Operation: { 142 64 150 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 137 92 142 97 }*/
/* IO - VPL Terminal : { 137 122 142 127 }*/
/* IO - VPL Terminal : { 137 152 142 157 }*/
/* IO - VPL Terminal : { 137 182 142 187 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,2,2,5);
	result = connect_root_to_terminal(ptrA,1,1,3,5);
	result = connect_root_to_terminal(ptrA,1,4,4,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 67 18 83 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"default signature");
/* IO - VPL Terminal : { 62 73 67 78 }*/
/* IO - VPL Root : { 83 73 88 78 }*/
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

/* Start Operations: { 133 144 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 83 70 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"integer?");
/* IO - VPL Terminal : { 49 114 54 119 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 133 19 141 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 128 114 133 119 }*/
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

/* Start Operations: { 248 262 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 76 73 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 52 104 57 109 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 100 58 116 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"string-to-integer");
/* IO - VPL Terminal : { 95 114 100 119 }*/
/* IO - VPL Root : { 116 114 121 119 }*/
/* End Operation */

/* Begin Operation: { 138 20 146 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 133 114 138 119 }*/
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

/* Start Operations: { 133 144 }{ 254 298 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 65 72 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Application");
/* IO - VPL Root : { 72 117 77 122 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 96 81 112 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 91 117 96 122 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 128 66 144 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Signature");
/* IO - VPL Terminal : { 123 117 128 122 }*/
/* IO - VPL Root : { 144 117 149 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 133 144 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 79 95 95 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\'****\'");
/* IO - VPL Root : { 95 113 100 118 }*/
/* End Operation */

/* Begin Operation: { 124 19 132 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 119 113 124 118 }*/
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

/* Begin Operation: { 100 113 116 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"2");
/* IO - VPL Root : { 116 115 121 120 }*/
/* End Operation */

/* Begin Operation: { 145 27 161 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Create Block Type");
/* IO - VPL Terminal : { 140 55 145 60 }*/
/* IO - VPL Terminal : { 140 85 145 90 }*/
/* IO - VPL Terminal : { 140 115 145 120 }*/
/* IO - VPL Root : { 161 85 166 90 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 187 43 203 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"componentSignature");
/* IO - VPL Terminal : { 182 85 187 90 }*/
/* IO - VPL Terminal : { 182 129 187 134 }*/
/* IO - VPL Root : { 203 107 208 112 }*/
/* End Operation */

/* Begin Operation: { 230 115 246 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"osTypeCount");
/* IO - VPL Terminal : { 225 143 230 148 }*/
/* IO - VPL Terminal : { 225 180 230 185 }*/
/* IO - VPL Root : { 246 159 251 164 }*/
/* End Operation */

/* Begin Operation: { 268 167 284 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"osType");
/* IO - VPL Terminal : { 263 180 268 185 }*/
/* IO - VPL Terminal : { 263 197 268 202 }*/
/* IO - VPL Terminal : { 263 214 268 219 }*/
/* IO - VPL Root : { 284 180 289 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);
	tempOperation = operation_input_to(tempOperation,environment,3,iList);
/* End Operation */

/* Begin Operation: { 313 22 321 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 308 85 313 90 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,2,2,5);
	result = connect_root_to_terminal(ptrA,1,4,3,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,3,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,2,2,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,1,8,1,8);
	result = connect_root_to_terminal(ptrA,3,2,2,8);
	result = connect_root_to_terminal(ptrA,4,2,3,8);
	result = connect_root_to_terminal(ptrA,1,5,1,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 393 295 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 73 33 78 }*/
/* IO - VPL Root : { 28 157 33 162 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 101 23 117 91 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NavTypeList");
/* IO - VPL Root : { 117 55 122 60 }*/
/* End Operation */

/* Begin Operation: { 66 148 82 235 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"extract info");
/* IO - VPL Terminal : { 61 189 66 194 }*/
/* IO - VPL Root : { 82 163 87 168 }*/
/* IO - VPL Root : { 82 180 87 185 }*/
/* IO - VPL Root : { 82 197 87 202 }*/
/* IO - VPL Root : { 82 214 87 219 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 125 318 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 341 327 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 105 86 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 137 91 142 }*/
/* End Operation */

/* Begin Operation: { 106 188 122 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 101 198 106 203 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 142 185 158 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 158 195 163 200 }*/
/* End Operation */

/* Begin Operation: { 106 50 122 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"12 + ((A-1) * 4)");
/* IO - VPL Terminal : { 101 99 106 104 }*/
/* IO - VPL Root : { 122 99 127 104 }*/
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
/* Begin Operation: { 29 64 37 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 37 137 42 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 132 165 148 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"12");
/* IO - VPL Root : { 148 178 153 183 }*/
/* End Operation */

/* Begin Operation: { 89 148 105 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 105 158 110 163 }*/
/* End Operation */

/* Begin Operation: { 85 89 101 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"-1");
/* IO - VPL Terminal : { 80 106 85 111 }*/
/* IO - VPL Root : { 101 106 106 111 }*/
/* End Operation */

/* Begin Operation: { 131 105 147 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"**");
/* IO - VPL Terminal : { 126 116 131 121 }*/
/* IO - VPL Terminal : { 126 129 131 134 }*/
/* IO - VPL Root : { 147 123 152 128 }*/
/* End Operation */

/* Begin Operation: { 168 120 184 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 163 130 168 135 }*/
/* IO - VPL Terminal : { 163 142 168 147 }*/
/* IO - VPL Root : { 184 137 189 142 }*/
/* End Operation */

/* Begin Operation: { 223 64 231 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 218 137 223 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
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

/* Begin Operation: { 141 213 157 237 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 157 223 162 228 }*/
/* End Operation */

/* Begin Operation: { 178 157 194 237 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"make-list");
/* IO - VPL Terminal : { 173 175 178 180 }*/
/* IO - VPL Terminal : { 173 195 178 200 }*/
/* IO - VPL Terminal : { 173 215 178 220 }*/
/* IO - VPL Root : { 194 195 199 200 }*/
/* End Operation */

/* Begin Operation: { 215 64 223 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 210 99 215 104 }*/
/* IO - VPL Terminal : { 210 137 215 142 }*/
/* IO - VPL Terminal : { 210 173 215 178 }*/
/* IO - VPL Terminal : { 210 195 215 200 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,1,3,2,6);
	result = connect_root_to_terminal(ptrA,1,5,3,6);
	result = connect_root_to_terminal(ptrA,1,4,1,7);
	result = connect_root_to_terminal(ptrA,1,1,2,7);
	result = connect_root_to_terminal(ptrA,1,0,3,7);
	result = connect_root_to_terminal(ptrA,1,6,4,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 159 86 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( \'****\' )");
/* IO - VPL Root : { 86 186 91 191 }*/
/* End Operation */

/* Begin Operation: { 70 127 86 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 86 137 91 142 }*/
/* End Operation */

/* Begin Operation: { 70 80 86 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"12");
/* IO - VPL Root : { 86 93 91 98 }*/
/* End Operation */

/* Begin Operation: { 97 171 113 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( 0 )");
/* IO - VPL Root : { 113 182 118 187 }*/
/* End Operation */

/* Begin Operation: { 142 64 150 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 137 92 142 97 }*/
/* IO - VPL Terminal : { 137 122 142 127 }*/
/* IO - VPL Terminal : { 137 152 142 157 }*/
/* IO - VPL Terminal : { 137 182 142 187 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,2,2,5);
	result = connect_root_to_terminal(ptrA,1,1,3,5);
	result = connect_root_to_terminal(ptrA,1,4,4,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 67 18 83 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"default signature");
/* IO - VPL Terminal : { 62 73 67 78 }*/
/* IO - VPL Root : { 83 73 88 78 }*/
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

/* Start Operations: { 133 144 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 83 70 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"integer?");
/* IO - VPL Terminal : { 49 114 54 119 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 133 19 141 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 128 114 133 119 }*/
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

/* Start Operations: { 248 262 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 76 73 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 52 104 57 109 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 100 58 116 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"string-to-integer");
/* IO - VPL Terminal : { 95 114 100 119 }*/
/* IO - VPL Root : { 116 114 121 119 }*/
/* End Operation */

/* Begin Operation: { 138 20 146 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 133 114 138 119 }*/
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

/* Start Operations: { 106 398 }{ 254 298 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 65 72 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Application");
/* IO - VPL Root : { 72 117 77 122 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 96 81 112 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 91 117 96 122 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 128 66 144 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Signature");
/* IO - VPL Terminal : { 123 117 128 122 }*/
/* IO - VPL Root : { 144 117 149 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
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

/* Begin Operation: { 79 95 95 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\'****\'");
/* IO - VPL Root : { 95 113 100 118 }*/
/* End Operation */

/* Begin Operation: { 124 19 132 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 119 113 124 118 }*/
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

/* Begin Operation: { 100 113 116 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"2");
/* IO - VPL Root : { 116 115 121 120 }*/
/* End Operation */

/* Begin Operation: { 145 27 161 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Create Block Type");
/* IO - VPL Terminal : { 140 55 145 60 }*/
/* IO - VPL Terminal : { 140 85 145 90 }*/
/* IO - VPL Terminal : { 140 115 145 120 }*/
/* IO - VPL Root : { 161 85 166 90 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 187 43 203 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"componentSignature");
/* IO - VPL Terminal : { 182 85 187 90 }*/
/* IO - VPL Terminal : { 182 129 187 134 }*/
/* IO - VPL Root : { 203 107 208 112 }*/
/* End Operation */

/* Begin Operation: { 230 115 246 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"osTypeCount");
/* IO - VPL Terminal : { 225 143 230 148 }*/
/* IO - VPL Terminal : { 225 180 230 185 }*/
/* IO - VPL Root : { 246 159 251 164 }*/
/* End Operation */

/* Begin Operation: { 269 155 285 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"poke type");
/* IO - VPL Terminal : { 264 171 269 176 }*/
/* IO - VPL Terminal : { 264 197 269 202 }*/
/* IO - VPL Terminal : { 264 214 269 219 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);
	tempOperation = operation_input_to(tempOperation,environment,3,iList);

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

/* Start Operations: { 60 60 }{ 231 297 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 68 35 73 }*/
/* IO - VPL Root : { 30 119 35 124 }*/
/* IO - VPL Root : { 30 164 35 169 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 52 80 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_evaluate(tempOperation,environment,"(A*4)+8");
/* IO - VPL Terminal : { 59 85 64 90 }*/
/* IO - VPL Root : { 80 85 85 90 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 99 122 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 122 102 127 107 }*/
/* End Operation */

/* Begin Operation: { 148 53 164 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,2,"put-integer");
/* IO - VPL Terminal : { 143 68 148 73 }*/
/* IO - VPL Terminal : { 143 85 148 90 }*/
/* IO - VPL Terminal : { 143 102 148 107 }*/
/* IO - VPL Terminal : { 143 119 148 124 }*/
/* IO - VPL Root : { 164 79 169 84 }*/
/* IO - VPL Root : { 164 107 169 112 }*/
/* End Operation */

/* Begin Operation: { 190 23 198 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,2,0,4,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 313 22 321 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 308 85 313 90 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,2,2,5);
	result = connect_root_to_terminal(ptrA,1,4,3,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,3,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,2,2,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,3,2,2,8);
	result = connect_root_to_terminal(ptrA,4,2,3,8);
	result = connect_root_to_terminal(ptrA,1,5,1,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_NavEvent_20_Simple_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_NavEvent_20_Simple_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 48 41 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 91 46 96 }*/
/* IO - VPL Root : { 41 136 46 141 }*/
/* IO - VPL Root : { 41 181 46 186 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 53 86 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"acknowledge some");
/* IO - VPL Terminal : { 65 86 70 91 }*/
/* IO - VPL Terminal : { 65 121 70 126 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 117 86 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"ours");
/* IO - VPL Terminal : { 65 129 70 134 }*/
/* IO - VPL Terminal : { 65 143 70 148 }*/
/* IO - VPL Root : { 86 137 91 142 }*/
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 55 86 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavCBAccept");
/* IO - VPL Terminal : { 65 104 70 109 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 106 122 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Accept\"");
/* IO - VPL Root : { 122 137 127 142 }*/
/* End Operation */

/* Begin Operation: { 143 64 151 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 137 143 142 }*/
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 56 86 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavCBCancel");
/* IO - VPL Terminal : { 65 104 70 109 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 107 122 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Cancel\"");
/* IO - VPL Root : { 122 137 127 142 }*/
/* End Operation */

/* Begin Operation: { 143 64 151 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 137 143 142 }*/
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 46 86 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavCBTerminate");
/* IO - VPL Terminal : { 65 104 70 109 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 97 122 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Terminate\"");
/* IO - VPL Root : { 122 137 127 142 }*/
/* End Operation */

/* Begin Operation: { 143 64 151 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 137 143 142 }*/
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 68 59 84 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavCBStart");
/* IO - VPL Terminal : { 63 104 68 109 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 108 110 124 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Start\"");
/* IO - VPL Root : { 124 137 129 142 }*/
/* End Operation */

/* Begin Operation: { 143 64 151 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 137 143 142 }*/
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

/* Start Operations: { 124 80 }{ 309 301 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 44 86 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavCBUserAction");
/* IO - VPL Terminal : { 65 104 70 109 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 178 58 194 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"User Action: \"");
/* IO - VPL Root : { 194 100 199 105 }*/
/* End Operation */

/* Begin Operation: { 106 140 122 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"context");
/* IO - VPL Terminal : { 101 171 106 176 }*/
/* IO - VPL Root : { 122 160 127 165 }*/
/* IO - VPL Root : { 122 182 127 187 }*/
/* End Operation */

/* Begin Operation: { 142 66 159 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,2,"NavDialogGetUserAction");
/* IO - VPL Terminal : { 136 147 141 152 }*/
/* IO - VPL Root : { 160 119 165 124 }*/
/* IO - VPL Root : { 160 174 165 179 }*/
/* End Operation */

/* Begin Operation: { 184 159 200 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 179 194 184 199 }*/
/* IO - VPL Root : { 200 194 205 199 }*/
/* End Operation */

/* Begin Operation: { 212 113 228 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 207 129 212 134 }*/
/* IO - VPL Terminal : { 207 147 212 152 }*/
/* IO - VPL Root : { 228 139 233 144 }*/
/* End Operation */

/* Begin Operation: { 251 64 259 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 246 137 251 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,2,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 124 80 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 92 86 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavCBEvent");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 106 102 122 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 101 137 106 142 }*/
/* IO - VPL Root : { 122 137 127 142 }*/
/* End Operation */

/* Begin Operation: { 143 64 151 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 137 143 142 }*/
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 64 78 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 65 137 70 142 }*/
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

/* Begin Operation: { 106 89 122 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug Console");
/* IO - VPL Terminal : { 101 137 106 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_TEST_20_New_20_Nav_20_Modal_20_GF_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_TEST_20_New_20_Nav_20_Modal_20_GF_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 301 357 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 69 80 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Nav Get File Dialog");
/* IO - VPL Root : { 80 119 85 124 }*/
/* End Operation */

/* Begin Operation: { 106 67 122 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Nav Dialog/New");
/* IO - VPL Terminal : { 101 119 106 124 }*/
/* IO - VPL Root : { 122 119 127 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 147 201 163 271 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Do Setup");
/* IO - VPL Terminal : { 142 216 147 221 }*/
/* IO - VPL Terminal : { 142 231 147 236 }*/
/* IO - VPL Terminal : { 142 244 147 249 }*/
/* IO - VPL Terminal : { 142 258 147 263 }*/
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

/* Begin Operation: { 148 41 164 91 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Run");
/* IO - VPL Terminal : { 143 65 148 70 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 190 92 206 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"report");
/* IO - VPL Terminal : { 185 119 190 124 }*/
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

/* Start Operations: { 60 60 }{ 236 309 } */
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
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 64 149 80 259 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Select List");
/* IO - VPL Terminal : { 59 202 64 207 }*/
/* IO - VPL Root : { 80 202 85 207 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 170 122 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"get paths");
/* IO - VPL Terminal : { 101 202 106 207 }*/
/* IO - VPL Root : { 122 203 127 208 }*/
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
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 67 66 83 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Full Path");
/* IO - VPL Terminal : { 62 114 67 119 }*/
/* IO - VPL Root : { 83 114 88 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 136 20 144 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 131 114 136 119 }*/
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

/* Begin Operation: { 148 155 164 255 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug Console");
/* IO - VPL Terminal : { 143 203 148 208 }*/
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
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 232 29 240 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* Synchro [5 to 4] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_TEST_20_New_20_Nav_20_Modal_20_CF_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_TEST_20_New_20_Nav_20_Modal_20_CF_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 301 357 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 52 80 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Nav Choose Folder Dialog");
/* IO - VPL Root : { 80 119 85 124 }*/
/* End Operation */

/* Begin Operation: { 106 67 122 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Nav Dialog/New");
/* IO - VPL Terminal : { 101 119 106 124 }*/
/* IO - VPL Root : { 122 119 127 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 147 201 163 271 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Do Setup");
/* IO - VPL Terminal : { 142 216 147 221 }*/
/* IO - VPL Terminal : { 142 231 147 236 }*/
/* IO - VPL Terminal : { 142 244 147 249 }*/
/* IO - VPL Terminal : { 142 258 147 263 }*/
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

/* Begin Operation: { 148 41 164 91 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Run");
/* IO - VPL Terminal : { 143 65 148 70 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 190 92 206 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"report");
/* IO - VPL Terminal : { 185 119 190 124 }*/
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

/* Start Operations: { 60 60 }{ 236 309 } */
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
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 64 149 80 259 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Select List");
/* IO - VPL Terminal : { 59 202 64 207 }*/
/* IO - VPL Root : { 80 202 85 207 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 170 122 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"get paths");
/* IO - VPL Terminal : { 101 202 106 207 }*/
/* IO - VPL Root : { 122 203 127 208 }*/
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
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 67 66 83 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Full Path");
/* IO - VPL Terminal : { 62 114 67 119 }*/
/* IO - VPL Root : { 83 114 88 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 136 20 144 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 131 114 136 119 }*/
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

/* Begin Operation: { 148 155 164 255 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug Console");
/* IO - VPL Terminal : { 143 203 148 208 }*/
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
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 232 29 240 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* Synchro [5 to 4] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}





	Nat4 tempAttribute_Navigation_20_Reply_2F_Version[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Reply_2F_Key_20_Script[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Reply_2F_Valid_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Reply_2F_Replacing_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Reply_2F_Stationery_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Reply_2F_Translation_20_Needed_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Reply_2F_Selected_20_Files[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Event_20_Callback_20_Behavior[] = {
0000000000, 0X00000350, 0X000000A0, 0X00000023, 0X00000014, 0X00000100, 0X000003BC, 0X000000F4,
0X00000390, 0X000000F0, 0X00000364, 0X000000EC, 0X00000330, 0X000000E8, 0X000000E4, 0X000000E0,
0X000002B8, 0X000002C0, 0X00000194, 0X00000288, 0X00000264, 0X0000026C, 0X00000190, 0X00000234,
0X00000210, 0X00000218, 0X0000018C, 0X000001EC, 0X000001D4, 0X000001AC, 0X000001B4, 0X00000188,
0X00000180, 0X000000DC, 0X00000150, 0X000000D8, 0X00000118, 0X000000D0, 0X000000B4, 0X000000BC,
0X19000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000D0, 0X0000000D, 0X000000C0,
0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000104, 0000000000, 0X0000013C, 0X0000016C,
0X000002E4, 0X00000300, 0X0000031C, 0X00000350, 0X0000037C, 0X000003A8, 0000000000, 0000000000,
0X000003D8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000120, 0X19000000,
0X4E617669, 0X67617469, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000158, 0X10000000, 0X2F4E6176, 0X4576656E,
0X74205369, 0X6D706C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000004, 0X00000198, 0X000001FC, 0X00000250, 0X000002A4, 0X15000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D4, 0X00000001, 0X000001B8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000001D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0X05000000, 0X4F776E65, 0X72000000, 0X17000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000234, 0X00000001, 0X0000021C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000238, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X17000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000288, 0X00000001, 0X00000270, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X0000028C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000338, 0X16000000, 0X2F446F20, 0X43616C6C,
0X6261636B, 0X204E6F20, 0X52657375, 0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0F000000, 0X4E617645, 0X76656E74, 0X50726F63, 0X50747200, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0E000000, 0X4E65774E, 0X61764576,
0X656E7455, 0X50500000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C4,
0X12000000, 0X44697370, 0X6F73654E, 0X61764576, 0X656E7455, 0X50500000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Event_20_Callback_20_Behavior[] = {
0000000000, 0X00000350, 0X000000A0, 0X00000023, 0X00000014, 0X00000100, 0X000003BC, 0X000000F4,
0X00000390, 0X000000F0, 0X00000364, 0X000000EC, 0X00000330, 0X000000E8, 0X000000E4, 0X000000E0,
0X000002B8, 0X000002C0, 0X00000194, 0X00000288, 0X00000264, 0X0000026C, 0X00000190, 0X00000234,
0X00000210, 0X00000218, 0X0000018C, 0X000001EC, 0X000001D4, 0X000001AC, 0X000001B4, 0X00000188,
0X00000180, 0X000000DC, 0X00000150, 0X000000D8, 0X00000118, 0X000000D0, 0X000000B4, 0X000000BC,
0X19000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000D0, 0X0000000D, 0X000000C0,
0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000104, 0000000000, 0X0000013C, 0X0000016C,
0X000002E4, 0X00000300, 0X0000031C, 0X00000350, 0X0000037C, 0X000003A8, 0000000000, 0000000000,
0X000003D8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000120, 0X19000000,
0X4E617669, 0X67617469, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000158, 0X10000000, 0X2F4E6176, 0X4576656E,
0X74205369, 0X6D706C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000004, 0X00000198, 0X000001FC, 0X00000250, 0X000002A4, 0X15000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D4, 0X00000001, 0X000001B8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000001D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0X05000000, 0X4F776E65, 0X72000000, 0X17000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000234, 0X00000001, 0X0000021C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000238, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X17000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000288, 0X00000001, 0X00000270, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X0000028C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000338, 0X16000000, 0X2F446F20, 0X43616C6C,
0X6261636B, 0X204E6F20, 0X52657375, 0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0F000000, 0X4E617645, 0X76656E74, 0X50726F63, 0X50747200, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0E000000, 0X4E65774E, 0X61764576,
0X656E7455, 0X50500000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C4,
0X12000000, 0X44697370, 0X6F73654E, 0X61764576, 0X656E7455, 0X50500000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Save_20_Changes_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Navigation_20_Services_20_Window_2F_Event_20_Callback_20_Behavior[] = {
0000000000, 0X00000350, 0X000000A0, 0X00000023, 0X00000014, 0X00000100, 0X000003BC, 0X000000F4,
0X00000390, 0X000000F0, 0X00000364, 0X000000EC, 0X00000330, 0X000000E8, 0X000000E4, 0X000000E0,
0X000002B8, 0X000002C0, 0X00000194, 0X00000288, 0X00000264, 0X0000026C, 0X00000190, 0X00000234,
0X00000210, 0X00000218, 0X0000018C, 0X000001EC, 0X000001D4, 0X000001AC, 0X000001B4, 0X00000188,
0X00000180, 0X000000DC, 0X00000150, 0X000000D8, 0X00000118, 0X000000D0, 0X000000B4, 0X000000BC,
0X19000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000D0, 0X0000000D, 0X000000C0,
0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000104, 0000000000, 0X0000013C, 0X0000016C,
0X000002E4, 0X00000300, 0X0000031C, 0X00000350, 0X0000037C, 0X000003A8, 0000000000, 0000000000,
0X000003D8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000120, 0X19000000,
0X4E617669, 0X67617469, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000158, 0X10000000, 0X2F4E6176, 0X4576656E,
0X74205369, 0X6D706C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000004, 0X00000198, 0X000001FC, 0X00000250, 0X000002A4, 0X15000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D4, 0X00000001, 0X000001B8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000001D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0X05000000, 0X4F776E65, 0X72000000, 0X17000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000234, 0X00000001, 0X0000021C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000238, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X17000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000288, 0X00000001, 0X00000270, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X0000028C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000338, 0X16000000, 0X2F446F20, 0X43616C6C,
0X6261636B, 0X204E6F20, 0X52657375, 0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0F000000, 0X4E617645, 0X76656E74, 0X50726F63, 0X50747200, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0E000000, 0X4E65774E, 0X61764576,
0X656E7455, 0X50500000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C4,
0X12000000, 0X44697370, 0X6F73654E, 0X61764576, 0X656E7455, 0X50500000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Services_20_Window_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Services_20_Window_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Services_20_Window_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Services_20_Window_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Services_20_Window_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Services_20_Window_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Services_20_Window_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Navigation_20_Services_20_Window_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Event_20_Callback_20_Behavior[] = {
0000000000, 0X00000350, 0X000000A0, 0X00000023, 0X00000014, 0X00000100, 0X000003BC, 0X000000F4,
0X00000390, 0X000000F0, 0X00000364, 0X000000EC, 0X00000330, 0X000000E8, 0X000000E4, 0X000000E0,
0X000002B8, 0X000002C0, 0X00000194, 0X00000288, 0X00000264, 0X0000026C, 0X00000190, 0X00000234,
0X00000210, 0X00000218, 0X0000018C, 0X000001EC, 0X000001D4, 0X000001AC, 0X000001B4, 0X00000188,
0X00000180, 0X000000DC, 0X00000150, 0X000000D8, 0X00000118, 0X000000D0, 0X000000B4, 0X000000BC,
0X19000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000D0, 0X0000000D, 0X000000C0,
0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000104, 0000000000, 0X0000013C, 0X0000016C,
0X000002E4, 0X00000300, 0X0000031C, 0X00000350, 0X0000037C, 0X000003A8, 0000000000, 0000000000,
0X000003D8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000120, 0X19000000,
0X4E617669, 0X67617469, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000158, 0X10000000, 0X2F4E6176, 0X4576656E,
0X74205369, 0X6D706C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000004, 0X00000198, 0X000001FC, 0X00000250, 0X000002A4, 0X15000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D4, 0X00000001, 0X000001B8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000001D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0X05000000, 0X4F776E65, 0X72000000, 0X17000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000234, 0X00000001, 0X0000021C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000238, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X17000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000288, 0X00000001, 0X00000270, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X0000028C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000338, 0X16000000, 0X2F446F20, 0X43616C6C,
0X6261636B, 0X204E6F20, 0X52657375, 0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0F000000, 0X4E617645, 0X76656E74, 0X50726F63, 0X50747200, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0E000000, 0X4E65774E, 0X61764576,
0X656E7455, 0X50500000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C4,
0X12000000, 0X44697370, 0X6F73654E, 0X61764576, 0X656E7455, 0X50500000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Event_20_Callback_20_Behavior[] = {
0000000000, 0X00000350, 0X000000A0, 0X00000023, 0X00000014, 0X00000100, 0X000003BC, 0X000000F4,
0X00000390, 0X000000F0, 0X00000364, 0X000000EC, 0X00000330, 0X000000E8, 0X000000E4, 0X000000E0,
0X000002B8, 0X000002C0, 0X00000194, 0X00000288, 0X00000264, 0X0000026C, 0X00000190, 0X00000234,
0X00000210, 0X00000218, 0X0000018C, 0X000001EC, 0X000001D4, 0X000001AC, 0X000001B4, 0X00000188,
0X00000180, 0X000000DC, 0X00000150, 0X000000D8, 0X00000118, 0X000000D0, 0X000000B4, 0X000000BC,
0X19000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000D0, 0X0000000D, 0X000000C0,
0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000104, 0000000000, 0X0000013C, 0X0000016C,
0X000002E4, 0X00000300, 0X0000031C, 0X00000350, 0X0000037C, 0X000003A8, 0000000000, 0000000000,
0X000003D8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000120, 0X19000000,
0X4E617669, 0X67617469, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000158, 0X10000000, 0X2F4E6176, 0X4576656E,
0X74205369, 0X6D706C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000004, 0X00000198, 0X000001FC, 0X00000250, 0X000002A4, 0X15000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D4, 0X00000001, 0X000001B8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000001D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0X05000000, 0X4F776E65, 0X72000000, 0X17000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000234, 0X00000001, 0X0000021C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000238, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X17000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000288, 0X00000001, 0X00000270, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X0000028C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000338, 0X16000000, 0X2F446F20, 0X43616C6C,
0X6261636B, 0X204E6F20, 0X52657375, 0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0F000000, 0X4E617645, 0X76656E74, 0X50726F63, 0X50747200, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0E000000, 0X4E65774E, 0X61764576,
0X656E7455, 0X50500000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C4,
0X12000000, 0X44697370, 0X6F73654E, 0X61764576, 0X656E7455, 0X50500000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Event_20_Callback_20_Behavior[] = {
0000000000, 0X00000350, 0X000000A0, 0X00000023, 0X00000014, 0X00000100, 0X000003BC, 0X000000F4,
0X00000390, 0X000000F0, 0X00000364, 0X000000EC, 0X00000330, 0X000000E8, 0X000000E4, 0X000000E0,
0X000002B8, 0X000002C0, 0X00000194, 0X00000288, 0X00000264, 0X0000026C, 0X00000190, 0X00000234,
0X00000210, 0X00000218, 0X0000018C, 0X000001EC, 0X000001D4, 0X000001AC, 0X000001B4, 0X00000188,
0X00000180, 0X000000DC, 0X00000150, 0X000000D8, 0X00000118, 0X000000D0, 0X000000B4, 0X000000BC,
0X19000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000D0, 0X0000000D, 0X000000C0,
0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000104, 0000000000, 0X0000013C, 0X0000016C,
0X000002E4, 0X00000300, 0X0000031C, 0X00000350, 0X0000037C, 0X000003A8, 0000000000, 0000000000,
0X000003D8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000120, 0X19000000,
0X4E617669, 0X67617469, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000158, 0X10000000, 0X2F4E6176, 0X4576656E,
0X74205369, 0X6D706C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000004, 0X00000198, 0X000001FC, 0X00000250, 0X000002A4, 0X15000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D4, 0X00000001, 0X000001B8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000001D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0X05000000, 0X4F776E65, 0X72000000, 0X17000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000234, 0X00000001, 0X0000021C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000238, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X17000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000288, 0X00000001, 0X00000270, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X0000028C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000338, 0X16000000, 0X2F446F20, 0X43616C6C,
0X6261636B, 0X204E6F20, 0X52657375, 0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0F000000, 0X4E617645, 0X76656E74, 0X50726F63, 0X50747200, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0E000000, 0X4E65774E, 0X61764576,
0X656E7455, 0X50500000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C4,
0X12000000, 0X44697370, 0X6F73654E, 0X61764576, 0X656E7455, 0X50500000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Type_20_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Event_20_Callback_20_Behavior[] = {
0000000000, 0X00000350, 0X000000A0, 0X00000023, 0X00000014, 0X00000100, 0X000003BC, 0X000000F4,
0X00000390, 0X000000F0, 0X00000364, 0X000000EC, 0X00000330, 0X000000E8, 0X000000E4, 0X000000E0,
0X000002B8, 0X000002C0, 0X00000194, 0X00000288, 0X00000264, 0X0000026C, 0X00000190, 0X00000234,
0X00000210, 0X00000218, 0X0000018C, 0X000001EC, 0X000001D4, 0X000001AC, 0X000001B4, 0X00000188,
0X00000180, 0X000000DC, 0X00000150, 0X000000D8, 0X00000118, 0X000000D0, 0X000000B4, 0X000000BC,
0X19000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000D0, 0X0000000D, 0X000000C0,
0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000104, 0000000000, 0X0000013C, 0X0000016C,
0X000002E4, 0X00000300, 0X0000031C, 0X00000350, 0X0000037C, 0X000003A8, 0000000000, 0000000000,
0X000003D8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000120, 0X19000000,
0X4E617669, 0X67617469, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000158, 0X10000000, 0X2F4E6176, 0X4576656E,
0X74205369, 0X6D706C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000004, 0X00000198, 0X000001FC, 0X00000250, 0X000002A4, 0X15000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D4, 0X00000001, 0X000001B8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000001D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0X05000000, 0X4F776E65, 0X72000000, 0X17000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000234, 0X00000001, 0X0000021C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000238, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X17000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000288, 0X00000001, 0X00000270, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X0000028C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000338, 0X16000000, 0X2F446F20, 0X43616C6C,
0X6261636B, 0X204E6F20, 0X52657375, 0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0F000000, 0X4E617645, 0X76656E74, 0X50726F63, 0X50747200, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0E000000, 0X4E65774E, 0X61764576,
0X656E7455, 0X50500000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C4,
0X12000000, 0X44697370, 0X6F73654E, 0X61764576, 0X656E7455, 0X50500000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_File_20_Type[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X3F3F3F3F
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Event_20_Callback_20_Behavior[] = {
0000000000, 0X00000350, 0X000000A0, 0X00000023, 0X00000014, 0X00000100, 0X000003BC, 0X000000F4,
0X00000390, 0X000000F0, 0X00000364, 0X000000EC, 0X00000330, 0X000000E8, 0X000000E4, 0X000000E0,
0X000002B8, 0X000002C0, 0X00000194, 0X00000288, 0X00000264, 0X0000026C, 0X00000190, 0X00000234,
0X00000210, 0X00000218, 0X0000018C, 0X000001EC, 0X000001D4, 0X000001AC, 0X000001B4, 0X00000188,
0X00000180, 0X000000DC, 0X00000150, 0X000000D8, 0X00000118, 0X000000D0, 0X000000B4, 0X000000BC,
0X19000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000D0, 0X0000000D, 0X000000C0,
0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000104, 0000000000, 0X0000013C, 0X0000016C,
0X000002E4, 0X00000300, 0X0000031C, 0X00000350, 0X0000037C, 0X000003A8, 0000000000, 0000000000,
0X000003D8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000120, 0X19000000,
0X4E617669, 0X67617469, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000158, 0X10000000, 0X2F4E6176, 0X4576656E,
0X74205369, 0X6D706C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000004, 0X00000198, 0X000001FC, 0X00000250, 0X000002A4, 0X15000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D4, 0X00000001, 0X000001B8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000001D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0X05000000, 0X4F776E65, 0X72000000, 0X17000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000234, 0X00000001, 0X0000021C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000238, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X17000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000288, 0X00000001, 0X00000270, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X0000028C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000338, 0X16000000, 0X2F446F20, 0X43616C6C,
0X6261636B, 0X204E6F20, 0X52657375, 0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0F000000, 0X4E617645, 0X76656E74, 0X50726F63, 0X50747200, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0E000000, 0X4E65774E, 0X61764576,
0X656E7455, 0X50500000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C4,
0X12000000, 0X44697370, 0X6F73654E, 0X61764576, 0X656E7455, 0X50500000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Event_20_Callback_20_Behavior[] = {
0000000000, 0X00000350, 0X000000A0, 0X00000023, 0X00000014, 0X00000100, 0X000003BC, 0X000000F4,
0X00000390, 0X000000F0, 0X00000364, 0X000000EC, 0X00000330, 0X000000E8, 0X000000E4, 0X000000E0,
0X000002B8, 0X000002C0, 0X00000194, 0X00000288, 0X00000264, 0X0000026C, 0X00000190, 0X00000234,
0X00000210, 0X00000218, 0X0000018C, 0X000001EC, 0X000001D4, 0X000001AC, 0X000001B4, 0X00000188,
0X00000180, 0X000000DC, 0X00000150, 0X000000D8, 0X00000118, 0X000000D0, 0X000000B4, 0X000000BC,
0X19000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000D0, 0X0000000D, 0X000000C0,
0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000104, 0000000000, 0X0000013C, 0X0000016C,
0X000002E4, 0X00000300, 0X0000031C, 0X00000350, 0X0000037C, 0X000003A8, 0000000000, 0000000000,
0X000003D8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000120, 0X19000000,
0X4E617669, 0X67617469, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000158, 0X10000000, 0X2F4E6176, 0X4576656E,
0X74205369, 0X6D706C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000004, 0X00000198, 0X000001FC, 0X00000250, 0X000002A4, 0X15000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D4, 0X00000001, 0X000001B8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000001D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0X05000000, 0X4F776E65, 0X72000000, 0X17000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000234, 0X00000001, 0X0000021C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000238, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X17000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000288, 0X00000001, 0X00000270, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X0000028C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000338, 0X16000000, 0X2F446F20, 0X43616C6C,
0X6261636B, 0X204E6F20, 0X52657375, 0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0F000000, 0X4E617645, 0X76656E74, 0X50726F63, 0X50747200, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0E000000, 0X4E65774E, 0X61764576,
0X656E7455, 0X50500000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C4,
0X12000000, 0X44697370, 0X6F73654E, 0X61764576, 0X656E7455, 0X50500000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Type_20_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Event_20_Callback_20_Behavior[] = {
0000000000, 0X00000350, 0X000000A0, 0X00000023, 0X00000014, 0X00000100, 0X000003BC, 0X000000F4,
0X00000390, 0X000000F0, 0X00000364, 0X000000EC, 0X00000330, 0X000000E8, 0X000000E4, 0X000000E0,
0X000002B8, 0X000002C0, 0X00000194, 0X00000288, 0X00000264, 0X0000026C, 0X00000190, 0X00000234,
0X00000210, 0X00000218, 0X0000018C, 0X000001EC, 0X000001D4, 0X000001AC, 0X000001B4, 0X00000188,
0X00000180, 0X000000DC, 0X00000150, 0X000000D8, 0X00000118, 0X000000D0, 0X000000B4, 0X000000BC,
0X19000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000D0, 0X0000000D, 0X000000C0,
0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000104, 0000000000, 0X0000013C, 0X0000016C,
0X000002E4, 0X00000300, 0X0000031C, 0X00000350, 0X0000037C, 0X000003A8, 0000000000, 0000000000,
0X000003D8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000120, 0X19000000,
0X4E617669, 0X67617469, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000158, 0X10000000, 0X2F4E6176, 0X4576656E,
0X74205369, 0X6D706C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000004, 0X00000198, 0X000001FC, 0X00000250, 0X000002A4, 0X15000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D4, 0X00000001, 0X000001B8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000001D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0X05000000, 0X4F776E65, 0X72000000, 0X17000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000234, 0X00000001, 0X0000021C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000238, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X17000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000288, 0X00000001, 0X00000270, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X0000028C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000338, 0X16000000, 0X2F446F20, 0X43616C6C,
0X6261636B, 0X204E6F20, 0X52657375, 0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0F000000, 0X4E617645, 0X76656E74, 0X50726F63, 0X50747200, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0E000000, 0X4E65774E, 0X61764576,
0X656E7455, 0X50500000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C4,
0X12000000, 0X44697370, 0X6F73654E, 0X61764576, 0X656E7455, 0X50500000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Event_20_Callback_20_Behavior[] = {
0000000000, 0X00000350, 0X000000A0, 0X00000023, 0X00000014, 0X00000100, 0X000003BC, 0X000000F4,
0X00000390, 0X000000F0, 0X00000364, 0X000000EC, 0X00000330, 0X000000E8, 0X000000E4, 0X000000E0,
0X000002B8, 0X000002C0, 0X00000194, 0X00000288, 0X00000264, 0X0000026C, 0X00000190, 0X00000234,
0X00000210, 0X00000218, 0X0000018C, 0X000001EC, 0X000001D4, 0X000001AC, 0X000001B4, 0X00000188,
0X00000180, 0X000000DC, 0X00000150, 0X000000D8, 0X00000118, 0X000000D0, 0X000000B4, 0X000000BC,
0X19000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000D0, 0X0000000D, 0X000000C0,
0X4D657468, 0X6F642043, 0X616C6C62, 0X61636B00, 0X00000104, 0000000000, 0X0000013C, 0X0000016C,
0X000002E4, 0X00000300, 0X0000031C, 0X00000350, 0X0000037C, 0X000003A8, 0000000000, 0000000000,
0X000003D8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000120, 0X19000000,
0X4E617669, 0X67617469, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000158, 0X10000000, 0X2F4E6176, 0X4576656E,
0X74205369, 0X6D706C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X00000004, 0X00000198, 0X000001FC, 0X00000250, 0X000002A4, 0X15000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001D4, 0X00000001, 0X000001B8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000001D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000001F4, 0X05000000, 0X4F776E65, 0X72000000, 0X17000008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000234, 0X00000001, 0X0000021C, 0X41747461,
0X63686D65, 0X6E742053, 0X70656369, 0X66696572, 0000000000, 0X00000238, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X17000008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000288, 0X00000001, 0X00000270, 0X41747461, 0X63686D65, 0X6E742053, 0X70656369,
0X66696572, 0000000000, 0X0000028C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X15000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002E0, 0X00000001,
0X000002C4, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000338, 0X16000000, 0X2F446F20, 0X43616C6C,
0X6261636B, 0X204E6F20, 0X52657375, 0X6C740000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000036C, 0X0F000000, 0X4E617645, 0X76656E74, 0X50726F63, 0X50747200, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X0E000000, 0X4E65774E, 0X61764576,
0X656E7455, 0X50500000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C4,
0X12000000, 0X44697370, 0X6F73654E, 0X61764576, 0X656E7455, 0X50500000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Parameter_20_Strings[] = {
0000000000, 0X00000210, 0X00000078, 0X00000019, 0X00000014, 0X00000278, 0X0000025C, 0X00000254,
0X000000A8, 0X00000228, 0X0000020C, 0X00000204, 0X000000A4, 0X000001D4, 0X000001B8, 0X000001B0,
0X000000A0, 0X00000180, 0X00000164, 0X0000015C, 0X0000009C, 0X00000130, 0X00000114, 0X0000010C,
0X00000098, 0X000000E4, 0X000000C8, 0X000000C0, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X00000006, 0X000000AC, 0X000000F8, 0X00000148,
0X0000019C, 0X000001F0, 0X00000240, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000002, 0X000000D0, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000000EC, 0X0B000000, 0X436C6965, 0X6E74204E, 0X616D6500, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000114, 0X00000002, 0X0000011C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X0C000000, 0X57696E64, 0X6F772054,
0X69746C65, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000002, 0X0000016C, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000188, 0X13000000, 0X41637469, 0X6F6E2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000001B8, 0X00000002, 0X000001C0, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X13000000, 0X43616E63,
0X656C2042, 0X7574746F, 0X6E204C61, 0X62656C00, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X0E000000, 0X53617665, 0X2046696C, 0X65204E61, 0X6D650000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000025C, 0X00000002, 0X00000264,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000280, 0X07000000,
0X4D657373, 0X61676500
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Document_20_Count[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Review_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Nav_20_Dialog_2F_Nav_20_Class[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X07340006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X13000000, 0X4E617620, 0X50757420, 0X46696C65,
0X20446961, 0X6C6F6700
	};
	Nat4 tempAttribute_Nav_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X06AF0007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_Navigation_20_Reply_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Navigation_20_Reply_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Version",tempClass,tempAttribute_Navigation_20_Reply_2F_Version,environment);
	tempAttribute = attribute_add("Key Script",tempClass,tempAttribute_Navigation_20_Reply_2F_Key_20_Script,environment);
	tempAttribute = attribute_add("Valid?",tempClass,tempAttribute_Navigation_20_Reply_2F_Valid_3F_,environment);
	tempAttribute = attribute_add("Replacing?",tempClass,tempAttribute_Navigation_20_Reply_2F_Replacing_3F_,environment);
	tempAttribute = attribute_add("Stationery?",tempClass,tempAttribute_Navigation_20_Reply_2F_Stationery_3F_,environment);
	tempAttribute = attribute_add("Translation Needed?",tempClass,tempAttribute_Navigation_20_Reply_2F_Translation_20_Needed_3F_,environment);
	tempAttribute = attribute_add("File Translation Spec",tempClass,NULL,environment);
	tempAttribute = attribute_add("Selected Files",tempClass,tempAttribute_Navigation_20_Reply_2F_Selected_20_Files,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 165 220 }{ 547 257 } */
Nat4 VPLU_Navigation_20_Reply_2F_Get_20_File_20_Translation_20_Spec_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Reply_2F_Get_20_File_20_Translation_20_Spec_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 69 86 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"File Translation Spec");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 113 91 118 }*/
/* IO - VPL Root : { 86 159 91 164 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Navigation_20_Reply_2F_Get_20_Key_20_Script_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Reply_2F_Get_20_Key_20_Script_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 98 86 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Key Script");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 123 91 128 }*/
/* IO - VPL Root : { 86 150 91 155 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Navigation_20_Reply_2F_Get_20_Replacing_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Reply_2F_Get_20_Replacing_3F__universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 98 86 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Replacing?");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 123 91 128 }*/
/* IO - VPL Root : { 86 150 91 155 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Navigation_20_Reply_2F_Get_20_Selected_20_Files_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Reply_2F_Get_20_Selected_20_Files_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 89 86 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Selected Files");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 120 91 125 }*/
/* IO - VPL Root : { 86 153 91 158 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Navigation_20_Reply_2F_Get_20_Stationery_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Reply_2F_Get_20_Stationery_3F__universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 94 86 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Stationery?");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 122 91 127 }*/
/* IO - VPL Root : { 86 152 91 157 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Navigation_20_Reply_2F_Get_20_Translation_20_Needed_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Reply_2F_Get_20_Translation_20_Needed_3F__universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 72 86 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Translation Needed?");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 114 91 119 }*/
/* IO - VPL Root : { 86 158 91 163 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Navigation_20_Reply_2F_Get_20_Valid_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Reply_2F_Get_20_Valid_3F__universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 107 86 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Valid?");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 126 91 131 }*/
/* IO - VPL Root : { 86 147 91 152 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Navigation_20_Reply_2F_Get_20_Version_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Reply_2F_Get_20_Version_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 106 86 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Version");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 126 91 131 }*/
/* IO - VPL Root : { 86 148 91 153 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Navigation_20_Reply_2F_Set_20_File_20_Translation_20_Spec_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Reply_2F_Set_20_File_20_Translation_20_Spec_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 69 86 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"File Translation Spec");
/* IO - VPL Terminal : { 65 113 70 118 }*/
/* IO - VPL Terminal : { 65 159 70 164 }*/
/* IO - VPL Root : { 86 137 91 142 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Navigation_20_Reply_2F_Set_20_Key_20_Script_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Reply_2F_Set_20_Key_20_Script_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 98 86 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Key Script");
/* IO - VPL Terminal : { 65 123 70 128 }*/
/* IO - VPL Terminal : { 65 150 70 155 }*/
/* IO - VPL Root : { 86 137 91 142 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Navigation_20_Reply_2F_Set_20_Replacing_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Reply_2F_Set_20_Replacing_3F__universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 98 86 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Replacing?");
/* IO - VPL Terminal : { 65 123 70 128 }*/
/* IO - VPL Terminal : { 65 150 70 155 }*/
/* IO - VPL Root : { 86 137 91 142 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Navigation_20_Reply_2F_Set_20_Selected_20_Files_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Reply_2F_Set_20_Selected_20_Files_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 89 86 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Selected Files");
/* IO - VPL Terminal : { 65 120 70 125 }*/
/* IO - VPL Terminal : { 65 153 70 158 }*/
/* IO - VPL Root : { 86 137 91 142 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Navigation_20_Reply_2F_Set_20_Stationery_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Reply_2F_Set_20_Stationery_3F__universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 94 86 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Stationery?");
/* IO - VPL Terminal : { 65 122 70 127 }*/
/* IO - VPL Terminal : { 65 152 70 157 }*/
/* IO - VPL Root : { 86 137 91 142 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Navigation_20_Reply_2F_Set_20_Translation_20_Needed_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Reply_2F_Set_20_Translation_20_Needed_3F__universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 72 86 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Translation Needed?");
/* IO - VPL Terminal : { 65 114 70 119 }*/
/* IO - VPL Terminal : { 65 158 70 163 }*/
/* IO - VPL Root : { 86 137 91 142 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Navigation_20_Reply_2F_Set_20_Valid_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Reply_2F_Set_20_Valid_3F__universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 104 86 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Valid?");
/* IO - VPL Terminal : { 65 125 70 130 }*/
/* IO - VPL Terminal : { 65 148 70 153 }*/
/* IO - VPL Root : { 86 137 91 142 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Navigation_20_Reply_2F_Set_20_Version_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Reply_2F_Set_20_Version_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 104 86 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Version");
/* IO - VPL Terminal : { 65 125 70 130 }*/
/* IO - VPL Terminal : { 65 148 70 153 }*/
/* IO - VPL Root : { 86 137 91 142 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Navigation_20_Reply_2F7E7E_Generate_20_Reply_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Reply_2F7E7E_Generate_20_Reply_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 163 639 }{ 626 530 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 272 86 378 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"fileTranslation");
/* IO - VPL Terminal : { 65 323 70 328 }*/
/* IO - VPL Root : { 86 305 91 310 }*/
/* IO - VPL Root : { 86 340 91 345 }*/
/* End Operation */

/* Begin Operation: { 106 243 122 321 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"keyScript");
/* IO - VPL Terminal : { 101 280 106 285 }*/
/* IO - VPL Root : { 122 267 127 272 }*/
/* IO - VPL Root : { 122 293 127 298 }*/
/* End Operation */

/* Begin Operation: { 142 216 158 290 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"selection");
/* IO - VPL Terminal : { 137 251 142 256 }*/
/* IO - VPL Root : { 158 238 163 243 }*/
/* IO - VPL Root : { 158 262 163 267 }*/
/* End Operation */

/* Begin Operation: { 178 126 194 248 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"translationNeeded");
/* IO - VPL Terminal : { 173 185 178 190 }*/
/* IO - VPL Root : { 194 164 199 169 }*/
/* IO - VPL Root : { 194 204 199 209 }*/
/* End Operation */

/* Begin Operation: { 214 109 230 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"isStationery");
/* IO - VPL Terminal : { 209 153 214 158 }*/
/* IO - VPL Root : { 230 137 235 142 }*/
/* IO - VPL Root : { 230 167 235 172 }*/
/* End Operation */

/* Begin Operation: { 250 79 266 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"replacing");
/* IO - VPL Terminal : { 245 114 250 119 }*/
/* IO - VPL Root : { 266 101 271 106 }*/
/* IO - VPL Root : { 266 125 271 130 }*/
/* End Operation */

/* Begin Operation: { 286 38 302 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"validRecord");
/* IO - VPL Terminal : { 281 80 286 85 }*/
/* IO - VPL Root : { 302 65 307 70 }*/
/* IO - VPL Root : { 302 94 307 99 }*/
/* End Operation */

/* Begin Operation: { 322 14 338 80 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"version");
/* IO - VPL Terminal : { 317 45 322 50 }*/
/* IO - VPL Root : { 338 34 343 39 }*/
/* IO - VPL Root : { 338 56 343 61 }*/
/* End Operation */

/* Begin Operation: { 286 227 302 285 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"empty?");
/* IO - VPL Terminal : { 281 244 286 249 }*/
/* IO - VPL Terminal : { 281 263 286 268 }*/
/* IO - VPL Root : { 302 254 307 259 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 35 86 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/~~Parse Reply Selection AEDesc");
/* IO - VPL Terminal : { 65 102 70 107 }*/
/* IO - VPL Terminal : { 65 171 70 176 }*/
/* IO - VPL Root : { 86 137 91 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 92 122 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 105 106 110 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 143 64 151 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 137 143 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 122 86 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"(  )");
/* IO - VPL Root : { 86 137 91 142 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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

/* Begin Operation: { 322 134 338 264 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Selected Files");
/* IO - VPL Terminal : { 317 175 322 180 }*/
/* IO - VPL Terminal : { 317 218 322 223 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 214 226 230 394 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set File Translation Spec");
/* IO - VPL Terminal : { 209 280 214 285 }*/
/* IO - VPL Terminal : { 209 336 214 341 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 250 218 266 330 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Key Script");
/* IO - VPL Terminal : { 245 253 250 258 }*/
/* IO - VPL Terminal : { 245 290 250 295 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 358 95 374 259 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Translation Needed?");
/* IO - VPL Terminal : { 353 147 358 152 }*/
/* IO - VPL Terminal : { 353 201 358 206 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 430 89 446 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Stationery?");
/* IO - VPL Terminal : { 425 126 430 131 }*/
/* IO - VPL Terminal : { 425 165 430 170 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 394 51 410 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Replacing?");
/* IO - VPL Terminal : { 389 86 394 91 }*/
/* IO - VPL Terminal : { 389 123 394 128 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 394 188 410 276 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Valid?");
/* IO - VPL Terminal : { 389 215 394 220 }*/
/* IO - VPL Terminal : { 389 244 394 249 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 430 232 446 326 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Version");
/* IO - VPL Terminal : { 425 261 430 266 }*/
/* IO - VPL Terminal : { 425 292 430 297 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 461 64 469 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,2,3,2,9);
	result = connect_root_to_terminal(ptrA,1,0,1,10);
	result = connect_root_to_terminal(ptrA,1,9,2,10);
	result = connect_root_to_terminal(ptrA,1,0,1,11);
	result = connect_root_to_terminal(ptrA,2,1,2,11);
	result = connect_root_to_terminal(ptrA,1,0,1,12);
	result = connect_root_to_terminal(ptrA,2,2,2,12);
	result = connect_root_to_terminal(ptrA,1,0,1,13);
	result = connect_root_to_terminal(ptrA,2,4,2,13);
	result = connect_root_to_terminal(ptrA,1,0,1,14);
	result = connect_root_to_terminal(ptrA,2,5,2,14);
	result = connect_root_to_terminal(ptrA,1,0,1,15);
	result = connect_root_to_terminal(ptrA,2,6,2,15);
	result = connect_root_to_terminal(ptrA,1,0,1,16);
	result = connect_root_to_terminal(ptrA,2,7,2,16);
	result = connect_root_to_terminal(ptrA,1,0,1,17);
	result = connect_root_to_terminal(ptrA,2,8,2,17);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 89 114 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 119 86 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"descriptorType");
/* IO - VPL Terminal : { 65 171 70 176 }*/
/* IO - VPL Root : { 86 153 91 158 }*/
/* IO - VPL Root : { 86 189 91 194 }*/
/* End Operation */

/* Begin Operation: { 106 73 122 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Parse Accordingly");
/* IO - VPL Terminal : { 101 105 106 110 }*/
/* IO - VPL Terminal : { 101 139 106 144 }*/
/* IO - VPL Terminal : { 101 173 106 178 }*/
/* IO - VPL Root : { 122 139 127 144 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 99 46 104 }*/
/* IO - VPL Root : { 41 136 46 141 }*/
/* IO - VPL Root : { 41 173 46 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 148 86 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"typeNull");
/* IO - VPL Terminal : { 65 181 70 186 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 119 122 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 122 130 127 135 }*/
/* End Operation */

/* Begin Operation: { 143 65 151 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 138 143 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 243 460 }{ 329 329 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 99 46 104 }*/
/* IO - VPL Root : { 41 136 46 141 }*/
/* IO - VPL Root : { 41 173 46 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 148 86 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"typeAEList");
/* IO - VPL Terminal : { 65 188 70 193 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 81 122 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,2,"AECountItems");
/* IO - VPL Terminal : { 101 111 106 116 }*/
/* IO - VPL Terminal : { 101 143 106 148 }*/
/* IO - VPL Root : { 122 111 127 116 }*/
/* IO - VPL Root : { 122 143 127 148 }*/
/* End Operation */

/* Begin Operation: { 142 30 158 80 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"debug");
/* IO - VPL Terminal : { 137 53 142 58 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 54 86 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"AECountItems");
/* IO - VPL Root : { 86 97 91 102 }*/
/* End Operation */

/* Begin Operation: { 106 67 122 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 101 99 106 104 }*/
/* IO - VPL Terminal : { 101 133 106 138 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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

/* Begin Operation: { 142 139 158 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 137 164 142 169 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 178 119 194 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 194 129 199 134 }*/
/* End Operation */

/* Begin Operation: { 133 248 149 256 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 149 250 154 255 }*/
/* End Operation */

/* Begin Operation: { 133 228 149 236 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 149 230 154 235 }*/
/* End Operation */

/* Begin Operation: { 178 201 194 284 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,3,"get-integer");
/* IO - VPL Terminal : { 173 219 178 224 }*/
/* IO - VPL Terminal : { 173 239 178 244 }*/
/* IO - VPL Terminal : { 173 259 178 264 }*/
/* IO - VPL Root : { 194 219 199 224 }*/
/* IO - VPL Root : { 194 239 199 244 }*/
/* IO - VPL Root : { 194 259 199 264 }*/
/* End Operation */

/* Begin Operation: { 222 79 238 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Get Each Item");
/* IO - VPL Terminal : { 217 94 222 99 }*/
/* IO - VPL Terminal : { 217 111 222 116 }*/
/* IO - VPL Terminal : { 217 128 222 133 }*/
/* IO - VPL Terminal : { 217 145 222 150 }*/
/* IO - VPL Root : { 238 105 243 110 }*/
/* IO - VPL Root : { 238 133 243 138 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
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

/* Start Operations: { 112 102 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 92 46 97 }*/
/* IO - VPL Root : { 41 122 46 127 }*/
/* IO - VPL Root : { 41 152 46 157 }*/
/* IO - VPL Root : { 41 182 46 187 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 225 86 249 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 65 235 70 240 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 101 218 117 256 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,">");
/* IO - VPL Terminal : { 96 228 101 233 }*/
/* IO - VPL Terminal : { 96 240 101 245 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Begin Operation: { 106 86 122 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 101 103 106 108 }*/
/* IO - VPL Root : { 122 103 127 108 }*/
/* End Operation */

/* Begin Operation: { 106 143 122 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"extract");
/* IO - VPL Terminal : { 101 155 106 160 }*/
/* IO - VPL Terminal : { 101 169 106 174 }*/
/* IO - VPL Terminal : { 101 183 106 188 }*/
/* IO - VPL Root : { 122 170 127 175 }*/
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

/* Start Operations: { 518 140 }{ 351 322 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 99 46 104 }*/
/* IO - VPL Root : { 41 136 46 141 }*/
/* IO - VPL Root : { 41 173 46 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 129 158 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"typeFSRef");
/* IO - VPL Root : { 158 167 163 172 }*/
/* End Operation */

/* Begin Operation: { 70 219 86 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"8");
/* IO - VPL Root : { 86 229 91 234 }*/
/* End Operation */

/* Begin Operation: { 70 155 86 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"AEDesc");
/* IO - VPL Root : { 86 181 91 186 }*/
/* End Operation */

/* Begin Operation: { 106 151 122 251 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"make-external");
/* IO - VPL Terminal : { 101 182 106 187 }*/
/* IO - VPL Terminal : { 101 215 106 220 }*/
/* IO - VPL Root : { 122 199 127 204 }*/
/* End Operation */

/* Begin Operation: { 178 117 194 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,5,3,"AEGetNthDesc");
/* IO - VPL Terminal : { 173 131 178 136 }*/
/* IO - VPL Terminal : { 173 147 178 152 }*/
/* IO - VPL Terminal : { 173 163 178 168 }*/
/* IO - VPL Terminal : { 173 179 178 184 }*/
/* IO - VPL Terminal : { 173 195 178 200 }*/
/* IO - VPL Root : { 194 140 199 145 }*/
/* IO - VPL Root : { 194 165 199 170 }*/
/* IO - VPL Root : { 194 190 199 195 }*/
/* End Operation */

/* Begin Operation: { 214 116 230 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 209 141 214 146 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 250 35 266 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/~~Parse Reply Selection AEDesc");
/* IO - VPL Terminal : { 245 102 250 107 }*/
/* IO - VPL Terminal : { 245 171 250 176 }*/
/* IO - VPL Root : { 266 137 271 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 287 64 295 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 282 137 287 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,2,0,1,5);
	result = connect_root_to_terminal(ptrA,3,0,2,5);
	result = connect_root_to_terminal(ptrA,1,1,3,5);
	result = connect_root_to_terminal(ptrA,1,4,5,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,3,5,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [7 to 6] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 311 307 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 99 46 104 }*/
/* IO - VPL Root : { 41 136 46 141 }*/
/* IO - VPL Root : { 41 173 46 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 135 158 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"typeFSS");
/* IO - VPL Root : { 158 167 163 172 }*/
/* End Operation */

/* Begin Operation: { 70 219 86 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"8");
/* IO - VPL Root : { 86 229 91 234 }*/
/* End Operation */

/* Begin Operation: { 70 155 86 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"AEDesc");
/* IO - VPL Root : { 86 181 91 186 }*/
/* End Operation */

/* Begin Operation: { 106 151 122 251 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"make-external");
/* IO - VPL Terminal : { 101 182 106 187 }*/
/* IO - VPL Terminal : { 101 215 106 220 }*/
/* IO - VPL Root : { 122 199 127 204 }*/
/* End Operation */

/* Begin Operation: { 178 117 194 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,5,3,"AEGetNthDesc");
/* IO - VPL Terminal : { 173 131 178 136 }*/
/* IO - VPL Terminal : { 173 147 178 152 }*/
/* IO - VPL Terminal : { 173 163 178 168 }*/
/* IO - VPL Terminal : { 173 179 178 184 }*/
/* IO - VPL Terminal : { 173 195 178 200 }*/
/* IO - VPL Root : { 194 140 199 145 }*/
/* IO - VPL Root : { 194 165 199 170 }*/
/* IO - VPL Root : { 194 190 199 195 }*/
/* End Operation */

/* Begin Operation: { 214 116 230 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 209 141 214 146 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 250 35 266 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/~~Parse Reply Selection AEDesc");
/* IO - VPL Terminal : { 245 102 250 107 }*/
/* IO - VPL Terminal : { 245 171 250 176 }*/
/* IO - VPL Root : { 266 137 271 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 287 64 295 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 282 137 287 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,2,0,1,5);
	result = connect_root_to_terminal(ptrA,3,0,2,5);
	result = connect_root_to_terminal(ptrA,1,1,3,5);
	result = connect_root_to_terminal(ptrA,1,4,5,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,3,5,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [7 to 6] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 99 46 104 }*/
/* IO - VPL Root : { 41 136 46 141 }*/
/* IO - VPL Root : { 41 173 46 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 71 64 79 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 66 137 71 142 }*/
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

/* Begin Operation: { 143 63 151 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 111 143 116 }*/
/* IO - VPL Terminal : { 138 161 143 166 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,4,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,4,0,2,2);
	result = connect_root_to_terminal(ptrA,3,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,3,0,3,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 262 68 270 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 257 141 262 146 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,2,2,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,1,6,3,8);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,2,0,2,9);
	result = connect_root_to_terminal(ptrA,1,5,3,9);
	result = connect_root_to_terminal(ptrA,1,9,3,9);
	result = connect_root_to_terminal(ptrA,3,8,4,9);
	result = connect_root_to_terminal(ptrA,2,9,1,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 347 600 }{ 293 304 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 99 46 104 }*/
/* IO - VPL Root : { 41 136 46 141 }*/
/* IO - VPL Root : { 41 173 46 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 149 86 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"typeFSS");
/* IO - VPL Terminal : { 65 181 70 186 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 79 122 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"AEDesc Copy Data");
/* IO - VPL Terminal : { 101 136 106 141 }*/
/* IO - VPL Root : { 122 136 127 141 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 178 95 194 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New FSSpec");
/* IO - VPL Terminal : { 173 137 178 142 }*/
/* IO - VPL Root : { 194 137 199 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 215 64 223 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 210 137 215 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_breakpoint_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 558 1009 }{ 413 339 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 99 46 104 }*/
/* IO - VPL Root : { 41 136 46 141 }*/
/* IO - VPL Root : { 41 173 46 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 135 86 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"typeFSRef");
/* IO - VPL Terminal : { 65 173 70 178 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 127 79 143 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"AEDesc Copy Data");
/* IO - VPL Terminal : { 122 136 127 141 }*/
/* IO - VPL Root : { 143 136 148 141 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 182 230 198 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 198 233 203 238 }*/
/* End Operation */

/* Begin Operation: { 227 175 243 257 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Block Copy");
/* IO - VPL Terminal : { 222 193 227 198 }*/
/* IO - VPL Terminal : { 222 213 227 218 }*/
/* IO - VPL Terminal : { 222 233 227 238 }*/
/* IO - VPL Root : { 243 214 248 219 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 226 52 242 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Block Free");
/* IO - VPL Terminal : { 221 90 226 95 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 305 97 321 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New FSRef");
/* IO - VPL Terminal : { 300 136 305 141 }*/
/* IO - VPL Root : { 321 136 326 141 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 348 63 356 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 343 136 348 141 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [5 to 4] */
/* Synchro [6 to 5] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 99 46 104 }*/
/* IO - VPL Root : { 41 136 46 141 }*/
/* IO - VPL Root : { 41 173 46 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 65 78 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 65 138 70 143 }*/
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

/* Begin Operation: { 143 64 151 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 137 143 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,2,1,3,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_Nav_20_Choose_20_Volume_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_Choose_20_Volume_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Event_20_Callback_20_Behavior,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Nav_20_Choose_20_Volume_20_Dialog_2F_Parameter_20_Strings,environment);
	tempAttribute = attribute_add("Filter Callback Behavior",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Nav Object Filter Dialog");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
Nat4 VPLU_Nav_20_Choose_20_Volume_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Choose_20_Volume_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 392 430 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 16 86 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Creation Options Record");
/* IO - VPL Terminal : { 65 106 70 111 }*/
/* IO - VPL Root : { 86 106 91 111 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 167 122 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 122 178 127 183 }*/
/* End Operation */

/* Begin Operation: { 106 15 122 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Filter Callback");
/* IO - VPL Terminal : { 101 85 106 90 }*/
/* IO - VPL Root : { 122 85 127 90 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 94 196 110 326 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/~New NavDialog**");
/* IO - VPL Terminal : { 89 257 94 262 }*/
/* IO - VPL Root : { 110 257 115 262 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 38 158 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,5,5,"NavCreateChooseVolumeDialog");
/* IO - VPL Terminal : { 137 66 142 71 }*/
/* IO - VPL Terminal : { 137 96 142 101 }*/
/* IO - VPL Terminal : { 137 126 142 131 }*/
/* IO - VPL Terminal : { 137 156 142 161 }*/
/* IO - VPL Terminal : { 137 186 142 191 }*/
/* IO - VPL Root : { 158 66 163 71 }*/
/* IO - VPL Root : { 158 96 163 101 }*/
/* IO - VPL Root : { 158 126 163 131 }*/
/* IO - VPL Root : { 158 156 163 161 }*/
/* IO - VPL Root : { 158 186 163 191 }*/
/* End Operation */

/* Begin Operation: { 178 39 194 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NavCreateChooseVolumeDialog");
/* IO - VPL Root : { 194 127 199 132 }*/
/* End Operation */

/* Begin Operation: { 214 77 230 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Report Error");
/* IO - VPL Terminal : { 209 100 214 105 }*/
/* IO - VPL Terminal : { 209 125 214 130 }*/
/* IO - VPL Terminal : { 209 150 214 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 251 60 259 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 246 137 251 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,2,0,2,5);
	result = connect_root_to_terminal(ptrA,1,3,3,5);
	result = connect_root_to_terminal(ptrA,1,2,4,5);
	result = connect_root_to_terminal(ptrA,1,4,5,5);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,5,3,7);
	result = connect_root_to_terminal(ptrA,5,5,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_Nav_20_Ask_20_Save_20_Changes_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_Ask_20_Save_20_Changes_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 304 965 }{ 257 344 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Event_20_Callback_20_Behavior,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Parameter_20_Strings,environment);
	tempAttribute = attribute_add("Save Changes?",tempClass,tempAttribute_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Save_20_Changes_3F_,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Navigation Services Window");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
Nat4 VPLU_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Extract_20_Reply_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Extract_20_Reply_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 64 73 214 } */
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


Nat4 VPLU_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Extract_20_Result_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Extract_20_Result_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 43 86 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Canceled?");
/* IO - VPL Terminal : { 65 95 70 100 }*/
/* IO - VPL Root : { 86 95 91 100 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 75 122 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 101 95 106 100 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 142 72 158 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Save Changes?");
/* IO - VPL Terminal : { 137 137 142 142 }*/
/* IO - VPL Root : { 158 137 163 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 179 64 187 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 174 137 179 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Get_20_Save_20_Changes_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Get_20_Save_20_Changes_3F__universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 89 86 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Save Changes?");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 120 91 125 }*/
/* IO - VPL Root : { 86 153 91 158 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_NavUA_20_Dont_20_Save_20_Changes_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_NavUA_20_Dont_20_Save_20_Changes_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 165 86 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 86 188 91 193 }*/
/* End Operation */

/* Begin Operation: { 106 97 122 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Save Changes?");
/* IO - VPL Terminal : { 101 139 106 144 }*/
/* IO - VPL Terminal : { 101 183 106 188 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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


Nat4 VPLU_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Set_20_Save_20_Changes_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Set_20_Save_20_Changes_3F__universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 85 86 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Save Changes?");
/* IO - VPL Terminal : { 65 116 70 121 }*/
/* IO - VPL Terminal : { 65 149 70 154 }*/
/* IO - VPL Root : { 86 133 91 138 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Setup_20_Run_20_Flags_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Setup_20_Run_20_Flags_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 16 86 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Setup Run Flags");
/* IO - VPL Terminal : { 65 80 70 85 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 70 156 86 240 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"save changes");
/* IO - VPL Terminal : { 65 196 70 201 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 172 86 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 86 192 91 197 }*/
/* End Operation */

/* Begin Operation: { 106 99 122 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Save Changes?");
/* IO - VPL Terminal : { 101 141 106 146 }*/
/* IO - VPL Terminal : { 101 185 106 190 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 339 379 }{ 301 545 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 16 86 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Creation Options Record");
/* IO - VPL Terminal : { 65 106 70 111 }*/
/* IO - VPL Root : { 86 106 91 111 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 141 122 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 122 152 127 157 }*/
/* End Operation */

/* Begin Operation: { 106 43 122 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Action");
/* IO - VPL Terminal : { 101 85 106 90 }*/
/* IO - VPL Root : { 122 85 127 90 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 178 32 194 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NavCreateAskSaveChangesDialog");
/* IO - VPL Root : { 194 127 199 132 }*/
/* End Operation */

/* Begin Operation: { 107 219 123 349 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/~New NavDialog**");
/* IO - VPL Terminal : { 102 282 107 287 }*/
/* IO - VPL Root : { 123 281 128 286 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 65 158 264 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,5,4,"NavCreateAskSaveChangesDialog");
/* IO - VPL Terminal : { 137 96 142 101 }*/
/* IO - VPL Terminal : { 137 129 142 134 }*/
/* IO - VPL Terminal : { 137 162 142 167 }*/
/* IO - VPL Terminal : { 137 195 142 200 }*/
/* IO - VPL Terminal : { 137 228 142 233 }*/
/* IO - VPL Root : { 158 102 163 107 }*/
/* IO - VPL Root : { 158 141 163 146 }*/
/* IO - VPL Root : { 158 180 163 185 }*/
/* IO - VPL Root : { 158 219 163 224 }*/
/* End Operation */

/* Begin Operation: { 214 77 230 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Report Error");
/* IO - VPL Terminal : { 209 100 214 105 }*/
/* IO - VPL Terminal : { 209 125 214 130 }*/
/* IO - VPL Terminal : { 209 150 214 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 251 60 259 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 246 137 251 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,1,3,2,6);
	result = connect_root_to_terminal(ptrA,2,0,3,6);
	result = connect_root_to_terminal(ptrA,1,2,4,6);
	result = connect_root_to_terminal(ptrA,1,5,5,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,4,2,7);
	result = connect_root_to_terminal(ptrA,1,6,3,7);
	result = connect_root_to_terminal(ptrA,4,6,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_Navigation_20_Services_20_Window_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Navigation_20_Services_20_Window_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 361 552 }{ 233 334 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,tempAttribute_Navigation_20_Services_20_Window_2F_Event_20_Callback_20_Behavior,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Navigation_20_Services_20_Window_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Navigation_20_Services_20_Window_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Navigation_20_Services_20_Window_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Navigation_20_Services_20_Window_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Navigation_20_Services_20_Window_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Navigation_20_Services_20_Window_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Navigation_20_Services_20_Window_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Navigation_20_Services_20_Window_2F_Parameter_20_Strings,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 62 913 }{ 754 314 } */
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Close_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Close_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 81 86 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close Callbacks");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Close_20_Callbacks_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Close_20_Callbacks_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 67 86 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close Event Callback");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Close_20_Event_20_Callback_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Close_20_Event_20_Callback_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 47 86 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Event Callback Behavior");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 137 91 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 192 122 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 101 228 106 233 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 109 122 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 101 137 106 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 64 73 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Dispose_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Dispose_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 38 86 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"dispose options");
/* IO - VPL Terminal : { 65 82 70 87 }*/
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

/* Start Operations: { 60 60 }{ 226 404 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 47 86 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Creation Options Record");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 137 91 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 31 122 58 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 42 106 47 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 106 95 123 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"DisposePtr");
/* IO - VPL Terminal : { 100 137 105 142 }*/
/* IO - VPL Root : { 124 137 129 142 }*/
/* End Operation */

/* Begin Operation: { 106 198 122 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 122 209 127 214 }*/
/* End Operation */

/* Begin Operation: { 142 87 158 271 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Creation Options Record");
/* IO - VPL Terminal : { 137 146 142 151 }*/
/* IO - VPL Terminal : { 137 207 142 212 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 173 64 181 214 } */
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
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 70 148 86 256 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"dispose completion");
/* IO - VPL Terminal : { 65 200 70 205 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 192 86 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"(  )");
/* IO - VPL Root : { 86 207 91 212 }*/
/* End Operation */

/* Begin Operation: { 106 92 122 256 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Completion Behavior");
/* IO - VPL Terminal : { 101 144 106 149 }*/
/* IO - VPL Terminal : { 101 198 106 203 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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

/* Begin Operation: { 106 75 122 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"dispose window record");
/* IO - VPL Terminal : { 101 137 106 142 }*/
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

/* Start Operations: { 60 60 }{ 276 309 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 82 174 98 263 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Close Handle");
/* IO - VPL Terminal : { 77 215 82 220 }*/
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

/* Begin Operation: { 56 51 72 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window Record");
/* IO - VPL Terminal : { 51 114 56 119 }*/
/* IO - VPL Root : { 72 114 77 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 98 46 114 73 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 93 57 98 62 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 99 122 115 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"DisposeHandle");
/* IO - VPL Terminal : { 94 168 99 173 }*/
/* IO - VPL Root : { 115 168 120 173 }*/
/* End Operation */

/* Begin Operation: { 150 24 158 216 } */
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

/* Begin Operation: { 146 170 162 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 162 181 167 186 }*/
/* End Operation */

/* Begin Operation: { 182 95 198 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Window Record");
/* IO - VPL Terminal : { 177 137 182 142 }*/
/* IO - VPL Terminal : { 177 181 182 186 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 213 65 221 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Do_20_Completion_20_Behavior_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Do_20_Completion_20_Behavior_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 57 86 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Completion Behavior");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 137 91 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 63 122 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"add to input?");
/* IO - VPL Terminal : { 101 88 106 93 }*/
/* IO - VPL Terminal : { 101 115 106 120 }*/
/* IO - VPL Root : { 122 102 127 107 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 74 86 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Navigation Window\"");
/* IO - VPL Root : { 86 137 91 142 }*/
/* End Operation */

/* Begin Operation: { 106 51 122 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Add Attachment To Callback");
/* IO - VPL Terminal : { 101 93 106 98 }*/
/* IO - VPL Terminal : { 101 137 106 142 }*/
/* IO - VPL Terminal : { 101 181 106 186 }*/
/* IO - VPL Root : { 122 137 127 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 143 64 151 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 137 143 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,0,3,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 142 82 158 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Execute Callback");
/* IO - VPL Terminal : { 137 138 142 143 }*/
/* IO - VPL Root : { 158 138 163 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 173 64 181 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Extract_20_Reply_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Extract_20_Reply_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 132 86 256 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Reply Record");
/* IO - VPL Terminal : { 65 192 70 197 }*/
/* IO - VPL Root : { 86 192 91 197 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 70 8 86 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Navigation Reply");
/* IO - VPL Terminal : { 65 64 70 69 }*/
/* IO - VPL Root : { 86 64 91 69 }*/
/* End Operation */

/* Begin Operation: { 106 84 122 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/~~Generate Reply");
/* IO - VPL Terminal : { 101 124 106 129 }*/
/* IO - VPL Terminal : { 101 166 106 171 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 112 158 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Reply");
/* IO - VPL Terminal : { 137 138 142 143 }*/
/* IO - VPL Terminal : { 137 166 142 171 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 173 64 181 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 64 73 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Extract_20_Result_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Extract_20_Result_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 44 86 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Canceled?");
/* IO - VPL Terminal : { 65 96 70 101 }*/
/* IO - VPL Root : { 86 96 91 101 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 76 122 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 101 96 106 101 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 142 95 158 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Result");
/* IO - VPL Terminal : { 137 137 142 142 }*/
/* IO - VPL Root : { 158 137 163 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 179 64 187 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 174 137 179 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Action_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Action_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 111 86 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Action");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 127 91 132 }*/
/* IO - VPL Root : { 86 145 91 150 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Canceled_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Canceled_3F__universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 102 86 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Canceled?");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 125 91 130 }*/
/* IO - VPL Root : { 86 150 91 155 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Completion_20_Behavior_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Completion_20_Behavior_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 73 86 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Completion Behavior");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 115 91 120 }*/
/* IO - VPL Root : { 86 159 91 164 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Creation_20_Options_20_Record_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Creation_20_Options_20_Record_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 63 86 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Creation Options Record");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 111 91 116 }*/
/* IO - VPL Root : { 86 161 91 166 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Event_20_Callback_20_Behavior_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Event_20_Callback_20_Behavior_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 63 86 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Event Callback Behavior");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 111 91 116 }*/
/* IO - VPL Root : { 86 161 91 166 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_File_20_Name_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_File_20_Name_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 146 86 256 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Save File Name\"");
/* IO - VPL Root : { 86 199 91 204 }*/
/* End Operation */

/* Begin Operation: { 106 96 122 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Parameter String");
/* IO - VPL Terminal : { 101 143 106 148 }*/
/* IO - VPL Terminal : { 101 192 106 197 }*/
/* IO - VPL Root : { 122 168 127 173 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 143 64 151 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 137 143 142 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 118 86 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 86 129 91 134 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Modality_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Modality_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 105 86 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Modality");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 125 91 130 }*/
/* IO - VPL Root : { 86 147 91 152 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Parameter_20_String_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Parameter_20_String_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 40 86 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Parameter Strings");
/* IO - VPL Terminal : { 65 99 70 104 }*/
/* IO - VPL Root : { 86 78 91 83 }*/
/* IO - VPL Root : { 86 118 91 123 }*/
/* End Operation */

/* Begin Operation: { 106 107 122 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Get Setting)");
/* IO - VPL Terminal : { 101 137 106 142 }*/
/* IO - VPL Terminal : { 101 169 106 174 }*/
/* IO - VPL Root : { 122 153 127 158 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 143 64 151 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 137 143 142 }*/
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



	return kNOERROR;
}


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Parent_20_Window_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Parent_20_Window_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 89 86 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Parent Window");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 120 91 125 }*/
/* IO - VPL Root : { 86 153 91 158 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Reply_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Reply_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 114 86 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Reply");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 129 91 134 }*/
/* IO - VPL Root : { 86 146 91 151 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Reply_20_Record_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Reply_20_Record_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 295 384 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 54 158 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NavDialogGetReply");
/* IO - VPL Root : { 158 111 163 116 }*/
/* End Operation */

/* Begin Operation: { 70 72 86 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window Record");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 137 91 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 30 122 57 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 41 106 46 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 105 99 121 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,3,"NavDialogGetReply");
/* IO - VPL Terminal : { 100 137 105 142 }*/
/* IO - VPL Terminal : { 100 177 105 182 }*/
/* IO - VPL Root : { 121 127 126 132 }*/
/* IO - VPL Root : { 121 157 126 162 }*/
/* IO - VPL Root : { 121 187 126 192 }*/
/* End Operation */

/* Begin Operation: { 178 62 194 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Report Error");
/* IO - VPL Terminal : { 173 85 178 90 }*/
/* IO - VPL Terminal : { 173 110 178 115 }*/
/* IO - VPL Terminal : { 173 135 178 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 215 64 223 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 210 137 215 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,1,2,5);
	result = connect_root_to_terminal(ptrA,1,4,3,5);
	result = connect_root_to_terminal(ptrA,3,4,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Reply_20_Selection_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Reply_20_Selection_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 97 86 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Reply");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 137 91 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 101 122 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 101 137 106 142 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 142 74 158 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Selected Files");
/* IO - VPL Terminal : { 137 137 142 142 }*/
/* IO - VPL Root : { 158 137 163 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 179 64 187 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 174 137 179 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Result_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Result_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 201 304 } */
/* Begin Operation: { 29 64 37 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 37 137 42 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 112 76 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Result");
/* IO - VPL Terminal : { 55 137 60 142 }*/
/* IO - VPL Root : { 76 128 81 133 }*/
/* IO - VPL Root : { 76 146 81 151 }*/
/* End Operation */

/* Begin Operation: { 112 64 120 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 107 137 112 142 }*/
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Window_20_Record_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Get_20_Window_20_Record_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 88 86 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Window Record");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 120 91 125 }*/
/* IO - VPL Root : { 86 154 91 159 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavCB_20_Accept_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavCB_20_Accept_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 29 64 37 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 37 99 42 104 }*/
/* IO - VPL Root : { 37 136 42 141 }*/
/* IO - VPL Root : { 37 173 42 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 223 64 231 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavCB_20_Cancel_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavCB_20_Cancel_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 99 46 104 }*/
/* IO - VPL Root : { 41 136 46 141 }*/
/* IO - VPL Root : { 41 173 46 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 103 86 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 86 123 91 128 }*/
/* End Operation */

/* Begin Operation: { 106 52 122 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Canceled?");
/* IO - VPL Terminal : { 101 86 106 91 }*/
/* IO - VPL Terminal : { 101 122 106 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavCB_20_Event_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavCB_20_Event_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 29 64 37 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 37 99 42 104 }*/
/* IO - VPL Root : { 37 136 42 141 }*/
/* IO - VPL Root : { 37 173 42 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 223 64 231 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavCB_20_Start_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavCB_20_Start_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 29 64 37 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 37 99 42 104 }*/
/* IO - VPL Root : { 37 136 42 141 }*/
/* IO - VPL Root : { 37 173 42 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 223 64 231 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavCB_20_Terminate_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavCB_20_Terminate_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 99 46 104 }*/
/* IO - VPL Root : { 41 136 46 141 }*/
/* IO - VPL Root : { 41 173 46 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 55 86 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"set flags");
/* IO - VPL Terminal : { 65 85 70 90 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 154 86 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 86 174 91 179 }*/
/* End Operation */

/* Begin Operation: { 106 105 122 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Finished?");
/* IO - VPL Terminal : { 101 137 106 142 }*/
/* IO - VPL Terminal : { 101 171 106 176 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 17 86 123 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Extract Reply");
/* IO - VPL Terminal : { 65 68 70 73 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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

/* Begin Operation: { 106 8 122 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Do Completion Behavior");
/* IO - VPL Terminal : { 101 86 106 91 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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



	return kNOERROR;
}


Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavCB_20_Unknown_20_Selector_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavCB_20_Unknown_20_Selector_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 323 318 } */
/* Begin Operation: { 28 39 36 235 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 36 76 41 81 }*/
/* IO - VPL Root : { 36 115 41 120 }*/
/* IO - VPL Root : { 36 154 41 159 }*/
/* IO - VPL Root : { 36 193 41 198 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 223 64 231 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 171 485 }{ 270 354 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 99 46 104 }*/
/* IO - VPL Root : { 41 136 46 141 }*/
/* IO - VPL Root : { 41 173 46 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 71 105 87 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"context");
/* IO - VPL Terminal : { 66 136 71 141 }*/
/* IO - VPL Root : { 87 125 92 130 }*/
/* IO - VPL Root : { 87 147 92 152 }*/
/* End Operation */

/* Begin Operation: { 110 73 126 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,2,"NavDialogGetUserAction");
/* IO - VPL Terminal : { 105 147 110 152 }*/
/* IO - VPL Root : { 126 121 131 126 }*/
/* IO - VPL Root : { 126 171 131 176 }*/
/* End Operation */

/* Begin Operation: { 183 72 199 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Result");
/* IO - VPL Terminal : { 178 99 183 104 }*/
/* IO - VPL Terminal : { 178 128 183 133 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 147 65 163 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"do respose");
/* IO - VPL Terminal : { 142 87 147 92 }*/
/* IO - VPL Terminal : { 142 111 147 116 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 105 86 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavUserActionNone");
/* IO - VPL Terminal : { 65 171 70 176 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 58 122 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavUA None");
/* IO - VPL Terminal : { 101 104 106 109 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 100 86 246 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavUserActionCancel");
/* IO - VPL Terminal : { 65 171 70 176 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 53 122 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavUA Cancel");
/* IO - VPL Terminal : { 101 104 106 109 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 105 86 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavUserActionOpen");
/* IO - VPL Terminal : { 65 171 70 176 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 58 122 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavUA Open");
/* IO - VPL Terminal : { 101 104 106 109 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 98 86 248 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavUserActionSaveAs");
/* IO - VPL Terminal : { 65 171 70 176 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 49 122 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavUA Save As");
/* IO - VPL Terminal : { 101 104 106 109 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 99 86 247 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavUserActionChoose");
/* IO - VPL Terminal : { 65 171 70 176 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 52 122 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavUA Choose");
/* IO - VPL Terminal : { 101 104 106 109 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 90 86 256 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavUserActionNewFolder");
/* IO - VPL Terminal : { 65 171 70 176 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 41 122 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavUA New Folder");
/* IO - VPL Terminal : { 101 104 106 109 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 83 86 263 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavUserActionSaveChanges");
/* IO - VPL Terminal : { 65 171 70 176 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 34 122 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavUA Save Changes");
/* IO - VPL Terminal : { 101 104 106 109 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 71 86 275 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavUserActionDontSaveChanges");
/* IO - VPL Terminal : { 65 171 70 176 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 20 122 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavUA Dont Save Changes");
/* IO - VPL Terminal : { 101 104 106 109 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 76 86 270 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavUserActionDiscardChanges");
/* IO - VPL Terminal : { 65 171 70 176 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 27 122 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavUA Discard Changes");
/* IO - VPL Terminal : { 101 104 106 109 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 70 86 276 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavUserActionReviewDocuments");
/* IO - VPL Terminal : { 65 171 70 176 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 21 122 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavUA Review Documents");
/* IO - VPL Terminal : { 101 104 106 109 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 158 86 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"10");
/* IO - VPL Terminal : { 65 171 70 176 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 112 8 128 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavUA Dont Save Any Documents");
/* IO - VPL Terminal : { 107 111 112 116 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 143 64 151 214 } */
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 61 86 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavUA Unknown Action");
/* IO - VPL Terminal : { 65 111 70 116 }*/
/* IO - VPL Terminal : { 65 163 70 168 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 214 64 222 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 211 300 }{ 200 300 } */
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

/* Begin Operation: { 78 164 95 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 72 174 77 179 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 78 90 95 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NavEvent");
/* IO - VPL Root : { 96 117 101 122 }*/
/* End Operation */

/* Begin Operation: { 120 79 137 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug Result");
/* IO - VPL Terminal : { 114 97 119 102 }*/
/* IO - VPL Terminal : { 114 117 119 122 }*/
/* IO - VPL Terminal : { 114 137 119 142 }*/
/* IO - VPL Terminal : { 114 157 119 162 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,0,3,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 39 41 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 77 46 82 }*/
/* IO - VPL Root : { 41 117 46 122 }*/
/* IO - VPL Root : { 41 157 46 162 }*/
/* IO - VPL Root : { 41 197 46 202 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 39 86 251 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"ours");
/* IO - VPL Terminal : { 65 79 70 84 }*/
/* IO - VPL Terminal : { 65 121 70 126 }*/
/* IO - VPL Terminal : { 65 163 70 168 }*/
/* IO - VPL Terminal : { 65 205 70 210 }*/
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 92 46 97 }*/
/* IO - VPL Root : { 41 122 46 127 }*/
/* IO - VPL Root : { 41 152 46 157 }*/
/* IO - VPL Root : { 41 182 46 187 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 73 86 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavCBAccept");
/* IO - VPL Terminal : { 65 122 70 127 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 76 122 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavCB Accept");
/* IO - VPL Terminal : { 101 105 106 110 }*/
/* IO - VPL Terminal : { 101 136 106 141 }*/
/* IO - VPL Terminal : { 101 167 106 172 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,4,0,3,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 92 46 97 }*/
/* IO - VPL Root : { 41 122 46 127 }*/
/* IO - VPL Root : { 41 152 46 157 }*/
/* IO - VPL Root : { 41 182 46 187 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 74 86 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavCBCancel");
/* IO - VPL Terminal : { 65 122 70 127 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 79 122 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavCB Cancel");
/* IO - VPL Terminal : { 101 109 106 114 }*/
/* IO - VPL Terminal : { 101 141 106 146 }*/
/* IO - VPL Terminal : { 101 173 106 178 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,4,0,3,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 92 46 97 }*/
/* IO - VPL Root : { 41 122 46 127 }*/
/* IO - VPL Root : { 41 152 46 157 }*/
/* IO - VPL Root : { 41 182 46 187 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 64 86 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavCBTerminate");
/* IO - VPL Terminal : { 65 122 70 127 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 79 122 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavCB Terminate");
/* IO - VPL Terminal : { 101 109 106 114 }*/
/* IO - VPL Terminal : { 101 141 106 146 }*/
/* IO - VPL Terminal : { 101 173 106 178 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,4,0,3,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 92 46 97 }*/
/* IO - VPL Root : { 41 122 46 127 }*/
/* IO - VPL Root : { 41 152 46 157 }*/
/* IO - VPL Root : { 41 182 46 187 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 77 86 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavCBStart");
/* IO - VPL Terminal : { 65 122 70 127 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 79 122 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavCB Start");
/* IO - VPL Terminal : { 101 109 106 114 }*/
/* IO - VPL Terminal : { 101 141 106 146 }*/
/* IO - VPL Terminal : { 101 173 106 178 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,4,0,3,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 92 46 97 }*/
/* IO - VPL Root : { 41 122 46 127 }*/
/* IO - VPL Root : { 41 152 46 157 }*/
/* IO - VPL Root : { 41 182 46 187 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 62 86 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavCBUserAction");
/* IO - VPL Terminal : { 65 122 70 127 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 76 122 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavCB User Action");
/* IO - VPL Terminal : { 101 107 106 112 }*/
/* IO - VPL Terminal : { 101 140 106 145 }*/
/* IO - VPL Terminal : { 101 173 106 178 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,4,0,3,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 92 46 97 }*/
/* IO - VPL Root : { 41 122 46 127 }*/
/* IO - VPL Root : { 41 152 46 157 }*/
/* IO - VPL Root : { 41 182 46 187 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 77 86 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavCBEvent");
/* IO - VPL Terminal : { 65 122 70 127 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 79 122 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavCB Event");
/* IO - VPL Terminal : { 101 109 106 114 }*/
/* IO - VPL Terminal : { 101 141 106 146 }*/
/* IO - VPL Terminal : { 101 173 106 178 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,4,0,3,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 92 46 97 }*/
/* IO - VPL Root : { 41 122 46 127 }*/
/* IO - VPL Root : { 41 152 46 157 }*/
/* IO - VPL Root : { 41 182 46 187 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 60 86 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavCB Unknown Selector");
/* IO - VPL Terminal : { 65 91 70 96 }*/
/* IO - VPL Terminal : { 65 124 70 129 }*/
/* IO - VPL Terminal : { 65 157 70 162 }*/
/* IO - VPL Terminal : { 65 190 70 195 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,3,1);
	result = connect_root_to_terminal(ptrA,4,0,4,1);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,3,1);
	result = connect_root_to_terminal(ptrA,4,0,4,1);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Cancel_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Cancel_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 155 86 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 86 175 91 180 }*/
/* End Operation */

/* Begin Operation: { 106 104 122 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Canceled?");
/* IO - VPL Terminal : { 101 138 106 143 }*/
/* IO - VPL Terminal : { 101 174 106 179 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Choose_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Choose_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 29 64 37 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 37 137 42 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 223 64 231 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Discard_20_Changes_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Discard_20_Changes_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 29 64 37 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 37 137 42 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 223 64 231 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Dont_20_Save_20_Any_20_Documents_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Dont_20_Save_20_Any_20_Documents_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 29 64 37 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 37 137 42 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 223 64 231 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Dont_20_Save_20_Changes_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Dont_20_Save_20_Changes_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 29 64 37 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 37 137 42 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 223 64 231 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_New_20_Folder_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_New_20_Folder_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 29 64 37 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 37 137 42 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 223 64 231 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_None_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_None_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 29 64 37 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 37 137 42 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 223 64 231 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Open_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Open_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 29 64 37 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 37 137 42 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 223 64 231 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Review_20_Documents_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Review_20_Documents_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 29 64 37 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 37 137 42 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 223 64 231 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Save_20_As_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Save_20_As_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 29 64 37 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 37 137 42 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 223 64 231 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Save_20_Changes_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Save_20_Changes_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 29 64 37 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 37 137 42 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 223 64 231 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Unknown_20_Action_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Unknown_20_Action_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 316 309 } */
/* Begin Operation: { 29 64 37 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 37 112 42 117 }*/
/* IO - VPL Root : { 37 162 42 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 223 64 231 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Open_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Open_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 86 86 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Setup Options");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 106 90 122 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Setup Dialog");
/* IO - VPL Terminal : { 101 137 106 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 142 81 158 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Setup Run Flags");
/* IO - VPL Terminal : { 137 137 142 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 173 64 181 214 } */
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

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 109 86 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 64 114 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Open_20_Event_20_Callback_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Open_20_Event_20_Callback_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 28 86 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Event Callback Behavior");
/* IO - VPL Terminal : { 65 118 70 123 }*/
/* IO - VPL Root : { 86 118 91 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 105 30 121 103 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 100 64 105 69 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 147 122 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Pointer");
/* IO - VPL Terminal : { 101 173 106 178 }*/
/* IO - VPL Terminal : { 101 215 106 220 }*/
/* IO - VPL Root : { 122 192 127 197 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 143 64 151 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 137 143 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,0,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 153 122 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"paramErr");
/* IO - VPL Root : { 122 189 127 194 }*/
/* End Operation */

/* Begin Operation: { 70 88 86 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Open Callback Behavior\"");
/* IO - VPL Root : { 86 163 91 168 }*/
/* End Operation */

/* Begin Operation: { 142 114 158 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Report Error");
/* IO - VPL Terminal : { 137 137 142 142 }*/
/* IO - VPL Terminal : { 137 162 142 167 }*/
/* IO - VPL Terminal : { 137 187 142 192 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 179 64 187 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 174 137 179 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Report_20_Error_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Report_20_Error_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 332 304 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 99 46 104 }*/
/* IO - VPL Root : { 41 136 46 141 }*/
/* IO - VPL Root : { 41 173 46 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 146 43 162 88 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"type");
/* IO - VPL Terminal : { 141 63 146 68 }*/
/* IO - VPL Root : { 162 63 167 68 }*/
/* End Operation */

/* Begin Operation: { 144 118 160 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"/");
/* IO - VPL Root : { 160 120 165 125 }*/
/* End Operation */

/* Begin Operation: { 189 94 205 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 184 102 189 107 }*/
/* IO - VPL Terminal : { 184 120 189 125 }*/
/* IO - VPL Terminal : { 184 136 189 141 }*/
/* IO - VPL Root : { 205 119 210 124 }*/
/* End Operation */

/* Begin Operation: { 230 105 246 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 225 137 230 142 }*/
/* IO - VPL Terminal : { 225 171 230 176 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 158 86 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 65 183 70 188 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 70 66 86 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Error");
/* IO - VPL Terminal : { 65 92 70 97 }*/
/* IO - VPL Terminal : { 65 120 70 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 266 64 274 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,0,3,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
	result = connect_root_to_terminal(ptrA,3,0,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,3,0,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [5 to 4] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Run_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Run_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 124 86 258 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window Record");
/* IO - VPL Terminal : { 65 189 70 194 }*/
/* IO - VPL Root : { 86 189 91 194 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 247 122 274 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 258 106 263 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 142 121 158 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NavDialogRun");
/* IO - VPL Root : { 158 163 163 168 }*/
/* End Operation */

/* Begin Operation: { 107 145 123 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,2,"NavDialogRun");
/* IO - VPL Terminal : { 102 189 107 194 }*/
/* IO - VPL Root : { 123 174 128 179 }*/
/* IO - VPL Root : { 123 205 128 210 }*/
/* End Operation */

/* Begin Operation: { 178 114 194 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Report Error");
/* IO - VPL Terminal : { 173 137 178 142 }*/
/* IO - VPL Terminal : { 173 162 178 167 }*/
/* IO - VPL Terminal : { 173 187 178 192 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 209 64 217 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,3,2,5);
	result = connect_root_to_terminal(ptrA,1,4,3,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 153 122 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"paramErr");
/* IO - VPL Root : { 122 189 127 194 }*/
/* End Operation */

/* Begin Operation: { 70 129 86 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Run Dialog");
/* IO - VPL Root : { 86 163 91 168 }*/
/* End Operation */

/* Begin Operation: { 142 114 158 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Report Error");
/* IO - VPL Terminal : { 137 137 142 142 }*/
/* IO - VPL Terminal : { 137 162 142 167 }*/
/* IO - VPL Terminal : { 137 187 142 192 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 173 64 181 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Action_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Action_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 69 108 85 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Action");
/* IO - VPL Terminal : { 64 124 69 129 }*/
/* IO - VPL Terminal : { 64 142 69 147 }*/
/* IO - VPL Root : { 85 134 90 139 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Canceled_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Canceled_3F__universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 93 86 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Canceled?");
/* IO - VPL Terminal : { 65 116 70 121 }*/
/* IO - VPL Terminal : { 65 141 70 146 }*/
/* IO - VPL Root : { 86 128 91 133 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Completion_20_Behavior_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Completion_20_Behavior_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 68 72 84 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Completion Behavior");
/* IO - VPL Terminal : { 63 114 68 119 }*/
/* IO - VPL Terminal : { 63 158 68 163 }*/
/* IO - VPL Root : { 84 136 89 141 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Creation_20_Options_20_Record_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Creation_20_Options_20_Record_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 59 86 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Creation Options Record");
/* IO - VPL Terminal : { 65 107 70 112 }*/
/* IO - VPL Terminal : { 65 157 70 162 }*/
/* IO - VPL Root : { 86 133 91 138 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Error_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Error_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 109 86 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Error");
/* IO - VPL Terminal : { 65 124 70 129 }*/
/* IO - VPL Terminal : { 65 141 70 146 }*/
/* IO - VPL Root : { 86 132 91 137 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_File_20_Name_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_File_20_Name_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 92 122 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Save File Name\"");
/* IO - VPL Root : { 122 145 127 150 }*/
/* End Operation */

/* Begin Operation: { 70 151 86 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"all blanking");
/* IO - VPL Terminal : { 65 186 70 191 }*/
/* IO - VPL Root : { 86 186 91 191 }*/
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

/* Start Operations: { 187 264 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 159 86 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 65 170 70 175 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 70 61 86 105 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NONE");
/* IO - VPL Terminal : { 65 81 70 86 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 103 107 119 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Check\"");
/* IO - VPL Terminal : { 98 137 103 142 }*/
/* IO - VPL Root : { 119 137 124 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 143 64 151 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 137 143 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 118 86 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 86 129 91 134 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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

/* Begin Operation: { 142 72 158 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Parameter String");
/* IO - VPL Terminal : { 137 107 142 112 }*/
/* IO - VPL Terminal : { 137 144 142 149 }*/
/* IO - VPL Terminal : { 137 181 142 186 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 173 64 181 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Finished_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Finished_3F__universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 96 86 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Finished?");
/* IO - VPL Terminal : { 65 118 70 123 }*/
/* IO - VPL Terminal : { 65 142 70 147 }*/
/* IO - VPL Root : { 86 130 91 135 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Modality_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Modality_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 100 86 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Modality");
/* IO - VPL Terminal : { 65 120 70 125 }*/
/* IO - VPL Terminal : { 65 142 70 147 }*/
/* IO - VPL Root : { 86 132 91 137 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Parameter_20_String_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Parameter_20_String_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 99 46 104 }*/
/* IO - VPL Root : { 41 136 46 141 }*/
/* IO - VPL Root : { 41 173 46 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 29 86 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Parameter Strings");
/* IO - VPL Terminal : { 65 88 70 93 }*/
/* IO - VPL Root : { 86 67 91 72 }*/
/* IO - VPL Root : { 86 107 91 112 }*/
/* End Operation */

/* Begin Operation: { 106 111 122 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Set Setting)");
/* IO - VPL Terminal : { 101 133 106 138 }*/
/* IO - VPL Terminal : { 101 157 106 162 }*/
/* IO - VPL Terminal : { 101 181 106 186 }*/
/* IO - VPL Root : { 122 157 127 162 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 29 158 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Parameter Strings");
/* IO - VPL Terminal : { 137 67 142 72 }*/
/* IO - VPL Terminal : { 137 107 142 112 }*/
/* IO - VPL Root : { 158 88 163 93 }*/
/* End Operation */

/* Begin Operation: { 173 64 181 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,3,0,3,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Parent_20_Window_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Parent_20_Window_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 83 86 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Parent Window");
/* IO - VPL Terminal : { 65 114 70 119 }*/
/* IO - VPL Terminal : { 65 147 70 152 }*/
/* IO - VPL Root : { 86 131 91 136 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Preference_20_Key_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Preference_20_Key_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 101 122 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Preference Key\"");
/* IO - VPL Root : { 122 149 127 154 }*/
/* End Operation */

/* Begin Operation: { 70 142 86 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"all blanking?");
/* IO - VPL Terminal : { 65 186 70 191 }*/
/* IO - VPL Root : { 86 186 91 191 }*/
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

/* Start Operations: { 187 264 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 159 86 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 65 170 70 175 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 70 61 86 105 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NONE");
/* IO - VPL Terminal : { 65 81 70 86 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 103 94 119 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Default Zero");
/* IO - VPL Terminal : { 98 137 103 142 }*/
/* IO - VPL Root : { 119 137 124 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 143 64 151 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 137 143 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 118 86 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 86 129 91 134 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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

/* Begin Operation: { 142 77 158 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Parameter String");
/* IO - VPL Terminal : { 137 112 142 117 }*/
/* IO - VPL Terminal : { 137 149 142 154 }*/
/* IO - VPL Terminal : { 137 186 142 191 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 173 64 181 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Reply_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Reply_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 111 86 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Reply");
/* IO - VPL Terminal : { 65 126 70 131 }*/
/* IO - VPL Terminal : { 65 143 70 148 }*/
/* IO - VPL Root : { 86 134 91 139 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Result_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Result_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 183 309 } */
/* Begin Operation: { 29 64 37 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 37 112 42 117 }*/
/* IO - VPL Root : { 37 162 42 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 63 121 79 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Result");
/* IO - VPL Terminal : { 58 137 63 142 }*/
/* IO - VPL Terminal : { 58 155 63 160 }*/
/* IO - VPL Root : { 79 146 84 151 }*/
/* End Operation */

/* Begin Operation: { 103 71 111 221 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Window_20_Record_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Window_20_Record_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 81 86 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Window Record");
/* IO - VPL Terminal : { 65 113 70 118 }*/
/* IO - VPL Terminal : { 65 147 70 152 }*/
/* IO - VPL Root : { 86 130 91 135 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Window_20_Title_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Set_20_Window_20_Title_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 104 122 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Window Title\"");
/* IO - VPL Root : { 122 145 127 150 }*/
/* End Operation */

/* Begin Operation: { 70 151 86 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"all blanking");
/* IO - VPL Terminal : { 65 186 70 191 }*/
/* IO - VPL Root : { 86 186 91 191 }*/
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

/* Start Operations: { 187 264 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 159 86 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 65 170 70 175 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 70 61 86 105 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NONE");
/* IO - VPL Terminal : { 65 81 70 86 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 103 107 119 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Check\"");
/* IO - VPL Terminal : { 98 137 103 142 }*/
/* IO - VPL Root : { 119 137 124 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 143 64 151 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 137 143 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 118 86 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 86 129 91 134 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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

/* Begin Operation: { 142 72 158 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Parameter String");
/* IO - VPL Terminal : { 137 107 142 112 }*/
/* IO - VPL Terminal : { 137 144 142 149 }*/
/* IO - VPL Terminal : { 137 181 142 186 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 173 64 181 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Setup_20_Dialog_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Setup_20_Dialog_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 118 86 258 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Event Callback");
/* IO - VPL Terminal : { 65 186 70 191 }*/
/* IO - VPL Root : { 86 186 91 191 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 106 95 122 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/~Nav Create Dialog");
/* IO - VPL Terminal : { 101 138 106 143 }*/
/* IO - VPL Terminal : { 101 183 106 188 }*/
/* IO - VPL Root : { 122 161 127 166 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 142 98 158 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Window Record");
/* IO - VPL Terminal : { 137 140 142 145 }*/
/* IO - VPL Terminal : { 137 184 142 189 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 173 64 181 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Setup_20_Options_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Setup_20_Options_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 135 86 297 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"New NavDialogCreationOptions");
/* IO - VPL Terminal : { 65 214 70 219 }*/
/* IO - VPL Root : { 86 214 91 219 }*/
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

/* Start Operations: { 60 60 }{ 298 418 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 48 124 64 264 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NavDialogCreationOptions");
/* IO - VPL Root : { 64 192 69 197 }*/
/* End Operation */

/* Begin Operation: { 47 333 63 348 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"68");
/* IO - VPL Root : { 63 338 68 343 }*/
/* End Operation */

/* Begin Operation: { 92 233 108 333 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"make-external");
/* IO - VPL Terminal : { 87 264 92 269 }*/
/* IO - VPL Terminal : { 87 297 92 302 }*/
/* IO - VPL Root : { 108 281 113 286 }*/
/* End Operation */

/* Begin Operation: { 129 49 145 266 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,2,"NavGetDefaultDialogCreationOptions");
/* IO - VPL Terminal : { 124 155 129 160 }*/
/* IO - VPL Root : { 145 119 150 124 }*/
/* IO - VPL Root : { 145 191 150 196 }*/
/* End Operation */

/* Begin Operation: { 167 103 183 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"report");
/* IO - VPL Terminal : { 162 119 167 124 }*/
/* IO - VPL Terminal : { 162 137 167 142 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 26 86 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NavGetDefaultDialogCreationOptions");
/* IO - VPL Root : { 86 130 91 135 }*/
/* End Operation */

/* Begin Operation: { 106 81 122 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Report Error");
/* IO - VPL Terminal : { 101 104 106 109 }*/
/* IO - VPL Terminal : { 101 129 106 134 }*/
/* IO - VPL Terminal : { 101 154 106 159 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,0,3,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 204 118 212 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 199 191 204 196 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,0,2,5);
	result = connect_root_to_terminal(ptrA,2,4,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 122 122 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"setup");
/* IO - VPL Terminal : { 101 136 106 141 }*/
/* IO - VPL Terminal : { 101 152 106 157 }*/
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

/* Start Operations: { 402 401 }{ 472 374 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 137 86 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"parent");
/* IO - VPL Terminal : { 65 153 70 158 }*/
/* IO - VPL Terminal : { 65 171 70 176 }*/
/* IO - VPL Root : { 86 162 91 167 }*/
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

/* Start Operations: { 60 60 }{ 271 302 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 91 86 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Parent Window");
/* IO - VPL Terminal : { 65 156 70 161 }*/
/* IO - VPL Root : { 86 156 91 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 120 122 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 101 156 106 161 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 142 91 158 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window Record");
/* IO - VPL Terminal : { 137 156 142 161 }*/
/* IO - VPL Root : { 158 156 163 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 178 89 194 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"parentWindow");
/* IO - VPL Terminal : { 173 120 178 125 }*/
/* IO - VPL Terminal : { 173 153 178 158 }*/
/* IO - VPL Root : { 194 137 199 142 }*/
/* End Operation */

/* Begin Operation: { 215 64 223 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 210 137 215 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 165 299 }{ 271 302 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 91 86 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Parent Window");
/* IO - VPL Terminal : { 65 156 70 161 }*/
/* IO - VPL Root : { 86 156 91 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 121 122 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"external?");
/* IO - VPL Terminal : { 101 156 106 161 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 150 89 166 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"parentWindow");
/* IO - VPL Terminal : { 145 120 150 125 }*/
/* IO - VPL Terminal : { 145 153 150 158 }*/
/* IO - VPL Root : { 166 137 171 142 }*/
/* End Operation */

/* Begin Operation: { 187 64 195 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 182 137 187 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 125 336 }{ 200 300 } */
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

/* Begin Operation: { 106 86 122 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"modality");
/* IO - VPL Terminal : { 101 105 106 110 }*/
/* IO - VPL Terminal : { 101 126 106 131 }*/
/* IO - VPL Root : { 122 116 127 121 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 64 86 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Modality");
/* IO - VPL Terminal : { 65 112 70 117 }*/
/* IO - VPL Root : { 86 112 91 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 142 122 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"modality");
/* IO - VPL Terminal : { 101 162 106 167 }*/
/* IO - VPL Terminal : { 101 184 106 189 }*/
/* IO - VPL Root : { 122 174 127 179 }*/
/* End Operation */

/* Begin Operation: { 143 64 151 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 137 143 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 154 13 170 84 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"file name");
/* IO - VPL Terminal : { 149 34 154 39 }*/
/* IO - VPL Terminal : { 149 57 154 62 }*/
/* IO - VPL Root : { 170 46 175 51 }*/
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

/* Start Operations: { 816 399 }{ 246 301 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 61 86 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get File Name");
/* IO - VPL Terminal : { 65 112 70 117 }*/
/* IO - VPL Root : { 86 112 91 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 108 46 124 107 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 103 74 108 79 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 103 154 119 257 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"To CFStringRef");
/* IO - VPL Terminal : { 98 203 103 208 }*/
/* IO - VPL Root : { 119 203 124 208 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 90 164 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"saveFileName");
/* IO - VPL Terminal : { 143 120 148 125 }*/
/* IO - VPL Terminal : { 143 152 148 157 }*/
/* IO - VPL Root : { 164 137 169 142 }*/
/* End Operation */

/* Begin Operation: { 147 206 163 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,0,"CFShow");
/* IO - VPL Terminal : { 142 235 147 240 }*/
	tempOperation = operation_value_to(tempOperation,environment,kSkip);
/* End Operation */

/* Begin Operation: { 192 64 200 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 187 137 192 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 162 372 }{ 200 300 } */
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

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 137 86 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 86 148 91 153 }*/
/* End Operation */

/* Begin Operation: { 106 90 122 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"saveFileName");
/* IO - VPL Terminal : { 101 120 106 125 }*/
/* IO - VPL Terminal : { 101 152 106 157 }*/
/* IO - VPL Root : { 122 137 127 142 }*/
/* End Operation */

/* Begin Operation: { 143 64 151 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 137 143 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 159 155 175 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"window title");
/* IO - VPL Terminal : { 154 177 159 182 }*/
/* IO - VPL Terminal : { 154 210 159 215 }*/
/* IO - VPL Root : { 175 194 180 199 }*/
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

/* Start Operations: { 237 30 }{ 399 354 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 90 122 106 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Window Title\"");
/* IO - VPL Root : { 106 161 111 166 }*/
/* End Operation */

/* Begin Operation: { 126 65 142 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Parameter String");
/* IO - VPL Terminal : { 121 112 126 117 }*/
/* IO - VPL Terminal : { 121 161 126 166 }*/
/* IO - VPL Root : { 142 137 147 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 182 44 198 105 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 177 72 182 77 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 177 152 193 255 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"To CFStringRef");
/* IO - VPL Terminal : { 172 201 177 206 }*/
/* IO - VPL Root : { 193 201 198 206 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 222 94 238 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"windowTitle");
/* IO - VPL Terminal : { 217 121 222 126 }*/
/* IO - VPL Terminal : { 217 150 222 155 }*/
/* IO - VPL Root : { 238 135 243 140 }*/
/* End Operation */

/* Begin Operation: { 266 62 274 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 261 135 266 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
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

/* Begin Operation: { 200 156 216 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"message");
/* IO - VPL Terminal : { 195 176 200 181 }*/
/* IO - VPL Terminal : { 195 198 200 203 }*/
/* IO - VPL Root : { 216 187 221 192 }*/
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

/* Start Operations: { 237 30 }{ 399 354 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 90 134 106 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Message\"");
/* IO - VPL Root : { 106 161 111 166 }*/
/* End Operation */

/* Begin Operation: { 126 65 142 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Parameter String");
/* IO - VPL Terminal : { 121 112 126 117 }*/
/* IO - VPL Terminal : { 121 161 126 166 }*/
/* IO - VPL Root : { 142 137 147 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 182 44 198 105 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 177 72 182 77 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 177 152 193 255 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"To CFStringRef");
/* IO - VPL Terminal : { 172 201 177 206 }*/
/* IO - VPL Root : { 193 201 198 206 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 222 104 238 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"message");
/* IO - VPL Terminal : { 217 124 222 129 }*/
/* IO - VPL Terminal : { 217 146 222 151 }*/
/* IO - VPL Root : { 238 135 243 140 }*/
/* End Operation */

/* Begin Operation: { 266 62 274 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 261 135 266 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
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

/* Begin Operation: { 238 159 254 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"client");
/* IO - VPL Terminal : { 233 174 238 179 }*/
/* IO - VPL Terminal : { 233 191 238 196 }*/
/* IO - VPL Root : { 254 183 259 188 }*/
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

/* Start Operations: { 237 30 }{ 399 354 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 90 125 106 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Client Name\"");
/* IO - VPL Root : { 106 161 111 166 }*/
/* End Operation */

/* Begin Operation: { 126 65 142 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Parameter String");
/* IO - VPL Terminal : { 121 112 126 117 }*/
/* IO - VPL Terminal : { 121 161 126 166 }*/
/* IO - VPL Root : { 142 137 147 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 182 44 198 105 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 177 72 182 77 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 177 152 193 255 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"To CFStringRef");
/* IO - VPL Terminal : { 172 201 177 206 }*/
/* IO - VPL Root : { 193 201 198 206 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 222 97 238 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"clientName");
/* IO - VPL Terminal : { 217 121 222 126 }*/
/* IO - VPL Terminal : { 217 147 222 152 }*/
/* IO - VPL Root : { 238 135 243 140 }*/
/* End Operation */

/* Begin Operation: { 266 62 274 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 261 135 266 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
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

/* Begin Operation: { 275 121 291 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"action");
/* IO - VPL Terminal : { 270 137 275 142 }*/
/* IO - VPL Terminal : { 270 155 275 160 }*/
/* IO - VPL Root : { 291 146 296 151 }*/
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

/* Start Operations: { 237 30 }{ 399 354 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 90 104 106 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Action Button Label\"");
/* IO - VPL Root : { 106 161 111 166 }*/
/* End Operation */

/* Begin Operation: { 126 65 142 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Parameter String");
/* IO - VPL Terminal : { 121 112 126 117 }*/
/* IO - VPL Terminal : { 121 161 126 166 }*/
/* IO - VPL Root : { 142 137 147 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 182 44 198 105 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 177 72 182 77 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 177 152 193 255 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"To CFStringRef");
/* IO - VPL Terminal : { 172 201 177 206 }*/
/* IO - VPL Root : { 193 201 198 206 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 222 79 238 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"actionButtonLabel");
/* IO - VPL Terminal : { 217 116 222 121 }*/
/* IO - VPL Terminal : { 217 155 222 160 }*/
/* IO - VPL Root : { 238 135 243 140 }*/
/* End Operation */

/* Begin Operation: { 266 62 274 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 261 135 266 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
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

/* Begin Operation: { 308 89 324 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"cancel");
/* IO - VPL Terminal : { 303 105 308 110 }*/
/* IO - VPL Terminal : { 303 123 308 128 }*/
/* IO - VPL Root : { 324 114 329 119 }*/
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

/* Start Operations: { 237 30 }{ 399 354 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 90 104 106 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Cancel Button Label\"");
/* IO - VPL Root : { 106 161 111 166 }*/
/* End Operation */

/* Begin Operation: { 126 65 142 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Parameter String");
/* IO - VPL Terminal : { 121 112 126 117 }*/
/* IO - VPL Terminal : { 121 161 126 166 }*/
/* IO - VPL Root : { 142 137 147 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 182 44 198 105 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 177 72 182 77 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 177 152 193 255 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"To CFStringRef");
/* IO - VPL Terminal : { 172 201 177 206 }*/
/* IO - VPL Root : { 193 201 198 206 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 222 78 238 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"cancelButtonLabel");
/* IO - VPL Terminal : { 217 115 222 120 }*/
/* IO - VPL Terminal : { 217 154 222 159 }*/
/* IO - VPL Root : { 238 135 243 140 }*/
/* End Operation */

/* Begin Operation: { 266 62 274 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 261 135 266 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
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

/* Begin Operation: { 343 17 359 63 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"pref");
/* IO - VPL Terminal : { 338 30 343 35 }*/
/* IO - VPL Terminal : { 338 45 343 50 }*/
/* IO - VPL Root : { 359 38 364 43 }*/
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

/* Start Operations: { 237 30 }{ 258 387 } */
/* Begin Operation: { 22 64 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 112 35 117 }*/
/* IO - VPL Root : { 30 162 35 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 114 80 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Preference Key\"");
/* IO - VPL Root : { 80 161 85 166 }*/
/* End Operation */

/* Begin Operation: { 106 65 122 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Parameter String");
/* IO - VPL Terminal : { 101 112 106 117 }*/
/* IO - VPL Terminal : { 101 161 106 166 }*/
/* IO - VPL Root : { 122 163 127 168 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 217 164 286 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"integer?");
/* IO - VPL Terminal : { 143 249 148 254 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 86 164 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"preferenceKey");
/* IO - VPL Terminal : { 143 118 148 123 }*/
/* IO - VPL Terminal : { 143 152 148 157 }*/
/* IO - VPL Root : { 164 135 169 140 }*/
/* End Operation */

/* Begin Operation: { 190 62 198 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 135 190 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 237 30 }{ 200 300 } */
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

/* Begin Operation: { 346 74 362 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"option flags");
/* IO - VPL Terminal : { 341 114 346 119 }*/
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

/* Start Operations: { 60 60 }{ 221 337 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 37 73 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"optionFlags");
/* IO - VPL Terminal : { 52 76 57 81 }*/
/* IO - VPL Root : { 73 62 78 67 }*/
/* IO - VPL Root : { 73 89 78 94 }*/
/* End Operation */

/* Begin Operation: { 54 145 70 263 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kNavSupportPackages");
/* IO - VPL Root : { 70 202 75 207 }*/
/* End Operation */

/* Begin Operation: { 92 101 108 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"bit-or");
/* IO - VPL Terminal : { 87 117 92 122 }*/
/* IO - VPL Terminal : { 87 135 92 140 }*/
/* IO - VPL Root : { 108 126 113 131 }*/
/* End Operation */

/* Begin Operation: { 124 37 140 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"optionFlags");
/* IO - VPL Terminal : { 119 62 124 67 }*/
/* IO - VPL Terminal : { 119 89 124 94 }*/
/* IO - VPL Root : { 140 76 145 81 }*/
/* End Operation */

/* Begin Operation: { 162 17 170 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 382 65 390 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,0,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 142 85 158 269 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Creation Options Record");
/* IO - VPL Terminal : { 137 144 142 149 }*/
/* IO - VPL Terminal : { 137 205 142 210 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 173 64 181 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Navigation_20_Services_20_Window_2F_Setup_20_Run_20_Flags_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F_Setup_20_Run_20_Flags_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 76 86 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"finish");
/* IO - VPL Terminal : { 65 99 70 104 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 151 86 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 86 174 91 179 }*/
/* End Operation */

/* Begin Operation: { 106 105 122 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Finished?");
/* IO - VPL Terminal : { 101 137 106 142 }*/
/* IO - VPL Terminal : { 101 171 106 176 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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

/* Begin Operation: { 70 144 86 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"cancel");
/* IO - VPL Terminal : { 65 168 70 173 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 152 86 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 86 175 91 180 }*/
/* End Operation */

/* Begin Operation: { 106 104 122 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Canceled?");
/* IO - VPL Terminal : { 101 138 106 143 }*/
/* IO - VPL Terminal : { 101 174 106 179 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Navigation_20_Services_20_Window_2F7E_Nav_20_Create_20_Dialog_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F7E_Nav_20_Create_20_Dialog_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 287 320 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 16 86 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Creation Options Record");
/* IO - VPL Terminal : { 65 106 70 111 }*/
/* IO - VPL Root : { 86 106 91 111 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 141 122 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 122 152 127 157 }*/
/* End Operation */

/* Begin Operation: { 106 191 122 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 122 202 127 207 }*/
/* End Operation */

/* Begin Operation: { 106 43 122 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Action");
/* IO - VPL Terminal : { 101 85 106 90 }*/
/* IO - VPL Root : { 122 85 127 90 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 17 159 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,5,4,"NavCreateAskSaveChangesDialog");
/* IO - VPL Terminal : { 136 51 141 56 }*/
/* IO - VPL Terminal : { 136 87 141 92 }*/
/* IO - VPL Terminal : { 136 123 141 128 }*/
/* IO - VPL Terminal : { 136 159 141 164 }*/
/* IO - VPL Terminal : { 136 195 141 200 }*/
/* IO - VPL Root : { 160 58 165 63 }*/
/* IO - VPL Root : { 160 101 165 106 }*/
/* IO - VPL Root : { 160 144 165 149 }*/
/* IO - VPL Root : { 160 187 165 192 }*/
/* End Operation */

/* Begin Operation: { 178 32 194 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NavCreateAskSaveChangesDialog");
/* IO - VPL Root : { 194 127 199 132 }*/
/* End Operation */

/* Begin Operation: { 214 77 230 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Report Error");
/* IO - VPL Terminal : { 209 100 214 105 }*/
/* IO - VPL Terminal : { 209 125 214 130 }*/
/* IO - VPL Terminal : { 209 150 214 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 251 60 259 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 246 137 251 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,2,0,3,5);
	result = connect_root_to_terminal(ptrA,1,2,4,5);
	result = connect_root_to_terminal(ptrA,1,3,5,5);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,5,3,7);
	result = connect_root_to_terminal(ptrA,2,5,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Navigation_20_Services_20_Window_2F7E_New_20_NavDialog_2A2A__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Navigation_20_Services_20_Window_2F7E_New_20_NavDialog_2A2A__universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 37 66 53 74 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 53 68 58 73 }*/
/* End Operation */

/* Begin Operation: { 82 31 98 109 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"NewHandle");
/* IO - VPL Terminal : { 77 68 82 73 }*/
/* IO - VPL Root : { 98 68 103 73 }*/
/* End Operation */

/* Begin Operation: { 78 154 94 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"__NavDialog");
/* IO - VPL Root : { 94 186 99 191 }*/
/* End Operation */

/* Begin Operation: { 123 108 139 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"set-external-type");
/* IO - VPL Terminal : { 118 146 123 151 }*/
/* IO - VPL Terminal : { 118 186 123 191 }*/
/* End Operation */

/* Begin Operation: { 163 18 171 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 158 112 163 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_Nav_20_New_20_Folder_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_New_20_Folder_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Event_20_Callback_20_Behavior,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Nav_20_New_20_Folder_20_Dialog_2F_Parameter_20_Strings,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Navigation Services Window");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
Nat4 VPLU_Nav_20_New_20_Folder_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_New_20_Folder_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 491 730 }{ 287 389 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 39 86 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Creation Options Record");
/* IO - VPL Terminal : { 65 129 70 134 }*/
/* IO - VPL Root : { 86 129 91 134 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 103 158 119 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 119 169 124 174 }*/
/* End Operation */

/* Begin Operation: { 178 58 194 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NavCreateNewFolderDialog");
/* IO - VPL Root : { 194 137 199 142 }*/
/* End Operation */

/* Begin Operation: { 104 195 120 325 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/~New NavDialog**");
/* IO - VPL Terminal : { 99 256 104 261 }*/
/* IO - VPL Root : { 120 256 125 261 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 98 158 264 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,4,4,"NavCreateNewFolderDialog");
/* IO - VPL Terminal : { 137 129 142 134 }*/
/* IO - VPL Terminal : { 137 162 142 167 }*/
/* IO - VPL Terminal : { 137 195 142 200 }*/
/* IO - VPL Terminal : { 137 228 142 233 }*/
/* IO - VPL Root : { 158 129 163 134 }*/
/* IO - VPL Root : { 158 162 163 167 }*/
/* IO - VPL Root : { 158 195 163 200 }*/
/* IO - VPL Root : { 158 228 163 233 }*/
/* End Operation */

/* Begin Operation: { 214 89 230 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Report Error");
/* IO - VPL Terminal : { 209 112 214 117 }*/
/* IO - VPL Terminal : { 209 137 214 142 }*/
/* IO - VPL Terminal : { 209 162 214 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 251 60 259 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 246 137 251 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,2,0,2,5);
	result = connect_root_to_terminal(ptrA,1,2,3,5);
	result = connect_root_to_terminal(ptrA,1,4,4,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,3,2,6);
	result = connect_root_to_terminal(ptrA,1,5,3,6);
	result = connect_root_to_terminal(ptrA,4,5,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_Nav_20_Object_20_Filter_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_Object_20_Filter_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,NULL,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Nav_20_Object_20_Filter_20_Dialog_2F_Parameter_20_Strings,environment);
	tempAttribute = attribute_add("Filter Callback Behavior",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Navigation Services Window");
	return kNOERROR;
}

/* Start Universals: { 118 422 }{ 200 300 } */
Nat4 VPLU_Nav_20_Object_20_Filter_20_Dialog_2F_Close_20_Callbacks_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Object_20_Filter_20_Dialog_2F_Close_20_Callbacks_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 68 41 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 141 46 146 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 78 86 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Close Callbacks");
/* IO - VPL Terminal : { 65 141 70 146 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 106 71 122 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close Filter Callback");
/* IO - VPL Terminal : { 101 141 106 146 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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


Nat4 VPLU_Nav_20_Object_20_Filter_20_Dialog_2F_Close_20_Filter_20_Callback_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Object_20_Filter_20_Dialog_2F_Close_20_Filter_20_Callback_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 46 86 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Filter Callback Behavior");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 137 91 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 192 122 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 101 228 106 233 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 109 122 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 101 137 106 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 64 73 214 } */
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


Nat4 VPLU_Nav_20_Object_20_Filter_20_Dialog_2F_Get_20_Filter_20_Callback_20_Behavior_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Object_20_Filter_20_Dialog_2F_Get_20_Filter_20_Callback_20_Behavior_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 63 86 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Filter Callback Behavior");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 112 91 117 }*/
/* IO - VPL Root : { 86 163 91 168 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Nav_20_Object_20_Filter_20_Dialog_2F_Open_20_Filter_20_Callback_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Object_20_Filter_20_Dialog_2F_Open_20_Filter_20_Callback_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 68 14 84 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Filter Callback Behavior");
/* IO - VPL Terminal : { 63 105 68 110 }*/
/* IO - VPL Root : { 84 105 89 110 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 69 122 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 101 105 106 110 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 142 75 158 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Pointer");
/* IO - VPL Terminal : { 137 105 142 110 }*/
/* IO - VPL Terminal : { 137 137 142 142 }*/
/* IO - VPL Root : { 158 121 163 126 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 179 64 187 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 174 137 179 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,0,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 118 86 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 86 129 91 134 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Nav_20_Object_20_Filter_20_Dialog_2F_Set_20_Filter_20_Callback_20_Behavior_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Object_20_Filter_20_Dialog_2F_Set_20_Filter_20_Callback_20_Behavior_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 59 86 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Filter Callback Behavior");
/* IO - VPL Terminal : { 65 108 70 113 }*/
/* IO - VPL Terminal : { 65 159 70 164 }*/
/* IO - VPL Root : { 86 133 91 138 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Nav_20_Object_20_Filter_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Object_20_Filter_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 64 78 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 65 137 70 142 }*/
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


/* Stop Universals */



Nat4 VPLC_Nav_20_Choose_20_Folder_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_Choose_20_Folder_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Event_20_Callback_20_Behavior,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Nav_20_Choose_20_Folder_20_Dialog_2F_Parameter_20_Strings,environment);
	tempAttribute = attribute_add("Filter Callback Behavior",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Nav Object Filter Dialog");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
Nat4 VPLU_Nav_20_Choose_20_Folder_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Choose_20_Folder_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 320 354 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 16 86 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Creation Options Record");
/* IO - VPL Terminal : { 65 106 70 111 }*/
/* IO - VPL Root : { 86 106 91 111 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 167 122 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 122 178 127 183 }*/
/* End Operation */

/* Begin Operation: { 106 15 122 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Filter Callback");
/* IO - VPL Terminal : { 101 85 106 90 }*/
/* IO - VPL Root : { 122 85 127 90 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 91 197 107 327 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/~New NavDialog**");
/* IO - VPL Terminal : { 86 258 91 263 }*/
/* IO - VPL Root : { 107 258 112 263 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 38 158 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,5,5,"NavCreateChooseFolderDialog");
/* IO - VPL Terminal : { 137 66 142 71 }*/
/* IO - VPL Terminal : { 137 96 142 101 }*/
/* IO - VPL Terminal : { 137 126 142 131 }*/
/* IO - VPL Terminal : { 137 156 142 161 }*/
/* IO - VPL Terminal : { 137 186 142 191 }*/
/* IO - VPL Root : { 158 66 163 71 }*/
/* IO - VPL Root : { 158 96 163 101 }*/
/* IO - VPL Root : { 158 126 163 131 }*/
/* IO - VPL Root : { 158 156 163 161 }*/
/* IO - VPL Root : { 158 186 163 191 }*/
/* End Operation */

/* Begin Operation: { 178 41 194 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NavCreateChooseFolderDialog");
/* IO - VPL Root : { 194 127 199 132 }*/
/* End Operation */

/* Begin Operation: { 214 77 230 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Report Error");
/* IO - VPL Terminal : { 209 100 214 105 }*/
/* IO - VPL Terminal : { 209 125 214 130 }*/
/* IO - VPL Terminal : { 209 150 214 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 251 60 259 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 246 137 251 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,2,0,2,5);
	result = connect_root_to_terminal(ptrA,1,3,3,5);
	result = connect_root_to_terminal(ptrA,1,2,4,5);
	result = connect_root_to_terminal(ptrA,1,4,5,5);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,5,3,7);
	result = connect_root_to_terminal(ptrA,5,5,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_Nav_20_Preview_20_Filter_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_Preview_20_Filter_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,NULL,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Nav_20_Preview_20_Filter_20_Dialog_2F_Parameter_20_Strings,environment);
	tempAttribute = attribute_add("Filter Callback Behavior",tempClass,NULL,environment);
	tempAttribute = attribute_add("Preview Callback Behavior",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Nav Object Filter Dialog");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
Nat4 VPLU_Nav_20_Preview_20_Filter_20_Dialog_2F_Close_20_Callbacks_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Preview_20_Filter_20_Dialog_2F_Close_20_Callbacks_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 68 41 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 141 46 146 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 78 86 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Close Callbacks");
/* IO - VPL Terminal : { 65 141 70 146 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 106 64 122 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close Preview Callback");
/* IO - VPL Terminal : { 101 141 106 146 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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


Nat4 VPLU_Nav_20_Preview_20_Filter_20_Dialog_2F_Close_20_Preview_20_Callback_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Preview_20_Filter_20_Dialog_2F_Close_20_Preview_20_Callback_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 39 86 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Preview Callback Behavior");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 137 91 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 192 122 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 101 228 106 233 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 109 122 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 101 137 106 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 64 73 214 } */
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


Nat4 VPLU_Nav_20_Preview_20_Filter_20_Dialog_2F_Get_20_Preview_20_Callback_20_Behavior_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Preview_20_Filter_20_Dialog_2F_Get_20_Preview_20_Callback_20_Behavior_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 56 86 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Preview Callback Behavior");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 109 91 114 }*/
/* IO - VPL Root : { 86 164 91 169 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Nav_20_Preview_20_Filter_20_Dialog_2F_Open_20_Preview_20_Callback_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Preview_20_Filter_20_Dialog_2F_Open_20_Preview_20_Callback_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 69 7 85 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Preview Callback Behavior");
/* IO - VPL Terminal : { 64 105 69 110 }*/
/* IO - VPL Root : { 85 105 90 110 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 69 122 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 101 105 106 110 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 142 75 158 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Pointer");
/* IO - VPL Terminal : { 137 105 142 110 }*/
/* IO - VPL Terminal : { 137 137 142 142 }*/
/* IO - VPL Root : { 158 121 163 126 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 179 64 187 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 174 137 179 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,0,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 118 86 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 86 137 91 142 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Nav_20_Preview_20_Filter_20_Dialog_2F_Set_20_Preview_20_Callback_20_Behavior_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Preview_20_Filter_20_Dialog_2F_Set_20_Preview_20_Callback_20_Behavior_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 54 86 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Preview Callback Behavior");
/* IO - VPL Terminal : { 65 107 70 112 }*/
/* IO - VPL Terminal : { 65 162 70 167 }*/
/* IO - VPL Root : { 86 135 91 140 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


/* Stop Universals */



Nat4 VPLC_Nav_20_Get_20_File_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_Get_20_File_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 205 454 }{ 287 388 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Event_20_Callback_20_Behavior,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Parameter_20_Strings,environment);
	tempAttribute = attribute_add("Filter Callback Behavior",tempClass,NULL,environment);
	tempAttribute = attribute_add("Preview Callback Behavior",tempClass,NULL,environment);
	tempAttribute = attribute_add("Type List",tempClass,tempAttribute_Nav_20_Get_20_File_20_Dialog_2F_Type_20_List,environment);
	tempAttribute = attribute_add("Creator Code",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Nav Preview Filter Dialog");
	return kNOERROR;
}

/* Start Universals: { 67 333 }{ 200 300 } */
Nat4 VPLU_Nav_20_Get_20_File_20_Dialog_2F_Get_20_NavTypeList_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Get_20_File_20_Dialog_2F_Get_20_NavTypeList_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 22 64 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 137 35 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 160 80 264 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Type List");
/* IO - VPL Terminal : { 59 210 64 215 }*/
/* IO - VPL Root : { 80 210 85 215 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 204 122 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 101 219 106 224 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 64 22 80 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Creator Code");
/* IO - VPL Terminal : { 59 77 64 82 }*/
/* IO - VPL Root : { 80 77 85 82 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 63 122 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New NavTypeList");
/* IO - VPL Terminal : { 101 99 106 104 }*/
/* IO - VPL Terminal : { 101 137 106 142 }*/
/* IO - VPL Root : { 122 118 127 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 64 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 137 148 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 118 86 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 86 129 91 134 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Nav_20_Get_20_File_20_Dialog_2F_Get_20_Creator_20_Code_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Get_20_File_20_Dialog_2F_Get_20_Creator_20_Code_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 66 66 82 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Creator Code");
/* IO - VPL Terminal : { 61 111 66 116 }*/
/* IO - VPL Root : { 82 95 87 100 }*/
/* IO - VPL Root : { 82 126 87 131 }*/
/* End Operation */

/* Begin Operation: { 124 20 132 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 119 111 124 116 }*/
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


Nat4 VPLU_Nav_20_Get_20_File_20_Dialog_2F_Set_20_Creator_20_Code_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Get_20_File_20_Dialog_2F_Set_20_Creator_20_Code_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 60 62 76 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Creator Code");
/* IO - VPL Terminal : { 55 96 60 101 }*/
/* IO - VPL Terminal : { 55 132 60 137 }*/
/* IO - VPL Root : { 76 114 81 119 }*/
/* End Operation */

/* Begin Operation: { 100 20 108 212 } */
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


Nat4 VPLU_Nav_20_Get_20_File_20_Dialog_2F_Get_20_Type_20_List_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Get_20_File_20_Dialog_2F_Get_20_Type_20_List_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 103 86 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Type List");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 125 91 130 }*/
/* IO - VPL Root : { 86 149 91 154 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Nav_20_Get_20_File_20_Dialog_2F_Set_20_Type_20_List_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Get_20_File_20_Dialog_2F_Set_20_Type_20_List_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 140 86 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Check)");
/* IO - VPL Terminal : { 65 171 70 176 }*/
/* IO - VPL Root : { 86 171 91 176 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 79 122 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Type List");
/* IO - VPL Terminal : { 101 101 106 106 }*/
/* IO - VPL Terminal : { 101 125 106 130 }*/
/* IO - VPL Root : { 122 113 127 118 }*/
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Get_20_File_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Get_20_File_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 411 236 }{ 431 412 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 16 86 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Creation Options Record");
/* IO - VPL Terminal : { 65 106 70 111 }*/
/* IO - VPL Root : { 86 106 91 111 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 178 205 194 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 194 216 199 221 }*/
/* End Operation */

/* Begin Operation: { 106 15 122 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Filter Callback");
/* IO - VPL Terminal : { 101 92 106 97 }*/
/* IO - VPL Root : { 122 92 127 97 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 250 57 266 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NavCreateGetFileDialog");
/* IO - VPL Root : { 266 127 271 132 }*/
/* End Operation */

/* Begin Operation: { 178 44 194 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get NavTypeList");
/* IO - VPL Terminal : { 173 102 178 107 }*/
/* IO - VPL Root : { 194 102 199 107 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 8 158 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Preview Callback");
/* IO - VPL Terminal : { 137 83 142 88 }*/
/* IO - VPL Root : { 158 83 163 88 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 140 173 156 303 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/~New NavDialog**");
/* IO - VPL Terminal : { 135 234 140 239 }*/
/* IO - VPL Root : { 156 234 161 239 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 214 110 230 258 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,7,7,"NavCreateGetFileDialog");
/* IO - VPL Terminal : { 209 126 214 131 }*/
/* IO - VPL Terminal : { 209 144 214 149 }*/
/* IO - VPL Terminal : { 209 162 214 167 }*/
/* IO - VPL Terminal : { 209 180 214 185 }*/
/* IO - VPL Terminal : { 209 198 214 203 }*/
/* IO - VPL Terminal : { 209 216 214 221 }*/
/* IO - VPL Terminal : { 209 234 214 239 }*/
/* IO - VPL Root : { 230 126 235 131 }*/
/* IO - VPL Root : { 230 144 235 149 }*/
/* IO - VPL Root : { 230 162 235 167 }*/
/* IO - VPL Root : { 230 180 235 185 }*/
/* IO - VPL Root : { 230 198 235 203 }*/
/* IO - VPL Root : { 230 216 235 221 }*/
/* IO - VPL Root : { 230 234 235 239 }*/
/* End Operation */

/* Begin Operation: { 286 77 302 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Report Error");
/* IO - VPL Terminal : { 281 100 286 105 }*/
/* IO - VPL Terminal : { 281 125 286 130 }*/
/* IO - VPL Terminal : { 281 150 286 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 323 60 331 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 318 137 323 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,1,1,8);
	result = connect_root_to_terminal(ptrA,1,5,2,8);
	result = connect_root_to_terminal(ptrA,2,0,3,8);
	result = connect_root_to_terminal(ptrA,1,6,4,8);
	result = connect_root_to_terminal(ptrA,1,3,5,8);
	result = connect_root_to_terminal(ptrA,1,2,6,8);
	result = connect_root_to_terminal(ptrA,1,7,7,8);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,1,4,2,9);
	result = connect_root_to_terminal(ptrA,1,8,3,9);
	result = connect_root_to_terminal(ptrA,7,8,1,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_Nav_20_Put_20_File_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_Put_20_File_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 339 432 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Event_20_Callback_20_Behavior,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_Parameter_20_Strings,environment);
	tempAttribute = attribute_add("File Type",tempClass,tempAttribute_Nav_20_Put_20_File_20_Dialog_2F_File_20_Type,environment);
	tempAttribute = attribute_add("File Creator",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Navigation Services Window");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
Nat4 VPLU_Nav_20_Put_20_File_20_Dialog_2F_Get_20_File_20_Creator_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Put_20_File_20_Dialog_2F_Get_20_File_20_Creator_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 96 86 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"File Creator");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 123 91 128 }*/
/* IO - VPL Root : { 86 152 91 157 }*/
/* End Operation */

/* Begin Operation: { 106 123 122 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"integer?");
/* IO - VPL Terminal : { 101 156 106 161 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 143 64 151 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 137 143 142 }*/
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

/* Start Operations: { 60 60 }{ 250 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 85 86 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Application");
/* IO - VPL Root : { 86 137 91 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 110 103 126 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 105 137 110 142 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 149 86 165 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Signature");
/* IO - VPL Terminal : { 144 137 149 142 }*/
/* IO - VPL Root : { 165 137 170 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 186 64 194 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 181 137 186 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
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

/* Begin Operation: { 52 95 68 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\'????\'");
/* IO - VPL Root : { 68 111 73 116 }*/
/* End Operation */

/* Begin Operation: { 97 17 105 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 92 111 97 116 }*/
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


Nat4 VPLU_Nav_20_Put_20_File_20_Dialog_2F_Get_20_File_20_Type_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Put_20_File_20_Dialog_2F_Get_20_File_20_Type_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 104 86 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"File Type");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 125 91 130 }*/
/* IO - VPL Root : { 86 148 91 153 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Nav_20_Put_20_File_20_Dialog_2F_Set_20_File_20_Creator_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Put_20_File_20_Dialog_2F_Set_20_File_20_Creator_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 90 86 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"File Creator");
/* IO - VPL Terminal : { 65 117 70 122 }*/
/* IO - VPL Terminal : { 65 146 70 151 }*/
/* IO - VPL Root : { 86 131 91 136 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Nav_20_Put_20_File_20_Dialog_2F_Set_20_File_20_Type_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Put_20_File_20_Dialog_2F_Set_20_File_20_Type_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 98 86 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"File Type");
/* IO - VPL Terminal : { 65 119 70 124 }*/
/* IO - VPL Terminal : { 65 142 70 147 }*/
/* IO - VPL Root : { 86 131 91 136 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Nav_20_Put_20_File_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Put_20_File_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 131 97 }{ 359 446 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 16 86 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Creation Options Record");
/* IO - VPL Terminal : { 65 106 70 111 }*/
/* IO - VPL Root : { 86 106 91 111 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 172 158 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 158 183 163 188 }*/
/* End Operation */

/* Begin Operation: { 214 58 230 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NavCreateNewFolderDialog");
/* IO - VPL Root : { 230 137 235 142 }*/
/* End Operation */

/* Begin Operation: { 106 23 122 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get File Type");
/* IO - VPL Terminal : { 101 73 106 78 }*/
/* IO - VPL Root : { 122 73 127 78 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 31 158 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get File Creator");
/* IO - VPL Terminal : { 137 87 142 92 }*/
/* IO - VPL Root : { 158 87 163 92 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 103 143 119 273 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/~New NavDialog**");
/* IO - VPL Terminal : { 98 204 103 209 }*/
/* IO - VPL Root : { 119 204 124 209 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 178 80 194 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,6,4,"NavCreatePutFileDialog");
/* IO - VPL Terminal : { 173 99 178 104 }*/
/* IO - VPL Terminal : { 173 120 178 125 }*/
/* IO - VPL Terminal : { 173 141 178 146 }*/
/* IO - VPL Terminal : { 173 162 178 167 }*/
/* IO - VPL Terminal : { 173 183 178 188 }*/
/* IO - VPL Terminal : { 173 204 178 209 }*/
/* IO - VPL Root : { 194 107 199 112 }*/
/* IO - VPL Root : { 194 136 199 141 }*/
/* IO - VPL Root : { 194 165 199 170 }*/
/* IO - VPL Root : { 194 194 199 199 }*/
/* End Operation */

/* Begin Operation: { 250 89 266 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Report Error");
/* IO - VPL Terminal : { 245 112 250 117 }*/
/* IO - VPL Terminal : { 245 137 250 142 }*/
/* IO - VPL Terminal : { 245 162 250 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 220 280 236 328 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"name");
/* IO - VPL Terminal : { 215 296 220 301 }*/
/* IO - VPL Terminal : { 215 310 220 315 }*/
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

/* Start Operations: { 60 60 }{ 338 342 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 98 71 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get File Name");
/* IO - VPL Terminal : { 50 146 55 151 }*/
/* IO - VPL Root : { 71 148 76 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 95 220 111 281 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 90 248 95 253 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 94 99 110 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"To CFStringRef");
/* IO - VPL Terminal : { 89 148 94 153 }*/
/* IO - VPL Root : { 110 148 115 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 149 29 165 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,2,"NavDialogSetSaveFileName");
/* IO - VPL Terminal : { 144 82 149 87 }*/
/* IO - VPL Terminal : { 144 137 149 142 }*/
/* IO - VPL Root : { 165 82 170 87 }*/
/* IO - VPL Root : { 165 137 170 142 }*/
/* End Operation */

/* Begin Operation: { 226 214 242 276 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,0,"CFShow");
/* IO - VPL Terminal : { 221 243 226 248 }*/
/* End Operation */

/* Begin Operation: { 183 13 199 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NavDialogSetSaveFileName");
/* IO - VPL Root : { 199 84 204 89 }*/
/* End Operation */

/* Begin Operation: { 228 53 244 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 223 84 228 89 }*/
/* IO - VPL Terminal : { 223 117 228 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 268 24 276 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,4,2,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* Synchro [4 to 4] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 287 60 295 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 282 137 287 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,1,1,7);
	result = connect_root_to_terminal(ptrA,1,4,2,7);
	result = connect_root_to_terminal(ptrA,1,5,3,7);
	result = connect_root_to_terminal(ptrA,2,0,4,7);
	result = connect_root_to_terminal(ptrA,1,2,5,7);
	result = connect_root_to_terminal(ptrA,1,6,6,7);
	result = connect_root_to_terminal(ptrA,1,0,1,8);
	result = connect_root_to_terminal(ptrA,1,3,2,8);
	result = connect_root_to_terminal(ptrA,1,7,3,8);
	result = connect_root_to_terminal(ptrA,4,7,1,9);
	result = connect_root_to_terminal(ptrA,1,0,2,9);
	result = connect_root_to_terminal(ptrA,4,7,1,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Put_20_File_20_Dialog_2F_NavUA_20_Save_20_As_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Put_20_File_20_Dialog_2F_NavUA_20_Save_20_As_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 359 51 }{ 362 389 } */
/* Begin Operation: { 29 64 37 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 37 137 42 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 80 32 96 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window Record");
/* IO - VPL Terminal : { 75 96 80 101 }*/
/* IO - VPL Root : { 96 96 101 101 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 122 51 138 78 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 117 62 122 67 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 122 118 138 284 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,2,"NavDialogGetSaveFileName");
/* IO - VPL Terminal : { 117 199 122 204 }*/
/* IO - VPL Root : { 138 171 143 176 }*/
/* IO - VPL Root : { 138 226 143 231 }*/
/* End Operation */

/* Begin Operation: { 177 75 193 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CFRetain");
/* IO - VPL Terminal : { 172 107 177 112 }*/
/* IO - VPL Root : { 193 107 198 112 }*/
/* End Operation */

/* Begin Operation: { 176 183 192 284 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"CF String/New");
/* IO - VPL Terminal : { 171 231 176 236 }*/
/* IO - VPL Root : { 192 231 197 236 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 218 138 234 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get String");
/* IO - VPL Terminal : { 213 178 218 183 }*/
/* IO - VPL Root : { 234 178 239 183 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 265 111 281 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set File Name");
/* IO - VPL Terminal : { 260 137 265 142 }*/
/* IO - VPL Terminal : { 260 178 265 183 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 218 243 234 312 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 213 276 218 281 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 296 64 304 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,5,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [5 to 4] */
/* Synchro [8 to 6] */
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


/* Stop Universals */



Nat4 VPLC_Nav_20_Choose_20_Object_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_Choose_20_Object_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 210 447 }{ 200 300 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Event_20_Callback_20_Behavior,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Nav_20_Choose_20_Object_20_Dialog_2F_Parameter_20_Strings,environment);
	tempAttribute = attribute_add("Filter Callback Behavior",tempClass,NULL,environment);
	tempAttribute = attribute_add("Preview Callback Behavior",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Nav Preview Filter Dialog");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
Nat4 VPLU_Nav_20_Choose_20_Object_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Choose_20_Object_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 316 373 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 16 86 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Creation Options Record");
/* IO - VPL Terminal : { 65 106 70 111 }*/
/* IO - VPL Root : { 86 106 91 111 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 172 158 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 158 183 163 188 }*/
/* End Operation */

/* Begin Operation: { 106 15 122 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Filter Callback");
/* IO - VPL Terminal : { 101 92 106 97 }*/
/* IO - VPL Root : { 122 92 127 97 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 214 40 230 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NavCreateChooseObjectDialog");
/* IO - VPL Root : { 230 127 235 132 }*/
/* End Operation */

/* Begin Operation: { 142 8 158 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Preview Callback");
/* IO - VPL Terminal : { 137 83 142 88 }*/
/* IO - VPL Root : { 158 83 163 88 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 186 122 316 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/~New NavDialog**");
/* IO - VPL Terminal : { 101 250 106 255 }*/
/* IO - VPL Root : { 122 249 127 254 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 178 45 194 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,6,6,"NavCreateChooseObjectDialog");
/* IO - VPL Terminal : { 173 69 178 74 }*/
/* IO - VPL Terminal : { 173 95 178 100 }*/
/* IO - VPL Terminal : { 173 121 178 126 }*/
/* IO - VPL Terminal : { 173 147 178 152 }*/
/* IO - VPL Terminal : { 173 173 178 178 }*/
/* IO - VPL Terminal : { 173 199 178 204 }*/
/* IO - VPL Root : { 194 69 199 74 }*/
/* IO - VPL Root : { 194 95 199 100 }*/
/* IO - VPL Root : { 194 121 199 126 }*/
/* IO - VPL Root : { 194 147 199 152 }*/
/* IO - VPL Root : { 194 173 199 178 }*/
/* IO - VPL Root : { 194 199 199 204 }*/
/* End Operation */

/* Begin Operation: { 250 77 266 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Report Error");
/* IO - VPL Terminal : { 245 100 250 105 }*/
/* IO - VPL Terminal : { 245 125 250 130 }*/
/* IO - VPL Terminal : { 245 150 250 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 287 60 295 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 282 137 287 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,1,1,7);
	result = connect_root_to_terminal(ptrA,2,0,2,7);
	result = connect_root_to_terminal(ptrA,1,5,3,7);
	result = connect_root_to_terminal(ptrA,1,3,4,7);
	result = connect_root_to_terminal(ptrA,1,2,5,7);
	result = connect_root_to_terminal(ptrA,1,6,6,7);
	result = connect_root_to_terminal(ptrA,1,0,1,8);
	result = connect_root_to_terminal(ptrA,1,4,2,8);
	result = connect_root_to_terminal(ptrA,1,7,3,8);
	result = connect_root_to_terminal(ptrA,6,7,1,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_Nav_20_Choose_20_File_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_Choose_20_File_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 210 447 }{ 200 300 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Event_20_Callback_20_Behavior,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Parameter_20_Strings,environment);
	tempAttribute = attribute_add("Filter Callback Behavior",tempClass,NULL,environment);
	tempAttribute = attribute_add("Preview Callback Behavior",tempClass,NULL,environment);
	tempAttribute = attribute_add("Type List",tempClass,tempAttribute_Nav_20_Choose_20_File_20_Dialog_2F_Type_20_List,environment);
	tempAttribute = attribute_add("Creator Code",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Nav Preview Filter Dialog");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
Nat4 VPLU_Nav_20_Choose_20_File_20_Dialog_2F_Get_20_NavTypeList_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Choose_20_File_20_Dialog_2F_Get_20_NavTypeList_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 73 167 89 271 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Type List");
/* IO - VPL Terminal : { 68 217 73 222 }*/
/* IO - VPL Root : { 89 217 94 222 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 204 122 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 101 219 106 224 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 72 23 89 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Creator Code");
/* IO - VPL Terminal : { 66 86 71 91 }*/
/* IO - VPL Root : { 90 86 95 91 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 112 63 128 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New NavTypeList");
/* IO - VPL Terminal : { 107 99 112 104 }*/
/* IO - VPL Terminal : { 107 137 112 142 }*/
/* IO - VPL Root : { 128 118 133 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 143 64 151 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 137 143 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 118 86 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 86 129 91 134 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Nav_20_Choose_20_File_20_Dialog_2F_Set_20_Creator_20_Code_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Choose_20_File_20_Dialog_2F_Set_20_Creator_20_Code_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 60 62 76 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Creator Code");
/* IO - VPL Terminal : { 55 96 60 101 }*/
/* IO - VPL Terminal : { 55 132 60 137 }*/
/* IO - VPL Root : { 76 114 81 119 }*/
/* End Operation */

/* Begin Operation: { 100 20 108 212 } */
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


Nat4 VPLU_Nav_20_Choose_20_File_20_Dialog_2F_Get_20_Creator_20_Code_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Choose_20_File_20_Dialog_2F_Get_20_Creator_20_Code_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 66 66 82 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Creator Code");
/* IO - VPL Terminal : { 61 111 66 116 }*/
/* IO - VPL Root : { 82 95 87 100 }*/
/* IO - VPL Root : { 82 126 87 131 }*/
/* End Operation */

/* Begin Operation: { 124 20 132 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 119 111 124 116 }*/
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


Nat4 VPLU_Nav_20_Choose_20_File_20_Dialog_2F_Get_20_Type_20_List_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Choose_20_File_20_Dialog_2F_Get_20_Type_20_List_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 103 86 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Type List");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 125 91 130 }*/
/* IO - VPL Root : { 86 149 91 154 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Nav_20_Choose_20_File_20_Dialog_2F_Set_20_Type_20_List_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Choose_20_File_20_Dialog_2F_Set_20_Type_20_List_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 140 86 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Check)");
/* IO - VPL Terminal : { 65 171 70 176 }*/
/* IO - VPL Root : { 86 171 91 176 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 90 122 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Type List");
/* IO - VPL Terminal : { 101 112 106 117 }*/
/* IO - VPL Terminal : { 101 136 106 141 }*/
/* IO - VPL Root : { 122 124 127 129 }*/
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Choose_20_File_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Choose_20_File_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 389 375 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 16 86 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Creation Options Record");
/* IO - VPL Terminal : { 65 106 70 111 }*/
/* IO - VPL Root : { 86 106 91 111 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 178 167 195 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 196 183 201 188 }*/
/* End Operation */

/* Begin Operation: { 106 15 122 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Filter Callback");
/* IO - VPL Terminal : { 101 92 106 97 }*/
/* IO - VPL Root : { 122 92 127 97 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 250 48 266 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NavCreateChooseFileDialog");
/* IO - VPL Root : { 266 127 271 132 }*/
/* End Operation */

/* Begin Operation: { 178 44 194 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get NavTypeList");
/* IO - VPL Terminal : { 173 102 178 107 }*/
/* IO - VPL Root : { 194 102 199 107 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 8 158 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Preview Callback");
/* IO - VPL Terminal : { 137 83 142 88 }*/
/* IO - VPL Root : { 158 83 163 88 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 144 183 160 313 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/~New NavDialog**");
/* IO - VPL Terminal : { 139 244 144 249 }*/
/* IO - VPL Root : { 160 244 165 249 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 214 45 230 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,7,7,"NavCreateChooseFileDialog");
/* IO - VPL Terminal : { 209 63 214 68 }*/
/* IO - VPL Terminal : { 209 83 214 88 }*/
/* IO - VPL Terminal : { 209 103 214 108 }*/
/* IO - VPL Terminal : { 209 123 214 128 }*/
/* IO - VPL Terminal : { 209 143 214 148 }*/
/* IO - VPL Terminal : { 209 163 214 168 }*/
/* IO - VPL Terminal : { 209 183 214 188 }*/
/* IO - VPL Root : { 230 63 235 68 }*/
/* IO - VPL Root : { 230 83 235 88 }*/
/* IO - VPL Root : { 230 103 235 108 }*/
/* IO - VPL Root : { 230 123 235 128 }*/
/* IO - VPL Root : { 230 143 235 148 }*/
/* IO - VPL Root : { 230 163 235 168 }*/
/* IO - VPL Root : { 230 183 235 188 }*/
/* End Operation */

/* Begin Operation: { 286 77 302 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Report Error");
/* IO - VPL Terminal : { 281 100 286 105 }*/
/* IO - VPL Terminal : { 281 125 286 130 }*/
/* IO - VPL Terminal : { 281 150 286 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 323 60 331 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 318 137 323 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,1,1,8);
	result = connect_root_to_terminal(ptrA,1,5,2,8);
	result = connect_root_to_terminal(ptrA,2,0,3,8);
	result = connect_root_to_terminal(ptrA,1,6,4,8);
	result = connect_root_to_terminal(ptrA,1,3,5,8);
	result = connect_root_to_terminal(ptrA,1,2,6,8);
	result = connect_root_to_terminal(ptrA,1,7,7,8);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,1,4,2,9);
	result = connect_root_to_terminal(ptrA,1,8,3,9);
	result = connect_root_to_terminal(ptrA,7,8,1,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 278 325 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Event_20_Callback_20_Behavior,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Parameter_20_Strings,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Navigation Services Window");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
Nat4 VPLU_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 377 489 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 30 86 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Creation Options Record");
/* IO - VPL Terminal : { 65 120 70 125 }*/
/* IO - VPL Root : { 86 120 91 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 193 122 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 122 204 127 209 }*/
/* End Operation */

/* Begin Operation: { 178 34 194 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NavCreateAskDiscardChangesDialog");
/* IO - VPL Root : { 194 137 199 142 }*/
/* End Operation */

/* Begin Operation: { 73 226 89 356 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/~New NavDialog**");
/* IO - VPL Terminal : { 68 284 73 289 }*/
/* IO - VPL Root : { 89 283 94 288 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 147 80 163 294 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,4,4,"NavCreateAskDiscardChangesDialog");
/* IO - VPL Terminal : { 142 120 147 125 }*/
/* IO - VPL Terminal : { 142 162 147 167 }*/
/* IO - VPL Terminal : { 142 204 147 209 }*/
/* IO - VPL Terminal : { 142 246 147 251 }*/
/* IO - VPL Root : { 163 120 168 125 }*/
/* IO - VPL Root : { 163 162 168 167 }*/
/* IO - VPL Root : { 163 204 168 209 }*/
/* IO - VPL Root : { 163 246 168 251 }*/
/* End Operation */

/* Begin Operation: { 214 89 230 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Report Error");
/* IO - VPL Terminal : { 209 112 214 117 }*/
/* IO - VPL Terminal : { 209 137 214 142 }*/
/* IO - VPL Terminal : { 209 162 214 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 251 60 259 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 246 137 251 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,2,0,2,5);
	result = connect_root_to_terminal(ptrA,1,2,3,5);
	result = connect_root_to_terminal(ptrA,1,4,4,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,3,2,6);
	result = connect_root_to_terminal(ptrA,1,5,3,6);
	result = connect_root_to_terminal(ptrA,4,5,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Extract_20_Reply_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Extract_20_Reply_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 64 73 214 } */
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



Nat4 VPLC_Nav_20_Ask_20_Review_20_Documents_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_Ask_20_Review_20_Documents_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 324 308 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Event_20_Callback_20_Behavior,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Parameter_20_Strings,environment);
	tempAttribute = attribute_add("Document Count",tempClass,tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Document_20_Count,environment);
	tempAttribute = attribute_add("Review?",tempClass,tempAttribute_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Review_3F_,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Navigation Services Window");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
Nat4 VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Extract_20_Reply_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Extract_20_Reply_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 64 73 214 } */
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


Nat4 VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Extract_20_Result_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Extract_20_Result_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 43 86 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Canceled?");
/* IO - VPL Terminal : { 65 95 70 100 }*/
/* IO - VPL Root : { 86 95 91 100 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 75 122 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 101 95 106 100 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 142 89 158 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Review?");
/* IO - VPL Terminal : { 137 137 142 142 }*/
/* IO - VPL Root : { 158 137 163 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 179 64 187 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 174 137 179 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Get_20_Document_20_Count_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Get_20_Document_20_Count_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 86 86 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Document Count");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 119 91 124 }*/
/* IO - VPL Root : { 86 154 91 159 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Get_20_Review_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Get_20_Review_3F__universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 106 86 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Review?");
/* IO - VPL Terminal : { 65 137 70 142 }*/
/* IO - VPL Root : { 86 126 91 131 }*/
/* IO - VPL Root : { 86 148 91 153 }*/
/* End Operation */

/* Begin Operation: { 107 64 115 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 137 107 142 }*/
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


Nat4 VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_NavUA_20_Dont_20_Save_20_Any_20_Documents_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_NavUA_20_Dont_20_Save_20_Any_20_Documents_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 152 86 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 86 175 91 180 }*/
/* End Operation */

/* Begin Operation: { 106 108 122 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Review?");
/* IO - VPL Terminal : { 101 139 106 144 }*/
/* IO - VPL Terminal : { 101 172 106 177 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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


Nat4 VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Set_20_Document_20_Count_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Set_20_Document_20_Count_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 81 86 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Document Count");
/* IO - VPL Terminal : { 65 114 70 119 }*/
/* IO - VPL Terminal : { 65 149 70 154 }*/
/* IO - VPL Root : { 86 132 91 137 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Set_20_Review_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Set_20_Review_3F__universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 100 86 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Review?");
/* IO - VPL Terminal : { 65 120 70 125 }*/
/* IO - VPL Terminal : { 65 142 70 147 }*/
/* IO - VPL Root : { 86 131 91 136 }*/
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Setup_20_Run_20_Flags_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Setup_20_Run_20_Flags_universal_load(V_Method method,V_Environment environment)
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 16 86 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Setup Run Flags");
/* IO - VPL Terminal : { 65 80 70 85 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 70 170 86 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"review");
/* IO - VPL Terminal : { 65 196 70 201 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 172 86 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 86 192 91 197 }*/
/* End Operation */

/* Begin Operation: { 106 116 122 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Review?");
/* IO - VPL Terminal : { 101 147 106 152 }*/
/* IO - VPL Terminal : { 101 180 106 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 64 145 214 } */
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

/* Begin Operation: { 101 64 109 214 } */
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


Nat4 VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 113 584 }{ 330 479 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 112 46 117 }*/
/* IO - VPL Root : { 41 162 46 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 -2 86 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Creation Options Record");
/* IO - VPL Terminal : { 65 88 70 93 }*/
/* IO - VPL Root : { 86 88 91 93 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 188 122 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 122 199 127 204 }*/
/* End Operation */

/* Begin Operation: { 105 31 121 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Document Count");
/* IO - VPL Terminal : { 100 96 105 101 }*/
/* IO - VPL Root : { 121 96 126 101 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 178 42 194 236 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NavCreateAskSaveChangesDialog");
/* IO - VPL Root : { 194 137 199 142 }*/
/* End Operation */

/* Begin Operation: { 72 198 88 328 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/~New NavDialog**");
/* IO - VPL Terminal : { 67 258 72 263 }*/
/* IO - VPL Root : { 88 257 93 262 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 53 158 279 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,5,4,"NavCreateAskReviewDocumentsDialog");
/* IO - VPL Terminal : { 137 88 142 93 }*/
/* IO - VPL Terminal : { 137 125 142 130 }*/
/* IO - VPL Terminal : { 137 162 142 167 }*/
/* IO - VPL Terminal : { 137 199 142 204 }*/
/* IO - VPL Terminal : { 137 236 142 241 }*/
/* IO - VPL Root : { 158 96 163 101 }*/
/* IO - VPL Root : { 158 141 163 146 }*/
/* IO - VPL Root : { 158 186 163 191 }*/
/* IO - VPL Root : { 158 231 163 236 }*/
/* End Operation */

/* Begin Operation: { 214 89 230 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Report Error");
/* IO - VPL Terminal : { 209 112 214 117 }*/
/* IO - VPL Terminal : { 209 137 214 142 }*/
/* IO - VPL Terminal : { 209 162 214 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 251 60 259 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 246 137 251 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,1,3,2,6);
	result = connect_root_to_terminal(ptrA,2,0,3,6);
	result = connect_root_to_terminal(ptrA,1,2,4,6);
	result = connect_root_to_terminal(ptrA,1,5,5,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,4,2,7);
	result = connect_root_to_terminal(ptrA,1,6,3,7);
	result = connect_root_to_terminal(ptrA,4,6,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_Nav_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Nav_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 357 1076 }{ 200 300 } */
	tempAttribute = attribute_add("Nav Class",tempClass,tempAttribute_Nav_20_Dialog_2F_Nav_20_Class,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_Nav_20_Dialog_2F_Completion_20_Behavior,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 94 734 }{ 354 314 } */
Nat4 VPLU_Nav_20_Dialog_2F_Set_20_Nav_20_Class_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Dialog_2F_Set_20_Nav_20_Class_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 195 299 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 83 35 88 }*/
/* IO - VPL Root : { 30 150 35 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 110 80 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Make Class");
/* IO - VPL Terminal : { 59 150 64 155 }*/
/* IO - VPL Root : { 80 150 85 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 164 122 240 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 101 200 106 205 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 106 60 122 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Nav Class");
/* IO - VPL Terminal : { 101 83 106 88 }*/
/* IO - VPL Terminal : { 101 108 106 113 }*/
/* IO - VPL Root : { 122 96 127 101 }*/
/* End Operation */

/* Begin Operation: { 148 27 156 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Dialog_2F_Get_20_Nav_20_Class_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Dialog_2F_Get_20_Nav_20_Class_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 168 277 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 113 35 118 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 77 80 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Nav Class");
/* IO - VPL Terminal : { 59 113 64 118 }*/
/* IO - VPL Root : { 80 100 85 105 }*/
/* IO - VPL Root : { 80 125 85 130 }*/
/* End Operation */

/* Begin Operation: { 106 125 122 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 101 161 106 166 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 114 148 119 }*/
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



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Dialog_2F_Set_20_Window_20_Title_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Dialog_2F_Set_20_Window_20_Title_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 83 35 88 }*/
/* IO - VPL Root : { 30 150 35 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 35 80 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Nav Class");
/* IO - VPL Terminal : { 59 83 64 88 }*/
/* IO - VPL Root : { 80 84 85 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 106 64 122 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Window Title");
/* IO - VPL Terminal : { 101 94 106 99 }*/
/* IO - VPL Terminal : { 101 150 106 155 }*/
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
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Dialog_2F_Set_20_Preference_20_Key_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Dialog_2F_Set_20_Preference_20_Key_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 83 35 88 }*/
/* IO - VPL Root : { 30 150 35 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 35 80 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Nav Class");
/* IO - VPL Terminal : { 59 83 64 88 }*/
/* IO - VPL Root : { 80 84 85 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 106 62 122 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Preference Key");
/* IO - VPL Terminal : { 101 105 106 110 }*/
/* IO - VPL Terminal : { 101 150 106 155 }*/
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
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Dialog_2F_Set_20_Type_20_List_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Dialog_2F_Set_20_Type_20_List_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 261 299 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 83 35 88 }*/
/* IO - VPL Root : { 30 150 35 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 108 80 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Default List");
/* IO - VPL Terminal : { 59 150 64 155 }*/
/* IO - VPL Root : { 80 150 85 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 35 122 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Nav Class");
/* IO - VPL Terminal : { 101 83 106 88 }*/
/* IO - VPL Root : { 122 84 127 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 148 84 164 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Type List");
/* IO - VPL Terminal : { 143 116 148 121 }*/
/* IO - VPL Terminal : { 143 150 148 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 22 198 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Dialog_2F_Set_20_File_20_Type_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Dialog_2F_Set_20_File_20_Type_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 230 296 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 83 35 88 }*/
/* IO - VPL Root : { 30 150 35 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 35 80 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Nav Class");
/* IO - VPL Terminal : { 59 83 64 88 }*/
/* IO - VPL Root : { 80 84 85 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 106 84 122 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set File Type");
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Terminal : { 101 150 106 155 }*/
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
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Dialog_2F_Set_20_File_20_Creator_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Dialog_2F_Set_20_File_20_Creator_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 83 35 88 }*/
/* IO - VPL Root : { 30 150 35 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 35 80 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Nav Class");
/* IO - VPL Terminal : { 59 83 64 88 }*/
/* IO - VPL Root : { 80 84 85 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 106 74 122 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set File Creator");
/* IO - VPL Terminal : { 101 111 106 116 }*/
/* IO - VPL Terminal : { 101 150 106 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 23 156 215 } */
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


Nat4 VPLU_Nav_20_Dialog_2F_Set_20_File_20_Name_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Dialog_2F_Set_20_File_20_Name_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 230 296 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 83 35 88 }*/
/* IO - VPL Root : { 30 150 35 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 35 80 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Nav Class");
/* IO - VPL Terminal : { 59 83 64 88 }*/
/* IO - VPL Root : { 80 84 85 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 106 84 122 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set File Name");
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Terminal : { 101 150 106 155 }*/
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
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Dialog_2F_Set_20_Modality_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Dialog_2F_Set_20_Modality_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 83 35 88 }*/
/* IO - VPL Root : { 30 150 35 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 35 80 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Nav Class");
/* IO - VPL Terminal : { 59 83 64 88 }*/
/* IO - VPL Root : { 80 84 85 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 106 86 122 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Modality");
/* IO - VPL Terminal : { 101 117 106 122 }*/
/* IO - VPL Terminal : { 101 150 106 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 25 156 217 } */
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


Nat4 VPLU_Nav_20_Dialog_2F_Set_20_Parent_20_Window_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Dialog_2F_Set_20_Parent_20_Window_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 83 35 88 }*/
/* IO - VPL Root : { 30 150 35 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 35 80 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Nav Class");
/* IO - VPL Terminal : { 59 83 64 88 }*/
/* IO - VPL Root : { 80 84 85 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 106 64 122 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Parent Window");
/* IO - VPL Terminal : { 101 106 106 111 }*/
/* IO - VPL Terminal : { 101 150 106 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 26 156 218 } */
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


Nat4 VPLU_Nav_20_Dialog_2F_Set_20_Document_20_Count_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Dialog_2F_Set_20_Document_20_Count_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 230 296 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 83 35 88 }*/
/* IO - VPL Root : { 30 150 35 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 35 80 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Nav Class");
/* IO - VPL Terminal : { 59 83 64 88 }*/
/* IO - VPL Root : { 80 84 85 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 106 62 122 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Document Count");
/* IO - VPL Terminal : { 101 105 106 110 }*/
/* IO - VPL Terminal : { 101 150 106 155 }*/
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
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Dialog_2F_Set_20_Completion_20_Behavior_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Dialog_2F_Set_20_Completion_20_Behavior_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 219 326 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 83 35 88 }*/
/* IO - VPL Root : { 30 150 35 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 35 80 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Nav Class");
/* IO - VPL Terminal : { 59 83 64 88 }*/
/* IO - VPL Root : { 80 84 85 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 63 181 79 269 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Default List");
/* IO - VPL Terminal : { 58 223 63 228 }*/
/* IO - VPL Root : { 79 223 84 228 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 104 179 120 249 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Do Self?");
/* IO - VPL Terminal : { 99 199 104 204 }*/
/* IO - VPL Terminal : { 99 223 104 228 }*/
/* IO - VPL Root : { 120 211 125 216 }*/
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

/* Start Operations: { 242 282 }{ 224 302 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 187 80 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 59 195 64 200 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 64 27 80 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Completion Behavior");
/* IO - VPL Terminal : { 59 69 64 74 }*/
/* IO - VPL Terminal : { 59 113 64 118 }*/
/* IO - VPL Root : { 80 92 85 97 }*/
/* End Operation */

/* Begin Operation: { 106 22 122 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"/~Default Completion");
/* IO - VPL Root : { 122 79 127 84 }*/
/* End Operation */

/* Begin Operation: { 148 48 164 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New Callback");
/* IO - VPL Terminal : { 143 69 148 74 }*/
/* IO - VPL Terminal : { 143 92 148 97 }*/
/* IO - VPL Terminal : { 143 115 148 120 }*/
/* IO - VPL Root : { 164 93 169 98 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
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
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 22 72 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 59 116 64 121 }*/
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

/* Begin Operation: { 144 32 160 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Completion Behavior");
/* IO - VPL Terminal : { 139 84 144 89 }*/
/* IO - VPL Terminal : { 139 138 144 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 186 20 194 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Dialog_2F_Run_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Dialog_2F_Run_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 373 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 115 35 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 206 80 310 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Check Modality");
/* IO - VPL Terminal : { 59 258 64 263 }*/
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

/* Start Operations: { 60 60 }{ 268 295 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 51 80 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Completion Behavior");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 93 85 98 }*/
/* IO - VPL Root : { 80 137 85 142 }*/
/* End Operation */

/* Begin Operation: { 106 129 122 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 101 137 106 142 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 148 87 164 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kWindowModalityAppModal");
/* IO - VPL Root : { 164 157 169 162 }*/
/* End Operation */

/* Begin Operation: { 190 90 206 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Modality");
/* IO - VPL Terminal : { 185 116 190 121 }*/
/* IO - VPL Terminal : { 185 157 190 162 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 22 240 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 64 65 80 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Nav Class");
/* IO - VPL Terminal : { 59 115 64 120 }*/
/* IO - VPL Root : { 80 115 85 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 106 30 122 86 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 101 56 106 61 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 106 138 122 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Safe Run");
/* IO - VPL Terminal : { 101 170 106 175 }*/
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
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 114 86 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Run");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 101 64 109 214 } */
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
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 137 46 142 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 109 86 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 65 137 70 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 64 114 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
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

/* Begin Operation: { 148 23 156 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Dialog_2F_Get_20_Canceled_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Dialog_2F_Get_20_Canceled_3F__universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 112 35 117 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 62 80 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Nav Class");
/* IO - VPL Terminal : { 59 112 64 117 }*/
/* IO - VPL Root : { 80 112 85 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 62 122 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Canceled?");
/* IO - VPL Terminal : { 101 112 106 117 }*/
/* IO - VPL Root : { 122 112 127 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 112 148 117 }*/
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
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 104 80 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
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


Nat4 VPLU_Nav_20_Dialog_2F_Get_20_Select_20_List_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Dialog_2F_Get_20_Select_20_List_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 112 35 117 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 62 80 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Nav Class");
/* IO - VPL Terminal : { 59 112 64 117 }*/
/* IO - VPL Root : { 80 112 85 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 46 122 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Reply Selection");
/* IO - VPL Terminal : { 101 112 106 117 }*/
/* IO - VPL Root : { 122 112 127 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 112 148 117 }*/
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
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
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


Nat4 VPLU_Nav_20_Dialog_2F_Get_20_Select_20_Item_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Dialog_2F_Get_20_Select_20_Item_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 284 313 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 112 35 117 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 62 80 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Nav Class");
/* IO - VPL Terminal : { 59 112 64 117 }*/
/* IO - VPL Root : { 80 112 85 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 46 122 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Reply Selection");
/* IO - VPL Terminal : { 101 112 106 117 }*/
/* IO - VPL Root : { 122 112 127 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 105 164 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 143 112 148 117 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 190 147 206 249 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get File Name");
/* IO - VPL Terminal : { 185 194 190 199 }*/
/* IO - VPL Root : { 206 194 211 199 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 45 206 102 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"unpack");
/* IO - VPL Terminal : { 185 71 190 76 }*/
/* IO - VPL Root : { 206 71 211 76 }*/
/* End Operation */

/* Begin Operation: { 232 35 240 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 71 232 76 }*/
/* IO - VPL Terminal : { 227 185 232 190 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,4,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 4] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 131 352 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 105 81 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 81 117 86 122 }*/
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
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Nav_20_Dialog_2F_Get_20_Select_20_Result_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Dialog_2F_Get_20_Select_20_Result_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 112 35 117 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 62 80 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Nav Class");
/* IO - VPL Terminal : { 59 112 64 117 }*/
/* IO - VPL Root : { 80 112 85 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 59 122 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Extract Result");
/* IO - VPL Terminal : { 101 112 106 117 }*/
/* IO - VPL Root : { 122 112 127 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 112 148 117 }*/
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
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 104 80 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
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


Nat4 VPLU_Nav_20_Dialog_2F_Get_20_Select_20_Name_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Dialog_2F_Get_20_Select_20_Name_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 112 35 117 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 62 80 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Nav Class");
/* IO - VPL Terminal : { 59 112 64 117 }*/
/* IO - VPL Root : { 80 112 85 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 62 122 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get File Name");
/* IO - VPL Terminal : { 101 112 106 117 }*/
/* IO - VPL Root : { 122 112 127 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 112 148 117 }*/
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
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 104 80 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
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


Nat4 VPLU_Nav_20_Dialog_2F_Destruct_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Dialog_2F_Destruct_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

	method_type_to(method,environment,"Destructor");

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 232 322 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 112 33 117 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 25 74 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Close Class");
/* IO - VPL Terminal : { 53 65 58 70 }*/
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
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 27 80 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Nav Class");
/* IO - VPL Terminal : { 59 77 64 82 }*/
/* IO - VPL Root : { 80 77 85 82 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 106 50 122 108 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 101 77 106 82 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kContinue,kFailure);
/* End Operation */

/* Begin Operation: { 64 192 80 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 80 203 85 208 }*/
/* End Operation */

/* Begin Operation: { 106 155 122 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Nav Class");
/* IO - VPL Terminal : { 101 178 106 183 }*/
/* IO - VPL Terminal : { 101 203 106 208 }*/
/* IO - VPL Root : { 122 191 127 196 }*/
/* End Operation */

/* Begin Operation: { 148 23 156 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 59 133 75 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Close Compeletion");
/* IO - VPL Terminal : { 54 189 59 194 }*/
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
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 154 80 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
/* IO - VPL Root : { 80 160 85 165 }*/
/* End Operation */

/* Begin Operation: { 106 74 122 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Completion Behavior");
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Terminal : { 101 160 106 165 }*/
/* IO - VPL Root : { 122 139 127 144 }*/
/* End Operation */

/* Begin Operation: { 148 25 156 217 } */
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

/* Begin Operation: { 108 23 116 215 } */
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


Nat4 VPLU_Nav_20_Dialog_2F7E_Default_20_Completion_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Dialog_2F7E_Default_20_Completion_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 450 300 }{ 281 362 } */
/* Begin Operation: { 22 34 30 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 87 35 92 }*/
/* IO - VPL Root : { 30 163 35 168 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 22 80 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Completion Behavior");
/* IO - VPL Terminal : { 59 87 64 92 }*/
/* IO - VPL Root : { 80 64 85 69 }*/
/* IO - VPL Root : { 80 108 85 113 }*/
/* End Operation */

/* Begin Operation: { 106 45 122 62 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 101 51 106 56 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 106 148 122 278 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Navigation Window\"");
/* IO - VPL Root : { 122 211 127 216 }*/
/* End Operation */

/* Begin Operation: { 148 125 164 301 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Add Attachment To Callback");
/* IO - VPL Terminal : { 143 167 148 172 }*/
/* IO - VPL Terminal : { 143 211 148 216 }*/
/* IO - VPL Terminal : { 143 255 148 260 }*/
/* IO - VPL Root : { 164 211 169 216 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 156 206 270 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Execute Callback");
/* IO - VPL Terminal : { 185 211 190 216 }*/
/* IO - VPL Root : { 206 211 211 216 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 25 240 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,2,0,3,4);
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


Nat4 VPLU_Nav_20_Dialog_2F_New_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Nav_20_Dialog_2F_New_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 64 28 80 108 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Nav Dialog");
/* IO - VPL Terminal : { 59 66 64 71 }*/
/* IO - VPL Root : { 80 66 85 71 }*/
/* End Operation */

/* Begin Operation: { 106 92 122 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Nav Class");
/* IO - VPL Terminal : { 101 117 106 122 }*/
/* IO - VPL Terminal : { 101 168 106 173 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 115 148 120 }*/
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



	return kNOERROR;
}


/* Stop Universals */






Nat4	loadClasses_Navigation(V_Environment environment);
Nat4	loadClasses_Navigation(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Navigation Reply",environment);
	if(result == NULL) return kERROR;
	VPLC_Navigation_20_Reply_class_load(result,environment);
	result = class_new("Nav Choose Volume Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_Choose_20_Volume_20_Dialog_class_load(result,environment);
	result = class_new("Nav Ask Save Changes Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_Ask_20_Save_20_Changes_20_Dialog_class_load(result,environment);
	result = class_new("Navigation Services Window",environment);
	if(result == NULL) return kERROR;
	VPLC_Navigation_20_Services_20_Window_class_load(result,environment);
	result = class_new("Nav New Folder Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_New_20_Folder_20_Dialog_class_load(result,environment);
	result = class_new("Nav Object Filter Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_Object_20_Filter_20_Dialog_class_load(result,environment);
	result = class_new("Nav Choose Folder Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_Choose_20_Folder_20_Dialog_class_load(result,environment);
	result = class_new("Nav Preview Filter Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_Preview_20_Filter_20_Dialog_class_load(result,environment);
	result = class_new("Nav Get File Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_Get_20_File_20_Dialog_class_load(result,environment);
	result = class_new("Nav Put File Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_Put_20_File_20_Dialog_class_load(result,environment);
	result = class_new("Nav Choose Object Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_Choose_20_Object_20_Dialog_class_load(result,environment);
	result = class_new("Nav Choose File Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_Choose_20_File_20_Dialog_class_load(result,environment);
	result = class_new("Nav Ask Discard Changes Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_class_load(result,environment);
	result = class_new("Nav Ask Review Documents Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_Ask_20_Review_20_Documents_20_Dialog_class_load(result,environment);
	result = class_new("Nav Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_Nav_20_Dialog_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Navigation(V_Environment environment);
Nat4	loadUniversals_Navigation(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Nav Ask Discard Changes",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Ask_20_Discard_20_Changes_universal_load(result,environment);

	result = method_new("Nav Ask Review Documents",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Ask_20_Review_20_Documents_universal_load(result,environment);

	result = method_new("Nav Ask Save Changes",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Ask_20_Save_20_Changes_universal_load(result,environment);

	result = method_new("Nav Choose File",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Choose_20_File_universal_load(result,environment);

	result = method_new("Nav Choose Folder",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Choose_20_Folder_universal_load(result,environment);

	result = method_new("Nav Choose Object",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Choose_20_Object_universal_load(result,environment);

	result = method_new("Nav Choose Volume",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Choose_20_Volume_universal_load(result,environment);

	result = method_new("Nav Get File",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Get_20_File_universal_load(result,environment);

	result = method_new("Nav New Folder",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_New_20_Folder_universal_load(result,environment);

	result = method_new("Nav Put File",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Put_20_File_universal_load(result,environment);

	result = method_new("New NavTypeList",environment);
	if(result == NULL) return kERROR;
	VPLU_New_20_NavTypeList_universal_load(result,environment);

	result = method_new("NavEvent Simple",environment);
	if(result == NULL) return kERROR;
	VPLU_NavEvent_20_Simple_universal_load(result,environment);

	result = method_new("TEST New Nav Modal GF",environment);
	if(result == NULL) return kERROR;
	VPLU_TEST_20_New_20_Nav_20_Modal_20_GF_universal_load(result,environment);

	result = method_new("TEST New Nav Modal CF",environment);
	if(result == NULL) return kERROR;
	VPLU_TEST_20_New_20_Nav_20_Modal_20_CF_universal_load(result,environment);

	result = method_new("Navigation Reply/Get File Translation Spec",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Reply_2F_Get_20_File_20_Translation_20_Spec_universal_load(result,environment);

	result = method_new("Navigation Reply/Get Key Script",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Reply_2F_Get_20_Key_20_Script_universal_load(result,environment);

	result = method_new("Navigation Reply/Get Replacing?",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Reply_2F_Get_20_Replacing_3F__universal_load(result,environment);

	result = method_new("Navigation Reply/Get Selected Files",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Reply_2F_Get_20_Selected_20_Files_universal_load(result,environment);

	result = method_new("Navigation Reply/Get Stationery?",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Reply_2F_Get_20_Stationery_3F__universal_load(result,environment);

	result = method_new("Navigation Reply/Get Translation Needed?",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Reply_2F_Get_20_Translation_20_Needed_3F__universal_load(result,environment);

	result = method_new("Navigation Reply/Get Valid?",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Reply_2F_Get_20_Valid_3F__universal_load(result,environment);

	result = method_new("Navigation Reply/Get Version",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Reply_2F_Get_20_Version_universal_load(result,environment);

	result = method_new("Navigation Reply/Set File Translation Spec",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Reply_2F_Set_20_File_20_Translation_20_Spec_universal_load(result,environment);

	result = method_new("Navigation Reply/Set Key Script",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Reply_2F_Set_20_Key_20_Script_universal_load(result,environment);

	result = method_new("Navigation Reply/Set Replacing?",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Reply_2F_Set_20_Replacing_3F__universal_load(result,environment);

	result = method_new("Navigation Reply/Set Selected Files",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Reply_2F_Set_20_Selected_20_Files_universal_load(result,environment);

	result = method_new("Navigation Reply/Set Stationery?",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Reply_2F_Set_20_Stationery_3F__universal_load(result,environment);

	result = method_new("Navigation Reply/Set Translation Needed?",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Reply_2F_Set_20_Translation_20_Needed_3F__universal_load(result,environment);

	result = method_new("Navigation Reply/Set Valid?",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Reply_2F_Set_20_Valid_3F__universal_load(result,environment);

	result = method_new("Navigation Reply/Set Version",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Reply_2F_Set_20_Version_universal_load(result,environment);

	result = method_new("Navigation Reply/~~Generate Reply",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Reply_2F7E7E_Generate_20_Reply_universal_load(result,environment);

	result = method_new("Navigation Reply/~~Parse Reply Selection AEDesc",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Reply_2F7E7E_Parse_20_Reply_20_Selection_20_AEDesc_universal_load(result,environment);

	result = method_new("Nav Choose Volume Dialog/~Nav Create Dialog",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Choose_20_Volume_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(result,environment);

	result = method_new("Nav Ask Save Changes Dialog/Extract Reply",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Extract_20_Reply_universal_load(result,environment);

	result = method_new("Nav Ask Save Changes Dialog/Extract Result",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Extract_20_Result_universal_load(result,environment);

	result = method_new("Nav Ask Save Changes Dialog/Get Save Changes?",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Get_20_Save_20_Changes_3F__universal_load(result,environment);

	result = method_new("Nav Ask Save Changes Dialog/NavUA Dont Save Changes",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_NavUA_20_Dont_20_Save_20_Changes_universal_load(result,environment);

	result = method_new("Nav Ask Save Changes Dialog/Set Save Changes?",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Set_20_Save_20_Changes_3F__universal_load(result,environment);

	result = method_new("Nav Ask Save Changes Dialog/Setup Run Flags",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F_Setup_20_Run_20_Flags_universal_load(result,environment);

	result = method_new("Nav Ask Save Changes Dialog/~Nav Create Dialog",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Ask_20_Save_20_Changes_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(result,environment);

	result = method_new("Navigation Services Window/Close",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Close_universal_load(result,environment);

	result = method_new("Navigation Services Window/Close Callbacks",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Close_20_Callbacks_universal_load(result,environment);

	result = method_new("Navigation Services Window/Close Event Callback",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Close_20_Event_20_Callback_universal_load(result,environment);

	result = method_new("Navigation Services Window/Dispose",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Dispose_universal_load(result,environment);

	result = method_new("Navigation Services Window/Do Completion Behavior",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Do_20_Completion_20_Behavior_universal_load(result,environment);

	result = method_new("Navigation Services Window/Extract Reply",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Extract_20_Reply_universal_load(result,environment);

	result = method_new("Navigation Services Window/Extract Result",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Extract_20_Result_universal_load(result,environment);

	result = method_new("Navigation Services Window/Get Action",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Get_20_Action_universal_load(result,environment);

	result = method_new("Navigation Services Window/Get Canceled?",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Get_20_Canceled_3F__universal_load(result,environment);

	result = method_new("Navigation Services Window/Get Completion Behavior",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Get_20_Completion_20_Behavior_universal_load(result,environment);

	result = method_new("Navigation Services Window/Get Creation Options Record",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Get_20_Creation_20_Options_20_Record_universal_load(result,environment);

	result = method_new("Navigation Services Window/Get Event Callback Behavior",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Get_20_Event_20_Callback_20_Behavior_universal_load(result,environment);

	result = method_new("Navigation Services Window/Get File Name",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Get_20_File_20_Name_universal_load(result,environment);

	result = method_new("Navigation Services Window/Get Modality",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Get_20_Modality_universal_load(result,environment);

	result = method_new("Navigation Services Window/Get Parameter String",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Get_20_Parameter_20_String_universal_load(result,environment);

	result = method_new("Navigation Services Window/Get Parent Window",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Get_20_Parent_20_Window_universal_load(result,environment);

	result = method_new("Navigation Services Window/Get Reply",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Get_20_Reply_universal_load(result,environment);

	result = method_new("Navigation Services Window/Get Reply Record",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Get_20_Reply_20_Record_universal_load(result,environment);

	result = method_new("Navigation Services Window/Get Reply Selection",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Get_20_Reply_20_Selection_universal_load(result,environment);

	result = method_new("Navigation Services Window/Get Result",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Get_20_Result_universal_load(result,environment);

	result = method_new("Navigation Services Window/Get Window Record",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Get_20_Window_20_Record_universal_load(result,environment);

	result = method_new("Navigation Services Window/NavCB Accept",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_NavCB_20_Accept_universal_load(result,environment);

	result = method_new("Navigation Services Window/NavCB Cancel",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_NavCB_20_Cancel_universal_load(result,environment);

	result = method_new("Navigation Services Window/NavCB Event",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_NavCB_20_Event_universal_load(result,environment);

	result = method_new("Navigation Services Window/NavCB Start",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_NavCB_20_Start_universal_load(result,environment);

	result = method_new("Navigation Services Window/NavCB Terminate",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_NavCB_20_Terminate_universal_load(result,environment);

	result = method_new("Navigation Services Window/NavCB Unknown Selector",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_NavCB_20_Unknown_20_Selector_universal_load(result,environment);

	result = method_new("Navigation Services Window/NavCB User Action",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_NavCB_20_User_20_Action_universal_load(result,environment);

	result = method_new("Navigation Services Window/NavEvent Simple",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_NavEvent_20_Simple_universal_load(result,environment);

	result = method_new("Navigation Services Window/NavUA Cancel",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Cancel_universal_load(result,environment);

	result = method_new("Navigation Services Window/NavUA Choose",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Choose_universal_load(result,environment);

	result = method_new("Navigation Services Window/NavUA Discard Changes",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Discard_20_Changes_universal_load(result,environment);

	result = method_new("Navigation Services Window/NavUA Dont Save Any Documents",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Dont_20_Save_20_Any_20_Documents_universal_load(result,environment);

	result = method_new("Navigation Services Window/NavUA Dont Save Changes",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Dont_20_Save_20_Changes_universal_load(result,environment);

	result = method_new("Navigation Services Window/NavUA New Folder",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_New_20_Folder_universal_load(result,environment);

	result = method_new("Navigation Services Window/NavUA None",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_None_universal_load(result,environment);

	result = method_new("Navigation Services Window/NavUA Open",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Open_universal_load(result,environment);

	result = method_new("Navigation Services Window/NavUA Review Documents",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Review_20_Documents_universal_load(result,environment);

	result = method_new("Navigation Services Window/NavUA Save As",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Save_20_As_universal_load(result,environment);

	result = method_new("Navigation Services Window/NavUA Save Changes",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Save_20_Changes_universal_load(result,environment);

	result = method_new("Navigation Services Window/NavUA Unknown Action",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_NavUA_20_Unknown_20_Action_universal_load(result,environment);

	result = method_new("Navigation Services Window/Open",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Open_universal_load(result,environment);

	result = method_new("Navigation Services Window/Open Event Callback",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Open_20_Event_20_Callback_universal_load(result,environment);

	result = method_new("Navigation Services Window/Report Error",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Report_20_Error_universal_load(result,environment);

	result = method_new("Navigation Services Window/Run",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Run_universal_load(result,environment);

	result = method_new("Navigation Services Window/Set Action",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Set_20_Action_universal_load(result,environment);

	result = method_new("Navigation Services Window/Set Canceled?",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Set_20_Canceled_3F__universal_load(result,environment);

	result = method_new("Navigation Services Window/Set Completion Behavior",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Set_20_Completion_20_Behavior_universal_load(result,environment);

	result = method_new("Navigation Services Window/Set Creation Options Record",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Set_20_Creation_20_Options_20_Record_universal_load(result,environment);

	result = method_new("Navigation Services Window/Set Error",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Set_20_Error_universal_load(result,environment);

	result = method_new("Navigation Services Window/Set File Name",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Set_20_File_20_Name_universal_load(result,environment);

	result = method_new("Navigation Services Window/Set Finished?",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Set_20_Finished_3F__universal_load(result,environment);

	result = method_new("Navigation Services Window/Set Modality",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Set_20_Modality_universal_load(result,environment);

	result = method_new("Navigation Services Window/Set Parameter String",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Set_20_Parameter_20_String_universal_load(result,environment);

	result = method_new("Navigation Services Window/Set Parent Window",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Set_20_Parent_20_Window_universal_load(result,environment);

	result = method_new("Navigation Services Window/Set Preference Key",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Set_20_Preference_20_Key_universal_load(result,environment);

	result = method_new("Navigation Services Window/Set Reply",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Set_20_Reply_universal_load(result,environment);

	result = method_new("Navigation Services Window/Set Result",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Set_20_Result_universal_load(result,environment);

	result = method_new("Navigation Services Window/Set Window Record",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Set_20_Window_20_Record_universal_load(result,environment);

	result = method_new("Navigation Services Window/Set Window Title",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Set_20_Window_20_Title_universal_load(result,environment);

	result = method_new("Navigation Services Window/Setup Dialog",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Setup_20_Dialog_universal_load(result,environment);

	result = method_new("Navigation Services Window/Setup Options",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Setup_20_Options_universal_load(result,environment);

	result = method_new("Navigation Services Window/Setup Run Flags",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F_Setup_20_Run_20_Flags_universal_load(result,environment);

	result = method_new("Navigation Services Window/~Nav Create Dialog",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F7E_Nav_20_Create_20_Dialog_universal_load(result,environment);

	result = method_new("Navigation Services Window/~New NavDialog**",environment);
	if(result == NULL) return kERROR;
	VPLU_Navigation_20_Services_20_Window_2F7E_New_20_NavDialog_2A2A__universal_load(result,environment);

	result = method_new("Nav New Folder Dialog/~Nav Create Dialog",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_New_20_Folder_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(result,environment);

	result = method_new("Nav Object Filter Dialog/Close Callbacks",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Object_20_Filter_20_Dialog_2F_Close_20_Callbacks_universal_load(result,environment);

	result = method_new("Nav Object Filter Dialog/Close Filter Callback",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Object_20_Filter_20_Dialog_2F_Close_20_Filter_20_Callback_universal_load(result,environment);

	result = method_new("Nav Object Filter Dialog/Get Filter Callback Behavior",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Object_20_Filter_20_Dialog_2F_Get_20_Filter_20_Callback_20_Behavior_universal_load(result,environment);

	result = method_new("Nav Object Filter Dialog/Open Filter Callback",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Object_20_Filter_20_Dialog_2F_Open_20_Filter_20_Callback_universal_load(result,environment);

	result = method_new("Nav Object Filter Dialog/Set Filter Callback Behavior",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Object_20_Filter_20_Dialog_2F_Set_20_Filter_20_Callback_20_Behavior_universal_load(result,environment);

	result = method_new("Nav Object Filter Dialog/~Nav Create Dialog",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Object_20_Filter_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(result,environment);

	result = method_new("Nav Choose Folder Dialog/~Nav Create Dialog",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Choose_20_Folder_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(result,environment);

	result = method_new("Nav Preview Filter Dialog/Close Callbacks",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Preview_20_Filter_20_Dialog_2F_Close_20_Callbacks_universal_load(result,environment);

	result = method_new("Nav Preview Filter Dialog/Close Preview Callback",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Preview_20_Filter_20_Dialog_2F_Close_20_Preview_20_Callback_universal_load(result,environment);

	result = method_new("Nav Preview Filter Dialog/Get Preview Callback Behavior",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Preview_20_Filter_20_Dialog_2F_Get_20_Preview_20_Callback_20_Behavior_universal_load(result,environment);

	result = method_new("Nav Preview Filter Dialog/Open Preview Callback",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Preview_20_Filter_20_Dialog_2F_Open_20_Preview_20_Callback_universal_load(result,environment);

	result = method_new("Nav Preview Filter Dialog/Set Preview Callback Behavior",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Preview_20_Filter_20_Dialog_2F_Set_20_Preview_20_Callback_20_Behavior_universal_load(result,environment);

	result = method_new("Nav Get File Dialog/Get NavTypeList",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Get_20_File_20_Dialog_2F_Get_20_NavTypeList_universal_load(result,environment);

	result = method_new("Nav Get File Dialog/Get Creator Code",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Get_20_File_20_Dialog_2F_Get_20_Creator_20_Code_universal_load(result,environment);

	result = method_new("Nav Get File Dialog/Set Creator Code",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Get_20_File_20_Dialog_2F_Set_20_Creator_20_Code_universal_load(result,environment);

	result = method_new("Nav Get File Dialog/Get Type List",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Get_20_File_20_Dialog_2F_Get_20_Type_20_List_universal_load(result,environment);

	result = method_new("Nav Get File Dialog/Set Type List",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Get_20_File_20_Dialog_2F_Set_20_Type_20_List_universal_load(result,environment);

	result = method_new("Nav Get File Dialog/~Nav Create Dialog",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Get_20_File_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(result,environment);

	result = method_new("Nav Put File Dialog/Get File Creator",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Put_20_File_20_Dialog_2F_Get_20_File_20_Creator_universal_load(result,environment);

	result = method_new("Nav Put File Dialog/Get File Type",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Put_20_File_20_Dialog_2F_Get_20_File_20_Type_universal_load(result,environment);

	result = method_new("Nav Put File Dialog/Set File Creator",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Put_20_File_20_Dialog_2F_Set_20_File_20_Creator_universal_load(result,environment);

	result = method_new("Nav Put File Dialog/Set File Type",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Put_20_File_20_Dialog_2F_Set_20_File_20_Type_universal_load(result,environment);

	result = method_new("Nav Put File Dialog/~Nav Create Dialog",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Put_20_File_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(result,environment);

	result = method_new("Nav Put File Dialog/NavUA Save As",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Put_20_File_20_Dialog_2F_NavUA_20_Save_20_As_universal_load(result,environment);

	result = method_new("Nav Choose Object Dialog/~Nav Create Dialog",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Choose_20_Object_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(result,environment);

	result = method_new("Nav Choose File Dialog/Get NavTypeList",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Choose_20_File_20_Dialog_2F_Get_20_NavTypeList_universal_load(result,environment);

	result = method_new("Nav Choose File Dialog/Set Creator Code",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Choose_20_File_20_Dialog_2F_Set_20_Creator_20_Code_universal_load(result,environment);

	result = method_new("Nav Choose File Dialog/Get Creator Code",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Choose_20_File_20_Dialog_2F_Get_20_Creator_20_Code_universal_load(result,environment);

	result = method_new("Nav Choose File Dialog/Get Type List",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Choose_20_File_20_Dialog_2F_Get_20_Type_20_List_universal_load(result,environment);

	result = method_new("Nav Choose File Dialog/Set Type List",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Choose_20_File_20_Dialog_2F_Set_20_Type_20_List_universal_load(result,environment);

	result = method_new("Nav Choose File Dialog/~Nav Create Dialog",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Choose_20_File_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(result,environment);

	result = method_new("Nav Ask Discard Changes Dialog/~Nav Create Dialog",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(result,environment);

	result = method_new("Nav Ask Discard Changes Dialog/Extract Reply",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Ask_20_Discard_20_Changes_20_Dialog_2F_Extract_20_Reply_universal_load(result,environment);

	result = method_new("Nav Ask Review Documents Dialog/Extract Reply",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Extract_20_Reply_universal_load(result,environment);

	result = method_new("Nav Ask Review Documents Dialog/Extract Result",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Extract_20_Result_universal_load(result,environment);

	result = method_new("Nav Ask Review Documents Dialog/Get Document Count",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Get_20_Document_20_Count_universal_load(result,environment);

	result = method_new("Nav Ask Review Documents Dialog/Get Review?",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Get_20_Review_3F__universal_load(result,environment);

	result = method_new("Nav Ask Review Documents Dialog/NavUA Dont Save Any Documents",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_NavUA_20_Dont_20_Save_20_Any_20_Documents_universal_load(result,environment);

	result = method_new("Nav Ask Review Documents Dialog/Set Document Count",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Set_20_Document_20_Count_universal_load(result,environment);

	result = method_new("Nav Ask Review Documents Dialog/Set Review?",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Set_20_Review_3F__universal_load(result,environment);

	result = method_new("Nav Ask Review Documents Dialog/Setup Run Flags",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F_Setup_20_Run_20_Flags_universal_load(result,environment);

	result = method_new("Nav Ask Review Documents Dialog/~Nav Create Dialog",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Ask_20_Review_20_Documents_20_Dialog_2F7E_Nav_20_Create_20_Dialog_universal_load(result,environment);

	result = method_new("Nav Dialog/Set Nav Class",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Dialog_2F_Set_20_Nav_20_Class_universal_load(result,environment);

	result = method_new("Nav Dialog/Get Nav Class",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Dialog_2F_Get_20_Nav_20_Class_universal_load(result,environment);

	result = method_new("Nav Dialog/Set Window Title",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Dialog_2F_Set_20_Window_20_Title_universal_load(result,environment);

	result = method_new("Nav Dialog/Set Preference Key",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Dialog_2F_Set_20_Preference_20_Key_universal_load(result,environment);

	result = method_new("Nav Dialog/Set Type List",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Dialog_2F_Set_20_Type_20_List_universal_load(result,environment);

	result = method_new("Nav Dialog/Set File Type",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Dialog_2F_Set_20_File_20_Type_universal_load(result,environment);

	result = method_new("Nav Dialog/Set File Creator",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Dialog_2F_Set_20_File_20_Creator_universal_load(result,environment);

	result = method_new("Nav Dialog/Set File Name",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Dialog_2F_Set_20_File_20_Name_universal_load(result,environment);

	result = method_new("Nav Dialog/Set Modality",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Dialog_2F_Set_20_Modality_universal_load(result,environment);

	result = method_new("Nav Dialog/Set Parent Window",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Dialog_2F_Set_20_Parent_20_Window_universal_load(result,environment);

	result = method_new("Nav Dialog/Set Document Count",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Dialog_2F_Set_20_Document_20_Count_universal_load(result,environment);

	result = method_new("Nav Dialog/Set Completion Behavior",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Dialog_2F_Set_20_Completion_20_Behavior_universal_load(result,environment);

	result = method_new("Nav Dialog/Run",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Dialog_2F_Run_universal_load(result,environment);

	result = method_new("Nav Dialog/Get Canceled?",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Dialog_2F_Get_20_Canceled_3F__universal_load(result,environment);

	result = method_new("Nav Dialog/Get Select List",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Dialog_2F_Get_20_Select_20_List_universal_load(result,environment);

	result = method_new("Nav Dialog/Get Select Item",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Dialog_2F_Get_20_Select_20_Item_universal_load(result,environment);

	result = method_new("Nav Dialog/Get Select Result",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Dialog_2F_Get_20_Select_20_Result_universal_load(result,environment);

	result = method_new("Nav Dialog/Get Select Name",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Dialog_2F_Get_20_Select_20_Name_universal_load(result,environment);

	result = method_new("Nav Dialog/Destruct",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Dialog_2F_Destruct_universal_load(result,environment);

	result = method_new("Nav Dialog/~Default Completion",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Dialog_2F7E_Default_20_Completion_universal_load(result,environment);

	result = method_new("Nav Dialog/New",environment);
	if(result == NULL) return kERROR;
	VPLU_Nav_20_Dialog_2F_New_universal_load(result,environment);

	return kNOERROR;

}



Nat4	loadPersistents_Navigation(V_Environment environment);
Nat4	loadPersistents_Navigation(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_Navigation(V_Environment environment);
Nat4	load_Navigation(V_Environment environment)
{

	loadClasses_Navigation(environment);
	loadUniversals_Navigation(environment);
	loadPersistents_Navigation(environment);
	return kNOERROR;

}

